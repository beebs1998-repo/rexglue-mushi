#include "mushi_funcs.13.h"

DEFINE_REX_FUNC(sub_88010380) {
	REX_FUNC_PROLOGUE();
	// lwz r3,5876(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 5876);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88010C38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,-6484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88010c50
	if (!ctx.cr6.eq) goto loc_88010C50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88010C50:
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88011948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88011950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r30,-6484(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -6484);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88011974
	if (!ctx.cr6.eq) goto loc_88011974;
loc_88011968:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88011974:
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// lwz r11,-7620(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7620);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88011968
	if (!ctx.cr6.lt) goto loc_88011968;
	// lhz r11,8212(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8212);
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88011968
	if (!ctx.cr6.lt) goto loc_88011968;
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r10,r11,200
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(200));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r10,8220
	ctx.r31.s64 = ctx.r10.s64 + 8220;
	// lbz r10,8228(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880119f4
	if (ctx.cr6.eq) goto loc_880119F4;
loc_880119BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// sth r10,8(r30)
	REX_STORE_U16(ctx.r30.u32 + 8, ctx.r10.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r10,r10,200
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(200));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r10,8220
	ctx.r31.s64 = ctx.r10.s64 + 8220;
	// lbz r9,8228(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 8228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880119bc
	if (!ctx.cr6.eq) goto loc_880119BC;
loc_880119F4:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r4,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r28,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// stb r29,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r29.u8);
	// stb r3,19(r31)
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r3.u8);
	// stb r28,10(r31)
	REX_STORE_U8(ctx.r31.u32 + 10, ctx.r28.u8);
	// lwz r3,8216(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8216);
	// bl 0x880690e8
	ctx.lr = 0x88011A24;
	sub_880690E8(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stb r29,9(r31)
	REX_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r28,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r28.u8);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// lwz r5,8216(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8216);
	// divw r6,r27,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r27.s32 / ctx.r8.s32 : 0);
	// stb r3,92(r31)
	REX_STORE_U8(ctx.r31.u32 + 92, ctx.r3.u8);
	// ori r4,r7,32896
	ctx.r4.u64 = ctx.r7.u64 | 32896;
	// stw r5,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// stb r29,11(r31)
	REX_STORE_U8(ctx.r31.u32 + 11, ctx.r29.u8);
	// stw r4,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// stw r28,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r6,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stb r29,93(r31)
	REX_STORE_U8(ctx.r31.u32 + 93, ctx.r29.u8);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// sth r29,82(r31)
	REX_STORE_U16(ctx.r31.u32 + 82, ctx.r29.u16);
	// lwz r10,8208(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8208);
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r29,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// lbz r3,19(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 19);
	// bl 0x88012e20
	ctx.lr = 0x88011A94;
	sub_88012E20(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88011148
	ctx.lr = 0x88011AA4;
	sub_88011148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880131E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r3,r11,-6428
	ctx.r3.s64 = ctx.r11.s64 + -6428;
	// b 0x8813f948
	sub_8813F948(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880131F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88013200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r29,r11,-6480
	ctx.r29.s64 = ctx.r11.s64 + -6480;
	// lwz r31,52(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88013358
	if (ctx.cr6.eq) goto loc_88013358;
	// lis r30,-30692
	ctx.r30.s64 = -2011430912;
	// li r11,52
	ctx.r11.s64 = 52;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,57368
	ctx.r9.u64 = ctx.r10.u64 | 57368;
	// stw r11,-6432(r30)
	REX_STORE_U32(ctx.r30.u32 + -6432, ctx.r11.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x88068e60
	ctx.lr = 0x88013234;
	sub_88068E60(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r3,-6440(r11)
	REX_STORE_U32(ctx.r11.u32 + -6440, ctx.r3.u32);
	// blt cr6,0x880132b0
	if (ctx.cr6.lt) goto loc_880132B0;
	// beq cr6,0x88013280
	if (ctx.cr6.eq) goto loc_88013280;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x880132e8
	if (!ctx.cr6.lt) goto loc_880132E8;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// ori r7,r10,57360
	ctx.r7.u64 = ctx.r10.u64 | 57360;
	// lis r9,138
	ctx.r9.s64 = 9043968;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// li r10,56
	ctx.r10.s64 = 56;
	// ori r9,r9,31354
	ctx.r9.u64 = ctx.r9.u64 | 31354;
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// lwz r3,-6440(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -6440);
	// stw r10,-6432(r30)
	REX_STORE_U32(ctx.r30.u32 + -6432, ctx.r10.u32);
	// stw r9,-6444(r8)
	REX_STORE_U32(ctx.r8.u32 + -6444, ctx.r9.u32);
	// b 0x880132e8
	goto loc_880132E8;
loc_88013280:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r6,-30692
	ctx.r6.s64 = -2011430912;
	// ori r7,r10,57360
	ctx.r7.u64 = ctx.r10.u64 | 57360;
	// lis r9,138
	ctx.r9.s64 = 9043968;
	// li r8,800
	ctx.r8.s64 = 800;
	// li r10,50
	ctx.r10.s64 = 50;
	// ori r9,r9,31354
	ctx.r9.u64 = ctx.r9.u64 | 31354;
	// sthx r8,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u16);
	// lwz r3,-6440(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -6440);
	// stw r10,-6432(r30)
	REX_STORE_U32(ctx.r30.u32 + -6432, ctx.r10.u32);
	// stw r9,-6444(r6)
	REX_STORE_U32(ctx.r6.u32 + -6444, ctx.r9.u32);
	// b 0x880132e8
	goto loc_880132E8;
loc_880132B0:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r7,-30608
	ctx.r7.s64 = -2005925888;
	// ori r8,r10,57360
	ctx.r8.u64 = ctx.r10.u64 | 57360;
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r6,-30692
	ctx.r6.s64 = -2011430912;
	// lis r10,140
	ctx.r10.s64 = 9175040;
	// sthx r9,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u16);
	// ori r10,r10,29812
	ctx.r10.u64 = ctx.r10.u64 | 29812;
	// lwz r3,-6440(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -6440);
	// lwz r9,21852(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 21852);
	// rlwinm r11,r9,29,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0xFFFFFFF;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
	// stw r10,-6444(r6)
	REX_STORE_U32(ctx.r6.u32 + -6444, ctx.r10.u32);
	// stw r11,-6432(r30)
	REX_STORE_U32(ctx.r30.u32 + -6432, ctx.r11.u32);
loc_880132E8:
	// lis r31,-30692
	ctx.r31.s64 = -2011430912;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,-6456(r31)
	REX_STORE_U32(ctx.r31.u32 + -6456, ctx.r11.u32);
	// bne cr6,0x88013310
	if (!ctx.cr6.eq) goto loc_88013310;
	// bl 0x88069640
	ctx.lr = 0x88013300;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013310
	if (ctx.cr6.eq) goto loc_88013310;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-6456(r31)
	REX_STORE_U32(ctx.r31.u32 + -6456, ctx.r11.u32);
loc_88013310:
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lis r7,-30692
	ctx.r7.s64 = -2011430912;
	// lis r6,-30692
	ctx.r6.s64 = -2011430912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-6460(r8)
	REX_STORE_U32(ctx.r8.u32 + -6460, ctx.r11.u32);
	// stw r10,-6464(r7)
	REX_STORE_U32(ctx.r7.u32 + -6464, ctx.r10.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r9,-6468(r6)
	REX_STORE_U32(ctx.r6.u32 + -6468, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801333C;
	sub_8801A448(ctx, base);
	// addi r5,r3,170
	ctx.r5.s64 = ctx.r3.s64 + 170;
	// addi r4,r3,-171
	ctx.r4.s64 = ctx.r3.s64 + -171;
	// stw r3,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// clrlwi r11,r5,23
	ctx.r11.u64 = ctx.r5.u32 & 0x1FF;
	// clrlwi r10,r4,23
	ctx.r10.u64 = ctx.r4.u32 & 0x1FF;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_88013358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88014FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88014FD8;
	sub_88014D38(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,4226
	ctx.r10.s64 = 4226;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,25
	ctx.r8.s64 = 25;
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88015100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88015118;
	sub_88014D38(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,4236
	ctx.r10.s64 = 4236;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880153B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x880153D0;
	sub_88014D38(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,4252
	ctx.r10.s64 = 4252;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,25
	ctx.r8.s64 = 25;
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88015700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88015718;
	sub_88014D38(ctx, base);
	// li r11,4308
	ctx.r11.s64 = 4308;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,22
	ctx.r9.s64 = 22;
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stb r10,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88015950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88015968;
	sub_88014D38(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,4268
	ctx.r10.s64 = 4268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,21
	ctx.r8.s64 = 21;
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88015D60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88015D78;
	sub_88014D38(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r8,r11,1100
	ctx.r8.s64 = ctx.r11.s64 + 1100;
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// rlwinm r5,r8,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// sth r5,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88016168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r9,42(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stb r7,42(r3)
	REX_STORE_U8(ctx.r3.u32 + 42, ctx.r7.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x880161e4
	if (!ctx.cr6.lt) goto loc_880161E4;
	// lbz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// lbz r10,43(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 43);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r10,42(r3)
	REX_STORE_U8(ctx.r3.u32 + 42, ctx.r10.u8);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// stb r8,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r8.u8);
	// ble cr6,0x880161e4
	if (!ctx.cr6.gt) goto loc_880161E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
loc_880161E4:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880161FC;
	sub_8801A9C8(ctx, base);
	// lhz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88016210
	if (ctx.cr6.eq) goto loc_88016210;
	// bl 0x8813ff08
	ctx.lr = 0x88016210;
	sub_8813FF08(ctx, base);
loc_88016210:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6444(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -6444);
	// bl 0x8813ff48
	ctx.lr = 0x88016220;
	sub_8813FF48(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88014a00
	ctx.lr = 0x88016234;
	sub_88014A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880171C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x880171E0;
	sub_88014D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4304
	ctx.r10.s64 = 4304;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88017650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x88017668;
	sub_88014D38(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stb r10,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r10.u8);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r5,r10,4638
	ctx.r5.s64 = ctx.r10.s64 + 4638;
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// sth r5,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880179D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88014d38
	ctx.lr = 0x880179F0;
	sub_88014D38(ctx, base);
	// li r11,5086
	ctx.r11.s64 = 5086;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880183C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880183D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8801a448
	ctx.lr = 0x880183E8;
	sub_8801A448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r4,r10,-31888
	ctx.r4.s64 = ctx.r10.s64 + -31888;
	// bl 0x88068e90
	ctx.lr = 0x8801840C;
	sub_88068E90(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8801842c
	if (!ctx.cr6.eq) goto loc_8801842C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88018444
	if (!ctx.cr6.eq) goto loc_88018444;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x88018438
	goto loc_88018438;
loc_8801842C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88018444
	if (!ctx.cr6.eq) goto loc_88018444;
	// li r4,0
	ctx.r4.s64 = 0;
loc_88018438:
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x88068e68
	ctx.lr = 0x88018440;
	sub_88068E68(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_88018444:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801845c
	if (!ctx.cr6.eq) goto loc_8801845C;
loc_88018450:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8801845C:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88018450
	if (ctx.cr6.eq) goto loc_88018450;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x88018450
	if (ctx.cr6.eq) goto loc_88018450;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8806b5f0
	ctx.lr = 0x8801847C;
	sub_8806B5F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a4a0
	ctx.lr = 0x88018490;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8801A220) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801A228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8801a274
	if (ctx.cr6.eq) goto loc_8801A274;
	// bl 0x88019f68
	ctx.lr = 0x8801A250;
	sub_88019F68(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x881401a0
	ctx.lr = 0x8801A264;
	sub_881401A0(ctx, base);
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
loc_8801A274:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801a2c8
	if (ctx.cr6.eq) goto loc_8801A2C8;
	// bl 0x880abd10
	ctx.lr = 0x8801A284;
	sub_880ABD10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x880abd78
	ctx.lr = 0x8801A28C;
	sub_880ABD78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,50
	ctx.r4.s64 = 50;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x881401a0
	ctx.lr = 0x8801A29C;
	sub_881401A0(ctx, base);
	// lwz r3,18740(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,612(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 612);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8801A2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,1076(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8801A2C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8801A2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801B2F0) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// addi r10,r11,3944
	ctx.r10.s64 = ctx.r11.s64 + 3944;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r7,r10,-408
	ctx.r7.s64 = ctx.r10.s64 + -408;
	// ori r4,r9,65534
	ctx.r4.u64 = ctx.r9.u64 | 65534;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,-412(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -412);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-412(r10)
	REX_STORE_U32(ctx.r10.u32 + -412, ctx.r11.u32);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r31,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r31.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8801b360
	if (ctx.cr6.lt) goto loc_8801B360;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8801B360:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801B520) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,3940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801b548
	if (ctx.cr6.eq) goto loc_8801B548;
loc_8801B530:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8801b550
	if (ctx.cr6.eq) goto loc_8801B550;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8801b530
	if (!ctx.cr6.eq) goto loc_8801B530;
loc_8801B548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8801B550:
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801D338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8801D340;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r31,r3,10756
	ctx.r31.s64 = ctx.r3.s64 + 10756;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8801D358:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8801d37c
	if (ctx.cr6.eq) goto loc_8801D37C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// blt cr6,0x8801d358
	if (ctx.cr6.lt) goto loc_8801D358;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8801D37C:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801D394;
	sub_8801A448(ctx, base);
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801D3A8;
	sub_8801A448(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-30696
	ctx.r9.s64 = -2011693056;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r9,-23952
	ctx.r30.s64 = ctx.r9.s64 + -23952;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwzx r7,r27,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801D3D0;
	sub_8801A448(ctx, base);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwzx r4,r27,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r9,r27,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801D408;
	sub_8801A448(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x8801D414;
	sub_8801A448(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r28,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// li r3,1234
	ctx.r3.s64 = 1234;
	// stw r29,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801D428;
	sub_8801A448(ctx, base);
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8801d43c
	if (ctx.cr6.eq) goto loc_8801D43C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8801D43C:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88020D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88020D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8801b520
	ctx.lr = 0x88020D64;
	sub_8801B520(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_88020D70:
	// li r6,243
	ctx.r6.s64 = 243;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x88020D84;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x88020D90;
	sub_8813FF28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88020D9C;
	sub_8813FF48(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x88020d70
	if (ctx.cr6.lt) goto loc_88020D70;
	// lhz r11,10736(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10736);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x88020e34
	if (ctx.cr6.gt) goto loc_88020E34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88020de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020DE4;
	// bdzf 4*cr6+eq,0x88020df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020DF0;
	// bdzf 4*cr6+eq,0x88020dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020DFC;
	// bdzf 4*cr6+eq,0x88020e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020E08;
	// bdzf 4*cr6+eq,0x88020e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020E14;
	// bdzf 4*cr6+eq,0x88020e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88020E20;
	// bne cr6,0x88020e2c
	if (!ctx.cr6.eq) goto loc_88020E2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801e410
	ctx.lr = 0x88020DE0;
	sub_8801E410(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801e868
	ctx.lr = 0x88020DEC;
	sub_8801E868(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801eea0
	ctx.lr = 0x88020DF8;
	sub_8801EEA0(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801f7d8
	ctx.lr = 0x88020E04;
	sub_8801F7D8(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801faa0
	ctx.lr = 0x88020E10;
	sub_8801FAA0(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880207b0
	ctx.lr = 0x88020E1C;
	sub_880207B0(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801d738
	ctx.lr = 0x88020E28;
	sub_8801D738(ctx, base);
	// b 0x88020e34
	goto loc_88020E34;
loc_88020E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801ded8
	ctx.lr = 0x88020E34;
	sub_8801DED8(ctx, base);
loc_88020E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801d468
	ctx.lr = 0x88020E3C;
	sub_8801D468(ctx, base);
	// lhz r11,10726(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10726);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88020f08
	if (ctx.cr6.lt) goto loc_88020F08;
	// beq cr6,0x88020e80
	if (ctx.cr6.eq) goto loc_88020E80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88020eec
	if (!ctx.cr6.lt) goto loc_88020EEC;
	// lhz r11,10738(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10738);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,10738(r31)
	REX_STORE_U16(ctx.r31.u32 + 10738, ctx.r9.u16);
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x88020eec
	if (ctx.cr6.lt) goto loc_88020EEC;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,10738(r31)
	REX_STORE_U16(ctx.r31.u32 + 10738, ctx.r11.u16);
	// bl 0x8801b368
	ctx.lr = 0x88020E7C;
	sub_8801B368(ctx, base);
	// b 0x88020eec
	goto loc_88020EEC;
loc_88020E80:
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8806bc38
	ctx.lr = 0x88020EA4;
	sub_8806BC38(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8806bc38
	ctx.lr = 0x88020EB8;
	sub_8806BC38(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88020ed8
	if (!ctx.cr6.eq) goto loc_88020ED8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88020eec
	if (ctx.cr6.eq) goto loc_88020EEC;
loc_88020ED8:
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88140548
	ctx.lr = 0x88020EE4;
	sub_88140548(ctx, base);
loc_88020EE4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_88020EE8:
	// sth r11,10726(r31)
	REX_STORE_U16(ctx.r31.u32 + 10726, ctx.r11.u16);
loc_88020EEC:
	// lhz r11,10738(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10738);
	// li r5,253
	ctx.r5.s64 = 253;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x88067710
	ctx.lr = 0x88020F00;
	sub_88067710(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88020F08:
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8806bc38
	ctx.lr = 0x88020F2C;
	sub_8806BC38(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8806bc38
	ctx.lr = 0x88020F40;
	sub_8806BC38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88020ee4
	if (!ctx.cr6.eq) goto loc_88020EE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88020ee4
	if (!ctx.cr6.eq) goto loc_88020EE4;
	// lhz r11,10738(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10738);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,10738(r31)
	REX_STORE_U16(ctx.r31.u32 + 10738, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88020eec
	if (ctx.cr6.gt) goto loc_88020EEC;
	// bl 0x880b4190
	ctx.lr = 0x88020F7C;
	sub_880B4190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r29,10738(r31)
	REX_STORE_U16(ctx.r31.u32 + 10738, ctx.r29.u16);
	// b 0x88020ee8
	goto loc_88020EE8;
}

DEFINE_REX_FUNC(sub_88021848) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,1560
	ctx.r11.s64 = ctx.r3.s64 + 1560;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88021880
	if (ctx.cr6.eq) goto loc_88021880;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88021858:
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88021870
	if (ctx.cr6.eq) goto loc_88021870;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88021888
	if (ctx.cr6.eq) goto loc_88021888;
loc_88021870:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x88021858
	if (ctx.cr6.lt) goto loc_88021858;
loc_88021880:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88021888:
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88021AD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_88021AEC:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88021b20
	if (ctx.cr6.eq) goto loc_88021B20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x88021aec
	if (ctx.cr6.lt) goto loc_88021AEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_88021B20:
	// lhz r11,3758(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 3758);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,3758(r3)
	REX_STORE_U16(ctx.r3.u32 + 3758, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88021b44
	if (!ctx.cr6.eq) goto loc_88021B44;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,3758(r3)
	REX_STORE_U16(ctx.r3.u32 + 3758, ctx.r11.u16);
loc_88021B44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lhz r9,3758(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 3758);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// sth r11,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// sth r9,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// beq cr6,0x88021b74
	if (ctx.cr6.eq) goto loc_88021B74;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8813fa60
	ctx.lr = 0x88021B74;
	sub_8813FA60(ctx, base);
loc_88021B74:
	// lhz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x88021618
	ctx.lr = 0x8802217C;
	sub_88021618(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x880219a8
	ctx.lr = 0x88022184;
	sub_880219A8(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x88021cf0
	ctx.lr = 0x8802218C;
	sub_88021CF0(ctx, base);
	// addi r11,r5,3640
	ctx.r11.s64 = ctx.r5.s64 + 3640;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// stw r6,3644(r5)
	REX_STORE_U32(ctx.r5.u32 + 3644, ctx.r6.u32);
	// lwz r11,3736(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 3736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880221ac
	if (ctx.cr6.eq) goto loc_880221AC;
	// bl 0x880210f0
	ctx.lr = 0x880221AC;
	sub_880210F0(ctx, base);
loc_880221AC:
	// sth r6,3760(r5)
	REX_STORE_U16(ctx.r5.u32 + 3760, ctx.r6.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,3744(r5)
	REX_STORE_U32(ctx.r5.u32 + 3744, ctx.r6.u32);
	// stw r6,3748(r5)
	REX_STORE_U32(ctx.r5.u32 + 3748, ctx.r6.u32);
	// sth r6,3756(r5)
	REX_STORE_U16(ctx.r5.u32 + 3756, ctx.r6.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022980) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88022930
	ctx.lr = 0x88022990;
	sub_88022930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880229c0
	if (ctx.cr6.eq) goto loc_880229C0;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
loc_880229C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022B68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88022930
	ctx.lr = 0x88022B7C;
	sub_88022930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88022bcc
	if (ctx.cr6.eq) goto loc_88022BCC;
	// cmplwi cr6,r4,72
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 72, ctx.xer);
	// bgt cr6,0x88022bc8
	if (ctx.cr6.gt) goto loc_88022BC8;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r3,-11896(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -11896);
	// bl 0x88068e78
	ctx.lr = 0x88022B9C;
	sub_88068E78(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r9,72
	ctx.r9.s64 = 72;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r9,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_88022BC8:
	// stw r4,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r4.u32);
loc_88022BCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880236A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880236B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88022930
	ctx.lr = 0x880236C0;
	sub_88022930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880238a0
	if (ctx.cr6.eq) goto loc_880238A0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880238a0
	if (!ctx.cr6.eq) goto loc_880238A0;
	// bl 0x880103a0
	ctx.lr = 0x880236DC;
	sub_880103A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880238a0
	if (!ctx.cr6.eq) goto loc_880238A0;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880238a0
	if (ctx.cr6.eq) goto loc_880238A0;
	// bl 0x88069760
	ctx.lr = 0x880236F4;
	sub_88069760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8802370c
	if (ctx.cr6.eq) goto loc_8802370C;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8806c7a8
	ctx.lr = 0x88023704;
	sub_8806C7A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,2640(r11)
	REX_STORE_U32(ctx.r11.u32 + 2640, ctx.r3.u32);
loc_8802370C:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// li r25,192
	ctx.r25.s64 = 192;
	// li r24,4
	ctx.r24.s64 = 4;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88023828
	if (ctx.cr6.eq) goto loc_88023828;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x88024110
	ctx.lr = 0x8802372C;
	sub_88024110(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8806b948
	ctx.lr = 0x8802373C;
	sub_8806B948(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8806b8e8
	ctx.lr = 0x88023744;
	sub_8806B8E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// subfic r10,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r10,2
	ctx.r27.s64 = ctx.r10.s64 + 2;
	// blt cr6,0x8802379c
	if (ctx.cr6.lt) goto loc_8802379C;
	// beq cr6,0x88023784
	if (ctx.cr6.eq) goto loc_88023784;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x880237b0
	if (!ctx.cr6.lt) goto loc_880237B0;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880237b0
	if (ctx.cr6.eq) goto loc_880237B0;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// b 0x880237b0
	goto loc_880237B0;
loc_88023784:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880237b0
	if (ctx.cr6.eq) goto loc_880237B0;
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// b 0x880237b0
	goto loc_880237B0;
loc_8802379C:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880237b0
	if (ctx.cr6.eq) goto loc_880237B0;
	// addi r29,r29,7
	ctx.r29.s64 = ctx.r29.s64 + 7;
loc_880237B0:
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8806b1d8
	ctx.lr = 0x880237B8;
	sub_8806B1D8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x880237BC;
	sub_88068E78(ctx, base);
	// addi r11,r28,21
	ctx.r11.s64 = ctx.r28.s64 + 21;
	// subf r10,r3,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8802381c
	if (ctx.cr6.lt) goto loc_8802381C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// beq cr6,0x8802381c
	if (ctx.cr6.eq) goto loc_8802381C;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8806b8a8
	ctx.lr = 0x8802380C;
	sub_8806B8A8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8802381C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_88023828:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88023874
	if (ctx.cr6.eq) goto loc_88023874;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// bl 0x8806baf0
	ctx.lr = 0x8802385C;
	sub_8806BAF0(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// stw r24,124(r30)
	REX_STORE_U32(ctx.r30.u32 + 124, ctx.r24.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r25,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r25.u32);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
loc_88023874:
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2632(r8)
	REX_STORE_U32(ctx.r8.u32 + 2632, ctx.r11.u32);
loc_880238A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88024EB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88024EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813f998
	ctx.lr = 0x88024EDC;
	sub_8813F998(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x88013360
	ctx.lr = 0x88024EEC;
	sub_88013360(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88018b00
	ctx.lr = 0x88024EF4;
	sub_88018B00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8460
	ctx.lr = 0x88024EFC;
	sub_880A8460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a9900
	ctx.lr = 0x88024F04;
	sub_880A9900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880aa280
	ctx.lr = 0x88024F0C;
	sub_880AA280(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880abb08
	ctx.lr = 0x88024F14;
	sub_880ABB08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a2c60
	ctx.lr = 0x88024F1C;
	sub_880A2C60(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x88010cf8
	ctx.lr = 0x88024F24;
	sub_88010CF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880aadf8
	ctx.lr = 0x88024F2C;
	sub_880AADF8(ctx, base);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,20032
	ctx.r4.s64 = ctx.r11.s64 + 20032;
	// bl 0x8801b4b0
	ctx.lr = 0x88024F40;
	sub_8801B4B0(ctx, base);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,20088
	ctx.r4.s64 = ctx.r10.s64 + 20088;
	// bl 0x8801b478
	ctx.lr = 0x88024F50;
	sub_8801B478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88025A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88025A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r30,4
	ctx.r30.s64 = 262144;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r31,1
	ctx.r31.s64 = 65536;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,160
	ctx.r6.s64 = 160;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88025A44;
	sub_8801A9C8(ctx, base);
	// lwz r7,100(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// li r6,10
	ctx.r6.s64 = 10;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// subfic r11,r5,128
	ctx.xer.ca = ctx.r5.u32 <= 128;
	ctx.r11.u64 = static_cast<uint64_t>(128) - ctx.r5.u64;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88025A68;
	sub_8813FF48(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r7,r30
	ctx.r3.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lis r30,-30606
	ctx.r30.s64 = -2005794816;
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r11,18740(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18740);
	// lwz r11,888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x88025ab4
	if (!ctx.cr6.eq) goto loc_88025AB4;
	// li r3,26
	ctx.r3.s64 = 26;
	// bctrl 
	ctx.lr = 0x88025AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,27
	ctx.r3.s64 = 27;
	// b 0x88025ac0
	goto loc_88025AC0;
loc_88025AB4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bctrl 
	ctx.lr = 0x88025ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,29
	ctx.r3.s64 = 29;
loc_88025AC0:
	// lwz r11,18740(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18740);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88025AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880262B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,384(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88026358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88026360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r30,r5,152
	ctx.r30.s64 = ctx.r5.s64 + 152;
	// cmplwi cr6,r4,18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18, ctx.xer);
	// bgt cr6,0x880265c0
	if (ctx.cr6.gt) goto loc_880265C0;
	// lis r12,-30718
	ctx.r12.s64 = -2013134848;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25500
	ctx.r12.s64 = ctx.r12.s64 + 25500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_880263E8;
	case 1:
		goto loc_880263E8;
	case 2:
		goto loc_880263E8;
	case 3:
		goto loc_88026454;
	case 4:
		goto loc_88026454;
	case 5:
		goto loc_880264B0;
	case 6:
		goto loc_880264B0;
	case 7:
		goto loc_880264B0;
	case 8:
		goto loc_880264C0;
	case 9:
		goto loc_880264C0;
	case 10:
		goto loc_88026508;
	case 11:
		goto loc_8802651C;
	case 12:
		goto loc_880265C0;
	case 13:
		goto loc_880265C0;
	case 14:
		goto loc_8802652C;
	case 15:
		goto loc_8802652C;
	case 16:
		goto loc_88026574;
	case 17:
		goto loc_88026574;
	case 18:
		goto loc_88026574;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880263E8:
	// stw r28,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x88026414
	if (!ctx.cr6.eq) goto loc_88026414;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x88026418
	if (!ctx.cr6.gt) goto loc_88026418;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x88026418
	goto loc_88026418;
loc_88026414:
	// stw r27,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_88026418:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8802b280
	ctx.lr = 0x88026424;
	sub_8802B280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88026e28
	ctx.lr = 0x88026430;
	sub_88026E28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8806b938
	ctx.lr = 0x8802643C;
	sub_8806B938(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b8d8
	ctx.lr = 0x88026448;
	sub_8806B8D8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880265c0
	if (!ctx.cr6.eq) goto loc_880265C0;
	// b 0x880265b4
	goto loc_880265B4;
loc_88026454:
	// addi r4,r28,-3
	ctx.r4.s64 = ctx.r28.s64 + -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r4.u32);
	// bl 0x88026fc0
	ctx.lr = 0x88026464;
	sub_88026FC0(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x88026480
	if (!ctx.cr6.gt) goto loc_88026480;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_88026480:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x8806b980
	ctx.lr = 0x8802648C;
	sub_8806B980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x8806b920
	ctx.lr = 0x88026498;
	sub_8806B920(ctx, base);
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880264AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x880265b4
	goto loc_880265B4;
loc_880264B0:
	// addi r11,r28,-5
	ctx.r11.s64 = ctx.r28.s64 + -5;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x88026580
	goto loc_88026580;
loc_880264C0:
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r4.u32);
	// bl 0x88026fc0
	ctx.lr = 0x880264D0;
	sub_88026FC0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880264EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x8806b980
	ctx.lr = 0x880264F8;
	sub_8806B980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x8806b920
	ctx.lr = 0x88026504;
	sub_8806B920(ctx, base);
	// b 0x880265b4
	goto loc_880265B4;
loc_88026508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806bb10
	ctx.lr = 0x88026510;
	sub_8806BB10(ctx, base);
	// bl 0x880b2e58
	ctx.lr = 0x88026514;
	sub_880B2E58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8802651C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b858
	ctx.lr = 0x88026524;
	sub_8806B858(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8802652C:
	// addi r4,r28,-14
	ctx.r4.s64 = ctx.r28.s64 + -14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r4.u32);
	// bl 0x88026fc0
	ctx.lr = 0x8802653C;
	sub_88026FC0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88026558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x8806b980
	ctx.lr = 0x88026564;
	sub_8806B980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x8806b920
	ctx.lr = 0x88026570;
	sub_8806B920(ctx, base);
	// b 0x880265b4
	goto loc_880265B4;
loc_88026574:
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_88026580:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x8802b280
	ctx.lr = 0x88026590;
	sub_8802B280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88026e28
	ctx.lr = 0x8802659C;
	sub_88026E28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8806b938
	ctx.lr = 0x880265A8;
	sub_8806B938(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8806b8d8
	ctx.lr = 0x880265B4;
	sub_8806B8D8(ctx, base);
loc_880265B4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880265c0
	if (ctx.cr6.eq) goto loc_880265C0;
	// bl 0x880b2db0
	ctx.lr = 0x880265C0;
	sub_880B2DB0(ctx, base);
loc_880265C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88028AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88028AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x88028ad4
	if (!ctx.cr6.eq) goto loc_88028AD4;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88028AD4:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,12528
	ctx.r10.s64 = ctx.r9.s64 + 12528;
	// mulli r11,r8,352
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(352));
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_88028AF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88028b24
	if (ctx.cr6.eq) goto loc_88028B24;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88028B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-30717
	ctx.r10.s64 = -2013069312;
	// stw r29,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// addi r9,r10,-30784
	ctx.r9.s64 = ctx.r10.s64 + -30784;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_88028B24:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// bne 0x88028af4
	if (!ctx.cr0.eq) goto loc_88028AF4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88029348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,150
	ctx.r6.s64 = 150;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a9c8
	ctx.lr = 0x88029378;
	sub_8801A9C8(ctx, base);
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8802938c
	if (ctx.cr6.eq) goto loc_8802938C;
	// bl 0x8813ff08
	ctx.lr = 0x8802938C;
	sub_8813FF08(ctx, base);
loc_8802938C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88029398;
	sub_8813FF48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88029850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88029858;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x8801a448
	ctx.lr = 0x88029870;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8801a860
	ctx.lr = 0x88029894;
	sub_8801A860(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880b21f8
	ctx.lr = 0x8802989C;
	sub_880B21F8(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r8,-30696
	ctx.r8.s64 = -2011693056;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r8,-16440
	ctx.r11.s64 = ctx.r8.s64 + -16440;
	// lis r7,-30717
	ctx.r7.s64 = -2013069312;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r7,-26776
	ctx.r6.s64 = ctx.r7.s64 + -26776;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r4,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// beq cr6,0x88029b10
	if (ctx.cr6.eq) goto loc_88029B10;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r28,28(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a448
	ctx.lr = 0x880298FC;
	sub_8801A448(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x8802990C;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,153
	ctx.r6.s64 = 153;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// bl 0x880aae38
	ctx.lr = 0x88029934;
	sub_880AAE38(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x880aaf08
	ctx.lr = 0x88029944;
	sub_880AAF08(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x880299ac
	if (!ctx.cr6.lt) goto loc_880299AC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8801a448
	ctx.lr = 0x88029958;
	sub_8801A448(ctx, base);
	// addi r27,r3,-2
	ctx.r27.s64 = ctx.r3.s64 + -2;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88029964;
	sub_8801A448(ctx, base);
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029974;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,153
	ctx.r6.s64 = 153;
	// rlwinm r7,r27,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,192
	ctx.r8.s64 = 192;
	// bl 0x880aae38
	ctx.lr = 0x8802999C;
	sub_880AAE38(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x880aaf08
	ctx.lr = 0x880299AC;
	sub_880AAF08(ctx, base);
loc_880299AC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88029bbc
	if (ctx.cr6.lt) goto loc_88029BBC;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11968(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11968);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88029bbc
	if (ctx.cr6.eq) goto loc_88029BBC;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88029a68
	if (!ctx.cr6.eq) goto loc_88029A68;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x88069908
	ctx.lr = 0x880299E8;
	sub_88069908(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8806b5f0
	ctx.lr = 0x880299F8;
	sub_8806B5F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88029bbc
	if (!ctx.cr6.gt) goto loc_88029BBC;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8806c7a0
	ctx.lr = 0x88029A10;
	sub_8806C7A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10000, ctx.xer);
	// blt cr6,0x88029a20
	if (ctx.cr6.lt) goto loc_88029A20;
	// li r30,1
	ctx.r30.s64 = 1;
loc_88029A20:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88029A28;
	sub_8801A448(ctx, base);
	// addi r27,r3,-4
	ctx.r27.s64 = ctx.r3.s64 + -4;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029A38;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r27,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x88011948
	ctx.lr = 0x88029A60;
	sub_88011948(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88029A68:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8806c658
	ctx.lr = 0x88029A70;
	sub_8806C658(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88029a84
	if (ctx.cr6.lt) goto loc_88029A84;
	// li r30,1
	ctx.r30.s64 = 1;
loc_88029A84:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88029A8C;
	sub_8801A448(ctx, base);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029A9C;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r28,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x88029AC0;
	sub_880111C0(ctx, base);
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x88029bbc
	if (ctx.cr6.lt) goto loc_88029BBC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88029AD4;
	sub_8801A448(ctx, base);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029AE4;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r28,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x88029B08;
	sub_880111C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88029B10:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a448
	ctx.lr = 0x88029B18;
	sub_8801A448(ctx, base);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r27,28(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a448
	ctx.lr = 0x88029B28;
	sub_8801A448(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029B38;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,153
	ctx.r6.s64 = 153;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x880aae38
	ctx.lr = 0x88029B60;
	sub_880AAE38(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x88029bbc
	if (!ctx.cr6.lt) goto loc_88029BBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a448
	ctx.lr = 0x88029B74;
	sub_8801A448(ctx, base);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r27,28(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a448
	ctx.lr = 0x88029B84;
	sub_8801A448(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88029B94;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,153
	ctx.r6.s64 = 153;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x880aae38
	ctx.lr = 0x88029BBC;
	sub_880AAE38(ctx, base);
loc_88029BBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88036B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88036B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,6
	ctx.r29.s64 = 6;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
loc_88036B2C:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r29
	ctx.r11.u64 = uint32_t(ctx.r29.u32 ? ctx.r31.u32 / ctx.r29.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,5522
	ctx.r7.s64 = ctx.r31.s64 + 5522;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,221
	ctx.r3.s64 = 221;
	// bl 0x8813fdd8
	ctx.lr = 0x88036B78;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x88036b2c
	if (ctx.cr6.lt) goto loc_88036B2C;
	// li r8,5554
	ctx.r8.s64 = 5554;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036BA0;
	sub_8813FDD8(ctx, base);
	// li r8,5555
	ctx.r8.s64 = 5555;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036BBC;
	sub_8813FDD8(ctx, base);
	// li r8,5556
	ctx.r8.s64 = 5556;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036BD8;
	sub_8813FDD8(ctx, base);
	// li r8,5557
	ctx.r8.s64 = 5557;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036BF4;
	sub_8813FDD8(ctx, base);
	// li r8,5558
	ctx.r8.s64 = 5558;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C10;
	sub_8813FDD8(ctx, base);
	// li r8,5559
	ctx.r8.s64 = 5559;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C2C;
	sub_8813FDD8(ctx, base);
	// li r8,5560
	ctx.r8.s64 = 5560;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C48;
	sub_8813FDD8(ctx, base);
	// li r8,5561
	ctx.r8.s64 = 5561;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C64;
	sub_8813FDD8(ctx, base);
	// li r8,5562
	ctx.r8.s64 = 5562;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C80;
	sub_8813FDD8(ctx, base);
	// li r8,5563
	ctx.r8.s64 = 5563;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036C9C;
	sub_8813FDD8(ctx, base);
	// li r8,5564
	ctx.r8.s64 = 5564;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036CB8;
	sub_8813FDD8(ctx, base);
	// li r8,5565
	ctx.r8.s64 = 5565;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036CD4;
	sub_8813FDD8(ctx, base);
	// li r8,5566
	ctx.r8.s64 = 5566;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036CF0;
	sub_8813FDD8(ctx, base);
	// li r8,5567
	ctx.r8.s64 = 5567;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D0C;
	sub_8813FDD8(ctx, base);
	// li r8,5568
	ctx.r8.s64 = 5568;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D28;
	sub_8813FDD8(ctx, base);
	// li r8,5569
	ctx.r8.s64 = 5569;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D44;
	sub_8813FDD8(ctx, base);
	// li r8,5570
	ctx.r8.s64 = 5570;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D60;
	sub_8813FDD8(ctx, base);
	// li r8,5571
	ctx.r8.s64 = 5571;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D7C;
	sub_8813FDD8(ctx, base);
	// li r8,5572
	ctx.r8.s64 = 5572;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036D98;
	sub_8813FDD8(ctx, base);
	// li r8,5573
	ctx.r8.s64 = 5573;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036DB4;
	sub_8813FDD8(ctx, base);
	// li r8,5574
	ctx.r8.s64 = 5574;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036DD0;
	sub_8813FDD8(ctx, base);
	// li r8,5575
	ctx.r8.s64 = 5575;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036DEC;
	sub_8813FDD8(ctx, base);
	// li r8,5576
	ctx.r8.s64 = 5576;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E08;
	sub_8813FDD8(ctx, base);
	// li r8,5577
	ctx.r8.s64 = 5577;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E24;
	sub_8813FDD8(ctx, base);
	// li r8,5578
	ctx.r8.s64 = 5578;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E40;
	sub_8813FDD8(ctx, base);
	// li r8,5579
	ctx.r8.s64 = 5579;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E5C;
	sub_8813FDD8(ctx, base);
	// li r8,5580
	ctx.r8.s64 = 5580;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E78;
	sub_8813FDD8(ctx, base);
	// li r8,5581
	ctx.r8.s64 = 5581;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036E94;
	sub_8813FDD8(ctx, base);
	// li r8,5582
	ctx.r8.s64 = 5582;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036EB0;
	sub_8813FDD8(ctx, base);
	// li r8,5583
	ctx.r8.s64 = 5583;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036ECC;
	sub_8813FDD8(ctx, base);
	// li r8,5584
	ctx.r8.s64 = 5584;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036EE8;
	sub_8813FDD8(ctx, base);
	// li r8,5585
	ctx.r8.s64 = 5585;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,273
	ctx.r3.s64 = 273;
	// bl 0x8813fdd8
	ctx.lr = 0x88036F04;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8803EC80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8803EC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,7520
	ctx.r8.s64 = 7520;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ECA8;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803ECB0:
	// addi r11,r30,7517
	ctx.r11.s64 = ctx.r30.s64 + 7517;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ECD0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x8803ecb0
	if (ctx.cr6.lt) goto loc_8803ECB0;
	// li r8,7521
	ctx.r8.s64 = 7521;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ECFC;
	sub_8813FDD8(ctx, base);
	// li r8,7522
	ctx.r8.s64 = 7522;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ED18;
	sub_8813FDD8(ctx, base);
	// li r8,7523
	ctx.r8.s64 = 7523;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ED34;
	sub_8813FDD8(ctx, base);
	// li r8,7524
	ctx.r8.s64 = 7524;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ED50;
	sub_8813FDD8(ctx, base);
	// li r8,7525
	ctx.r8.s64 = 7525;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ED6C;
	sub_8813FDD8(ctx, base);
	// li r8,7526
	ctx.r8.s64 = 7526;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803ED88;
	sub_8813FDD8(ctx, base);
	// li r8,7527
	ctx.r8.s64 = 7527;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EDA4;
	sub_8813FDD8(ctx, base);
	// li r8,7528
	ctx.r8.s64 = 7528;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EDC0;
	sub_8813FDD8(ctx, base);
	// li r8,7529
	ctx.r8.s64 = 7529;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EDDC;
	sub_8813FDD8(ctx, base);
	// li r8,7530
	ctx.r8.s64 = 7530;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EDF8;
	sub_8813FDD8(ctx, base);
	// li r8,7531
	ctx.r8.s64 = 7531;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EE14;
	sub_8813FDD8(ctx, base);
	// li r8,7532
	ctx.r8.s64 = 7532;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EE30;
	sub_8813FDD8(ctx, base);
	// li r8,7533
	ctx.r8.s64 = 7533;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EE4C;
	sub_8813FDD8(ctx, base);
	// li r8,7534
	ctx.r8.s64 = 7534;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EE68;
	sub_8813FDD8(ctx, base);
	// li r8,7535
	ctx.r8.s64 = 7535;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EE84;
	sub_8813FDD8(ctx, base);
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,6
	ctx.r29.s64 = 6;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
loc_8803EE94:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r31,7536
	ctx.r9.s64 = ctx.r31.s64 + 7536;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r5,r31,r29
	ctx.r5.u64 = uint32_t(ctx.r29.u32 ? ctx.r31.u32 / ctx.r29.u32 : 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,32
	ctx.r7.s64 = 32;
	// subf r11,r3,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r3.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,5,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,277
	ctx.r3.s64 = 277;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EED8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x8803ee94
	if (ctx.cr6.lt) goto loc_8803EE94;
	// li r8,7568
	ctx.r8.s64 = 7568;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EF00;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88042408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8089
	ctx.r8.s64 = 8089;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042430;
	sub_8813FDD8(ctx, base);
	// li r8,8090
	ctx.r8.s64 = 8090;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x8804244C;
	sub_8813FDD8(ctx, base);
	// li r8,8091
	ctx.r8.s64 = 8091;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042468;
	sub_8813FDD8(ctx, base);
	// li r8,8092
	ctx.r8.s64 = 8092;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042484;
	sub_8813FDD8(ctx, base);
	// li r8,8093
	ctx.r8.s64 = 8093;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x880424A0;
	sub_8813FDD8(ctx, base);
	// li r8,8094
	ctx.r8.s64 = 8094;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x880424BC;
	sub_8813FDD8(ctx, base);
	// li r8,8095
	ctx.r8.s64 = 8095;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x880424D8;
	sub_8813FDD8(ctx, base);
	// li r8,8096
	ctx.r8.s64 = 8096;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x880424F4;
	sub_8813FDD8(ctx, base);
	// li r8,8097
	ctx.r8.s64 = 8097;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042510;
	sub_8813FDD8(ctx, base);
	// li r8,8098
	ctx.r8.s64 = 8098;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x8804252C;
	sub_8813FDD8(ctx, base);
	// li r8,8099
	ctx.r8.s64 = 8099;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042548;
	sub_8813FDD8(ctx, base);
	// li r8,8100
	ctx.r8.s64 = 8100;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x8813fdd8
	ctx.lr = 0x88042564;
	sub_8813FDD8(ctx, base);
	// li r8,8101
	ctx.r8.s64 = 8101;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042580;
	sub_8813FDD8(ctx, base);
	// li r8,8102
	ctx.r8.s64 = 8102;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x8804259C;
	sub_8813FDD8(ctx, base);
	// li r8,8103
	ctx.r8.s64 = 8103;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880425B8;
	sub_8813FDD8(ctx, base);
	// li r8,8104
	ctx.r8.s64 = 8104;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880425D4;
	sub_8813FDD8(ctx, base);
	// li r8,8105
	ctx.r8.s64 = 8105;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880425F0;
	sub_8813FDD8(ctx, base);
	// li r8,8106
	ctx.r8.s64 = 8106;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x8804260C;
	sub_8813FDD8(ctx, base);
	// li r8,8107
	ctx.r8.s64 = 8107;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042628;
	sub_8813FDD8(ctx, base);
	// li r8,8108
	ctx.r8.s64 = 8108;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042644;
	sub_8813FDD8(ctx, base);
	// li r8,8109
	ctx.r8.s64 = 8109;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042660;
	sub_8813FDD8(ctx, base);
	// li r8,8110
	ctx.r8.s64 = 8110;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x8804267C;
	sub_8813FDD8(ctx, base);
	// li r8,8111
	ctx.r8.s64 = 8111;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042698;
	sub_8813FDD8(ctx, base);
	// li r8,8112
	ctx.r8.s64 = 8112;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880426B4;
	sub_8813FDD8(ctx, base);
	// li r8,8113
	ctx.r8.s64 = 8113;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880426D0;
	sub_8813FDD8(ctx, base);
	// li r8,8114
	ctx.r8.s64 = 8114;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x880426EC;
	sub_8813FDD8(ctx, base);
	// li r8,8115
	ctx.r8.s64 = 8115;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042708;
	sub_8813FDD8(ctx, base);
	// li r8,8116
	ctx.r8.s64 = 8116;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042724;
	sub_8813FDD8(ctx, base);
	// li r8,8117
	ctx.r8.s64 = 8117;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042740;
	sub_8813FDD8(ctx, base);
	// li r8,8118
	ctx.r8.s64 = 8118;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x8804275C;
	sub_8813FDD8(ctx, base);
	// li r8,8119
	ctx.r8.s64 = 8119;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042778;
	sub_8813FDD8(ctx, base);
	// li r8,8120
	ctx.r8.s64 = 8120;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042794;
	sub_8813FDD8(ctx, base);
	// li r8,8121
	ctx.r8.s64 = 8121;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x880427B0;
	sub_8813FDD8(ctx, base);
	// li r8,8122
	ctx.r8.s64 = 8122;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x880427CC;
	sub_8813FDD8(ctx, base);
	// li r8,8123
	ctx.r8.s64 = 8123;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x880427E8;
	sub_8813FDD8(ctx, base);
	// li r8,8124
	ctx.r8.s64 = 8124;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042804;
	sub_8813FDD8(ctx, base);
	// li r8,8125
	ctx.r8.s64 = 8125;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x88042820;
	sub_8813FDD8(ctx, base);
	// li r8,8126
	ctx.r8.s64 = 8126;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,305
	ctx.r3.s64 = 305;
	// bl 0x8813fdd8
	ctx.lr = 0x8804283C;
	sub_8813FDD8(ctx, base);
	// li r8,8127
	ctx.r8.s64 = 8127;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042858;
	sub_8813FDD8(ctx, base);
	// li r8,8128
	ctx.r8.s64 = 8128;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042874;
	sub_8813FDD8(ctx, base);
	// li r8,8129
	ctx.r8.s64 = 8129;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042890;
	sub_8813FDD8(ctx, base);
	// li r8,8130
	ctx.r8.s64 = 8130;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x880428AC;
	sub_8813FDD8(ctx, base);
	// li r8,8131
	ctx.r8.s64 = 8131;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x880428C8;
	sub_8813FDD8(ctx, base);
	// li r8,8132
	ctx.r8.s64 = 8132;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x880428E4;
	sub_8813FDD8(ctx, base);
	// li r8,8133
	ctx.r8.s64 = 8133;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042900;
	sub_8813FDD8(ctx, base);
	// li r8,8134
	ctx.r8.s64 = 8134;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x8804291C;
	sub_8813FDD8(ctx, base);
	// li r8,8135
	ctx.r8.s64 = 8135;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042938;
	sub_8813FDD8(ctx, base);
	// li r8,8136
	ctx.r8.s64 = 8136;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042954;
	sub_8813FDD8(ctx, base);
	// li r8,8137
	ctx.r8.s64 = 8137;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x88042970;
	sub_8813FDD8(ctx, base);
	// li r8,8138
	ctx.r8.s64 = 8138;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x8804298C;
	sub_8813FDD8(ctx, base);
	// li r8,8139
	ctx.r8.s64 = 8139;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x880429A8;
	sub_8813FDD8(ctx, base);
	// li r8,8140
	ctx.r8.s64 = 8140;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,306
	ctx.r3.s64 = 306;
	// bl 0x8813fdd8
	ctx.lr = 0x880429C4;
	sub_8813FDD8(ctx, base);
	// li r8,8141
	ctx.r8.s64 = 8141;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x880429E0;
	sub_8813FDD8(ctx, base);
	// li r8,8142
	ctx.r8.s64 = 8142;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x880429FC;
	sub_8813FDD8(ctx, base);
	// li r8,8143
	ctx.r8.s64 = 8143;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042A18;
	sub_8813FDD8(ctx, base);
	// li r8,8144
	ctx.r8.s64 = 8144;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042A34;
	sub_8813FDD8(ctx, base);
	// li r8,8145
	ctx.r8.s64 = 8145;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042A50;
	sub_8813FDD8(ctx, base);
	// li r8,8146
	ctx.r8.s64 = 8146;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042A6C;
	sub_8813FDD8(ctx, base);
	// li r8,8147
	ctx.r8.s64 = 8147;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042A88;
	sub_8813FDD8(ctx, base);
	// li r8,8148
	ctx.r8.s64 = 8148;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042AA4;
	sub_8813FDD8(ctx, base);
	// li r8,8149
	ctx.r8.s64 = 8149;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042AC0;
	sub_8813FDD8(ctx, base);
	// li r8,8150
	ctx.r8.s64 = 8150;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042ADC;
	sub_8813FDD8(ctx, base);
	// li r8,8151
	ctx.r8.s64 = 8151;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042AF8;
	sub_8813FDD8(ctx, base);
	// li r8,8152
	ctx.r8.s64 = 8152;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,307
	ctx.r3.s64 = 307;
	// bl 0x8813fdd8
	ctx.lr = 0x88042B14;
	sub_8813FDD8(ctx, base);
	// li r8,7893
	ctx.r8.s64 = 7893;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042B30;
	sub_8813FDD8(ctx, base);
	// li r8,8023
	ctx.r8.s64 = 8023;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8813fdd8
	ctx.lr = 0x88042B4C;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880495A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,9846
	ctx.r8.s64 = 9846;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x880495D0;
	sub_8813FDD8(ctx, base);
	// li r8,9847
	ctx.r8.s64 = 9847;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x880495EC;
	sub_8813FDD8(ctx, base);
	// li r8,9848
	ctx.r8.s64 = 9848;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x88049608;
	sub_8813FDD8(ctx, base);
	// li r8,9849
	ctx.r8.s64 = 9849;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x88049624;
	sub_8813FDD8(ctx, base);
	// li r8,9850
	ctx.r8.s64 = 9850;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x88049640;
	sub_8813FDD8(ctx, base);
	// li r8,9851
	ctx.r8.s64 = 9851;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x8804965C;
	sub_8813FDD8(ctx, base);
	// li r8,9852
	ctx.r8.s64 = 9852;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x88049678;
	sub_8813FDD8(ctx, base);
	// li r8,7234
	ctx.r8.s64 = 7234;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8813fdd8
	ctx.lr = 0x88049694;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88049838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,9902
	ctx.r8.s64 = 9902;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x8813fdd8
	ctx.lr = 0x88049860;
	sub_8813FDD8(ctx, base);
	// li r8,9903
	ctx.r8.s64 = 9903;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x8813fdd8
	ctx.lr = 0x8804987C;
	sub_8813FDD8(ctx, base);
	// li r8,9904
	ctx.r8.s64 = 9904;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x8813fdd8
	ctx.lr = 0x88049898;
	sub_8813FDD8(ctx, base);
	// li r8,9905
	ctx.r8.s64 = 9905;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x8813fdd8
	ctx.lr = 0x880498B4;
	sub_8813FDD8(ctx, base);
	// li r8,9906
	ctx.r8.s64 = 9906;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,533
	ctx.r3.s64 = 533;
	// bl 0x8813fdd8
	ctx.lr = 0x880498D0;
	sub_8813FDD8(ctx, base);
	// li r8,9907
	ctx.r8.s64 = 9907;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,533
	ctx.r3.s64 = 533;
	// bl 0x8813fdd8
	ctx.lr = 0x880498EC;
	sub_8813FDD8(ctx, base);
	// li r8,9908
	ctx.r8.s64 = 9908;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,533
	ctx.r3.s64 = 533;
	// bl 0x8813fdd8
	ctx.lr = 0x88049908;
	sub_8813FDD8(ctx, base);
	// li r8,9909
	ctx.r8.s64 = 9909;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,533
	ctx.r3.s64 = 533;
	// bl 0x8813fdd8
	ctx.lr = 0x88049924;
	sub_8813FDD8(ctx, base);
	// li r8,9910
	ctx.r8.s64 = 9910;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,534
	ctx.r3.s64 = 534;
	// bl 0x8813fdd8
	ctx.lr = 0x88049940;
	sub_8813FDD8(ctx, base);
	// li r8,9911
	ctx.r8.s64 = 9911;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,534
	ctx.r3.s64 = 534;
	// bl 0x8813fdd8
	ctx.lr = 0x8804995C;
	sub_8813FDD8(ctx, base);
	// li r8,9912
	ctx.r8.s64 = 9912;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,534
	ctx.r3.s64 = 534;
	// bl 0x8813fdd8
	ctx.lr = 0x88049978;
	sub_8813FDD8(ctx, base);
	// li r8,9913
	ctx.r8.s64 = 9913;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,534
	ctx.r3.s64 = 534;
	// bl 0x8813fdd8
	ctx.lr = 0x88049994;
	sub_8813FDD8(ctx, base);
	// li r8,9914
	ctx.r8.s64 = 9914;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,535
	ctx.r3.s64 = 535;
	// bl 0x8813fdd8
	ctx.lr = 0x880499B0;
	sub_8813FDD8(ctx, base);
	// li r8,9915
	ctx.r8.s64 = 9915;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,535
	ctx.r3.s64 = 535;
	// bl 0x8813fdd8
	ctx.lr = 0x880499CC;
	sub_8813FDD8(ctx, base);
	// li r8,9916
	ctx.r8.s64 = 9916;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,535
	ctx.r3.s64 = 535;
	// bl 0x8813fdd8
	ctx.lr = 0x880499E8;
	sub_8813FDD8(ctx, base);
	// li r8,9917
	ctx.r8.s64 = 9917;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,535
	ctx.r3.s64 = 535;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A04;
	sub_8813FDD8(ctx, base);
	// li r8,9918
	ctx.r8.s64 = 9918;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A20;
	sub_8813FDD8(ctx, base);
	// li r8,9919
	ctx.r8.s64 = 9919;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A3C;
	sub_8813FDD8(ctx, base);
	// li r8,9920
	ctx.r8.s64 = 9920;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A58;
	sub_8813FDD8(ctx, base);
	// li r8,9921
	ctx.r8.s64 = 9921;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A74;
	sub_8813FDD8(ctx, base);
	// li r8,9922
	ctx.r8.s64 = 9922;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049A90;
	sub_8813FDD8(ctx, base);
	// li r8,9923
	ctx.r8.s64 = 9923;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049AAC;
	sub_8813FDD8(ctx, base);
	// li r8,9924
	ctx.r8.s64 = 9924;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049AC8;
	sub_8813FDD8(ctx, base);
	// li r8,9925
	ctx.r8.s64 = 9925;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049AE4;
	sub_8813FDD8(ctx, base);
	// li r8,9926
	ctx.r8.s64 = 9926;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B00;
	sub_8813FDD8(ctx, base);
	// li r8,9927
	ctx.r8.s64 = 9927;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B1C;
	sub_8813FDD8(ctx, base);
	// li r8,9928
	ctx.r8.s64 = 9928;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B38;
	sub_8813FDD8(ctx, base);
	// li r8,9929
	ctx.r8.s64 = 9929;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B54;
	sub_8813FDD8(ctx, base);
	// li r8,9930
	ctx.r8.s64 = 9930;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B70;
	sub_8813FDD8(ctx, base);
	// li r8,9931
	ctx.r8.s64 = 9931;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049B8C;
	sub_8813FDD8(ctx, base);
	// li r8,9932
	ctx.r8.s64 = 9932;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049BA8;
	sub_8813FDD8(ctx, base);
	// li r8,9933
	ctx.r8.s64 = 9933;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,536
	ctx.r3.s64 = 536;
	// bl 0x8813fdd8
	ctx.lr = 0x88049BC4;
	sub_8813FDD8(ctx, base);
	// li r8,9934
	ctx.r8.s64 = 9934;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049BE0;
	sub_8813FDD8(ctx, base);
	// li r8,9935
	ctx.r8.s64 = 9935;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049BFC;
	sub_8813FDD8(ctx, base);
	// li r8,9936
	ctx.r8.s64 = 9936;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049C18;
	sub_8813FDD8(ctx, base);
	// li r8,9937
	ctx.r8.s64 = 9937;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049C34;
	sub_8813FDD8(ctx, base);
	// li r8,9938
	ctx.r8.s64 = 9938;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049C50;
	sub_8813FDD8(ctx, base);
	// li r8,9939
	ctx.r8.s64 = 9939;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049C6C;
	sub_8813FDD8(ctx, base);
	// li r8,9940
	ctx.r8.s64 = 9940;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049C88;
	sub_8813FDD8(ctx, base);
	// li r8,9941
	ctx.r8.s64 = 9941;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049CA4;
	sub_8813FDD8(ctx, base);
	// li r8,9942
	ctx.r8.s64 = 9942;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049CC0;
	sub_8813FDD8(ctx, base);
	// li r8,9943
	ctx.r8.s64 = 9943;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049CDC;
	sub_8813FDD8(ctx, base);
	// li r8,9944
	ctx.r8.s64 = 9944;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049CF8;
	sub_8813FDD8(ctx, base);
	// li r8,9945
	ctx.r8.s64 = 9945;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049D14;
	sub_8813FDD8(ctx, base);
	// li r8,9946
	ctx.r8.s64 = 9946;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049D30;
	sub_8813FDD8(ctx, base);
	// li r8,9947
	ctx.r8.s64 = 9947;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049D4C;
	sub_8813FDD8(ctx, base);
	// li r8,9948
	ctx.r8.s64 = 9948;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049D68;
	sub_8813FDD8(ctx, base);
	// li r8,9949
	ctx.r8.s64 = 9949;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,537
	ctx.r3.s64 = 537;
	// bl 0x8813fdd8
	ctx.lr = 0x88049D84;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88051120) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88051128;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// ori r29,r11,43691
	ctx.r29.u64 = ctx.r11.u64 | 43691;
loc_8805113C:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r9,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r4,r31,10404
	ctx.r4.s64 = ctx.r31.s64 + 10404;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,72
	ctx.r7.s64 = 72;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x8813fdd8
	ctx.lr = 0x88051184;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8805113c
	if (ctx.cr6.lt) goto loc_8805113C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051194:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r9,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r4,r31,10413
	ctx.r4.s64 = ctx.r31.s64 + 10413;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,72
	ctx.r7.s64 = 72;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x8813fdd8
	ctx.lr = 0x880511DC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x88051194
	if (ctx.cr6.lt) goto loc_88051194;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880511EC:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r9,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r4,r31,10422
	ctx.r4.s64 = ctx.r31.s64 + 10422;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,72
	ctx.r7.s64 = 72;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8813fdd8
	ctx.lr = 0x88051234;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x880511ec
	if (ctx.cr6.lt) goto loc_880511EC;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// ori r30,r11,52429
	ctx.r30.u64 = ctx.r11.u64 | 52429;
loc_88051250:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r28
	ctx.r11.u64 = uint32_t(ctx.r28.u32 ? ctx.r31.u32 / ctx.r28.u32 : 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r7,r31,10428
	ctx.r7.s64 = ctx.r31.s64 + 10428;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// rlwinm r5,r9,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// rlwinm r4,r4,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFF0;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8813fdd8
	ctx.lr = 0x8805129C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x88051250
	if (ctx.cr6.lt) goto loc_88051250;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880512AC:
	// rlwinm r11,r31,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x10;
	// addi r10,r31,10446
	ctx.r10.s64 = ctx.r31.s64 + 10446;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r5,r31,3,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFF0;
	// li r3,110
	ctx.r3.s64 = 110;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x880512D4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x880512ac
	if (ctx.cr6.lt) goto loc_880512AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880512E8:
	// addi r11,r30,10462
	ctx.r11.s64 = ctx.r30.s64 + 10462;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x8813fdd8
	ctx.lr = 0x88051308;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// blt cr6,0x880512e8
	if (ctx.cr6.lt) goto loc_880512E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,128
	ctx.r31.s64 = 128;
loc_88051320:
	// addi r11,r30,10470
	ctx.r11.s64 = ctx.r30.s64 + 10470;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x8813fdd8
	ctx.lr = 0x88051340;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88051320
	if (ctx.cr6.lt) goto loc_88051320;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051354:
	// clrlwi r10,r31,30
	ctx.r10.u64 = ctx.r31.u32 & 0x3;
	// rlwinm r11,r31,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xC;
	// rlwinm r9,r31,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,10478
	ctx.r3.s64 = ctx.r31.s64 + 10478;
	// mulli r11,r9,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(88));
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x8813fdd8
	ctx.lr = 0x88051388;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x88051354
	if (ctx.cr6.lt) goto loc_88051354;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051398:
	// rlwinm r11,r31,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x2;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r9,r31,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r31,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r31,10486
	ctx.r3.s64 = ctx.r31.s64 + 10486;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,160
	ctx.r4.s64 = ctx.r10.s64 + 160;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// rlwinm r5,r9,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// li r3,113
	ctx.r3.s64 = 113;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x880513D8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88051398
	if (ctx.cr6.lt) goto loc_88051398;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880513EC:
	// addi r11,r30,10490
	ctx.r11.s64 = ctx.r30.s64 + 10490;
	// li r7,72
	ctx.r7.s64 = 72;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x8813fdd8
	ctx.lr = 0x8805140C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 192, ctx.xer);
	// blt cr6,0x880513ec
	if (ctx.cr6.lt) goto loc_880513EC;
	// li r8,10494
	ctx.r8.s64 = 10494;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x8813fdd8
	ctx.lr = 0x88051438;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,6
	ctx.r28.s64 = 6;
loc_88051440:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r28
	ctx.r11.u64 = uint32_t(ctx.r28.u32 ? ctx.r31.u32 / ctx.r28.u32 : 0);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,10495
	ctx.r7.s64 = ctx.r31.s64 + 10495;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,80
	ctx.r7.s64 = 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r9,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x8813fdd8
	ctx.lr = 0x8805148C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x88051440
	if (ctx.cr6.lt) goto loc_88051440;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
loc_880514A0:
	// addi r11,r30,10502
	ctx.r11.s64 = ctx.r30.s64 + 10502;
	// li r7,80
	ctx.r7.s64 = 80;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,80
	ctx.r5.s64 = 80;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x8813fdd8
	ctx.lr = 0x880514C0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x880514a0
	if (ctx.cr6.lt) goto loc_880514A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880514D8:
	// addi r11,r30,10507
	ctx.r11.s64 = ctx.r30.s64 + 10507;
	// li r7,80
	ctx.r7.s64 = 80;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x8813fdd8
	ctx.lr = 0x880514F8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// blt cr6,0x880514d8
	if (ctx.cr6.lt) goto loc_880514D8;
	// li r8,10510
	ctx.r8.s64 = 10510;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8813fdd8
	ctx.lr = 0x88051524;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_8805152C:
	// addi r11,r30,10511
	ctx.r11.s64 = ctx.r30.s64 + 10511;
	// li r7,80
	ctx.r7.s64 = 80;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8813fdd8
	ctx.lr = 0x8805154C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8805152c
	if (ctx.cr6.lt) goto loc_8805152C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051560:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r31,10514
	ctx.r9.s64 = ctx.r31.s64 + 10514;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// rlwinm r4,r31,6,24,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xC0;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8813fdd8
	ctx.lr = 0x8805158C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x88051560
	if (ctx.cr6.lt) goto loc_88051560;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805159C:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r9,r31,r28
	ctx.r9.u64 = uint32_t(ctx.r28.u32 ? ctx.r31.u32 / ctx.r28.u32 : 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r9,56
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r31,10519
	ctx.r8.s64 = ctx.r31.s64 + 10519;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r11,r4,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r4.u64;
	// li r7,56
	ctx.r7.s64 = 56;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,40
	ctx.r6.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x880515E4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8805159c
	if (ctx.cr6.lt) goto loc_8805159C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,80
	ctx.r31.s64 = 80;
loc_880515F8:
	// addi r11,r30,10527
	ctx.r11.s64 = ctx.r30.s64 + 10527;
	// li r7,56
	ctx.r7.s64 = 56;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,56
	ctx.r5.s64 = 56;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x88051618;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x880515f8
	if (ctx.cr6.lt) goto loc_880515F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051630:
	// addi r11,r30,10531
	ctx.r11.s64 = ctx.r30.s64 + 10531;
	// li r7,56
	ctx.r7.s64 = 56;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,112
	ctx.r5.s64 = 112;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x88051650;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x88051630
	if (ctx.cr6.lt) goto loc_88051630;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051668:
	// addi r11,r30,10535
	ctx.r11.s64 = ctx.r30.s64 + 10535;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x8813fdd8
	ctx.lr = 0x88051688;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88051668
	if (ctx.cr6.lt) goto loc_88051668;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880516A0:
	// addi r11,r30,10543
	ctx.r11.s64 = ctx.r30.s64 + 10543;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x8813fdd8
	ctx.lr = 0x880516C0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x880516a0
	if (ctx.cr6.lt) goto loc_880516A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880516D8:
	// addi r11,r30,10551
	ctx.r11.s64 = ctx.r30.s64 + 10551;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,96
	ctx.r5.s64 = 96;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x8813fdd8
	ctx.lr = 0x880516F8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x880516d8
	if (ctx.cr6.lt) goto loc_880516D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051710:
	// addi r11,r30,10559
	ctx.r11.s64 = ctx.r30.s64 + 10559;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x88051730;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88051710
	if (ctx.cr6.lt) goto loc_88051710;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051748:
	// addi r11,r30,10567
	ctx.r11.s64 = ctx.r30.s64 + 10567;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x88051768;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88051748
	if (ctx.cr6.lt) goto loc_88051748;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051780:
	// addi r11,r30,10575
	ctx.r11.s64 = ctx.r30.s64 + 10575;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,119
	ctx.r3.s64 = 119;
	// bl 0x8813fdd8
	ctx.lr = 0x880517A0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88051780
	if (ctx.cr6.lt) goto loc_88051780;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880517B4:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r31,30
	ctx.r10.u64 = ctx.r31.u32 & 0x3;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r8,r31,10583
	ctx.r8.s64 = ctx.r31.s64 + 10583;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// rlwinm r5,r9,5,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFE0;
	// li r3,114
	ctx.r3.s64 = 114;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// bl 0x8813fdd8
	ctx.lr = 0x880517EC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880517b4
	if (ctx.cr6.lt) goto loc_880517B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880517FC:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// rlwinm r10,r31,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x6;
	// rlwinm r9,r31,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,152
	ctx.r4.s64 = ctx.r10.s64 + 152;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r31,10591
	ctx.r11.s64 = ctx.r31.s64 + 10591;
	// rlwinm r5,r3,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r3,115
	ctx.r3.s64 = 115;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88051840;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880517fc
	if (ctx.cr6.lt) goto loc_880517FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051850:
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r31,1,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFC;
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// addi r4,r31,10599
	ctx.r4.s64 = ctx.r31.s64 + 10599;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,116
	ctx.r3.s64 = 116;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// bl 0x8813fdd8
	ctx.lr = 0x8805188C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x88051850
	if (ctx.cr6.lt) goto loc_88051850;
	// li r8,10605
	ctx.r8.s64 = 10605;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8813fdd8
	ctx.lr = 0x880518B4;
	sub_8813FDD8(ctx, base);
	// li r8,10606
	ctx.r8.s64 = 10606;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8813fdd8
	ctx.lr = 0x880518D0;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_880518D4:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// addi r4,r31,10607
	ctx.r4.s64 = ctx.r31.s64 + 10607;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// rlwinm r4,r3,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFF0;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8813fdd8
	ctx.lr = 0x8805191C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x880518d4
	if (ctx.cr6.lt) goto loc_880518D4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805192C:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// addi r4,r31,10616
	ctx.r4.s64 = ctx.r31.s64 + 10616;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051974;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8805192c
	if (ctx.cr6.lt) goto loc_8805192C;
	// li r8,10625
	ctx.r8.s64 = 10625;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,118
	ctx.r3.s64 = 118;
	// bl 0x8813fdd8
	ctx.lr = 0x8805199C;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_880519A0:
	// rlwinm r11,r31,3,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFE0;
	// addi r10,r31,10626
	ctx.r10.s64 = ctx.r31.s64 + 10626;
	// addi r9,r11,184
	ctx.r9.s64 = ctx.r11.s64 + 184;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r4,r31,6,24,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xC0;
	// li r3,119
	ctx.r3.s64 = 119;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x880519C8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880519a0
	if (ctx.cr6.lt) goto loc_880519A0;
	// li r8,10634
	ctx.r8.s64 = 10634;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8813fdd8
	ctx.lr = 0x880519F0;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_880519F4:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r31,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x6;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,144
	ctx.r11.s64 = ctx.r9.s64 + 144;
	// addi r10,r31,10635
	ctx.r10.s64 = ctx.r31.s64 + 10635;
	// rlwinm r4,r5,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r3,120
	ctx.r3.s64 = 120;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88051A34;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880519f4
	if (ctx.cr6.lt) goto loc_880519F4;
	// li r8,10643
	ctx.r8.s64 = 10643;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x8813fdd8
	ctx.lr = 0x88051A5C;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051A60:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r10,r31,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x2;
	// addi r9,r31,10644
	ctx.r9.s64 = ctx.r31.s64 + 10644;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,96
	ctx.r6.s64 = 96;
	// rlwinm r5,r31,5,16,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFC0;
	// rlwinm r4,r4,5,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFE0;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8813fdd8
	ctx.lr = 0x88051A8C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88051a60
	if (ctx.cr6.lt) goto loc_88051A60;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051A9C:
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mulli r4,r10,104
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(104));
	// addi r8,r31,10648
	ctx.r8.s64 = ctx.r31.s64 + 10648;
	// li r7,64
	ctx.r7.s64 = 64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r9,6,16,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8813fdd8
	ctx.lr = 0x88051ACC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88051a9c
	if (ctx.cr6.lt) goto loc_88051A9C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88051ADC:
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r31,2,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFF8;
	// addi r4,r31,10652
	ctx.r4.s64 = ctx.r31.s64 + 10652;
	// mulli r3,r9,88
	ctx.r3.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(88));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,88
	ctx.r6.s64 = 88;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051B10;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88051adc
	if (ctx.cr6.lt) goto loc_88051ADC;
	// li r8,10656
	ctx.r8.s64 = 10656;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051B38;
	sub_8813FDD8(ctx, base);
	// li r8,10657
	ctx.r8.s64 = 10657;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051B54;
	sub_8813FDD8(ctx, base);
	// li r8,10658
	ctx.r8.s64 = 10658;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051B70;
	sub_8813FDD8(ctx, base);
	// li r8,10659
	ctx.r8.s64 = 10659;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051B8C;
	sub_8813FDD8(ctx, base);
	// li r8,10660
	ctx.r8.s64 = 10660;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,117
	ctx.r3.s64 = 117;
	// bl 0x8813fdd8
	ctx.lr = 0x88051BA8;
	sub_8813FDD8(ctx, base);
	// li r8,10661
	ctx.r8.s64 = 10661;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8813fdd8
	ctx.lr = 0x88051BC4;
	sub_8813FDD8(ctx, base);
	// li r8,10662
	ctx.r8.s64 = 10662;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051BE0;
	sub_8813FDD8(ctx, base);
	// li r8,10663
	ctx.r8.s64 = 10663;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051BFC;
	sub_8813FDD8(ctx, base);
	// li r8,10664
	ctx.r8.s64 = 10664;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051C18;
	sub_8813FDD8(ctx, base);
	// li r8,10665
	ctx.r8.s64 = 10665;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051C34;
	sub_8813FDD8(ctx, base);
	// li r8,10666
	ctx.r8.s64 = 10666;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051C50;
	sub_8813FDD8(ctx, base);
	// li r8,10667
	ctx.r8.s64 = 10667;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051C6C;
	sub_8813FDD8(ctx, base);
	// li r8,10668
	ctx.r8.s64 = 10668;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051C88;
	sub_8813FDD8(ctx, base);
	// li r8,10669
	ctx.r8.s64 = 10669;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051CA4;
	sub_8813FDD8(ctx, base);
	// li r8,10670
	ctx.r8.s64 = 10670;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051CC0;
	sub_8813FDD8(ctx, base);
	// li r8,10671
	ctx.r8.s64 = 10671;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051CDC;
	sub_8813FDD8(ctx, base);
	// li r8,10672
	ctx.r8.s64 = 10672;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051CF8;
	sub_8813FDD8(ctx, base);
	// li r8,10673
	ctx.r8.s64 = 10673;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,121
	ctx.r3.s64 = 121;
	// bl 0x8813fdd8
	ctx.lr = 0x88051D14;
	sub_8813FDD8(ctx, base);
	// li r8,10674
	ctx.r8.s64 = 10674;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051D30;
	sub_8813FDD8(ctx, base);
	// li r8,10675
	ctx.r8.s64 = 10675;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051D4C;
	sub_8813FDD8(ctx, base);
	// li r8,10676
	ctx.r8.s64 = 10676;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051D68;
	sub_8813FDD8(ctx, base);
	// li r8,10677
	ctx.r8.s64 = 10677;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051D84;
	sub_8813FDD8(ctx, base);
	// li r8,10678
	ctx.r8.s64 = 10678;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051DA0;
	sub_8813FDD8(ctx, base);
	// li r8,10679
	ctx.r8.s64 = 10679;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051DBC;
	sub_8813FDD8(ctx, base);
	// li r8,10680
	ctx.r8.s64 = 10680;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051DD8;
	sub_8813FDD8(ctx, base);
	// li r8,10681
	ctx.r8.s64 = 10681;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051DF4;
	sub_8813FDD8(ctx, base);
	// li r8,10682
	ctx.r8.s64 = 10682;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E10;
	sub_8813FDD8(ctx, base);
	// li r8,10683
	ctx.r8.s64 = 10683;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E2C;
	sub_8813FDD8(ctx, base);
	// li r8,10684
	ctx.r8.s64 = 10684;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E48;
	sub_8813FDD8(ctx, base);
	// li r8,10685
	ctx.r8.s64 = 10685;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E64;
	sub_8813FDD8(ctx, base);
	// li r8,10686
	ctx.r8.s64 = 10686;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E80;
	sub_8813FDD8(ctx, base);
	// li r8,10687
	ctx.r8.s64 = 10687;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051E9C;
	sub_8813FDD8(ctx, base);
	// li r8,10688
	ctx.r8.s64 = 10688;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051EB8;
	sub_8813FDD8(ctx, base);
	// li r8,10689
	ctx.r8.s64 = 10689;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051ED4;
	sub_8813FDD8(ctx, base);
	// li r8,10690
	ctx.r8.s64 = 10690;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051EF0;
	sub_8813FDD8(ctx, base);
	// li r8,10691
	ctx.r8.s64 = 10691;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F0C;
	sub_8813FDD8(ctx, base);
	// li r8,10692
	ctx.r8.s64 = 10692;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F28;
	sub_8813FDD8(ctx, base);
	// li r8,10693
	ctx.r8.s64 = 10693;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,123
	ctx.r3.s64 = 123;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F44;
	sub_8813FDD8(ctx, base);
	// li r8,10694
	ctx.r8.s64 = 10694;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F60;
	sub_8813FDD8(ctx, base);
	// li r8,10695
	ctx.r8.s64 = 10695;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F7C;
	sub_8813FDD8(ctx, base);
	// li r8,10696
	ctx.r8.s64 = 10696;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051F98;
	sub_8813FDD8(ctx, base);
	// li r8,10697
	ctx.r8.s64 = 10697;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051FB4;
	sub_8813FDD8(ctx, base);
	// li r8,10698
	ctx.r8.s64 = 10698;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051FD0;
	sub_8813FDD8(ctx, base);
	// li r8,10699
	ctx.r8.s64 = 10699;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88051FEC;
	sub_8813FDD8(ctx, base);
	// li r8,10700
	ctx.r8.s64 = 10700;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052008;
	sub_8813FDD8(ctx, base);
	// li r8,10701
	ctx.r8.s64 = 10701;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052024;
	sub_8813FDD8(ctx, base);
	// li r8,10702
	ctx.r8.s64 = 10702;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052040;
	sub_8813FDD8(ctx, base);
	// li r8,10703
	ctx.r8.s64 = 10703;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x8805205C;
	sub_8813FDD8(ctx, base);
	// li r8,10704
	ctx.r8.s64 = 10704;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052078;
	sub_8813FDD8(ctx, base);
	// li r8,10705
	ctx.r8.s64 = 10705;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052094;
	sub_8813FDD8(ctx, base);
	// li r8,10706
	ctx.r8.s64 = 10706;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x880520B0;
	sub_8813FDD8(ctx, base);
	// li r8,10707
	ctx.r8.s64 = 10707;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x880520CC;
	sub_8813FDD8(ctx, base);
	// li r8,10708
	ctx.r8.s64 = 10708;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x880520E8;
	sub_8813FDD8(ctx, base);
	// li r8,10709
	ctx.r8.s64 = 10709;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052104;
	sub_8813FDD8(ctx, base);
	// li r8,10710
	ctx.r8.s64 = 10710;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x88052120;
	sub_8813FDD8(ctx, base);
	// li r8,10711
	ctx.r8.s64 = 10711;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x8813fdd8
	ctx.lr = 0x8805213C;
	sub_8813FDD8(ctx, base);
	// li r8,10712
	ctx.r8.s64 = 10712;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052158;
	sub_8813FDD8(ctx, base);
	// li r8,10713
	ctx.r8.s64 = 10713;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052174;
	sub_8813FDD8(ctx, base);
	// li r8,10714
	ctx.r8.s64 = 10714;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052190;
	sub_8813FDD8(ctx, base);
	// li r8,10715
	ctx.r8.s64 = 10715;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880521AC;
	sub_8813FDD8(ctx, base);
	// li r8,10716
	ctx.r8.s64 = 10716;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880521C8;
	sub_8813FDD8(ctx, base);
	// li r8,10717
	ctx.r8.s64 = 10717;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880521E4;
	sub_8813FDD8(ctx, base);
	// li r8,10718
	ctx.r8.s64 = 10718;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052200;
	sub_8813FDD8(ctx, base);
	// li r8,10719
	ctx.r8.s64 = 10719;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x8805221C;
	sub_8813FDD8(ctx, base);
	// li r8,10720
	ctx.r8.s64 = 10720;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052238;
	sub_8813FDD8(ctx, base);
	// li r8,10721
	ctx.r8.s64 = 10721;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052254;
	sub_8813FDD8(ctx, base);
	// li r8,10722
	ctx.r8.s64 = 10722;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052270;
	sub_8813FDD8(ctx, base);
	// li r8,10723
	ctx.r8.s64 = 10723;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x8805228C;
	sub_8813FDD8(ctx, base);
	// li r8,10724
	ctx.r8.s64 = 10724;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880522A8;
	sub_8813FDD8(ctx, base);
	// li r8,10725
	ctx.r8.s64 = 10725;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880522C4;
	sub_8813FDD8(ctx, base);
	// li r8,10726
	ctx.r8.s64 = 10726;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880522E0;
	sub_8813FDD8(ctx, base);
	// li r8,10727
	ctx.r8.s64 = 10727;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x880522FC;
	sub_8813FDD8(ctx, base);
	// li r8,10728
	ctx.r8.s64 = 10728;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x8813fdd8
	ctx.lr = 0x88052318;
	sub_8813FDD8(ctx, base);
	// li r8,10729
	ctx.r8.s64 = 10729;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052334;
	sub_8813FDD8(ctx, base);
	// li r8,10730
	ctx.r8.s64 = 10730;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052350;
	sub_8813FDD8(ctx, base);
	// li r8,10731
	ctx.r8.s64 = 10731;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x8805236C;
	sub_8813FDD8(ctx, base);
	// li r8,10732
	ctx.r8.s64 = 10732;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052388;
	sub_8813FDD8(ctx, base);
	// li r8,10733
	ctx.r8.s64 = 10733;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880523A4;
	sub_8813FDD8(ctx, base);
	// li r8,10734
	ctx.r8.s64 = 10734;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880523C0;
	sub_8813FDD8(ctx, base);
	// li r8,10735
	ctx.r8.s64 = 10735;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880523DC;
	sub_8813FDD8(ctx, base);
	// li r8,10736
	ctx.r8.s64 = 10736;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880523F8;
	sub_8813FDD8(ctx, base);
	// li r8,10737
	ctx.r8.s64 = 10737;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052414;
	sub_8813FDD8(ctx, base);
	// li r8,10738
	ctx.r8.s64 = 10738;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052430;
	sub_8813FDD8(ctx, base);
	// li r8,10739
	ctx.r8.s64 = 10739;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x8805244C;
	sub_8813FDD8(ctx, base);
	// li r8,10740
	ctx.r8.s64 = 10740;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052468;
	sub_8813FDD8(ctx, base);
	// li r8,10741
	ctx.r8.s64 = 10741;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052484;
	sub_8813FDD8(ctx, base);
	// li r8,10742
	ctx.r8.s64 = 10742;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880524A0;
	sub_8813FDD8(ctx, base);
	// li r8,10743
	ctx.r8.s64 = 10743;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880524BC;
	sub_8813FDD8(ctx, base);
	// li r8,10744
	ctx.r8.s64 = 10744;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880524D8;
	sub_8813FDD8(ctx, base);
	// li r8,10745
	ctx.r8.s64 = 10745;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x880524F4;
	sub_8813FDD8(ctx, base);
	// li r8,10746
	ctx.r8.s64 = 10746;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052510;
	sub_8813FDD8(ctx, base);
	// li r8,10747
	ctx.r8.s64 = 10747;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x8805252C;
	sub_8813FDD8(ctx, base);
	// li r8,10748
	ctx.r8.s64 = 10748;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052548;
	sub_8813FDD8(ctx, base);
	// li r8,10749
	ctx.r8.s64 = 10749;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8813fdd8
	ctx.lr = 0x88052564;
	sub_8813FDD8(ctx, base);
	// li r8,10750
	ctx.r8.s64 = 10750;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052580;
	sub_8813FDD8(ctx, base);
	// li r8,10751
	ctx.r8.s64 = 10751;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x8805259C;
	sub_8813FDD8(ctx, base);
	// li r8,10752
	ctx.r8.s64 = 10752;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880525B8;
	sub_8813FDD8(ctx, base);
	// li r8,10753
	ctx.r8.s64 = 10753;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880525D4;
	sub_8813FDD8(ctx, base);
	// li r8,10754
	ctx.r8.s64 = 10754;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880525F0;
	sub_8813FDD8(ctx, base);
	// li r8,10755
	ctx.r8.s64 = 10755;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x8805260C;
	sub_8813FDD8(ctx, base);
	// li r8,10756
	ctx.r8.s64 = 10756;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052628;
	sub_8813FDD8(ctx, base);
	// li r8,10757
	ctx.r8.s64 = 10757;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052644;
	sub_8813FDD8(ctx, base);
	// li r8,10758
	ctx.r8.s64 = 10758;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052660;
	sub_8813FDD8(ctx, base);
	// li r8,10759
	ctx.r8.s64 = 10759;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x8805267C;
	sub_8813FDD8(ctx, base);
	// li r8,10760
	ctx.r8.s64 = 10760;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052698;
	sub_8813FDD8(ctx, base);
	// li r8,10761
	ctx.r8.s64 = 10761;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880526B4;
	sub_8813FDD8(ctx, base);
	// li r8,10762
	ctx.r8.s64 = 10762;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880526D0;
	sub_8813FDD8(ctx, base);
	// li r8,10763
	ctx.r8.s64 = 10763;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x880526EC;
	sub_8813FDD8(ctx, base);
	// li r8,10764
	ctx.r8.s64 = 10764;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052708;
	sub_8813FDD8(ctx, base);
	// li r8,10765
	ctx.r8.s64 = 10765;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052724;
	sub_8813FDD8(ctx, base);
	// li r8,10766
	ctx.r8.s64 = 10766;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x88052740;
	sub_8813FDD8(ctx, base);
	// li r8,10767
	ctx.r8.s64 = 10767;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8813fdd8
	ctx.lr = 0x8805275C;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_88052760:
	// addi r11,r31,10437
	ctx.r11.s64 = ctx.r31.s64 + 10437;
	// li r7,64
	ctx.r7.s64 = 64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r5,r31,4,16,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFC0;
	// rlwinm r4,r31,6,24,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xC0;
	// li r3,143
	ctx.r3.s64 = 143;
	// bl 0x8813fdd8
	ctx.lr = 0x88052780;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x88052760
	if (ctx.cr6.lt) goto loc_88052760;
	// li r8,10768
	ctx.r8.s64 = 10768;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880527A8;
	sub_8813FDD8(ctx, base);
	// li r8,10769
	ctx.r8.s64 = 10769;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880527C4;
	sub_8813FDD8(ctx, base);
	// li r8,10770
	ctx.r8.s64 = 10770;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880527E0;
	sub_8813FDD8(ctx, base);
	// li r8,10771
	ctx.r8.s64 = 10771;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880527FC;
	sub_8813FDD8(ctx, base);
	// li r8,10772
	ctx.r8.s64 = 10772;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052818;
	sub_8813FDD8(ctx, base);
	// li r8,10773
	ctx.r8.s64 = 10773;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052834;
	sub_8813FDD8(ctx, base);
	// li r8,10774
	ctx.r8.s64 = 10774;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052850;
	sub_8813FDD8(ctx, base);
	// li r8,10775
	ctx.r8.s64 = 10775;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x8805286C;
	sub_8813FDD8(ctx, base);
	// li r8,10776
	ctx.r8.s64 = 10776;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052888;
	sub_8813FDD8(ctx, base);
	// li r8,10777
	ctx.r8.s64 = 10777;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880528A4;
	sub_8813FDD8(ctx, base);
	// li r8,10778
	ctx.r8.s64 = 10778;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880528C0;
	sub_8813FDD8(ctx, base);
	// li r8,10779
	ctx.r8.s64 = 10779;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880528DC;
	sub_8813FDD8(ctx, base);
	// li r8,10780
	ctx.r8.s64 = 10780;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880528F8;
	sub_8813FDD8(ctx, base);
	// li r8,10781
	ctx.r8.s64 = 10781;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052914;
	sub_8813FDD8(ctx, base);
	// li r8,10782
	ctx.r8.s64 = 10782;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052930;
	sub_8813FDD8(ctx, base);
	// li r8,10783
	ctx.r8.s64 = 10783;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x8805294C;
	sub_8813FDD8(ctx, base);
	// li r8,10784
	ctx.r8.s64 = 10784;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052968;
	sub_8813FDD8(ctx, base);
	// li r8,10785
	ctx.r8.s64 = 10785;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052984;
	sub_8813FDD8(ctx, base);
	// li r8,10786
	ctx.r8.s64 = 10786;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880529A0;
	sub_8813FDD8(ctx, base);
	// li r8,10787
	ctx.r8.s64 = 10787;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880529BC;
	sub_8813FDD8(ctx, base);
	// li r8,10788
	ctx.r8.s64 = 10788;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880529D8;
	sub_8813FDD8(ctx, base);
	// li r8,10789
	ctx.r8.s64 = 10789;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x880529F4;
	sub_8813FDD8(ctx, base);
	// li r8,10790
	ctx.r8.s64 = 10790;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A10;
	sub_8813FDD8(ctx, base);
	// li r8,10791
	ctx.r8.s64 = 10791;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A2C;
	sub_8813FDD8(ctx, base);
	// li r8,10792
	ctx.r8.s64 = 10792;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A48;
	sub_8813FDD8(ctx, base);
	// li r8,10793
	ctx.r8.s64 = 10793;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A64;
	sub_8813FDD8(ctx, base);
	// li r8,10794
	ctx.r8.s64 = 10794;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A80;
	sub_8813FDD8(ctx, base);
	// li r8,10795
	ctx.r8.s64 = 10795;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052A9C;
	sub_8813FDD8(ctx, base);
	// li r8,10796
	ctx.r8.s64 = 10796;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052AB8;
	sub_8813FDD8(ctx, base);
	// li r8,10797
	ctx.r8.s64 = 10797;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052AD4;
	sub_8813FDD8(ctx, base);
	// li r8,10798
	ctx.r8.s64 = 10798;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052AF0;
	sub_8813FDD8(ctx, base);
	// li r8,10799
	ctx.r8.s64 = 10799;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B0C;
	sub_8813FDD8(ctx, base);
	// li r8,10800
	ctx.r8.s64 = 10800;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B28;
	sub_8813FDD8(ctx, base);
	// li r8,10801
	ctx.r8.s64 = 10801;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B44;
	sub_8813FDD8(ctx, base);
	// li r8,10802
	ctx.r8.s64 = 10802;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B60;
	sub_8813FDD8(ctx, base);
	// li r8,10803
	ctx.r8.s64 = 10803;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B7C;
	sub_8813FDD8(ctx, base);
	// li r8,10804
	ctx.r8.s64 = 10804;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052B98;
	sub_8813FDD8(ctx, base);
	// li r8,10805
	ctx.r8.s64 = 10805;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052BB4;
	sub_8813FDD8(ctx, base);
	// li r8,10806
	ctx.r8.s64 = 10806;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052BD0;
	sub_8813FDD8(ctx, base);
	// li r8,10807
	ctx.r8.s64 = 10807;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052BEC;
	sub_8813FDD8(ctx, base);
	// li r8,10808
	ctx.r8.s64 = 10808;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C08;
	sub_8813FDD8(ctx, base);
	// li r8,10809
	ctx.r8.s64 = 10809;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C24;
	sub_8813FDD8(ctx, base);
	// li r8,10810
	ctx.r8.s64 = 10810;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C40;
	sub_8813FDD8(ctx, base);
	// li r8,10811
	ctx.r8.s64 = 10811;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C5C;
	sub_8813FDD8(ctx, base);
	// li r8,10812
	ctx.r8.s64 = 10812;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C78;
	sub_8813FDD8(ctx, base);
	// li r8,10813
	ctx.r8.s64 = 10813;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052C94;
	sub_8813FDD8(ctx, base);
	// li r8,10814
	ctx.r8.s64 = 10814;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052CB0;
	sub_8813FDD8(ctx, base);
	// li r8,10815
	ctx.r8.s64 = 10815;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052CCC;
	sub_8813FDD8(ctx, base);
	// li r8,10816
	ctx.r8.s64 = 10816;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052CE8;
	sub_8813FDD8(ctx, base);
	// li r8,10817
	ctx.r8.s64 = 10817;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D04;
	sub_8813FDD8(ctx, base);
	// li r8,10818
	ctx.r8.s64 = 10818;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D20;
	sub_8813FDD8(ctx, base);
	// li r8,10819
	ctx.r8.s64 = 10819;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D3C;
	sub_8813FDD8(ctx, base);
	// li r8,10820
	ctx.r8.s64 = 10820;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D58;
	sub_8813FDD8(ctx, base);
	// li r8,10821
	ctx.r8.s64 = 10821;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D74;
	sub_8813FDD8(ctx, base);
	// li r8,10822
	ctx.r8.s64 = 10822;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x8813fdd8
	ctx.lr = 0x88052D90;
	sub_8813FDD8(ctx, base);
	// li r8,10823
	ctx.r8.s64 = 10823;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052DAC;
	sub_8813FDD8(ctx, base);
	// li r8,10824
	ctx.r8.s64 = 10824;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052DC8;
	sub_8813FDD8(ctx, base);
	// li r8,10825
	ctx.r8.s64 = 10825;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052DE4;
	sub_8813FDD8(ctx, base);
	// li r8,10826
	ctx.r8.s64 = 10826;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E00;
	sub_8813FDD8(ctx, base);
	// li r8,10827
	ctx.r8.s64 = 10827;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E1C;
	sub_8813FDD8(ctx, base);
	// li r8,10828
	ctx.r8.s64 = 10828;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E38;
	sub_8813FDD8(ctx, base);
	// li r8,10829
	ctx.r8.s64 = 10829;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E54;
	sub_8813FDD8(ctx, base);
	// li r8,10830
	ctx.r8.s64 = 10830;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E70;
	sub_8813FDD8(ctx, base);
	// li r8,10831
	ctx.r8.s64 = 10831;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052E8C;
	sub_8813FDD8(ctx, base);
	// li r8,10832
	ctx.r8.s64 = 10832;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052EA8;
	sub_8813FDD8(ctx, base);
	// li r8,10833
	ctx.r8.s64 = 10833;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052EC4;
	sub_8813FDD8(ctx, base);
	// li r8,10834
	ctx.r8.s64 = 10834;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052EE0;
	sub_8813FDD8(ctx, base);
	// li r8,10835
	ctx.r8.s64 = 10835;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052EFC;
	sub_8813FDD8(ctx, base);
	// li r8,10836
	ctx.r8.s64 = 10836;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052F18;
	sub_8813FDD8(ctx, base);
	// li r8,10837
	ctx.r8.s64 = 10837;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052F34;
	sub_8813FDD8(ctx, base);
	// li r8,10838
	ctx.r8.s64 = 10838;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052F50;
	sub_8813FDD8(ctx, base);
	// li r8,10839
	ctx.r8.s64 = 10839;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052F6C;
	sub_8813FDD8(ctx, base);
	// li r8,10840
	ctx.r8.s64 = 10840;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052F88;
	sub_8813FDD8(ctx, base);
	// li r8,10841
	ctx.r8.s64 = 10841;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052FA4;
	sub_8813FDD8(ctx, base);
	// li r8,10842
	ctx.r8.s64 = 10842;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x8813fdd8
	ctx.lr = 0x88052FC0;
	sub_8813FDD8(ctx, base);
	// li r8,10843
	ctx.r8.s64 = 10843;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052FDC;
	sub_8813FDD8(ctx, base);
	// li r8,10844
	ctx.r8.s64 = 10844;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88052FF8;
	sub_8813FDD8(ctx, base);
	// li r8,10845
	ctx.r8.s64 = 10845;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88053014;
	sub_8813FDD8(ctx, base);
	// li r8,10846
	ctx.r8.s64 = 10846;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,129
	ctx.r3.s64 = 129;
	// bl 0x8813fdd8
	ctx.lr = 0x88053030;
	sub_8813FDD8(ctx, base);
	// li r8,10847
	ctx.r8.s64 = 10847;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x8805304C;
	sub_8813FDD8(ctx, base);
	// li r8,10848
	ctx.r8.s64 = 10848;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053068;
	sub_8813FDD8(ctx, base);
	// li r8,10849
	ctx.r8.s64 = 10849;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053084;
	sub_8813FDD8(ctx, base);
	// li r8,10850
	ctx.r8.s64 = 10850;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x880530A0;
	sub_8813FDD8(ctx, base);
	// li r8,10851
	ctx.r8.s64 = 10851;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x880530BC;
	sub_8813FDD8(ctx, base);
	// li r8,10852
	ctx.r8.s64 = 10852;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x880530D8;
	sub_8813FDD8(ctx, base);
	// li r8,10853
	ctx.r8.s64 = 10853;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x880530F4;
	sub_8813FDD8(ctx, base);
	// li r8,10854
	ctx.r8.s64 = 10854;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053110;
	sub_8813FDD8(ctx, base);
	// li r8,10855
	ctx.r8.s64 = 10855;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x8805312C;
	sub_8813FDD8(ctx, base);
	// li r8,10856
	ctx.r8.s64 = 10856;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x88053148;
	sub_8813FDD8(ctx, base);
	// li r8,10857
	ctx.r8.s64 = 10857;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x88053164;
	sub_8813FDD8(ctx, base);
	// li r8,10858
	ctx.r8.s64 = 10858;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x88053180;
	sub_8813FDD8(ctx, base);
	// li r8,10859
	ctx.r8.s64 = 10859;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x8805319C;
	sub_8813FDD8(ctx, base);
	// li r8,10860
	ctx.r8.s64 = 10860;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x880531B8;
	sub_8813FDD8(ctx, base);
	// li r8,10861
	ctx.r8.s64 = 10861;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x880531D4;
	sub_8813FDD8(ctx, base);
	// li r8,10862
	ctx.r8.s64 = 10862;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x880531F0;
	sub_8813FDD8(ctx, base);
	// li r8,10863
	ctx.r8.s64 = 10863;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x8805320C;
	sub_8813FDD8(ctx, base);
	// li r8,10864
	ctx.r8.s64 = 10864;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8813fdd8
	ctx.lr = 0x88053228;
	sub_8813FDD8(ctx, base);
	// li r8,10865
	ctx.r8.s64 = 10865;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053244;
	sub_8813FDD8(ctx, base);
	// li r8,10866
	ctx.r8.s64 = 10866;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053260;
	sub_8813FDD8(ctx, base);
	// li r8,10867
	ctx.r8.s64 = 10867;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x8805327C;
	sub_8813FDD8(ctx, base);
	// li r8,10868
	ctx.r8.s64 = 10868;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x88053298;
	sub_8813FDD8(ctx, base);
	// li r8,10869
	ctx.r8.s64 = 10869;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x8813fdd8
	ctx.lr = 0x880532B4;
	sub_8813FDD8(ctx, base);
	// li r8,10870
	ctx.r8.s64 = 10870;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x880532D0;
	sub_8813FDD8(ctx, base);
	// li r8,10871
	ctx.r8.s64 = 10871;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x880532EC;
	sub_8813FDD8(ctx, base);
	// li r8,10872
	ctx.r8.s64 = 10872;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x88053308;
	sub_8813FDD8(ctx, base);
	// li r8,10873
	ctx.r8.s64 = 10873;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x88053324;
	sub_8813FDD8(ctx, base);
	// li r8,10874
	ctx.r8.s64 = 10874;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x88053340;
	sub_8813FDD8(ctx, base);
	// li r8,10875
	ctx.r8.s64 = 10875;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x8805335C;
	sub_8813FDD8(ctx, base);
	// li r8,10876
	ctx.r8.s64 = 10876;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x88053378;
	sub_8813FDD8(ctx, base);
	// li r8,10877
	ctx.r8.s64 = 10877;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x88053394;
	sub_8813FDD8(ctx, base);
	// li r8,10878
	ctx.r8.s64 = 10878;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x880533B0;
	sub_8813FDD8(ctx, base);
	// li r8,10879
	ctx.r8.s64 = 10879;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x8813fdd8
	ctx.lr = 0x880533CC;
	sub_8813FDD8(ctx, base);
	// li r8,10880
	ctx.r8.s64 = 10880;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x880533E8;
	sub_8813FDD8(ctx, base);
	// li r8,10881
	ctx.r8.s64 = 10881;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053404;
	sub_8813FDD8(ctx, base);
	// li r8,10882
	ctx.r8.s64 = 10882;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053420;
	sub_8813FDD8(ctx, base);
	// li r8,10883
	ctx.r8.s64 = 10883;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x8805343C;
	sub_8813FDD8(ctx, base);
	// li r8,10884
	ctx.r8.s64 = 10884;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053458;
	sub_8813FDD8(ctx, base);
	// li r8,10885
	ctx.r8.s64 = 10885;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053474;
	sub_8813FDD8(ctx, base);
	// li r8,10886
	ctx.r8.s64 = 10886;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053490;
	sub_8813FDD8(ctx, base);
	// li r8,10887
	ctx.r8.s64 = 10887;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x880534AC;
	sub_8813FDD8(ctx, base);
	// li r8,10888
	ctx.r8.s64 = 10888;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x880534C8;
	sub_8813FDD8(ctx, base);
	// li r8,10889
	ctx.r8.s64 = 10889;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x880534E4;
	sub_8813FDD8(ctx, base);
	// li r8,10890
	ctx.r8.s64 = 10890;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8813fdd8
	ctx.lr = 0x88053500;
	sub_8813FDD8(ctx, base);
	// li r8,10891
	ctx.r8.s64 = 10891;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x8805351C;
	sub_8813FDD8(ctx, base);
	// li r8,10892
	ctx.r8.s64 = 10892;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x88053538;
	sub_8813FDD8(ctx, base);
	// li r8,10893
	ctx.r8.s64 = 10893;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x88053554;
	sub_8813FDD8(ctx, base);
	// li r8,10894
	ctx.r8.s64 = 10894;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x88053570;
	sub_8813FDD8(ctx, base);
	// li r8,10895
	ctx.r8.s64 = 10895;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x8805358C;
	sub_8813FDD8(ctx, base);
	// li r8,10896
	ctx.r8.s64 = 10896;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x880535A8;
	sub_8813FDD8(ctx, base);
	// li r8,10897
	ctx.r8.s64 = 10897;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x880535C4;
	sub_8813FDD8(ctx, base);
	// li r8,10898
	ctx.r8.s64 = 10898;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x880535E0;
	sub_8813FDD8(ctx, base);
	// li r8,10899
	ctx.r8.s64 = 10899;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x880535FC;
	sub_8813FDD8(ctx, base);
	// li r8,10900
	ctx.r8.s64 = 10900;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x8813fdd8
	ctx.lr = 0x88053618;
	sub_8813FDD8(ctx, base);
	// li r8,10901
	ctx.r8.s64 = 10901;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053634;
	sub_8813FDD8(ctx, base);
	// li r8,10902
	ctx.r8.s64 = 10902;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053650;
	sub_8813FDD8(ctx, base);
	// li r8,10903
	ctx.r8.s64 = 10903;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x8805366C;
	sub_8813FDD8(ctx, base);
	// li r8,10904
	ctx.r8.s64 = 10904;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053688;
	sub_8813FDD8(ctx, base);
	// li r8,10905
	ctx.r8.s64 = 10905;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x880536A4;
	sub_8813FDD8(ctx, base);
	// li r8,10906
	ctx.r8.s64 = 10906;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x880536C0;
	sub_8813FDD8(ctx, base);
	// li r8,10907
	ctx.r8.s64 = 10907;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x880536DC;
	sub_8813FDD8(ctx, base);
	// li r8,10908
	ctx.r8.s64 = 10908;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x880536F8;
	sub_8813FDD8(ctx, base);
	// li r8,10909
	ctx.r8.s64 = 10909;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053714;
	sub_8813FDD8(ctx, base);
	// li r8,10910
	ctx.r8.s64 = 10910;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053730;
	sub_8813FDD8(ctx, base);
	// li r8,10911
	ctx.r8.s64 = 10911;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x8805374C;
	sub_8813FDD8(ctx, base);
	// li r8,10912
	ctx.r8.s64 = 10912;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x8813fdd8
	ctx.lr = 0x88053768;
	sub_8813FDD8(ctx, base);
	// li r8,10913
	ctx.r8.s64 = 10913;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x88053784;
	sub_8813FDD8(ctx, base);
	// li r8,10914
	ctx.r8.s64 = 10914;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x880537A0;
	sub_8813FDD8(ctx, base);
	// li r8,10915
	ctx.r8.s64 = 10915;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x880537BC;
	sub_8813FDD8(ctx, base);
	// li r8,10916
	ctx.r8.s64 = 10916;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x880537D8;
	sub_8813FDD8(ctx, base);
	// li r8,10917
	ctx.r8.s64 = 10917;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x880537F4;
	sub_8813FDD8(ctx, base);
	// li r8,10918
	ctx.r8.s64 = 10918;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x88053810;
	sub_8813FDD8(ctx, base);
	// li r8,10919
	ctx.r8.s64 = 10919;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x8805382C;
	sub_8813FDD8(ctx, base);
	// li r8,10920
	ctx.r8.s64 = 10920;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x88053848;
	sub_8813FDD8(ctx, base);
	// li r8,10921
	ctx.r8.s64 = 10921;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x88053864;
	sub_8813FDD8(ctx, base);
	// li r8,10922
	ctx.r8.s64 = 10922;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x88053880;
	sub_8813FDD8(ctx, base);
	// li r8,10923
	ctx.r8.s64 = 10923;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x8813fdd8
	ctx.lr = 0x8805389C;
	sub_8813FDD8(ctx, base);
	// li r8,10924
	ctx.r8.s64 = 10924;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8813fdd8
	ctx.lr = 0x880538B8;
	sub_8813FDD8(ctx, base);
	// li r8,10925
	ctx.r8.s64 = 10925;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8813fdd8
	ctx.lr = 0x880538D4;
	sub_8813FDD8(ctx, base);
	// li r8,10926
	ctx.r8.s64 = 10926;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8813fdd8
	ctx.lr = 0x880538F0;
	sub_8813FDD8(ctx, base);
	// li r8,10927
	ctx.r8.s64 = 10927;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8813fdd8
	ctx.lr = 0x8805390C;
	sub_8813FDD8(ctx, base);
	// li r8,10928
	ctx.r8.s64 = 10928;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8813fdd8
	ctx.lr = 0x88053928;
	sub_8813FDD8(ctx, base);
	// li r8,10929
	ctx.r8.s64 = 10929;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x8813fdd8
	ctx.lr = 0x88053944;
	sub_8813FDD8(ctx, base);
	// li r8,10930
	ctx.r8.s64 = 10930;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x8813fdd8
	ctx.lr = 0x88053960;
	sub_8813FDD8(ctx, base);
	// li r8,10931
	ctx.r8.s64 = 10931;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x8813fdd8
	ctx.lr = 0x8805397C;
	sub_8813FDD8(ctx, base);
	// li r8,10932
	ctx.r8.s64 = 10932;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x8813fdd8
	ctx.lr = 0x88053998;
	sub_8813FDD8(ctx, base);
	// li r8,10933
	ctx.r8.s64 = 10933;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,141
	ctx.r3.s64 = 141;
	// bl 0x8813fdd8
	ctx.lr = 0x880539B4;
	sub_8813FDD8(ctx, base);
	// li r8,10934
	ctx.r8.s64 = 10934;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x8813fdd8
	ctx.lr = 0x880539D0;
	sub_8813FDD8(ctx, base);
	// li r8,10935
	ctx.r8.s64 = 10935;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x8813fdd8
	ctx.lr = 0x880539EC;
	sub_8813FDD8(ctx, base);
	// li r8,10936
	ctx.r8.s64 = 10936;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x8813fdd8
	ctx.lr = 0x88053A08;
	sub_8813FDD8(ctx, base);
	// li r8,10937
	ctx.r8.s64 = 10937;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x8813fdd8
	ctx.lr = 0x88053A24;
	sub_8813FDD8(ctx, base);
	// li r8,10938
	ctx.r8.s64 = 10938;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,142
	ctx.r3.s64 = 142;
	// bl 0x8813fdd8
	ctx.lr = 0x88053A40;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88074A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88074A78;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,176
	ctx.r4.s64 = 176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88074A88;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88074A90;
	sub_88023F40(ctx, base);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88074AA0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88074AA8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88074AAC;
	sub_88068E60(ctx, base);
	// stw r3,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88074AC0;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x88024028
	ctx.lr = 0x88074ACC;
	sub_88024028(ctx, base);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880240b8
	ctx.lr = 0x88074AE4;
	sub_880240B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// stw r29,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17648
	ctx.r4.s64 = ctx.r11.s64 + 17648;
	// bl 0x88024dd0
	ctx.lr = 0x88074B00;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x88074B08;
	sub_880240E0(ctx, base);
	// stw r3,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024110
	ctx.lr = 0x88074B14;
	sub_88024110(ctx, base);
	// cmplwi cr6,r3,112
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 112, ctx.xer);
	// bne cr6,0x88074b28
	if (!ctx.cr6.eq) goto loc_88074B28;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024028
	ctx.lr = 0x88074B28;
	sub_88024028(ctx, base);
loc_88074B28:
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88074B40;
	sub_8801A448(ctx, base);
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// rlwinm r9,r11,29,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r8,r9,80
	ctx.xer.ca = ctx.r9.u32 <= 80;
	ctx.r8.u64 = static_cast<uint64_t>(80) - ctx.r9.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// blt cr6,0x88074b88
	if (ctx.cr6.lt) goto loc_88074B88;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88074B6C;
	sub_8801A448(ctx, base);
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r9,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_88074B88:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,-30713
	ctx.r9.s64 = -2012807168;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,28
	ctx.r11.s64 = 1835008;
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,30
	ctx.r5.s64 = 1966080;
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r9,r9,16712
	ctx.r9.s64 = ctx.r9.s64 + 16712;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lis r28,20
	ctx.r28.s64 = 1310720;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// sth r29,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r29.u16);
	// lis r4,-30713
	ctx.r4.s64 = -2012807168;
	// sth r6,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r6.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// addi r4,r4,17776
	ctx.r4.s64 = ctx.r4.s64 + 17776;
	// stw r7,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r5,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r28,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r9,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r31,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r31.u32);
	// bl 0x88023e90
	ctx.lr = 0x88074BF0;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88074C00;
	sub_8813FA58(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88074C10;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x88022b68
	ctx.lr = 0x88074C1C;
	sub_88022B68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88076248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88075038
	ctx.lr = 0x88076260;
	sub_88075038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88076280
	if (ctx.cr6.eq) goto loc_88076280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880760c0
	ctx.lr = 0x88076270;
	sub_880760C0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_88076280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88076510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88076518;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88076528;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88076530;
	sub_88023F40(ctx, base);
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88076540;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88076548;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8807654C;
	sub_88068E60(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88076560;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88076568;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x8807656C;
	sub_88068E78(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x8807657C;
	sub_88024028(ctx, base);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880240b8
	ctx.lr = 0x88076594;
	sub_880240B8(ctx, base);
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x88024dd0
	ctx.lr = 0x880765A8;
	sub_88024DD0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,0,23,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E0;
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// bl 0x880244d0
	ctx.lr = 0x880765C8;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880765d4
	if (!ctx.cr6.lt) goto loc_880765D4;
	// li r3,256
	ctx.r3.s64 = 256;
loc_880765D4:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r3,0,23,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1E0;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r8,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// li r7,50
	ctx.r7.s64 = 50;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r5,r6,36
	ctx.xer.ca = ctx.r6.u32 <= 36;
	ctx.r5.u64 = static_cast<uint64_t>(36) - ctx.r6.u64;
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// bl 0x880750b8
	ctx.lr = 0x88076624;
	sub_880750B8(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r4,-30713
	ctx.r4.s64 = -2012807168;
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// stw r31,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r31.u32);
	// addi r10,r4,19600
	ctx.r10.s64 = ctx.r4.s64 + 19600;
	// sth r29,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r29.u16);
	// sth r29,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r29.u16);
	// lis r9,-30713
	ctx.r9.s64 = -2012807168;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r4,r9,25304
	ctx.r4.s64 = ctx.r9.s64 + 25304;
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r8,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stw r7,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// bl 0x88023e90
	ctx.lr = 0x88076670;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88076680;
	sub_8813FA58(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88076690;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x88022b68
	ctx.lr = 0x8807669C;
	sub_88022B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88077DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88077DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,184
	ctx.r4.s64 = 184;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88077DF0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88077DF8;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x88024118
	ctx.lr = 0x88077E0C;
	sub_88024118(ctx, base);
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88077E1C;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88077E24;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88077E28;
	sub_88068E60(ctx, base);
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x88024028
	ctx.lr = 0x88077E38;
	sub_88024028(ctx, base);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880240b8
	ctx.lr = 0x88077E50;
	sub_880240B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// stw r29,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,30752
	ctx.r4.s64 = ctx.r11.s64 + 30752;
	// bl 0x88024dd0
	ctx.lr = 0x88077E6C;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x88077E74;
	sub_880240E0(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024110
	ctx.lr = 0x88077E80;
	sub_88024110(ctx, base);
	// cmplwi cr6,r3,113
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 113, ctx.xer);
	// bne cr6,0x88077e94
	if (!ctx.cr6.eq) goto loc_88077E94;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024028
	ctx.lr = 0x88077E94;
	sub_88024028(ctx, base);
loc_88077E94:
	// li r11,176
	ctx.r11.s64 = 176;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88077EAC;
	sub_8801A448(ctx, base);
	// lis r27,-30608
	ctx.r27.s64 = -2005925888;
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,21852(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21852);
	// rlwinm r9,r11,29,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r8,r9,80
	ctx.xer.ca = ctx.r9.u32 <= 80;
	ctx.r8.u64 = static_cast<uint64_t>(80) - ctx.r9.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// blt cr6,0x88077ef4
	if (ctx.cr6.lt) goto loc_88077EF4;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88077ED8;
	sub_8801A448(ctx, base);
	// lwz r11,21852(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21852);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r9,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_88077EF4:
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r8,-30713
	ctx.r8.s64 = -2012807168;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r8,29752
	ctx.r5.s64 = ctx.r8.s64 + 29752;
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r4,-30713
	ctx.r4.s64 = -2012807168;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r4,r4,30880
	ctx.r4.s64 = ctx.r4.s64 + 30880;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// sth r29,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// sth r10,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// stw r6,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r5,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// stw r31,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r31.u32);
	// bl 0x88023e90
	ctx.lr = 0x88077F5C;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88077F6C;
	sub_8813FA58(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88077F7C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x88022b68
	ctx.lr = 0x88077F88;
	sub_88022B68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807B910) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8807B918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88024030
	ctx.lr = 0x8807B928;
	sub_88024030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8801a448
	ctx.lr = 0x8807B934;
	sub_8801A448(ctx, base);
	// addic. r11,r3,-7
	ctx.xer.ca = ctx.r3.u32 > 6;
	ctx.r11.s64 = ctx.r3.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// blt 0x8807b944
	if (ctx.cr0.lt) goto loc_8807B944;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_8807B944:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880a84f0
	ctx.lr = 0x8807B958;
	sub_880A84F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8807B96C;
	sub_880A85C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880a84f0
	ctx.lr = 0x8807B980;
	sub_880A84F0(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8807B990;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8807B99C;
	sub_880A8620(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x8807B9A8;
	sub_880A8668(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880a99a8
	ctx.lr = 0x8807B9C0;
	sub_880A99A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880a99a8
	ctx.lr = 0x8807B9D4;
	sub_880A99A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x8807B9DC;
	sub_88023F48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807BE90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8807BE98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11544);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8807bf44
	if (ctx.cr6.lt) goto loc_8807BF44;
	// beq cr6,0x8807befc
	if (ctx.cr6.eq) goto loc_8807BEFC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8807bf68
	if (!ctx.cr6.lt) goto loc_8807BF68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8807BEEC;
	sub_88013CE0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r6,r28,-8
	ctx.r6.s64 = ctx.r28.s64 + -8;
	// b 0x8807bf50
	goto loc_8807BF50;
loc_8807BEFC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8807BF20;
	sub_88013CE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-4
	ctx.r6.s64 = ctx.r28.s64 + -4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013940
	ctx.lr = 0x8807BF3C;
	sub_88013940(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8807BF44:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_8807BF50:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8807BF68;
	sub_88013CE0(ctx, base);
loc_8807BF68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8807C418;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807C42C;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024030
	ctx.lr = 0x8807C438;
	sub_88024030(ctx, base);
	// lhz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807c4d4
	if (!ctx.cr6.eq) goto loc_8807C4D4;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r30,24(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// sth r26,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r26.u16);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8807C468;
	sub_880A84F0(ctx, base);
	// lwz r11,11544(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 11544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807c4a8
	if (!ctx.cr6.eq) goto loc_8807C4A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024750
	ctx.lr = 0x8807C47C;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x8807C4A0;
	sub_88011728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8807C4A8:
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// divwu r10,r25,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r25.u32 / ctx.r11.u32 : 0);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x8807C4D4;
	sub_880114D8(ctx, base);
loc_8807C4D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807D110) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807D134;
	sub_88023F40(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// stw r30,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r30.u32);
	// stw r5,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88080C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88080C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88080fac
	if (!ctx.cr6.gt) goto loc_88080FAC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88080CB0;
	sub_880236A8(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88080fac
	if (!ctx.cr6.eq) goto loc_88080FAC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bgt 0x88080fac
	if (ctx.cr0.gt) goto loc_88080FAC;
	// bl 0x880b1c90
	ctx.lr = 0x88080CD4;
	sub_880B1C90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88080CE0;
	sub_88022A88(ctx, base);
	// li r5,2480
	ctx.r5.s64 = 2480;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88080CF0;
	sub_88024DE8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88080D04;
	sub_880A84F0(ctx, base);
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x880a8638
	ctx.lr = 0x88080D0C;
	sub_880A8638(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,23
	ctx.r3.s64 = 23;
	// addis r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 131072;
	// bl 0x880a84f0
	ctx.lr = 0x88080D24;
	sub_880A84F0(ctx, base);
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88080D30;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x88080D38;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880a85c0
	ctx.lr = 0x88080D48;
	sub_880A85C0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,10
	ctx.r3.s64 = 10;
	// addis r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 786432;
	// bl 0x880a84f0
	ctx.lr = 0x88080D60;
	sub_880A84F0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x88080D6C;
	sub_880A8620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x880a8668
	ctx.lr = 0x88080D78;
	sub_880A8668(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x88080D80;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88080D90;
	sub_880A85C0(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88080DA4;
	sub_880A99A8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88080DB8;
	sub_880A99A8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88080DCC;
	sub_880A99A8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88080DE0;
	sub_880A99A8(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88080edc
	if (!ctx.cr6.eq) goto loc_88080EDC;
	// bl 0x88024068
	ctx.lr = 0x88080DF4;
	sub_88024068(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// addis r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 655360;
	// bl 0x880111c0
	ctx.lr = 0x88080E0C;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88080E14;
	sub_88024068(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,3
	ctx.r29.s64 = 196608;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88080E38;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88080E40;
	sub_88024068(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88080E5C;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88080E64;
	sub_88024068(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,5
	ctx.r29.s64 = 327680;
	// lis r30,7
	ctx.r30.s64 = 458752;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88080E88;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88080E90;
	sub_88024068(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88080EAC;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024750
	ctx.lr = 0x88080EB4;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x88080ED8;
	sub_88011728(ctx, base);
	// b 0x88080f84
	goto loc_88080F84;
loc_88080EDC:
	// bl 0x88024748
	ctx.lr = 0x88080EE0;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88080EF0;
	sub_88024748(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x88080F1C;
	sub_880114D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88080F24;
	sub_88024748(ctx, base);
	// li r9,200
	ctx.r9.s64 = 200;
	// divwu r29,r3,r9
	ctx.r29.u64 = uint32_t(ctx.r9.u32 ? ctx.r3.u32 / ctx.r9.u32 : 0);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x88080f38
	if (!ctx.cr6.gt) goto loc_88080F38;
	// li r29,4
	ctx.r29.s64 = 4;
loc_88080F38:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88080f84
	if (!ctx.cr6.gt) goto loc_88080F84;
loc_88080F44:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88080F4C;
	sub_88024748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88080F58;
	sub_88024068(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,40
	ctx.r7.s64 = 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,40
	ctx.r8.s64 = 40;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x88011310
	ctx.lr = 0x88080F78;
	sub_88011310(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88080f44
	if (ctx.cr6.lt) goto loc_88080F44;
loc_88080F84:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880abb48
	ctx.lr = 0x88080F98;
	sub_880ABB48(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x88080FA0;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88080FAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880844A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880844B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880844C8;
	sub_88023F40(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88084618
	if (!ctx.cr6.gt) goto loc_88084618;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880236a8
	ctx.lr = 0x880844E8;
	sub_880236A8(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88084618
	if (!ctx.cr6.eq) goto loc_88084618;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt 0x88084618
	if (ctx.cr0.gt) goto loc_88084618;
	// bl 0x880b1a10
	ctx.lr = 0x8808450C;
	sub_880B1A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88084518;
	sub_88022A88(ctx, base);
	// li r5,590
	ctx.r5.s64 = 590;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88084528;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// sth r11,160(r31)
	REX_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// sth r11,240(r31)
	REX_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// bl 0x8801a448
	ctx.lr = 0x8808453C;
	sub_8801A448(ctx, base);
	// li r6,90
	ctx.r6.s64 = 90;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88084550;
	sub_880A84F0(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88084560;
	sub_880A85C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x880a8668
	ctx.lr = 0x8808456C;
	sub_880A8668(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a448
	ctx.lr = 0x88084574;
	sub_8801A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8650
	ctx.lr = 0x88084580;
	sub_880A8650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8638
	ctx.lr = 0x8808458C;
	sub_880A8638(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880845c0
	if (!ctx.cr6.eq) goto loc_880845C0;
	// li r6,125
	ctx.r6.s64 = 125;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880111c0
	ctx.lr = 0x880845AC;
	sub_880111C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88023f48
	ctx.lr = 0x880845B4;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880845C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880845C8;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880845D8;
	sub_88024748(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x88084604;
	sub_880114D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808460C;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88084618:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88085648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88085660;
	sub_88023F40(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880856f4
	if (!ctx.cr6.gt) goto loc_880856F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880236a8
	ctx.lr = 0x88085680;
	sub_880236A8(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880856f4
	if (!ctx.cr6.eq) goto loc_880856F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt 0x880856f4
	if (ctx.cr0.gt) goto loc_880856F4;
	// bl 0x880b1e10
	ctx.lr = 0x880856A4;
	sub_880B1E10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880856B0;
	sub_88022A88(ctx, base);
	// li r5,21340
	ctx.r5.s64 = 21340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x880856C0;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,472(r31)
	REX_STORE_U16(ctx.r31.u32 + 472, ctx.r11.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x88024040
	ctx.lr = 0x880856DC;
	sub_88024040(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// bl 0x880b39e0
	ctx.lr = 0x880856E8;
	sub_880B39E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880856F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88085AE4;
	sub_88023F40(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// stw r30,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r30.u32);
	// stw r5,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88086C98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f5c
	ctx.lr = 0x88086CA0;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,580
	ctx.r4.s64 = 580;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88086CB4;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x88086CBC;
	sub_88023F40(ctx, base);
	// li r5,580
	ctx.r5.s64 = 580;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88086CCC;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x88086CD4;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88086CD8;
	sub_88068E60(ctx, base);
	// stw r3,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x88024028
	ctx.lr = 0x88086CEC;
	sub_88024028(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x88086D08;
	sub_880240B8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,-30712
	ctx.r11.s64 = -2012741632;
	// stw r28,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23232
	ctx.r4.s64 = ctx.r11.s64 + 23232;
	// bl 0x88024dd0
	ctx.lr = 0x88086D24;
	sub_88024DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880240e0
	ctx.lr = 0x88086D2C;
	sub_880240E0(ctx, base);
	// stw r3,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88024030
	ctx.lr = 0x88086D38;
	sub_88024030(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 576);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r5,7168
	ctx.r5.s64 = 7168;
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r4,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// beq cr6,0x88086d9c
	if (ctx.cr6.eq) goto loc_88086D9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88086dac
	if (!ctx.cr6.eq) goto loc_88086DAC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x88086da8
	goto loc_88086DA8;
loc_88086D9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_88086DA8:
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_88086DAC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,376
	ctx.r8.s64 = 376;
	// li r6,356
	ctx.r6.s64 = 356;
	// stw r28,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// li r5,336
	ctx.r5.s64 = 336;
	// stw r28,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// li r4,316
	ctx.r4.s64 = 316;
	// stw r28,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// li r3,296
	ctx.r3.s64 = 296;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r26,276
	ctx.r26.s64 = 276;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r28,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// addi r10,r31,248
	ctx.r10.s64 = ctx.r31.s64 + 248;
	// stw r28,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r28,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r28,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// stw r28,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// stw r28,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// stw r28,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// stw r28,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// stw r9,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stw r8,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// stw r6,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r5,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r4,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// stw r3,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// stw r26,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// stw r9,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
loc_88086E2C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bne 0x88086e2c
	if (!ctx.cr0.eq) goto loc_88086E2C;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-30712
	ctx.r8.s64 = -2012741632;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,0(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r29,r6,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r30,260(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rotlwi r23,r6,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r29,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r29.u32);
	// rotlwi r21,r6,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r6.u32);
	// rotlwi r19,r6,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rotlwi r17,r6,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r6.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r26,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r26.u32);
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// stw r30,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// stw r23,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r23.u32);
	// addi r8,r8,22080
	ctx.r8.s64 = ctx.r8.s64 + 22080;
	// stw r21,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r21.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r19,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r19.u32);
	// rotlwi r6,r26,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// sth r28,472(r31)
	REX_STORE_U16(ctx.r31.u32 + 472, ctx.r28.u16);
	// rotlwi r24,r26,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r9,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// rotlwi r22,r26,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r6,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r6.u32);
	// rotlwi r20,r26,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r24,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r24.u32);
	// rotlwi r18,r26,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r22,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r22.u32);
	// stw r20,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r20.u32);
	// lis r4,-30712
	ctx.r4.s64 = -2012741632;
	// stw r18,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r18.u32);
	// sth r7,476(r31)
	REX_STORE_U16(ctx.r31.u32 + 476, ctx.r7.u16);
	// addi r4,r4,23336
	ctx.r4.s64 = ctx.r4.s64 + 23336;
	// stw r17,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r17.u32);
	// stw r27,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r27.u32);
	// stw r10,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stw r10,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r11,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r8,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r8.u32);
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// bl 0x88023e90
	ctx.lr = 0x88086F18;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x88086F28;
	sub_8813FA58(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x88022730
	ctx.lr = 0x88086F3C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88089838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x88089840;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808984C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88024438
	ctx.lr = 0x8808985C;
	sub_88024438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x880247e8
	ctx.lr = 0x88089874;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x88069270
	ctx.lr = 0x88089884;
	sub_88069270(ctx, base);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88089914
	if (ctx.cr6.eq) goto loc_88089914;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x88089914
	if (!ctx.cr0.lt) goto loc_88089914;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// ble cr6,0x880898d0
	if (!ctx.cr6.gt) goto loc_880898D0;
	// cmpwi cr6,r10,96
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 96, ctx.xer);
	// blt cr6,0x88089914
	if (ctx.cr6.lt) goto loc_88089914;
	// b 0x8808990c
	goto loc_8808990C;
loc_880898D0:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,160
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 160, ctx.xer);
	// blt cr6,0x880898fc
	if (ctx.cr6.lt) goto loc_880898FC;
	// cmpwi cr6,r9,768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 768, ctx.xer);
	// bgt cr6,0x880898fc
	if (ctx.cr6.gt) goto loc_880898FC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88089914
	if (ctx.cr6.gt) goto loc_88089914;
	// stw r24,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r24,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// stw r24,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// b 0x8808990c
	goto loc_8808990C;
loc_880898FC:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bgt cr6,0x88089914
	if (ctx.cr6.gt) goto loc_88089914;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_8808990C:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_88089914:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88089978
	if (ctx.cr6.eq) goto loc_88089978;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x88089978
	if (!ctx.cr0.lt) goto loc_88089978;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// ble cr6,0x8808995c
	if (!ctx.cr6.gt) goto loc_8808995C;
	// cmpwi cr6,r10,96
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 96, ctx.xer);
	// blt cr6,0x88089978
	if (ctx.cr6.lt) goto loc_88089978;
	// b 0x88089970
	goto loc_88089970;
loc_8808995C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88089978
	if (ctx.cr6.gt) goto loc_88089978;
	// stw r24,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// stw r24,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r24,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
loc_88089970:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_88089978:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-257
	ctx.r10.s64 = -16842752;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// ori r9,r10,49152
	ctx.r9.u64 = ctx.r10.u64 | 49152;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88089998
	if (!ctx.cr6.eq) goto loc_88089998;
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
loc_88089998:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,127
	ctx.r3.s64 = 127;
	// addis r27,r11,32
	ctx.r27.s64 = ctx.r11.s64 + 2097152;
	// bl 0x8801a860
	ctx.lr = 0x880899B4;
	sub_8801A860(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r28,60
	ctx.r28.s64 = 3932160;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// lis r29,448
	ctx.r29.s64 = 29360128;
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lis r25,128
	ctx.r25.s64 = 8388608;
	// lis r26,384
	ctx.r26.s64 = 25165824;
loc_880899D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x88089a3c
	if (ctx.cr6.gt) goto loc_88089A3C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,9958
	ctx.r3.s64 = 9958;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88089A0C;
	sub_8801A9C8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x88089a28
	if (ctx.cr6.lt) goto loc_88089A28;
	// li r11,255
	ctx.r11.s64 = 255;
loc_88089A28:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88089A3C;
	sub_8813FF48(ctx, base);
loc_88089A3C:
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x880899d8
	if (ctx.cr6.lt) goto loc_880899D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-257
	ctx.r10.s64 = -16842752;
	// addi r9,r11,-32768
	ctx.r9.s64 = ctx.r11.s64 + -32768;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88089a68
	if (!ctx.cr6.eq) goto loc_88089A68;
	// stw r24,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
loc_88089A68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808A8E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x8808A8F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808A8FC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88024438
	ctx.lr = 0x8808A90C;
	sub_88024438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88024460
	ctx.lr = 0x8808A924;
	sub_88024460(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x8808A93C;
	sub_88024460(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// add. r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// bgt 0x8808a95c
	if (ctx.cr0.gt) goto loc_8808A95C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808A954;
	sub_88023F48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
loc_8808A95C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bge 0x8808a994
	if (!ctx.cr0.lt) goto loc_8808A994;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_8808A994:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x8808a9bc
	if (!ctx.cr0.lt) goto loc_8808A9BC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
loc_8808A9BC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x8808aa10
	if (!ctx.cr0.lt) goto loc_8808AA10;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// ble cr6,0x8808a9f8
	if (!ctx.cr6.gt) goto loc_8808A9F8;
	// cmpwi cr6,r10,144
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 144, ctx.xer);
	// blt cr6,0x8808aa10
	if (ctx.cr6.lt) goto loc_8808AA10;
	// b 0x8808aa08
	goto loc_8808AA08;
loc_8808A9F8:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bgt cr6,0x8808aa10
	if (ctx.cr6.gt) goto loc_8808AA10;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_8808AA08:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8808AA10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x880247e8
	ctx.lr = 0x8808AA1C;
	sub_880247E8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x8808AA2C;
	sub_88069270(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8808aab8
	if (!ctx.cr6.eq) goto loc_8808AAB8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808aaa4
	if (ctx.cr6.eq) goto loc_8808AAA4;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x8808aab8
	if (!ctx.cr0.lt) goto loc_8808AAB8;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// ble cr6,0x8808aa88
	if (!ctx.cr6.gt) goto loc_8808AA88;
	// cmpwi cr6,r10,112
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 112, ctx.xer);
	// blt cr6,0x8808aab8
	if (ctx.cr6.lt) goto loc_8808AAB8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8808aab8
	goto loc_8808AAB8;
loc_8808AA88:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bgt cr6,0x8808aab8
	if (ctx.cr6.gt) goto loc_8808AAB8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// b 0x8808aab8
	goto loc_8808AAB8;
loc_8808AAA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,736
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 736, ctx.xer);
	// ble cr6,0x8808aab8
	if (!ctx.cr6.gt) goto loc_8808AAB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8808AAB8:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,127
	ctx.r3.s64 = 127;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8801a860
	ctx.lr = 0x8808AAD4;
	sub_8801A860(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lis r23,384
	ctx.r23.s64 = 25165824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// lis r22,-64
	ctx.r22.s64 = -4194304;
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// stw r10,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8808ab98
	if (!ctx.cr6.gt) goto loc_8808AB98;
	// lis r25,32
	ctx.r25.s64 = 2097152;
	// lis r26,96
	ctx.r26.s64 = 6291456;
loc_8808AB08:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8808AB0C:
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x8808ab78
	if (ctx.cr6.gt) goto loc_8808AB78;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8808ab78
	if (ctx.cr6.lt) goto loc_8808AB78;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8808AB40;
	sub_8801A9C8(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808AB5C;
	sub_8813FF90(ctx, base);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8808AB78;
	sub_8813FF48(ctx, base);
loc_8808AB78:
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8808ab0c
	if (ctx.cr6.lt) goto loc_8808AB0C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8808ab08
	if (ctx.cr6.lt) goto loc_8808AB08;
loc_8808AB98:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808ac7c
	if (ctx.cr6.eq) goto loc_8808AC7C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r28,8(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,127
	ctx.r3.s64 = 127;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8801a860
	ctx.lr = 0x8808ABC0;
	sub_8801A860(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// ble cr6,0x8808ac7c
	if (!ctx.cr6.gt) goto loc_8808AC7C;
loc_8808ABE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8808ABE4:
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x8808ac5c
	if (ctx.cr6.gt) goto loc_8808AC5C;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8808ac5c
	if (ctx.cr6.lt) goto loc_8808AC5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,14496
	ctx.r3.s64 = ctx.r10.s64 + 14496;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8808AC1C;
	sub_8801A9C8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808AC38;
	sub_8813FF90(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8808AC5C;
	sub_8813FF48(ctx, base);
loc_8808AC5C:
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8808abe4
	if (ctx.cr6.lt) goto loc_8808ABE4;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8808abe0
	if (ctx.cr6.lt) goto loc_8808ABE0;
loc_8808AC7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88090328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8809034C;
	sub_88023F40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88090568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88090570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,316
	ctx.r4.s64 = 316;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88090580;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x88090588;
	sub_88023F40(ctx, base);
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88090598;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x880905A0;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x880905A4;
	sub_88068E60(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x880905B4;
	sub_88024118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x88024028
	ctx.lr = 0x880905C0;
	sub_88024028(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880240b8
	ctx.lr = 0x880905D0;
	sub_880240B8(ctx, base);
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x88024dd0
	ctx.lr = 0x880905E4;
	sub_88024DD0(ctx, base);
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r8,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// lwz r11,21852(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21852);
	// rlwinm r6,r11,29,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r5,r6,56
	ctx.xer.ca = ctx.r6.u32 <= 56;
	ctx.r5.u64 = static_cast<uint64_t>(56) - ctx.r6.u64;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r4,90
	ctx.r4.s64 = 90;
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r4,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// bl 0x880750b8
	ctx.lr = 0x88090630;
	sub_880750B8(ctx, base);
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// lis r3,-30711
	ctx.r3.s64 = -2012676096;
	// sth r30,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r30.u16);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r6,r3,-2200
	ctx.r6.s64 = ctx.r3.s64 + -2200;
	// stw r11,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r5,r8,-2200
	ctx.r5.s64 = ctx.r8.s64 + -2200;
	// sth r9,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r9.u16);
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// addi r4,r7,888
	ctx.r4.s64 = ctx.r7.s64 + 888;
	// stw r10,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r9,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// sth r30,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r30.u16);
	// sth r9,220(r31)
	REX_STORE_U16(ctx.r31.u32 + 220, ctx.r9.u16);
	// stw r9,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// stw r3,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r29,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// stw r29,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stw r6,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// stw r5,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// bl 0x88023e90
	ctx.lr = 0x880906BC;
	sub_88023E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88090C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88090C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88090C3C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8808fab0
	ctx.lr = 0x88090C4C;
	sub_8808FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88090ec0
	if (ctx.cr6.eq) goto loc_88090EC0;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88090eb4
	if (!ctx.cr6.eq) goto loc_88090EB4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88090C78;
	sub_8801A860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88090CA4;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x88090e40
	if (!ctx.cr6.eq) goto loc_88090E40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88090d14
	if (ctx.cr6.eq) goto loc_88090D14;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x88090d14
	if (!ctx.cr0.lt) goto loc_88090D14;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r11.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// bgt 0x88090d14
	if (ctx.cr0.gt) goto loc_88090D14;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
loc_88090D14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880244d0
	ctx.lr = 0x88090D20;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88090d3c
	if (ctx.cr6.lt) goto loc_88090D3C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88090D34;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_88090D3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88090d64
	if (!ctx.cr6.eq) goto loc_88090D64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88090D5C;
	sub_8808FBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88090D64:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88090eb4
	if (!ctx.cr6.eq) goto loc_88090EB4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x88090eb4
	if (!ctx.cr0.lt) goto loc_88090EB4;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r8,r9,90
	ctx.xer.ca = ctx.r9.u32 <= 90;
	ctx.r8.u64 = static_cast<uint64_t>(90) - ctx.r9.u64;
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x880244d0
	ctx.lr = 0x88090DAC;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88090eb4
	if (ctx.cr6.lt) goto loc_88090EB4;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88090eb4
	if (!ctx.cr6.eq) goto loc_88090EB4;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r10,26096
	ctx.r11.s64 = ctx.r10.s64 + 26096;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88024120
	ctx.lr = 0x88090E08;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88090eb4
	if (ctx.cr6.eq) goto loc_88090EB4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88013940
	ctx.lr = 0x88090E2C;
	sub_88013940(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88090E38;
	sub_8808FBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88090E40:
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bge cr6,0x88090e68
	if (!ctx.cr6.lt) goto loc_88090E68;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x88090e68
	if (!ctx.cr0.lt) goto loc_88090E68;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_88090E68:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88090eb4
	if (!ctx.cr6.eq) goto loc_88090EB4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88090eb4
	if (!ctx.cr0.lt) goto loc_88090EB4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x88090EA0;
	sub_880244D0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a808
	ctx.lr = 0x88090EAC;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_88090EB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88090EC0;
	sub_8808FBC8(ctx, base);
loc_88090EC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880926D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880926E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8809290c
	if (ctx.cr6.gt) goto loc_8809290C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88092740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88092740;
	// bdzf 4*cr6+eq,0x88092784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88092784;
	// bdzf 4*cr6+eq,0x88092898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88092898;
	// bne cr6,0x880928b8
	if (!ctx.cr6.eq) goto loc_880928B8;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x880928ac
	if (ctx.cr6.gt) goto loc_880928AC;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88092740:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x8809290c
	if (!ctx.cr6.eq) goto loc_8809290C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88092784:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// ble cr6,0x8809286c
	if (!ctx.cr6.gt) goto loc_8809286C;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r30,21
	ctx.r30.s64 = 1376256;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880927d0
	if (!ctx.cr6.eq) goto loc_880927D0;
	// subf r5,r30,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x880927CC;
	sub_880244D0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_880927D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r30,84(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// subf r29,r9,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r28,8(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88092850
	if (ctx.cr6.lt) goto loc_88092850;
	// beq cr6,0x88092848
	if (ctx.cr6.eq) goto loc_88092848;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809286c
	if (!ctx.cr6.lt) goto loc_8809286C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x88092820;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88014188
	ctx.lr = 0x88092844;
	sub_88014188(ctx, base);
	// b 0x8809286c
	goto loc_8809286C;
loc_88092848:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x88092854
	goto loc_88092854;
loc_88092850:
	// li r6,10
	ctx.r6.s64 = 10;
loc_88092854:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013940
	ctx.lr = 0x8809286C;
	sub_88013940(ctx, base);
loc_8809286C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88092898:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_880928AC:
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880928B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8809290c
	if (!ctx.cr0.lt) goto loc_8809290C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x8809290c
	if (ctx.cr6.lt) goto loc_8809290C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r8,r9,80
	ctx.xer.ca = ctx.r9.u32 <= 80;
	ctx.r8.u64 = static_cast<uint64_t>(80) - ctx.r9.u64;
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_8809290C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880972F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f54
	ctx.lr = 0x880972F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88097304;
	sub_88023F40(ctx, base);
	// lis r18,-30608
	ctx.r18.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88097378
	if (!ctx.cr6.eq) goto loc_88097378;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x8809732C;
	sub_8801A860(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,432(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88097358;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 604);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x88097378
	if (ctx.cr6.eq) goto loc_88097378;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
loc_88097378:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880973a0
	if (!ctx.cr6.lt) goto loc_880973A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88097390;
	sub_88022BE0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x88023f48
	ctx.lr = 0x88097398;
	sub_88023F48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
loc_880973A0:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r15,0
	ctx.r15.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// addi r17,r31,436
	ctx.r17.s64 = ctx.r31.s64 + 436;
	// stw r10,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lhz r11,438(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 438);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880973d8
	if (ctx.cr6.eq) goto loc_880973D8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r17)
	REX_STORE_U16(ctx.r17.u32 + 2, ctx.r9.u16);
loc_880973D8:
	// lhz r11,82(r17)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r17.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880973f8
	if (ctx.cr6.eq) goto loc_880973F8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r17)
	REX_STORE_U16(ctx.r17.u32 + 82, ctx.r10.u16);
	// b 0x88097400
	goto loc_88097400;
loc_880973F8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88097424
	if (ctx.cr6.eq) goto loc_88097424;
loc_88097400:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// beq cr6,0x88097450
	if (ctx.cr6.eq) goto loc_88097450;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x8809744c
	goto loc_8809744C;
loc_88097424:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 832, ctx.xer);
	// bge cr6,0x88097450
	if (!ctx.cr6.lt) goto loc_88097450;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88097450
	if (!ctx.cr6.eq) goto loc_88097450;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_8809744C:
	// stw r10,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
loc_88097450:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x88097480
	if (!ctx.cr0.lt) goto loc_88097480;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x88097480
	if (ctx.cr6.lt) goto loc_88097480;
	// stw r15,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r15.u32);
loc_88097480:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r25,r31,124
	ctx.r25.s64 = ctx.r31.s64 + 124;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// clrlwi r6,r6,23
	ctx.r6.u64 = ctx.r6.u32 & 0x1FF;
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// clrlwi r3,r3,23
	ctx.r3.u64 = ctx.r3.u32 & 0x1FF;
	// stw r6,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// clrlwi r7,r7,23
	ctx.r7.u64 = ctx.r7.u32 & 0x1FF;
	// stw r4,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi r8,r8,23
	ctx.r8.u64 = ctx.r8.u32 & 0x1FF;
	// clrlwi r3,r9,23
	ctx.r3.u64 = ctx.r9.u32 & 0x1FF;
	// clrlwi r7,r30,23
	ctx.r7.u64 = ctx.r30.u32 & 0x1FF;
	// stw r8,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// clrlwi r6,r29,23
	ctx.r6.u64 = ctx.r29.u32 & 0x1FF;
	// stw r3,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// clrlwi r4,r28,23
	ctx.r4.u64 = ctx.r28.u32 & 0x1FF;
	// stw r7,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// stw r6,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r4,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r10,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x88097548;
	sub_8801A860(ctx, base);
	// addi r24,r31,128
	ctx.r24.s64 = ctx.r31.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8801a860
	ctx.lr = 0x88097560;
	sub_8801A860(ctx, base);
	// addi r23,r31,140
	ctx.r23.s64 = ctx.r31.s64 + 140;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x88097578;
	sub_8801A860(ctx, base);
	// addi r26,r31,152
	ctx.r26.s64 = ctx.r31.s64 + 152;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x88097590;
	sub_8801A860(ctx, base);
	// addi r22,r31,156
	ctx.r22.s64 = ctx.r31.s64 + 156;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880975A8;
	sub_8801A860(ctx, base);
	// addi r21,r31,160
	ctx.r21.s64 = ctx.r31.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880975C0;
	sub_8801A860(ctx, base);
	// addi r20,r31,164
	ctx.r20.s64 = ctx.r31.s64 + 164;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880975D8;
	sub_8801A860(ctx, base);
	// addi r19,r31,168
	ctx.r19.s64 = ctx.r31.s64 + 168;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880975F0;
	sub_8801A860(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8801a860
	ctx.lr = 0x88097604;
	sub_8801A860(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r7,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x88097630;
	sub_8801A860(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r8,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809765C;
	sub_8801A860(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r31,332
	ctx.r30.s64 = ctx.r31.s64 + 332;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r27,r31,324
	ctx.r27.s64 = ctx.r31.s64 + 324;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// li r29,19
	ctx.r29.s64 = 19;
	// stw r4,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// subf r28,r30,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
loc_88097684:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x88097694;
	sub_8813FA60(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,432(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x88024438
	ctx.lr = 0x880976A0;
	sub_88024438(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x88097684
	if (!ctx.cr0.eq) goto loc_88097684;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,4
	ctx.r29.s64 = 262144;
	// lis r9,-4
	ctx.r9.s64 = -262144;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r8,196(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// stw r8,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880976f0
	if (!ctx.cr6.gt) goto loc_880976F0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880976fc
	goto loc_880976FC;
loc_880976F0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097700
	if (!ctx.cr6.lt) goto loc_88097700;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880976FC:
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
loc_88097700:
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// stw r10,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097720
	if (!ctx.cr6.gt) goto loc_88097720;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809772c
	goto loc_8809772C;
loc_88097720:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097730
	if (!ctx.cr6.lt) goto loc_88097730;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809772C:
	// stw r11,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
loc_88097730:
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097750
	if (!ctx.cr6.gt) goto loc_88097750;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809775c
	goto loc_8809775C;
loc_88097750:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097760
	if (!ctx.cr6.lt) goto loc_88097760;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809775C:
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
loc_88097760:
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r10,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097780
	if (!ctx.cr6.gt) goto loc_88097780;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809778c
	goto loc_8809778C;
loc_88097780:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097790
	if (!ctx.cr6.lt) goto loc_88097790;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809778C:
	// stw r11,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_88097790:
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880977b0
	if (!ctx.cr6.gt) goto loc_880977B0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880977bc
	goto loc_880977BC;
loc_880977B0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880977c0
	if (!ctx.cr6.lt) goto loc_880977C0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880977BC:
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_880977C0:
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r10,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880977e0
	if (!ctx.cr6.gt) goto loc_880977E0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880977ec
	goto loc_880977EC;
loc_880977E0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880977f0
	if (!ctx.cr6.lt) goto loc_880977F0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880977EC:
	// stw r11,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_880977F0:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// stw r10,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097810
	if (!ctx.cr6.gt) goto loc_88097810;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809781c
	goto loc_8809781C;
loc_88097810:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097820
	if (!ctx.cr6.lt) goto loc_88097820;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809781C:
	// stw r11,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_88097820:
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r10,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097840
	if (!ctx.cr6.gt) goto loc_88097840;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809784c
	goto loc_8809784C;
loc_88097840:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097850
	if (!ctx.cr6.lt) goto loc_88097850;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809784C:
	// stw r11,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
loc_88097850:
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r10,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097870
	if (!ctx.cr6.gt) goto loc_88097870;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809787c
	goto loc_8809787C;
loc_88097870:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097880
	if (!ctx.cr6.lt) goto loc_88097880;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809787C:
	// stw r11,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_88097880:
	// lwz r10,248(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r10,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880978a0
	if (!ctx.cr6.gt) goto loc_880978A0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880978ac
	goto loc_880978AC;
loc_880978A0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880978b0
	if (!ctx.cr6.lt) goto loc_880978B0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880978AC:
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_880978B0:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// stw r10,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880978d0
	if (!ctx.cr6.gt) goto loc_880978D0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880978dc
	goto loc_880978DC;
loc_880978D0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880978e0
	if (!ctx.cr6.lt) goto loc_880978E0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880978DC:
	// stw r11,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
loc_880978E0:
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097900
	if (!ctx.cr6.gt) goto loc_88097900;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809790c
	goto loc_8809790C;
loc_88097900:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097910
	if (!ctx.cr6.lt) goto loc_88097910;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809790C:
	// stw r11,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_88097910:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097930
	if (!ctx.cr6.gt) goto loc_88097930;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809793c
	goto loc_8809793C;
loc_88097930:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097940
	if (!ctx.cr6.lt) goto loc_88097940;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809793C:
	// stw r11,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
loc_88097940:
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// stw r10,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097960
	if (!ctx.cr6.gt) goto loc_88097960;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809796c
	goto loc_8809796C;
loc_88097960:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097970
	if (!ctx.cr6.lt) goto loc_88097970;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809796C:
	// stw r11,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
loc_88097970:
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// stw r10,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097990
	if (!ctx.cr6.gt) goto loc_88097990;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8809799c
	goto loc_8809799C;
loc_88097990:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880979a0
	if (!ctx.cr6.lt) goto loc_880979A0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_8809799C:
	// stw r11,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_880979A0:
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// stw r10,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880979c0
	if (!ctx.cr6.gt) goto loc_880979C0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880979cc
	goto loc_880979CC;
loc_880979C0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880979d0
	if (!ctx.cr6.lt) goto loc_880979D0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880979CC:
	// stw r11,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
loc_880979D0:
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// stw r10,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x880979f0
	if (!ctx.cr6.gt) goto loc_880979F0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880979fc
	goto loc_880979FC;
loc_880979F0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097a00
	if (!ctx.cr6.lt) goto loc_88097A00;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880979FC:
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
loc_88097A00:
	// lwz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// stw r10,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097a20
	if (!ctx.cr6.gt) goto loc_88097A20;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88097a2c
	goto loc_88097A2C;
loc_88097A20:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097a30
	if (!ctx.cr6.lt) goto loc_88097A30;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_88097A2C:
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_88097A30:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097a50
	if (!ctx.cr6.gt) goto loc_88097A50;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88097a5c
	goto loc_88097A5C;
loc_88097A50:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097a60
	if (!ctx.cr6.lt) goto loc_88097A60;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_88097A5C:
	// stw r11,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
loc_88097A60:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097a80
	if (!ctx.cr6.gt) goto loc_88097A80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88097a8c
	goto loc_88097A8C;
loc_88097A80:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097a90
	if (!ctx.cr6.lt) goto loc_88097A90;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_88097A8C:
	// stw r11,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_88097A90:
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097ab0
	if (!ctx.cr6.gt) goto loc_88097AB0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88097abc
	goto loc_88097ABC;
loc_88097AB0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097ac0
	if (!ctx.cr6.lt) goto loc_88097AC0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_88097ABC:
	// stw r11,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
loc_88097AC0:
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r10,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88097ae0
	if (!ctx.cr6.gt) goto loc_88097AE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88097aec
	goto loc_88097AEC;
loc_88097AE0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88097af0
	if (!ctx.cr6.lt) goto loc_88097AF0;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_88097AEC:
	// stw r11,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
loc_88097AF0:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88097d28
	if (ctx.cr6.eq) goto loc_88097D28;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bge 0x88097f48
	if (!ctx.cr0.lt) goto loc_88097F48;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// li r28,12
	ctx.r28.s64 = 12;
	// addi r11,r11,28752
	ctx.r11.s64 = ctx.r11.s64 + 28752;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_88097B20:
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,-16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// bl 0x880a84f0
	ctx.lr = 0x88097B44;
	sub_880A84F0(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r4,-8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x88097B58;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a8620
	ctx.lr = 0x88097B64;
	sub_880A8620(ctx, base);
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r8,-16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x880a84f0
	ctx.lr = 0x88097B90;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x88097B9C;
	sub_8801A448(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88097BA8;
	sub_8801A448(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88097BB8;
	sub_880A85C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x880a8620
	ctx.lr = 0x88097BC8;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x880a8668
	ctx.lr = 0x88097BD4;
	sub_880A8668(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88097BE8;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x88097BF4;
	sub_8801A448(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88097C00;
	sub_8801A448(ctx, base);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88097C10;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x88097C1C;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x88097C28;
	sub_880A8668(ctx, base);
	// lwz r7,-20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// bne cr6,0x88097c40
	if (!ctx.cr6.eq) goto loc_88097C40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8650
	ctx.lr = 0x88097C40;
	sub_880A8650(ctx, base);
loc_88097C40:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88097c88
	if (!ctx.cr6.gt) goto loc_88097C88;
loc_88097C50:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,-12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,-16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x880a99a8
	ctx.lr = 0x88097C78;
	sub_880A99A8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88097c50
	if (ctx.cr6.lt) goto loc_88097C50;
loc_88097C88:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x88097b20
	if (!ctx.cr0.eq) goto loc_88097B20;
	// lwz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88097cdc
	if (!ctx.cr6.eq) goto loc_88097CDC;
	// bl 0x88024750
	ctx.lr = 0x88097CA8;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88011728
	ctx.lr = 0x88097CCC;
	sub_88011728(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x88023f48
	ctx.lr = 0x88097CD4;
	sub_88023F48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
loc_88097CDC:
	// bl 0x88024748
	ctx.lr = 0x88097CE0;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x88024748
	ctx.lr = 0x88097CF0;
	sub_88024748(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x88097D18;
	sub_880114D8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x88023f48
	ctx.lr = 0x88097D20;
	sub_88023F48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
loc_88097D28:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21860(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 21860);
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x88097f0c
	if (!ctx.cr0.eq) goto loc_88097F0C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88097f04
	if (ctx.cr6.lt) goto loc_88097F04;
	// beq cr6,0x88097d68
	if (ctx.cr6.eq) goto loc_88097D68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88097f0c
	if (!ctx.cr6.lt) goto loc_88097F0C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x88097f0c
	if (ctx.cr6.gt) goto loc_88097F0C;
	// stw r15,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r15.u32);
	// b 0x88097f0c
	goto loc_88097F0C;
loc_88097D68:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88097f0c
	if (!ctx.cr0.lt) goto loc_88097F0C;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ble cr6,0x88097ea4
	if (!ctx.cr6.gt) goto loc_88097EA4;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lis r28,46
	ctx.r28.s64 = 3014656;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88097dd8
	if (!ctx.cr6.eq) goto loc_88097DD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88097DB8;
	sub_880244D0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r4,r8,r28
	ctx.r4.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88097DD4;
	sub_880244D0(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
loc_88097DD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,-4
	ctx.r7.s64 = -4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,28
	ctx.r4.s64 = 28;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// subf r5,r28,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88096f98
	ctx.lr = 0x88097DFC;
	sub_88096F98(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,-4
	ctx.r7.s64 = -4;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bl 0x88096f98
	ctx.lr = 0x88097E20;
	sub_88096F98(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88097ea4
	if (!ctx.cr6.eq) goto loc_88097EA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88097E44;
	sub_880244D0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,14
	ctx.r7.s64 = 14;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880970c0
	ctx.lr = 0x88097E68;
	sub_880970C0(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88097E80;
	sub_880244D0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,14
	ctx.r7.s64 = 14;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880970c0
	ctx.lr = 0x88097EA4;
	sub_880970C0(ctx, base);
loc_88097EA4:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x88097f0c
	if (!ctx.cr0.lt) goto loc_88097F0C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r9,608(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r6,r7,192
	ctx.xer.ca = ctx.r7.u32 <= 192;
	ctx.r6.u64 = static_cast<uint64_t>(192) - ctx.r7.u64;
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// bne cr6,0x88097efc
	if (!ctx.cr6.eq) goto loc_88097EFC;
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r9,r10,192
	ctx.xer.ca = ctx.r10.u32 <= 192;
	ctx.r9.u64 = static_cast<uint64_t>(192) - ctx.r10.u64;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_88097EFC:
	// stw r15,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r15.u32);
	// b 0x88097f0c
	goto loc_88097F0C;
loc_88097F04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_88097F0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,528(r31)
	REX_STORE_U32(ctx.r31.u32 + 528, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,532(r31)
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x88097F48;
	sub_88018B98(ctx, base);
loc_88097F48:
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lis r27,21
	ctx.r27.s64 = 1376256;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// lis r28,23
	ctx.r28.s64 = 1507328;
	// lwz r8,420(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,7220
	ctx.r3.s64 = 7220;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r27,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r27.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88097F7C;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88097F84;
	sub_8813FF48(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,420(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// li r3,7221
	ctx.r3.s64 = 7221;
	// lwz r7,172(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88097FB0;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88097FB8;
	sub_8813FF48(ctx, base);
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7219
	ctx.r3.s64 = 7219;
	// lwz r4,412(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 2949120;
	// bl 0x8801a9c8
	ctx.lr = 0x88097FD8;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88097FE0;
	sub_8813FF48(ctx, base);
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7218
	ctx.r3.s64 = 7218;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 2555904;
	// bl 0x8801a9c8
	ctx.lr = 0x88098000;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098008;
	sub_8813FF48(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7217
	ctx.r3.s64 = 7217;
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r9,34
	ctx.r5.s64 = ctx.r9.s64 + 2228224;
	// bl 0x8801a9c8
	ctx.lr = 0x88098028;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098030;
	sub_8813FF48(ctx, base);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7216
	ctx.r3.s64 = 7216;
	// lwz r4,388(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r8,30
	ctx.r5.s64 = ctx.r8.s64 + 1966080;
	// bl 0x8801a9c8
	ctx.lr = 0x88098050;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098058;
	sub_8813FF48(ctx, base);
	// lwz r10,384(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7215
	ctx.r3.s64 = 7215;
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r7,27
	ctx.r5.s64 = ctx.r7.s64 + 1769472;
	// bl 0x8801a9c8
	ctx.lr = 0x88098078;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098080;
	sub_8813FF48(ctx, base);
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lis r26,7
	ctx.r26.s64 = 458752;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,120
	ctx.r6.s64 = 120;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// subf r4,r30,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r30.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r3,7213
	ctx.r3.s64 = 7213;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r5,r7,r26
	ctx.r5.u64 = ctx.r7.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880980B8;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880980C4;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880980DC;
	sub_8813FF90(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lis r27,19
	ctx.r27.s64 = 1245184;
	// li r6,120
	ctx.r6.s64 = 120;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,7213
	ctx.r3.s64 = 7213;
	// subf r4,r30,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88098114;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88098120;
	sub_8813FF48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88098138;
	sub_8813FF90(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r3,7213
	ctx.r3.s64 = 7213;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88098164;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x8809816C;
	sub_8813FF48(ctx, base);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r5,372(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r6,120
	ctx.r6.s64 = 120;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r8,376(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r3,7214
	ctx.r3.s64 = 7214;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880981A0;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880981AC;
	sub_8813FF48(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880981C4;
	sub_8813FF90(ctx, base);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7214
	ctx.r3.s64 = 7214;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r7,376(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r8,r10,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880981F8;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88098204;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809821C;
	sub_8813FF90(ctx, base);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r8,376(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r3,7214
	ctx.r3.s64 = 7214;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r7,r28
	ctx.r5.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88098248;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098250;
	sub_8813FF48(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7212
	ctx.r3.s64 = 7212;
	// lwz r4,364(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 1310720;
	// bl 0x8801a9c8
	ctx.lr = 0x88098270;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098278;
	sub_8813FF48(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r30,38
	ctx.r30.s64 = 2490368;
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,132(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,7210
	ctx.r3.s64 = 7210;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880982A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x880982B0;
	sub_8813FF48(ctx, base);
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r3,7211
	ctx.r3.s64 = 7211;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880982DC;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x880982E4;
	sub_8813FF48(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7209
	ctx.r3.s64 = 7209;
	// lwz r4,340(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88098300;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098308;
	sub_8813FF48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,7208
	ctx.r3.s64 = 7208;
	// addis r5,r11,-10
	ctx.r5.s64 = ctx.r11.s64 + -655360;
	// bl 0x8801a9c8
	ctx.lr = 0x88098328;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x88098330;
	sub_8813FF48(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,29136
	ctx.r9.s64 = ctx.r10.s64 + 29136;
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r3,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// addis r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -65536;
	// addi r3,r11,7222
	ctx.r3.s64 = ctx.r11.s64 + 7222;
	// bl 0x8801a9c8
	ctx.lr = 0x88098364;
	sub_8801A9C8(ctx, base);
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8813ff48
	ctx.lr = 0x8809836C;
	sub_8813FF48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,118
	ctx.r6.s64 = 118;
	// li r3,9852
	ctx.r3.s64 = 9852;
	// addis r5,r11,-96
	ctx.r5.s64 = ctx.r11.s64 + -6291456;
	// addis r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 3145728;
	// bl 0x8801a9c8
	ctx.lr = 0x88098388;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x8809839C;
	sub_8813FF90(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A7FA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x880A7FB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x8813f998
	ctx.lr = 0x880A7FCC;
	sub_8813F998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8801b4e8
	ctx.lr = 0x880A7FDC;
	sub_8801B4E8(ctx, base);
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880A7FEC;
	sub_8813FA58(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x88066b28
	ctx.lr = 0x880A7FF4;
	sub_88066B28(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88066c30
	ctx.lr = 0x880A8000;
	sub_88066C30(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,255
	ctx.r10.s64 = 255;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,15(r30)
	REX_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// sth r10,12(r30)
	REX_STORE_U16(ctx.r30.u32 + 12, ctx.r10.u16);
	// sth r10,10(r30)
	REX_STORE_U16(ctx.r30.u32 + 10, ctx.r10.u16);
	// stb r11,14(r30)
	REX_STORE_U8(ctx.r30.u32 + 14, ctx.r11.u8);
	// stb r11,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// bl 0x88068e60
	ctx.lr = 0x880A8024;
	sub_88068E60(ctx, base);
	// li r11,18432
	ctx.r11.s64 = 18432;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x880a8040
	if (!ctx.cr6.eq) goto loc_880A8040;
	// lis r11,72
	ctx.r11.s64 = 4718592;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_880A8040:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880a8050
	if (!ctx.cr6.eq) goto loc_880A8050;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_880A8050:
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r11,-9
	ctx.r31.s64 = ctx.r11.s64 + -9;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,254
	ctx.r29.s64 = 254;
loc_880A8064:
	// sth r28,29(r31)
	REX_STORE_U16(ctx.r31.u32 + 29, ctx.r28.u16);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r28,37(r31)
	REX_STORE_U32(ctx.r31.u32 + 37, ctx.r28.u32);
	// stw r28,41(r31)
	REX_STORE_U32(ctx.r31.u32 + 41, ctx.r28.u32);
	// stw r28,45(r31)
	REX_STORE_U32(ctx.r31.u32 + 45, ctx.r28.u32);
	// stw r28,49(r31)
	REX_STORE_U32(ctx.r31.u32 + 49, ctx.r28.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A8080;
	sub_8801A448(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stb r29,61(r31)
	REX_STORE_U8(ctx.r31.u32 + 61, ctx.r29.u8);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// sth r11,53(r31)
	REX_STORE_U16(ctx.r31.u32 + 53, ctx.r11.u16);
	// stb r29,62(r31)
	REX_STORE_U8(ctx.r31.u32 + 62, ctx.r29.u8);
	// stb r29,63(r31)
	REX_STORE_U8(ctx.r31.u32 + 63, ctx.r29.u8);
	// stbu r29,64(r31)
	ea = 64 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r29.u8);
	ctx.r31.u32 = ea;
	// bne 0x880a8064
	if (!ctx.cr0.eq) goto loc_880A8064;
	// bl 0x8809ed78
	ctx.lr = 0x880A80A4;
	sub_8809ED78(ctx, base);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x88067710
	ctx.lr = 0x880A80B8;
	sub_88067710(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88069520
	ctx.lr = 0x880A80C0;
	sub_88069520(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,21868(r10)
	REX_STORE_U32(ctx.r10.u32 + 21868, ctx.r11.u32);
	// bl 0x8801a150
	ctx.lr = 0x880A80D4;
	sub_8801A150(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a150
	ctx.lr = 0x880A80DC;
	sub_8801A150(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8801a150
	ctx.lr = 0x880A80E4;
	sub_8801A150(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a150
	ctx.lr = 0x880A80EC;
	sub_8801A150(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8801a150
	ctx.lr = 0x880A80F4;
	sub_8801A150(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// sth r9,8(r30)
	REX_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// li r5,544
	ctx.r5.s64 = 544;
	// addi r21,r11,-24720
	ctx.r21.s64 = ctx.r11.s64 + -24720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880A8114;
	sub_8813FA58(ctx, base);
	// lis r8,-30606
	ctx.r8.s64 = -2005794816;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,18740(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 18740);
	// lwz r7,100(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r4,r11,28504
	ctx.r4.s64 = ctx.r11.s64 + 28504;
	// beq cr6,0x880a8224
	if (ctx.cr6.eq) goto loc_880A8224;
	// bl 0x88069088
	ctx.lr = 0x880A813C;
	sub_88069088(ctx, base);
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880a8250
	if (!ctx.cr6.eq) goto loc_880A8250;
	// sth r28,8(r30)
	REX_STORE_U16(ctx.r30.u32 + 8, ctx.r28.u16);
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,28152
	ctx.r4.s64 = ctx.r11.s64 + 28152;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8801b4b0
	ctx.lr = 0x880A8160;
	sub_8801B4B0(ctx, base);
	// lis r10,-30710
	ctx.r10.s64 = -2012610560;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,28656
	ctx.r4.s64 = ctx.r10.s64 + 28656;
	// bl 0x8801b478
	ctx.lr = 0x880A8170;
	sub_8801B478(ctx, base);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r31,r21,250
	ctx.r31.s64 = ctx.r21.s64 + 250;
	// li r22,-250
	ctx.r22.s64 = -250;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r24,67
	ctx.r24.s64 = 67;
	// li r25,65
	ctx.r25.s64 = 65;
	// li r26,86
	ctx.r26.s64 = 86;
loc_880A818C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88069948
	ctx.lr = 0x880A8198;
	sub_88069948(ctx, base);
	// lbz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880a8208
	if (ctx.cr6.eq) goto loc_880A8208;
	// sth r23,-2(r31)
	REX_STORE_U16(ctx.r31.u32 + -2, ctx.r23.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// stdx r10,r31,r22
	REX_STORE_U64(ctx.r31.u32 + ctx.r22.u32, ctx.r10.u64);
	// sth r27,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88068e68
	ctx.lr = 0x880A81C4;
	sub_88068E68(ctx, base);
	// bl 0x880696c8
	ctx.lr = 0x880A81C8;
	sub_880696C8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// sth r7,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// sth r5,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r5.u16);
	// sth r28,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// lwz r3,28(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// sth r3,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// stb r24,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r24.u8);
	// stb r25,19(r31)
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r25.u8);
	// stb r26,20(r31)
	REX_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
	// stb r28,21(r31)
	REX_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
loc_880A8208:
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// addi r11,r21,794
	ctx.r11.s64 = ctx.r21.s64 + 794;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880a818c
	if (ctx.cr6.lt) goto loc_880A818C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
loc_880A8224:
	// bl 0x88069088
	ctx.lr = 0x880A8228;
	sub_88069088(ctx, base);
	// lbz r10,17(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880a8250
	if (!ctx.cr6.eq) goto loc_880A8250;
loc_880A8234:
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,28152
	ctx.r4.s64 = ctx.r11.s64 + 28152;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8801b3f8
	ctx.lr = 0x880A8248;
	sub_8801B3F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
loc_880A8250:
	// bl 0x8806cfd0
	ctx.lr = 0x880A8254;
	sub_8806CFD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a8234
	if (!ctx.cr6.eq) goto loc_880A8234;
	// bl 0x880b4100
	ctx.lr = 0x880A8260;
	sub_880B4100(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21900(r10)
	REX_STORE_U32(ctx.r10.u32 + 21900, ctx.r11.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880a8288
	if (!ctx.cr6.eq) goto loc_880A8288;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_880A8288:
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880a82a4
	if (!ctx.cr6.eq) goto loc_880A82A4;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r8,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r8.u32);
loc_880A82A4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880a82d4
	if (ctx.cr6.eq) goto loc_880A82D4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880a82bc
	if (ctx.cr6.eq) goto loc_880A82BC;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x880a82f0
	goto loc_880A82F0;
loc_880A82BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880a82d4
	if (ctx.cr6.eq) goto loc_880A82D4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880a82d4
	if (!ctx.cr6.eq) goto loc_880A82D4;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x88067700
	ctx.lr = 0x880A82D4;
	sub_88067700(ctx, base);
loc_880A82D4:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880a82f4
	if (!ctx.cr6.eq) goto loc_880A82F4;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880a82f4
	if (ctx.cr6.eq) goto loc_880A82F4;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
loc_880A82F0:
	// bl 0x88067700
	ctx.lr = 0x880A82F4;
	sub_88067700(ctx, base);
loc_880A82F4:
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,28152
	ctx.r4.s64 = ctx.r11.s64 + 28152;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8801b4b0
	ctx.lr = 0x880A8308;
	sub_8801B4B0(ctx, base);
	// lis r10,-30710
	ctx.r10.s64 = -2012610560;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,28656
	ctx.r4.s64 = ctx.r10.s64 + 28656;
	// bl 0x8801b478
	ctx.lr = 0x880A8318;
	sub_8801B478(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880AA848) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// bge 0x880aa880
	if (!ctx.cr0.lt) goto loc_880AA880;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880aa8ec
	goto loc_880AA8EC;
loc_880AA880:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x8813fe70
	ctx.lr = 0x880AA8B4;
	sub_8813FE70(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880AA8C0;
	sub_8813FF28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8813ff08
	ctx.lr = 0x880AA8CC;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880AA8E8;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AA8EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AB298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880AB2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x8801a448
	ctx.lr = 0x880AB2B8;
	sub_8801A448(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r3,127
	ctx.r3.s64 = 127;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880AB2C8;
	sub_8801A448(ctx, base);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r10,72
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 72, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// ble cr6,0x880ab2e0
	if (!ctx.cr6.gt) goto loc_880AB2E0;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880AB2E0:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// bl 0x8801a448
	ctx.lr = 0x880AB2F0;
	sub_8801A448(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8801a860
	ctx.lr = 0x880AB318;
	sub_8801A860(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8801a448
	ctx.lr = 0x880AB320;
	sub_8801A448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,5378
	ctx.r5.s64 = ctx.r11.s64 + 5378;
	// stw r5,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bl 0x8801a448
	ctx.lr = 0x880AB340;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ab34c
	if (ctx.cr6.eq) goto loc_880AB34C;
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_880AB34C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a448
	ctx.lr = 0x880AB354;
	sub_8801A448(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ABAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// addi r11,r11,1792
	ctx.r11.s64 = ctx.r11.s64 + 1792;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880ABAE8:
	// stwu r10,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880abae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ABAE8;
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// lis r8,-30606
	ctx.r8.s64 = -2005794816;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,1784(r9)
	REX_STORE_U32(ctx.r9.u32 + 1784, ctx.r10.u32);
	// stw r10,1780(r8)
	REX_STORE_U32(ctx.r8.u32 + 1780, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880ABEA0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,9168
	ctx.r9.s64 = ctx.r10.s64 + 9168;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r7,r9
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880ABFB0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,9168
	ctx.r10.s64 = ctx.r10.s64 + 9168;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r10,10
	ctx.r9.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r7,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AC160) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,9168
	ctx.r9.s64 = ctx.r10.s64 + 9168;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r5,r7,r9
	REX_STORE_U64(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AC4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f60
	ctx.lr = 0x880AC4C8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,752
	ctx.r31.s64 = ctx.r3.s64 + 752;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r28,64
	ctx.r28.s64 = 64;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,256
	ctx.r24.s64 = 256;
	// li r18,2
	ctx.r18.s64 = 2;
	// li r25,128
	ctx.r25.s64 = 128;
	// li r23,384
	ctx.r23.s64 = 384;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r19,6
	ctx.r19.s64 = 6;
	// li r22,8
	ctx.r22.s64 = 8;
loc_880AC500:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x880ac898
	if (ctx.cr6.gt) goto loc_880AC898;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880ac5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC5C0;
	// bdzf 4*cr6+eq,0x880ac634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC634;
	// bdzf 4*cr6+eq,0x880ac670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC670;
	// bdzf 4*cr6+eq,0x880ac6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC6E0;
	// bdzf 4*cr6+eq,0x880ac77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC77C;
	// bdzf 4*cr6+eq,0x880ac7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880AC7F0;
	// bne cr6,0x880ac81c
	if (!ctx.cr6.eq) goto loc_880AC81C;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r24,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// divw. r10,r28,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble 0x880ac5bc
	if (!ctx.cr0.gt) goto loc_880AC5BC;
loc_880AC560:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8801a860
	ctx.lr = 0x880AC57C;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// divw r5,r28,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880ac560
	if (ctx.cr6.lt) goto loc_880AC560;
loc_880AC5BC:
	// stw r18,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_880AC5C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x880ac5d8
	if (ctx.cr6.lt) goto loc_880AC5D8;
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_880AC5D8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a860
	ctx.lr = 0x880AC5EC;
	sub_8801A860(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r3,r6,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// subf. r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bgt 0x880ac898
	if (ctx.cr0.gt) goto loc_880AC898;
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// b 0x880ac890
	goto loc_880AC890;
loc_880AC634:
	// stw r23,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ac658
	if (ctx.cr6.eq) goto loc_880AC658;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_880AC658:
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// divw r10,r28,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_880AC670:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x880ac688
	if (ctx.cr6.gt) goto loc_880AC688;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_880AC688:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a860
	ctx.lr = 0x880AC69C;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x880ac888
	goto loc_880AC888;
loc_880AC6E0:
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r23,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ac704
	if (ctx.cr6.eq) goto loc_880AC704;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_880AC704:
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// divw. r10,r28,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble 0x880ac778
	if (!ctx.cr0.gt) goto loc_880AC778;
loc_880AC71C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8801a860
	ctx.lr = 0x880AC738;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// divw r4,r28,r11
	ctx.r4.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880ac71c
	if (ctx.cr6.lt) goto loc_880AC71C;
loc_880AC778:
	// stw r19,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
loc_880AC77C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x880ac794
	if (ctx.cr6.lt) goto loc_880AC794;
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_880AC794:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a860
	ctx.lr = 0x880AC7A8;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r3,r6,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// subf. r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bgt 0x880ac898
	if (ctx.cr0.gt) goto loc_880AC898;
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// b 0x880ac890
	goto loc_880AC890;
loc_880AC7F0:
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r24,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// divw r10,r28,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r28.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_880AC81C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x880ac834
	if (ctx.cr6.gt) goto loc_880AC834;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_880AC834:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a860
	ctx.lr = 0x880AC848;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
loc_880AC888:
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bgt 0x880ac898
	if (ctx.cr0.gt) goto loc_880AC898;
loc_880AC890:
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_880AC898:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x880ac500
	if (!ctx.cr0.eq) goto loc_880AC500;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B3D88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r31,50
	ctx.r31.s64 = 50;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b3df4
	if (!ctx.cr6.eq) goto loc_880B3DF4;
	// bl 0x880694f0
	ctx.lr = 0x880B3DB0;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3dd0
	if (ctx.cr6.eq) goto loc_880B3DD0;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B3DC4;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3df4
	if (ctx.cr6.eq) goto loc_880B3DF4;
loc_880B3DD0:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B3DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3DF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4220) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x880694f0
	ctx.lr = 0x880B4230;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b4258
	if (!ctx.cr6.eq) goto loc_880B4258;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B4258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4B98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88023f40
	ctx.lr = 0x880B4BAC;
	sub_88023F40(ctx, base);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1052(r3)
	REX_STORE_U32(ctx.r3.u32 + 1052, ctx.r11.u32);
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// stw r10,1132(r3)
	REX_STORE_U32(ctx.r3.u32 + 1132, ctx.r10.u32);
	// lwz r9,1204(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1204);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b4bec
	if (ctx.cr6.eq) goto loc_880B4BEC;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r3,1044
	ctx.r3.s64 = ctx.r3.s64 + 1044;
	// addis r9,r10,-46
	ctx.r9.s64 = ctx.r10.s64 + -3014656;
	// stw r11,1056(r31)
	REX_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x880B4BEC;
	sub_88022110(ctx, base);
loc_880B4BEC:
	// lwz r11,1208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b4c18
	if (ctx.cr6.eq) goto loc_880B4C18;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,1124
	ctx.r3.s64 = ctx.r31.s64 + 1124;
	// addis r9,r10,96
	ctx.r9.s64 = ctx.r10.s64 + 6291456;
	// stw r11,1136(r31)
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r9,1140(r31)
	REX_STORE_U32(ctx.r31.u32 + 1140, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x880B4C18;
	sub_88022110(ctx, base);
loc_880B4C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B5700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B5708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B5718;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021898
	ctx.lr = 0x880B572C;
	sub_88021898(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bge 0x880b578c
	if (!ctx.cr0.lt) goto loc_880B578C;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b578c
	if (ctx.cr6.eq) goto loc_880B578C;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,172(r4)
	REX_STORE_U32(ctx.r4.u32 + 172, ctx.r8.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r10,r3,-3
	ctx.xer.ca = ctx.r3.u32 > 2;
	ctx.r10.s64 = ctx.r3.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bge 0x880b578c
	if (!ctx.cr0.lt) goto loc_880B578C;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_880B578C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bge 0x880b57ec
	if (!ctx.cr0.lt) goto loc_880B57EC;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b57ec
	if (ctx.cr6.eq) goto loc_880B57EC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,532(r4)
	REX_STORE_U32(ctx.r4.u32 + 532, ctx.r8.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addic. r10,r3,-3
	ctx.xer.ca = ctx.r3.u32 > 2;
	ctx.r10.s64 = ctx.r3.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge 0x880b57f0
	if (!ctx.cr0.lt) goto loc_880B57F0;
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880B57EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880B57F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B5EA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B5EA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B5EBC;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021508
	ctx.lr = 0x880B5ED0;
	sub_88021508(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880b5fb0
	if (!ctx.cr0.lt) goto loc_880B5FB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,56(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// addis r30,r8,-60
	ctx.r30.s64 = ctx.r8.s64 + -3932160;
	// lwz r29,52(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// bne cr6,0x880b5f1c
	if (!ctx.cr6.eq) goto loc_880B5F1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B5F18;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_880B5F1C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88013ce0
	ctx.lr = 0x880B5F4C;
	sub_88013CE0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b5fb0
	if (!ctx.cr0.lt) goto loc_880B5FB0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880b5f84
	if (!ctx.cr0.lt) goto loc_880B5F84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880B5F84;
	sub_88021598(ctx, base);
loc_880B5F84:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// ble cr6,0x880b5fa0
	if (!ctx.cr6.gt) goto loc_880B5FA0;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880B5FA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880B5FB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B7E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B7E70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B7E80;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021508
	ctx.lr = 0x880B7E94;
	sub_88021508(ctx, base);
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f0,19576(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19576);
	// stfd f0,136(r9)
	REX_STORE_U64(ctx.r9.u32 + 136, ctx.f0.u64);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880b7f84
	if (!ctx.cr0.lt) goto loc_880B7F84;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,170
	ctx.r8.s64 = 170;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,-21
	ctx.r6.s64 = -21;
	// lwz r26,52(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addis r30,r5,-70
	ctx.r30.s64 = ctx.r5.s64 + -4587520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880140f0
	ctx.lr = 0x880B7F04;
	sub_880140F0(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r6,-35
	ctx.r6.s64 = -35;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x880140f0
	ctx.lr = 0x880B7F38;
	sub_880140F0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b7f84
	if (!ctx.cr0.lt) goto loc_880B7F84;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880b7f64
	if (!ctx.cr0.lt) goto loc_880B7F64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880B7F64;
	sub_88021598(ctx, base);
loc_880B7F64:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
loc_880B7F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B8DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B8DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880B8DE0;
	sub_88021508(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r9,-29512
	ctx.r5.s64 = ctx.r9.s64 + -29512;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// bl 0x880214b8
	ctx.lr = 0x880B8E10;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B9160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f60
	ctx.lr = 0x880B9168;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B917C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x88021508
	ctx.lr = 0x880B9190;
	sub_88021508(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r29,56
	ctx.r29.s64 = 3670016;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r24,24
	ctx.r24.s64 = 1572864;
	// lis r25,8
	ctx.r25.s64 = 524288;
	// bge 0x880b932c
	if (!ctx.cr0.lt) goto loc_880B932C;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B91D0;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x8801a808
	ctx.lr = 0x880B91DC;
	sub_8801A808(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r28,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r28.u32);
	// li r20,64
	ctx.r20.s64 = 64;
	// lwz r4,976(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 976);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r5,980(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 980);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r7,r28,-12
	ctx.r7.s64 = ctx.r28.s64 + -12;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r6,-27
	ctx.r6.s64 = -27;
	// subf r5,r23,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r23.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880B921C;
	sub_880140F0(ctx, base);
	// lwz r4,988(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 988);
	// lwz r11,984(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 984);
	// li r21,48
	ctx.r21.s64 = 48;
	// subf r5,r29,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r28,-8
	ctx.r7.s64 = ctx.r28.s64 + -8;
	// li r6,-27
	ctx.r6.s64 = -27;
	// li r3,15
	ctx.r3.s64 = 15;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x880140f0
	ctx.lr = 0x880B9254;
	sub_880140F0(ctx, base);
	// li r22,32
	ctx.r22.s64 = 32;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r5,996(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 996);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,992(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 992);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r28,-4
	ctx.r7.s64 = ctx.r28.s64 + -4;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r6,-27
	ctx.r6.s64 = -27;
	// li r3,15
	ctx.r3.s64 = 15;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// bl 0x880140f0
	ctx.lr = 0x880B928C;
	sub_880140F0(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r4,968(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 968);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// li r6,-27
	ctx.r6.s64 = -27;
	// li r3,15
	ctx.r3.s64 = 15;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r25.u64;
	// bl 0x880140f0
	ctx.lr = 0x880B92C0;
	sub_880140F0(ctx, base);
	// lwz r11,964(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 964);
	// lwz r4,960(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 960);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// li r6,-27
	ctx.r6.s64 = -27;
	// li r3,15
	ctx.r3.s64 = 15;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// bl 0x880140f0
	ctx.lr = 0x880B92F4;
	sub_880140F0(ctx, base);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r4,952(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 952);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,956(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 956);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// subf r5,r23,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r23.u64;
	// addi r7,r28,12
	ctx.r7.s64 = ctx.r28.s64 + 12;
	// li r6,-27
	ctx.r6.s64 = -27;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880140f0
	ctx.lr = 0x880B932C;
	sub_880140F0(ctx, base);
loc_880B932C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bge 0x880b95cc
	if (!ctx.cr0.lt) goto loc_880B95CC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880b9438
	if (!ctx.cr6.eq) goto loc_880B9438;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// beq cr6,0x880b9370
	if (ctx.cr6.eq) goto loc_880B9370;
	// subfic r11,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// stw r11,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_880B9370:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b8260
	ctx.lr = 0x880B9384;
	sub_880B8260(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880244d0
	ctx.lr = 0x880B9394;
	sub_880244D0(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,976(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 976);
	// lwz r11,980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 980);
	// subf r5,r23,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B93AC;
	sub_880244D0(ctx, base);
	// stw r3,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// lwz r9,984(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 984);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,988(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 988);
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B93C8;
	sub_880244D0(ctx, base);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lwz r7,992(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 992);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,996(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 996);
	// subf r5,r29,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r29.u64;
	// add r4,r7,r25
	ctx.r4.u64 = ctx.r7.u64 + ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B93E4;
	sub_880244D0(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// lwz r6,972(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 972);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,968(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 968);
	// subf r4,r25,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r5,r29,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B9400;
	sub_880244D0(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lwz r10,960(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 960);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,964(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 964);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// subf r4,r24,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r24.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B941C;
	sub_880244D0(ctx, base);
	// stw r3,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// lwz r4,952(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 952);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,956(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 956);
	// subf r5,r23,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B9434;
	sub_880244D0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
loc_880B9438:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b8260
	ctx.lr = 0x880B944C;
	sub_880B8260(ctx, base);
	// lwz r11,980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 980);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,60(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// subf r5,r23,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r4,976(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 976);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x88013940
	ctx.lr = 0x880B946C;
	sub_88013940(ctx, base);
	// lwz r10,988(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 988);
	// lwz r9,984(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 984);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r7,64(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bl 0x88013940
	ctx.lr = 0x880B9490;
	sub_88013940(ctx, base);
	// lwz r5,996(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r4,992(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 992);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// bl 0x88013940
	ctx.lr = 0x880B94B4;
	sub_88013940(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r10,968(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 968);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r7,72(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// subf r4,r25,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r25.u64;
	// bl 0x88013940
	ctx.lr = 0x880B94D8;
	sub_88013940(ctx, base);
	// lwz r9,964(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 964);
	// lwz r4,960(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 960);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r29,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// bl 0x88013940
	ctx.lr = 0x880B94FC;
	sub_88013940(ctx, base);
	// lwz r11,956(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 956);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// subf r5,r23,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r4,952(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 952);
	// bl 0x88013940
	ctx.lr = 0x880B951C;
	sub_88013940(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bge 0x880b95cc
	if (!ctx.cr0.lt) goto loc_880B95CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880244a8
	ctx.lr = 0x880B9540;
	sub_880244A8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x880b9594
	if (!ctx.cr6.gt) goto loc_880B9594;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r7,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// bgt 0x880b9594
	if (ctx.cr0.gt) goto loc_880B9594;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x88021598
	ctx.lr = 0x880B9588;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_880B9594:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x880b95c4
	if (!ctx.cr6.lt) goto loc_880B95C4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_880B95C4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_880B95CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BD710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BD718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BD728;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BD73C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880bd76c
	if (ctx.cr6.gt) goto loc_880BD76C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880bd778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BD778;
	// bdzf 4*cr6+eq,0x880bd794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BD794;
	// bdzf 4*cr6+eq,0x880bd7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BD7B8;
	// bne cr6,0x880bd7e0
	if (!ctx.cr6.eq) goto loc_880BD7E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880BD76C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BD778:
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BD794:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880bd76c
	if (!ctx.cr0.lt) goto loc_880BD76C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BD7B8:
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BD7CC;
	sub_88021D68(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BD7E0:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 144);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880bd76c
	if (!ctx.cr6.gt) goto loc_880BD76C;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BD804;
	sub_88021D68(ctx, base);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-8528
	ctx.r4.s64 = ctx.r10.s64 + -8528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880BD818;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BD824;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BE8A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880BE8A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BE8B8;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BE8CC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x880bebd8
	if (ctx.cr6.gt) goto loc_880BEBD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880be960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BE960;
	// bdzf 4*cr6+eq,0x880be9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BE9B8;
	// bdzf 4*cr6+eq,0x880bea50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BEA50;
	// bdzf 4*cr6+eq,0x880bea8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BEA8C;
	// bdzf 4*cr6+eq,0x880beb3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BEB3C;
	// bne cr6,0x880bebb8
	if (!ctx.cr6.eq) goto loc_880BEBB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-30708
	ctx.r8.s64 = -2012479488;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-29256
	ctx.r4.s64 = ctx.r8.s64 + -29256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880BE948;
	sub_880213F0(ctx, base);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,1212(r27)
	REX_STORE_U32(ctx.r27.u32 + 1212, ctx.r29.u32);
	// b 0x880bebd8
	goto loc_880BEBD8;
loc_880BE960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x880BE96C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bebd8
	if (!ctx.cr6.eq) goto loc_880BEBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-26712
	ctx.r4.s64 = ctx.r10.s64 + -26712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BE9A0;
	sub_880213F0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x880bebd8
	goto loc_880BEBD8;
loc_880BE9B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x880BE9C4;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bebd8
	if (!ctx.cr6.eq) goto loc_880BEBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880bea40
	if (!ctx.cr6.eq) goto loc_880BEA40;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-26288
	ctx.r4.s64 = ctx.r10.s64 + -26288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BEA0C;
	sub_880213F0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bgt cr6,0x880bea2c
	if (ctx.cr6.gt) goto loc_880BEA2C;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_880BEA2C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x880bea40
	if (ctx.cr0.gt) goto loc_880BEA40;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_880BEA40:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x880bebd4
	goto loc_880BEBD4;
loc_880BEA50:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,22904
	ctx.r4.s64 = ctx.r11.s64 + 22904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BEA74;
	sub_88021780(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x880bebd8
	goto loc_880BEBD8;
loc_880BEA8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021a28
	ctx.lr = 0x880BEA98;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bebd8
	if (!ctx.cr6.eq) goto loc_880BEBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27176
	ctx.r4.s64 = ctx.r10.s64 + -27176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BEADC;
	sub_880213F0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// ble cr6,0x880beb0c
	if (!ctx.cr6.gt) goto loc_880BEB0C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880BEB0C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x880beb20
	if (!ctx.cr0.lt) goto loc_880BEB20;
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_880BEB20:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x880bebd8
	if (ctx.cr6.lt) goto loc_880BEBD8;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// b 0x880bebd8
	goto loc_880BEBD8;
loc_880BEB3C:
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,19504(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19504);
	// stfd f0,136(r9)
	REX_STORE_U64(ctx.r9.u32 + 136, ctx.f0.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x880BEB5C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bebd8
	if (!ctx.cr6.eq) goto loc_880BEBD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880bebd8
	if (!ctx.cr0.lt) goto loc_880BEBD8;
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23272
	ctx.r4.s64 = ctx.r11.s64 + 23272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BEB88;
	sub_88021780(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88021598
	ctx.lr = 0x880BEB98;
	sub_88021598(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88021598
	ctx.lr = 0x880BEBA8;
	sub_88021598(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x880bebd8
	goto loc_880BEBD8;
loc_880BEBB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021a28
	ctx.lr = 0x880BEBC4;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bebd8
	if (!ctx.cr6.eq) goto loc_880BEBD8;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_880BEBD4:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_880BEBD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880bec1c
	if (ctx.cr6.lt) goto loc_880BEC1C;
	// bne cr6,0x880bec44
	if (!ctx.cr6.eq) goto loc_880BEC44;
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880bec44
	if (!ctx.cr6.gt) goto loc_880BEC44;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BEC0C;
	sub_88021D68(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BEC1C:
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// lis r10,216
	ctx.r10.s64 = 14155776;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880bec44
	if (!ctx.cr6.lt) goto loc_880BEC44;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BEC40;
	sub_88021D68(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_880BEC44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C2168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x88021898
	ctx.lr = 0x880C2194;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,8424
	ctx.r5.s64 = ctx.r10.s64 + 8424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880C21B0;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880C28A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C28B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021898
	ctx.lr = 0x880C28D0;
	sub_88021898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r5,r7,10072
	ctx.r5.s64 = ctx.r7.s64 + 10072;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bl 0x88021848
	ctx.lr = 0x880C2918;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C2EA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880C2EB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C2EC4;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021508
	ctx.lr = 0x880C2ED8;
	sub_88021508(ctx, base);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2ef0
	if (ctx.cr6.eq) goto loc_880C2EF0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_880C2EF0:
	// lwz r10,424(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2f00
	if (ctx.cr6.eq) goto loc_880C2F00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880C2F00:
	// lwz r10,644(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 644);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2f10
	if (ctx.cr6.eq) goto loc_880C2F10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880C2F10:
	// lwz r10,864(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 864);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2f20
	if (ctx.cr6.eq) goto loc_880C2F20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880C2F20:
	// lwz r10,1084(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1084);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2f30
	if (ctx.cr6.eq) goto loc_880C2F30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880C2F30:
	// lwz r10,1304(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c2f40
	if (ctx.cr6.eq) goto loc_880C2F40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880C2F40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c2f60
	if (!ctx.cr6.eq) goto loc_880C2F60;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x880C2F54;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880C2F60:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880c30dc
	if (!ctx.cr0.lt) goto loc_880C30DC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r11,-13360
	ctx.r29.s64 = ctx.r11.s64 + -13360;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x880c3024
	if (!ctx.cr6.eq) goto loc_880C3024;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// ori r7,r11,43691
	ctx.r7.u64 = ctx.r11.u64 | 43691;
loc_880C2F9C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mulhw r10,r11,r7
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mulli r10,r11,220
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(220));
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,204(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 204);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880c2f9c
	if (ctx.cr6.eq) goto loc_880C2F9C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,92(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C3004;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880C3010;
	sub_8801A448(ctx, base);
	// addi r6,r3,-8
	ctx.r6.s64 = ctx.r3.s64 + -8;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
loc_880C3024:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r24,r11,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r28,92(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// lwzx r7,r24,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwzx r5,r24,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r5.u32);
	// add r30,r7,r28
	ctx.r30.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880C3070;
	sub_88013CE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x880C308C;
	sub_88013940(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c30dc
	if (!ctx.cr0.lt) goto loc_880C30DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C30A4;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c30c0
	if (!ctx.cr0.lt) goto loc_880C30C0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x880C30C0;
	sub_88021598(ctx, base);
loc_880C30C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_880C30DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C52B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C52C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88021508
	ctx.lr = 0x880C52E0;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,-10
	ctx.r8.s64 = -10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C5308;
	sub_880244A8(ctx, base);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,20976
	ctx.r5.s64 = ctx.r7.s64 + 20976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C531C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5A28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x880C5A30;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C5A44;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88021508
	ctx.lr = 0x880C5A58;
	sub_88021508(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r27,r11,-36
	ctx.r27.s64 = ctx.r11.s64 + -2359296;
	// lwz r28,92(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bge 0x880c5af4
	if (!ctx.cr0.lt) goto loc_880C5AF4;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addis r26,r27,24
	ctx.r26.s64 = ctx.r27.s64 + 1572864;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x880C5A94;
	sub_880244D0(ctx, base);
	// addi r25,r3,-16
	ctx.r25.s64 = ctx.r3.s64 + -16;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x880C5AA0;
	sub_8801A448(ctx, base);
	// add r7,r3,r25
	ctx.r7.u64 = ctx.r3.u64 + ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x88013940
	ctx.lr = 0x880C5ABC;
	sub_88013940(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x880c5ad8
	if (!ctx.cr6.lt) goto loc_880C5AD8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_880C5AD8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x880c5af4
	if (ctx.cr6.lt) goto loc_880C5AF4;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880C5AF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880c5da4
	if (!ctx.cr0.lt) goto loc_880C5DA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r23,4
	ctx.r23.s64 = 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880c5b54
	if (!ctx.cr6.eq) goto loc_880C5B54;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x880C5B38;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880c5b44
	if (ctx.cr6.lt) goto loc_880C5B44;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_880C5B44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r23,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x880c5b74
	goto loc_880C5B74;
loc_880C5B54:
	// bl 0x880244d0
	ctx.lr = 0x880C5B58;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880c5b74
	if (ctx.cr6.lt) goto loc_880C5B74;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8801a808
	ctx.lr = 0x880C5B6C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_880C5B74:
	// lwz r28,68(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,20164
	ctx.r10.s64 = 1321467904;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ori r27,r10,60495
	ctx.r27.u64 = ctx.r10.u64 | 60495;
	// lwz r20,64(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 6;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r9,-11888
	ctx.r29.s64 = ctx.r9.s64 + -11888;
	// lwz r3,92(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mulhw r4,r11,r27
	ctx.r4.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32)) >> 32;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// rlwinm r19,r8,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r25,20
	ctx.r25.s64 = 1310720;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r24,66
	ctx.r24.s64 = 4325376;
	// mulli r9,r10,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(13));
	// subf r4,r9,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// subf r5,r24,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r24.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// mullw r10,r20,r11
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r11.s32);
	// subf r11,r19,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r19.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r11,-24
	ctx.r7.s64 = ctx.r11.s64 + -24;
	// bl 0x88013940
	ctx.lr = 0x880C5BF4;
	sub_88013940(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r3,18
	ctx.r3.s64 = 18;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// subf r5,r24,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r24.u64;
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r25.u64;
	// bl 0x88013940
	ctx.lr = 0x880C5C38;
	sub_88013940(ctx, base);
	// mulhw r3,r28,r27
	ctx.r3.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32)) >> 32;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// lis r26,76
	ctx.r26.s64 = 4980736;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r9,r11,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r3,r9,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r5,r26,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r26.u64;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwzx r9,r28,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bl 0x88013940
	ctx.lr = 0x880C5C98;
	sub_88013940(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r5,r28,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// subf r5,r26,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r26.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r27.u64;
	// bl 0x88013940
	ctx.lr = 0x880C5CD4;
	sub_88013940(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// blt cr6,0x880c5cf0
	if (ctx.cr6.lt) goto loc_880C5CF0;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_880C5CF0:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x880c5d30
	if (!ctx.cr0.lt) goto loc_880C5D30;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// blt cr6,0x880c5d30
	if (ctx.cr6.lt) goto loc_880C5D30;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_880C5D30:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x880c5d4c
	if (ctx.cr6.gt) goto loc_880C5D4C;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880C5D4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x880c5d7c
	if (!ctx.cr0.lt) goto loc_880C5D7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bge cr6,0x880c5d7c
	if (!ctx.cr6.lt) goto loc_880C5D7C;
	// stw r23,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
loc_880C5D7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880c5da4
	if (!ctx.cr0.lt) goto loc_880C5DA4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88021598
	ctx.lr = 0x880C5D98;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
loc_880C5DA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CAA88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CAA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9096
	ctx.r4.s64 = ctx.r10.s64 + -9096;
	// bl 0x88021d68
	ctx.lr = 0x880CAABC;
	sub_88021D68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca968
	ctx.lr = 0x880CAACC;
	sub_880CA968(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB160) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CB168;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CB178;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880CB18C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880cb2e0
	if (ctx.cr6.gt) goto loc_880CB2E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cb1f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB1F8;
	// bdzf 4*cr6+eq,0x880cb23c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB23C;
	// bdzf 4*cr6+eq,0x880cb2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB2EC;
	// bdzf 4*cr6+eq,0x880cb38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB38C;
	// bne cr6,0x880cb428
	if (!ctx.cr6.eq) goto loc_880CB428;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,336
	ctx.r9.s64 = 22020096;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-8552
	ctx.r4.s64 = ctx.r8.s64 + -8552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB1E4;
	sub_88021D68(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB1F8:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CB208;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb2e0
	if (ctx.cr6.eq) goto loc_880CB2E0;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8784
	ctx.r4.s64 = ctx.r11.s64 + 8784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880CB224;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB23C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88021a28
	ctx.lr = 0x880CB248;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cb2e0
	if (!ctx.cr6.eq) goto loc_880CB2E0;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14080
	ctx.r4.s64 = ctx.r11.s64 + 14080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CB264;
	sub_880213F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,14576
	ctx.r4.s64 = ctx.r9.s64 + 14576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CB284;
	sub_880213F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,14576
	ctx.r4.s64 = ctx.r7.s64 + 14576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CB2A4;
	sub_880213F0(ctx, base);
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,1932(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 1932);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880cb2c8
	if (ctx.cr6.eq) goto loc_880CB2C8;
	// lis r11,-120
	ctx.r11.s64 = -7864320;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880CB2C8:
	// lwz r10,1932(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1932);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1932(r29)
	REX_STORE_U32(ctx.r29.u32 + 1932, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880CB2E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB2EC:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CB2FC;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb2e0
	if (ctx.cr6.eq) goto loc_880CB2E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880cb318
	if (!ctx.cr6.eq) goto loc_880CB318;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880CB318:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addis r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 7864320;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x880CB334;
	sub_8801A448(ctx, base);
	// addi r8,r3,320
	ctx.r8.s64 = ctx.r3.s64 + 320;
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r4,r7,-8552
	ctx.r4.s64 = ctx.r7.s64 + -8552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB354;
	sub_88021D68(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bgt 0x880cb2e0
	if (ctx.cr0.gt) goto loc_880CB2E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB38C:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9096
	ctx.r4.s64 = ctx.r11.s64 + -9096;
	// bl 0x88021e70
	ctx.lr = 0x880CB39C;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb2e0
	if (ctx.cr6.eq) goto loc_880CB2E0;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880CB3B8;
	sub_88021780(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x880CB3CC;
	sub_880216E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x880216e8
	ctx.lr = 0x880CB3DC;
	sub_880216E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021598
	ctx.lr = 0x880CB3E8;
	sub_88021598(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// lis r8,312
	ctx.r8.s64 = 20447232;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-8552
	ctx.r4.s64 = ctx.r7.s64 + -8552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB414;
	sub_88021D68(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB428:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88021a28
	ctx.lr = 0x880CB434;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cb2e0
	if (!ctx.cr6.eq) goto loc_880CB2E0;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-20376
	ctx.r4.s64 = ctx.r11.s64 + -20376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880CB450;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880CB45C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CD408;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CD41C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021be0
	ctx.lr = 0x880CD430;
	sub_88021BE0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// stw r11,100(r28)
	REX_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// lis r8,296
	ctx.r8.s64 = 19398656;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-8552
	ctx.r4.s64 = ctx.r7.s64 + -8552;
	// bl 0x88021d68
	ctx.lr = 0x880CD468;
	sub_88021D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r6,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r6.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CD484;
	sub_880244A8(ctx, base);
	// lis r5,-30707
	ctx.r5.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,-11472
	ctx.r5.s64 = ctx.r5.s64 + -11472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CD498;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CDB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880CDB70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CDB7C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021de0
	ctx.lr = 0x880CDB8C;
	sub_88021DE0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8801a860
	ctx.lr = 0x880CDBA4;
	sub_8801A860(ctx, base);
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// bl 0x880cd900
	ctx.lr = 0x880CDBCC;
	sub_880CD900(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r29,92(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r28,96(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x88024498
	ctx.lr = 0x880CDBDC;
	sub_88024498(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r27,40(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r26,r3,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880CDBFC;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x8801a808
	ctx.lr = 0x880CDC0C;
	sub_8801A808(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r8,104(r30)
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x880CDC28;
	sub_8801A3E0(ctx, base);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x880cdc6c
	if (ctx.cr6.gt) goto loc_880CDC6C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8801a448
	ctx.lr = 0x880CDC3C;
	sub_8801A448(ctx, base);
	// addi r10,r3,-24
	ctx.r10.s64 = ctx.r3.s64 + -24;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,48
	ctx.r3.s64 = 48;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x880CDC58;
	sub_8801A448(ctx, base);
	// addi r8,r3,-24
	ctx.r8.s64 = ctx.r3.s64 + -24;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_880CDC6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF0D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CF0E8;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021898
	ctx.lr = 0x880CF0FC;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880cf148
	if (!ctx.cr0.lt) goto loc_880CF148;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x880cf148
	if (!ctx.cr6.gt) goto loc_880CF148;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x880CF13C;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CF148:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF5D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CF5F0;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021898
	ctx.lr = 0x880CF604;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880cf670
	if (!ctx.cr0.lt) goto loc_880CF670;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,904(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 904);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,904(r31)
	REX_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// bge 0x880cf634
	if (!ctx.cr0.lt) goto loc_880CF634;
	// stw r10,904(r31)
	REX_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
loc_880CF634:
	// lwz r11,900(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 900);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,900(r31)
	REX_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// bge 0x880cf648
	if (!ctx.cr0.lt) goto loc_880CF648;
	// stw r10,900(r31)
	REX_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
loc_880CF648:
	// lwz r11,904(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 904);
	// lwz r10,900(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 900);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880cf670
	if (!ctx.cr0.eq) goto loc_880CF670;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x880CF664;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CF670:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f54
	ctx.lr = 0x880D0460;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D0474;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88021508
	ctx.lr = 0x880D0488;
	sub_88021508(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880d09e4
	if (!ctx.cr0.lt) goto loc_880D09E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// lis r19,13
	ctx.r19.s64 = 851968;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r29,r19,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r19.u64;
	// add r20,r9,r24
	ctx.r20.u64 = ctx.r9.u64 + ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x880244d0
	ctx.lr = 0x880D04CC;
	sub_880244D0(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,36(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880d04e8
	if (!ctx.cr6.eq) goto loc_880D04E8;
	// neg r25,r25
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r25.u64);
loc_880D04E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d0510
	if (!ctx.cr6.eq) goto loc_880D0510;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_880D0510:
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,2
	ctx.r9.s64 = 2;
	// add r5,r6,r24
	ctx.r5.u64 = ctx.r6.u64 + ctx.r24.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014188
	ctx.lr = 0x880D053C;
	sub_88014188(ctx, base);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r23,12
	ctx.r23.s64 = 786432;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r6,r25
	ctx.r7.u64 = ctx.r6.u64 + ctx.r25.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x88014188
	ctx.lr = 0x880D0578;
	sub_88014188(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r21,r25,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r26,22
	ctx.r26.s64 = 1441792;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x88014188
	ctx.lr = 0x880D05B0;
	sub_88014188(ctx, base);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r22,r25,r11
	ctx.r22.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bl 0x88014188
	ctx.lr = 0x880D05F0;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r9,r24
	ctx.r5.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r15,r11,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r11.u64;
	// subfic r9,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0638;
	sub_88014578(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfic r9,r6,30
	ctx.xer.ca = ctx.r6.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r6.u64;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0684;
	sub_88014578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r11,r11,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subfic r9,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x880D06C8;
	sub_88014578(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,3
	ctx.r10.s64 = 3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfic r9,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0714;
	sub_88014578(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r29,r8,r19
	ctx.r29.u64 = ctx.r8.u64 + ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880D072C;
	sub_880244D0(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,36(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x880d0748
	if (!ctx.cr6.eq) goto loc_880D0748;
	// neg r25,r25
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r25.u64);
loc_880D0748:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d0770
	if (!ctx.cr6.eq) goto loc_880D0770;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_880D0770:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014188
	ctx.lr = 0x880D079C;
	sub_88014188(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r25,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r25.u64;
	// bl 0x88014188
	ctx.lr = 0x880D07D4;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r21,r25,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r21,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r21.u64;
	// bl 0x88014188
	ctx.lr = 0x880D0808;
	sub_88014188(ctx, base);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r22,r25,r11
	ctx.r22.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r7,r22,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r22.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bl 0x88014188
	ctx.lr = 0x880D0848;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r9,r24
	ctx.r5.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r20,r11,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r11.u64;
	// subfic r9,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0888;
	sub_88014578(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// subfic r9,r4,30
	ctx.xer.ca = ctx.r4.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r4.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014578
	ctx.lr = 0x880D08D4;
	sub_88014578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subf r7,r21,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r21.u64;
	// lwz r25,8(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r5,r25,r26
	ctx.r5.u64 = ctx.r25.u64 + ctx.r26.u64;
	// subfic r9,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0918;
	sub_88014578(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// subf r7,r22,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r22.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subfic r9,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	ctx.r9.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// bl 0x88014578
	ctx.lr = 0x880D0964;
	sub_88014578(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880d09e4
	if (!ctx.cr0.lt) goto loc_880D09E4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880244a8
	ctx.lr = 0x880D097C;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880d0998
	if (!ctx.cr0.lt) goto loc_880D0998;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88021598
	ctx.lr = 0x880D0998;
	sub_88021598(ctx, base);
loc_880D0998:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r9,-12
	ctx.r6.s64 = ctx.r9.s64 + -12;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r4,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r5,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
loc_880D09E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D79E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880D79F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,408
	ctx.r4.s64 = 408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D7A00;
	sub_88023E98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D7A08;
	sub_88023F40(ctx, base);
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D7A18;
	sub_8813FA58(ctx, base);
	// stw r26,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r26.u32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D7A2C;
	sub_880240B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D7A34;
	sub_88023C50(ctx, base);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r25,0(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,-2
	ctx.r6.s64 = -2;
	// lwz r4,16(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r4,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// li r27,5
	ctx.r27.s64 = 5;
	// stw r5,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// li r30,32
	ctx.r30.s64 = 32;
	// stw r29,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r7,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r27,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r28,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r28,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r30,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r6,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r29,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stw r29,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r9,60(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r8,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D7AD0;
	sub_880244D0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r3,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stw r30,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// stw r6,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r6.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r28,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r28.u32);
	// stw r30,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r5,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r5.u32);
	// stw r30,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r4,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r4.u32);
	// stw r30,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r27,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// stw r30,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r11,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r30,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r4,r10,30240
	ctx.r4.s64 = ctx.r10.s64 + 30240;
	// bl 0x88023e90
	ctx.lr = 0x880D7B40;
	sub_88023E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D8DC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880D8DC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D8DD4;
	sub_88023F40(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8801a860
	ctx.lr = 0x880D8DEC;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880D8E18;
	sub_88024438(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,56(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,60(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// addis r10,r5,40
	ctx.r10.s64 = ctx.r5.s64 + 2621440;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d8e6c
	if (!ctx.cr6.eq) goto loc_880D8E6C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880d8e6c
	if (ctx.cr6.lt) goto loc_880D8E6C;
	// stw r29,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// stw r29,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
loc_880D8E6C:
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D8E80;
	sub_880244D0(ctx, base);
	// stw r3,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8801a448
	ctx.lr = 0x880D8E8C;
	sub_8801A448(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,-6
	ctx.r10.s64 = ctx.r11.s64 + -6;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// stw r27,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// beq cr6,0x880d8ee0
	if (ctx.cr6.eq) goto loc_880D8EE0;
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// bge 0x880d8ee0
	if (!ctx.cr0.lt) goto loc_880D8EE0;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r29,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
loc_880D8EE0:
	// srawi r9,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// subfic r3,r4,128
	ctx.xer.ca = ctx.r4.u32 <= 128;
	ctx.r3.u64 = static_cast<uint64_t>(128) - ctx.r4.u64;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bge cr6,0x880d8f18
	if (!ctx.cr6.lt) goto loc_880D8F18;
	// neg r30,r30
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r30.u64);
loc_880D8F18:
	// srawi r11,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 16;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r11,r10,96
	ctx.xer.ca = ctx.r10.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x880d8fa0
	if (ctx.cr0.gt) goto loc_880D8FA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-27
	ctx.r6.s64 = -27;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013940
	ctx.lr = 0x880D8F48;
	sub_88013940(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-37
	ctx.r6.s64 = -37;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x880D8F6C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,76
	ctx.r9.s64 = 76;
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-36
	ctx.r6.s64 = -36;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x880D8F90;
	sub_88013CE0(ctx, base);
loc_880D8F90:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88023f48
	ctx.lr = 0x880D8F98;
	sub_88023F48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880D8FA0:
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// li r26,8
	ctx.r26.s64 = 8;
loc_880D8FA8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a860
	ctx.lr = 0x880D8FBC;
	sub_8801A860(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801ac60
	ctx.lr = 0x880D8FE8;
	sub_8801AC60(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801ab78
	ctx.lr = 0x880D8FF8;
	sub_8801AB78(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801aa90
	ctx.lr = 0x880D9008;
	sub_8801AA90(ctx, base);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8801ad48
	ctx.lr = 0x880D9018;
	sub_8801AD48(ctx, base);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x880d9068
	if (!ctx.cr6.lt) goto loc_880D9068;
	// li r11,-8
	ctx.r11.s64 = -8;
	// b 0x880d9074
	goto loc_880D9074;
loc_880D9068:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x880d9074
	if (ctx.cr6.lt) goto loc_880D9074;
	// li r11,7
	ctx.r11.s64 = 7;
loc_880D9074:
	// subfic r6,r11,130
	ctx.xer.ca = ctx.r11.u32 <= 130;
	ctx.r6.u64 = static_cast<uint64_t>(130) - ctx.r11.u64;
	// addi r3,r11,10345
	ctx.r3.s64 = ctx.r11.s64 + 10345;
	// bl 0x8801a9c8
	ctx.lr = 0x880D9080;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D9094;
	sub_8813FF90(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d90b0
	if (ctx.cr6.eq) goto loc_880D90B0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880244d0
	ctx.lr = 0x880D90B0;
	sub_880244D0(ctx, base);
loc_880D90B0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x880d8fa8
	if (!ctx.cr0.eq) goto loc_880D8FA8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DC520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DC534;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880DC544;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DC57C;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-15552
	ctx.r5.s64 = ctx.r6.s64 + -15552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DC590;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DD1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DD1E4;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880DD1F4;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DD22C;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-12304
	ctx.r5.s64 = ctx.r6.s64 + -12304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DD240;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DD718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DD72C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x88021508
	ctx.lr = 0x880DD73C;
	sub_88021508(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r6,-6
	ctx.r6.s64 = -6;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// stw r10,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r5,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r5.u32);
	// stw r9,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DD784;
	sub_880244A8(ctx, base);
	// lis r3,-30706
	ctx.r3.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-10920
	ctx.r5.s64 = ctx.r3.s64 + -10920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DD798;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DDC68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DDC88;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880DDC98;
	sub_88021508(ctx, base);
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r3,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// addi r5,r8,-9336
	ctx.r5.s64 = ctx.r8.s64 + -9336;
	// stw r6,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// bl 0x880214b8
	ctx.lr = 0x880DDCEC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880DEE68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x88021c70
	ctx.lr = 0x880DEE80;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880DF3D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880DF3D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DF3EC;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021be0
	ctx.lr = 0x880DF400;
	sub_88021BE0(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x88024030
	ctx.lr = 0x880DF41C;
	sub_88024030(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880df474
	if (!ctx.cr0.lt) goto loc_880DF474;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DF440;
	sub_8801A448(ctx, base);
	// rlwinm r4,r3,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x8801a860
	ctx.lr = 0x880DF454;
	sub_8801A860(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r9,60(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,60(r29)
	REX_STORE_U32(ctx.r29.u32 + 60, ctx.r9.u32);
loc_880DF474:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880df608
	if (ctx.cr6.gt) goto loc_880DF608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880df614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880DF614;
	// bdzf 4*cr6+eq,0x880df7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880DF7EC;
	// bdzf 4*cr6+eq,0x880df968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880DF968;
	// bne cr6,0x880dfa14
	if (!ctx.cr6.eq) goto loc_880DFA14;
	// bl 0x880b1e10
	ctx.lr = 0x880DF49C;
	sub_880B1E10(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// addi r27,r11,3280
	ctx.r27.s64 = ctx.r11.s64 + 3280;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r27,384
	ctx.r3.s64 = ctx.r27.s64 + 384;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x880c9b98
	ctx.lr = 0x880DF4BC;
	sub_880C9B98(ctx, base);
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
loc_880DF4C0:
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r9,-8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a99a8
	ctx.lr = 0x880DF4EC;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880DF4F8;
	sub_8801A448(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880DF510;
	sub_880A9A58(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x880DF524;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880DF530;
	sub_8801A448(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880DF548;
	sub_880A9A58(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x880DF55C;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880DF568;
	sub_8801A448(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,-64
	ctx.r6.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880DF580;
	sub_880A9A58(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r5,r27,592
	ctx.r5.s64 = ctx.r27.s64 + 592;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880df4c0
	if (ctx.cr6.lt) goto loc_880DF4C0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,2388(r29)
	REX_STORE_U32(ctx.r29.u32 + 2388, ctx.r10.u32);
	// bl 0x88027210
	ctx.lr = 0x880DF5AC;
	sub_88027210(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r10,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DF5EC;
	sub_8801A448(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_880DF608:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880DF614:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bge 0x880df648
	if (!ctx.cr0.lt) goto loc_880DF648;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DF634;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880df644
	if (ctx.cr6.eq) goto loc_880DF644;
	// bl 0x880b1c90
	ctx.lr = 0x880DF640;
	sub_880B1C90(ctx, base);
	// b 0x880df648
	goto loc_880DF648;
loc_880DF644:
	// bl 0x880b1a90
	ctx.lr = 0x880DF648;
	sub_880B1A90(ctx, base);
loc_880DF648:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880df6a0
	if (!ctx.cr0.lt) goto loc_880DF6A0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x880df6a0
	if (ctx.cr6.lt) goto loc_880DF6A0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880DF6A0:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880df6d0
	if (!ctx.cr6.eq) goto loc_880DF6D0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x880df6d0
	if (ctx.cr6.lt) goto loc_880DF6D0;
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_880DF6D0:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// subfic r10,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r10.u64 = static_cast<uint64_t>(128) - ctx.r10.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,2388(r29)
	REX_STORE_U32(ctx.r29.u32 + 2388, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880df608
	if (!ctx.cr0.lt) goto loc_880DF608;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// addi r11,r9,3280
	ctx.r11.s64 = ctx.r9.s64 + 3280;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,960
	ctx.r4.s64 = ctx.r11.s64 + 960;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// lwz r9,56(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r8,40
	ctx.r5.s64 = ctx.r8.s64 + 2621440;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a84f0
	ctx.lr = 0x880DF76C;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880DF778;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x880DF788;
	sub_880A85C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x880DF79C;
	sub_880A99A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880DF7A8;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880DF7B4;
	sub_880A9A58(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x880df608
	if (ctx.cr6.lt) goto loc_880DF608;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880DF7EC:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bge 0x880df820
	if (!ctx.cr0.lt) goto loc_880DF820;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DF80C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880df81c
	if (ctx.cr6.eq) goto loc_880DF81C;
	// bl 0x880b1c90
	ctx.lr = 0x880DF818;
	sub_880B1C90(ctx, base);
	// b 0x880df820
	goto loc_880DF820;
loc_880DF81C:
	// bl 0x880b1a90
	ctx.lr = 0x880DF820;
	sub_880B1A90(ctx, base);
loc_880DF820:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880df608
	if (!ctx.cr0.lt) goto loc_880DF608;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r28,40
	ctx.r28.s64 = 2621440;
	// addi r11,r9,3280
	ctx.r11.s64 = ctx.r9.s64 + 3280;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,960
	ctx.r4.s64 = ctx.r11.s64 + 960;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,56(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a84f0
	ctx.lr = 0x880DF8A0;
	sub_880A84F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880DF8AC;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x880DF8BC;
	sub_880A85C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x880DF8D0;
	sub_880A99A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880DF8DC;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880DF8E8;
	sub_880A9A58(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x880df914
	if (ctx.cr6.lt) goto loc_880DF914;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_880DF914:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x880df608
	if (ctx.cr0.gt) goto loc_880DF608;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r9,56(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// addi r4,r10,1480
	ctx.r4.s64 = ctx.r10.s64 + 1480;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,60(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x88021ad0
	ctx.lr = 0x880DF958;
	sub_88021AD0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880DF968:
	// li r30,0
	ctx.r30.s64 = 0;
loc_880DF96C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880ded00
	ctx.lr = 0x880DF97C;
	sub_880DED00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x880df96c
	if (ctx.cr6.lt) goto loc_880DF96C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880df9c4
	if (!ctx.cr6.eq) goto loc_880DF9C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024750
	ctx.lr = 0x880DF99C;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,144
	ctx.r8.s64 = 144;
	// lwz r4,60(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// li r7,144
	ctx.r7.s64 = 144;
	// lwz r3,56(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,3
	ctx.r10.s64 = 3;
	// bl 0x88011728
	ctx.lr = 0x880DF9C0;
	sub_88011728(ctx, base);
	// b 0x880df9f4
	goto loc_880DF9F4;
loc_880DF9C4:
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,40
	ctx.r10.s64 = 40;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,60(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// li r8,166
	ctx.r8.s64 = 166;
	// lwz r3,56(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// divw r10,r9,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,166
	ctx.r7.s64 = 166;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x880DF9F4;
	sub_880114D8(ctx, base);
loc_880DF9F4:
	// bl 0x880b3b60
	ctx.lr = 0x880DF9F8;
	sub_880B3B60(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,240
	ctx.r10.s64 = 240;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880DFA14:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880df608
	if (!ctx.cr0.lt) goto loc_880DF608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88023f48
	ctx.lr = 0x880DFA2C;
	sub_88023F48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880247f8
	ctx.lr = 0x880DFA34;
	sub_880247F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E6E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880E6E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E6E44;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x88021898
	ctx.lr = 0x880E6E58;
	sub_88021898(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-30706
	ctx.r7.s64 = -2012348416;
	// addi r10,r11,396
	ctx.r10.s64 = ctx.r11.s64 + 396;
	// addi r5,r7,26992
	ctx.r5.s64 = ctx.r7.s64 + 26992;
	// stw r9,416(r11)
	REX_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,436(r11)
	REX_STORE_U32(ctx.r11.u32 + 436, ctx.r6.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,408(r11)
	REX_STORE_U32(ctx.r11.u32 + 408, ctx.r10.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// bl 0x88021848
	ctx.lr = 0x880E6EAC;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E73F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880E7400;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E7418;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021898
	ctx.lr = 0x880E742C;
	sub_88021898(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ori r26,r10,32896
	ctx.r26.u64 = ctx.r10.u64 | 32896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,2860
	ctx.r31.s64 = ctx.r11.s64 + 2860;
	// lwz r9,2860(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2860);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e74c8
	if (ctx.cr6.eq) goto loc_880E74C8;
	// stw r26,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 62);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e749c
	if (ctx.cr6.eq) goto loc_880E749C;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// beq cr6,0x880e74c8
	if (ctx.cr6.eq) goto loc_880E74C8;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880e74c4
	goto loc_880E74C4;
loc_880E749C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bge cr6,0x880e74c8
	if (!ctx.cr6.lt) goto loc_880E74C8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880e74c8
	if (!ctx.cr6.eq) goto loc_880E74C8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880E74C4:
	// stw r10,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_880E74C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e7308
	ctx.lr = 0x880E74D4;
	sub_880E7308(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x880e7984
	if (ctx.cr6.gt) goto loc_880E7984;
	// lis r12,-30706
	ctx.r12.s64 = -2012348416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29944
	ctx.r12.s64 = ctx.r12.s64 + 29944;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880E7520;
	case 1:
		goto loc_880E7614;
	case 2:
		goto loc_880E7710;
	case 3:
		goto loc_880E77AC;
	case 4:
		goto loc_880E77DC;
	case 5:
		goto loc_880E7840;
	case 6:
		goto loc_880E7888;
	case 7:
		goto loc_880E78B8;
	case 8:
		goto loc_880E7918;
	case 9:
		goto loc_880E7968;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880E7520:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,20(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E752C;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x880E753C;
	sub_88069270(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e7984
	if (ctx.cr6.gt) goto loc_880E7984;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r28,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e75f8
	if (!ctx.cr6.eq) goto loc_880E75F8;
	// stw r28,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// sth r28,60(r31)
	REX_STORE_U16(ctx.r31.u32 + 60, ctx.r28.u16);
	// li r5,7168
	ctx.r5.s64 = 7168;
	// sth r29,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r29.u16);
	// addi r9,r9,28344
	ctx.r9.s64 = ctx.r9.s64 + 28344;
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r31,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r31.u32);
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880E75E4;
	sub_8813FA58(ctx, base);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880E75F4;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_880E75F8:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,-11936(r10)
	REX_STORE_U32(ctx.r10.u32 + -11936, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7614:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880e762c
	if (!ctx.cr0.lt) goto loc_880E762C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880E762C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e76b4
	if (ctx.cr6.lt) goto loc_880E76B4;
	// bne cr6,0x880e7984
	if (!ctx.cr6.eq) goto loc_880E7984;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x880e7670
	if (!ctx.cr0.lt) goto loc_880E7670;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x880e7670
	if (ctx.cr6.lt) goto loc_880E7670;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_880E7670:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x880e7984
	if (ctx.cr6.lt) goto loc_880E7984;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e7984
	if (!ctx.cr6.eq) goto loc_880E7984;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,8532(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8532);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// blt cr6,0x880e76e4
	if (ctx.cr6.lt) goto loc_880E76E4;
	// beq cr6,0x880e76d8
	if (ctx.cr6.eq) goto loc_880E76D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880e76fc
	if (!ctx.cr6.lt) goto loc_880E76FC;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-9560
	ctx.r4.s64 = ctx.r11.s64 + -9560;
	// b 0x880e76ec
	goto loc_880E76EC;
loc_880E76B4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bgt 0x880e7984
	if (ctx.cr0.gt) goto loc_880E7984;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E76D8:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-10672
	ctx.r4.s64 = ctx.r11.s64 + -10672;
	// b 0x880e76ec
	goto loc_880E76EC;
loc_880E76E4:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-11784
	ctx.r4.s64 = ctx.r11.s64 + -11784;
loc_880E76EC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E76F8;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880E76FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7710:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880e7734
	if (!ctx.cr6.eq) goto loc_880E7734;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e7734
	if (ctx.cr6.eq) goto loc_880E7734;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_880E7734:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x880E7740;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e7984
	if (!ctx.cr6.eq) goto loc_880E7984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,20(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E7754;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x880E7764;
	sub_88069270(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e7798
	if (ctx.cr6.gt) goto loc_880E7798;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// stw r26,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,-11936(r10)
	REX_STORE_U32(ctx.r10.u32 + -11936, ctx.r29.u32);
	// stw r9,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
loc_880E7798:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E77AC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E77DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x880e7984
	if (!ctx.cr0.lt) goto loc_880E7984;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bgt 0x880e7984
	if (ctx.cr0.gt) goto loc_880E7984;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e7830
	if (!ctx.cr6.eq) goto loc_880E7830;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E7824;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7830:
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7840:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880E784C;
	sub_88021598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E7864;
	sub_8801A448(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r3,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stw r29,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7888:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6f68
	ctx.lr = 0x880E7894;
	sub_880E6F68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e7984
	if (!ctx.cr6.eq) goto loc_880E7984;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E78B8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bgt 0x880e78f4
	if (ctx.cr0.gt) goto loc_880E78F4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x880e78f4
	if (ctx.cr6.lt) goto loc_880E78F4;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_880E78F4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r7,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7918:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880e70f0
	ctx.lr = 0x880E7928;
	sub_880E70F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e7984
	if (!ctx.cr6.eq) goto loc_880E7984;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,24672
	ctx.r9.u64 = ctx.r11.u64 | 24672;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E7968:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x880e7984
	if (!ctx.cr0.lt) goto loc_880E7984;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E7984;
	sub_88021928(ctx, base);
loc_880E7984:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ECAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880ECAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880ECAF8;
	sub_88021508(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ecb50
	if (ctx.cr6.eq) goto loc_880ECB50;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
loc_880ECB50:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-13936
	ctx.r5.s64 = ctx.r11.s64 + -13936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880ECB64;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880ED658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880ED678;
	sub_88021508(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blt cr6,0x880ed734
	if (ctx.cr6.lt) goto loc_880ED734;
	// beq cr6,0x880ed6ec
	if (ctx.cr6.eq) goto loc_880ED6EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880ed77c
	if (!ctx.cr6.lt) goto loc_880ED77C;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r5,-14
	ctx.r5.s64 = -14;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x880ed778
	goto loc_880ED778;
loc_880ED6EC:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x880ed77c
	goto loc_880ED77C;
loc_880ED734:
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,40
	ctx.r10.s64 = 40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r8,160
	ctx.r8.s64 = 160;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r6,-20
	ctx.r6.s64 = -20;
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r5,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
loc_880ED778:
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_880ED77C:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-11448
	ctx.r5.s64 = ctx.r11.s64 + -11448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880ED790;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2CD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x880F2CD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880F2CE4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880F2CF4;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x880F2D04;
	sub_88069270(ctx, base);
	// lwz r11,7768(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// stw r11,8088(r31)
	REX_STORE_U32(ctx.r31.u32 + 8088, ctx.r11.u32);
	// lwz r10,7772(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r10,8092(r31)
	REX_STORE_U32(ctx.r31.u32 + 8092, ctx.r10.u32);
	// lwz r9,7800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7800);
	// stw r9,8096(r31)
	REX_STORE_U32(ctx.r31.u32 + 8096, ctx.r9.u32);
	// lwz r8,7804(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7804);
	// stw r8,8100(r31)
	REX_STORE_U32(ctx.r31.u32 + 8100, ctx.r8.u32);
	// lwz r7,7832(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7832);
	// stw r7,8104(r31)
	REX_STORE_U32(ctx.r31.u32 + 8104, ctx.r7.u32);
	// lwz r6,7836(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7836);
	// stw r6,8108(r31)
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r6.u32);
	// lwz r5,7864(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// stw r5,8112(r31)
	REX_STORE_U32(ctx.r31.u32 + 8112, ctx.r5.u32);
	// lwz r4,7868(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,8116(r31)
	REX_STORE_U32(ctx.r31.u32 + 8116, ctx.r4.u32);
	// lwz r3,7896(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7896);
	// stw r3,8120(r31)
	REX_STORE_U32(ctx.r31.u32 + 8120, ctx.r3.u32);
	// lwz r11,7900(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7900);
	// stw r11,8124(r31)
	REX_STORE_U32(ctx.r31.u32 + 8124, ctx.r11.u32);
	// lwz r10,7928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7928);
	// stw r10,8128(r31)
	REX_STORE_U32(ctx.r31.u32 + 8128, ctx.r10.u32);
	// lwz r9,7932(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// stw r9,8132(r31)
	REX_STORE_U32(ctx.r31.u32 + 8132, ctx.r9.u32);
	// lwz r8,7960(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7960);
	// stw r8,8136(r31)
	REX_STORE_U32(ctx.r31.u32 + 8136, ctx.r8.u32);
	// lwz r7,7964(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7964);
	// stw r7,8140(r31)
	REX_STORE_U32(ctx.r31.u32 + 8140, ctx.r7.u32);
	// lwz r6,7992(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7992);
	// stw r6,8144(r31)
	REX_STORE_U32(ctx.r31.u32 + 8144, ctx.r6.u32);
	// lwz r5,7996(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7996);
	// stw r5,8148(r31)
	REX_STORE_U32(ctx.r31.u32 + 8148, ctx.r5.u32);
	// lwz r4,8024(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// stw r4,8152(r31)
	REX_STORE_U32(ctx.r31.u32 + 8152, ctx.r4.u32);
	// lwz r3,8028(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8028);
	// stw r3,8156(r31)
	REX_STORE_U32(ctx.r31.u32 + 8156, ctx.r3.u32);
	// lwz r11,8056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8056);
	// stw r11,8160(r31)
	REX_STORE_U32(ctx.r31.u32 + 8160, ctx.r11.u32);
	// lwz r10,8060(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8060);
	// stw r10,8164(r31)
	REX_STORE_U32(ctx.r31.u32 + 8164, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,640
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 640, ctx.xer);
	// bgt cr6,0x880f2dbc
	if (ctx.cr6.gt) goto loc_880F2DBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880F2DBC:
	// lwz r10,8088(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// lis r26,66
	ctx.r26.s64 = 4325376;
	// lwz r8,8092(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8092);
	// lis r27,91
	ctx.r27.s64 = 5963776;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4692
	ctx.r30.s64 = ctx.r31.s64 + 4692;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r18,-48
	ctx.r18.s64 = -3145728;
	// lwz r7,4708(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4708);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r25,388
	ctx.r25.s64 = 25427968;
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// lis r23,-68
	ctx.r23.s64 = -4456448;
	// subf r29,r26,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r26.u64;
	// subf r28,r27,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r27.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lis r22,288
	ctx.r22.s64 = 18874368;
	// bne cr6,0x880f2e80
	if (!ctx.cr6.eq) goto loc_880F2E80;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f2ebc
	if (!ctx.cr6.lt) goto loc_880F2EBC;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f2ebc
	if (!ctx.cr6.gt) goto loc_880F2EBC;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880f2ebc
	if (!ctx.cr6.lt) goto loc_880F2EBC;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f2ebc
	if (!ctx.cr6.gt) goto loc_880F2EBC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13939
	ctx.r3.s64 = 13939;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2E3C;
	sub_8801A9C8(ctx, base);
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880F2E44;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f2ebc
	if (ctx.cr6.eq) goto loc_880F2EBC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13939
	ctx.r3.s64 = 13939;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2E64;
	sub_8801A9C8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F2E7C;
	sub_8813FF90(ctx, base);
	// b 0x880f2ebc
	goto loc_880F2EBC;
loc_880F2E80:
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f2ebc
	if (!ctx.cr6.lt) goto loc_880F2EBC;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f2ebc
	if (!ctx.cr6.gt) goto loc_880F2EBC;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880f2ebc
	if (!ctx.cr6.lt) goto loc_880F2EBC;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f2ebc
	if (!ctx.cr6.gt) goto loc_880F2EBC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13940
	ctx.r3.s64 = 13940;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2EB4;
	sub_8801A9C8(ctx, base);
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880F2EBC;
	sub_8813FF48(ctx, base);
loc_880F2EBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r8,8132(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8132);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r28,r27,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880f2f80
	if (!ctx.cr6.eq) goto loc_880F2F80;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f2fcc
	if (!ctx.cr6.lt) goto loc_880F2FCC;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f2fcc
	if (!ctx.cr6.gt) goto loc_880F2FCC;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880f2fcc
	if (!ctx.cr6.lt) goto loc_880F2FCC;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f2fcc
	if (!ctx.cr6.gt) goto loc_880F2FCC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13939
	ctx.r3.s64 = 13939;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2F1C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F2F28;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880F2F34;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f2fcc
	if (ctx.cr6.eq) goto loc_880F2FCC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13939
	ctx.r3.s64 = 13939;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2F54;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F2F60;
	sub_8813FF08(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F2F7C;
	sub_8813FF90(ctx, base);
	// b 0x880f2fcc
	goto loc_880F2FCC;
loc_880F2F80:
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f2fcc
	if (!ctx.cr6.lt) goto loc_880F2FCC;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f2fcc
	if (!ctx.cr6.gt) goto loc_880F2FCC;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880f2fcc
	if (!ctx.cr6.lt) goto loc_880F2FCC;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f2fcc
	if (!ctx.cr6.gt) goto loc_880F2FCC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13940
	ctx.r3.s64 = 13940;
	// bl 0x8801a9c8
	ctx.lr = 0x880F2FB4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F2FC0;
	sub_8813FF08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880F2FCC;
	sub_8813FF48(ctx, base);
loc_880F2FCC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r22,276
	ctx.r22.s64 = 18087936;
	// lis r19,-36
	ctx.r19.s64 = -2359296;
	// lis r21,368
	ctx.r21.s64 = 24117248;
	// lis r20,352
	ctx.r20.s64 = 23068672;
	// lis r23,-32
	ctx.r23.s64 = -2097152;
	// lis r17,356
	ctx.r17.s64 = 23330816;
	// lis r16,280
	ctx.r16.s64 = 18350080;
	// lis r15,-40
	ctx.r15.s64 = -2621440;
	// lis r14,360
	ctx.r14.s64 = 23592960;
	// cmpwi cr6,r11,1248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1248, ctx.xer);
	// blt cr6,0x880f347c
	if (ctx.cr6.lt) goto loc_880F347C;
	// lwz r9,3332(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3332);
	// addi r27,r31,3316
	ctx.r27.s64 = ctx.r31.s64 + 3316;
	// lwz r11,8120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8120);
	// lis r25,168
	ctx.r25.s64 = 11010048;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,8124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8124);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,152
	ctx.r26.s64 = 9961472;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lis r28,83
	ctx.r28.s64 = 5439488;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne cr6,0x880f30b0
	if (!ctx.cr6.eq) goto loc_880F30B0;
	// subf r30,r28,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r28.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f30ec
	if (!ctx.cr6.lt) goto loc_880F30EC;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f30ec
	if (!ctx.cr6.gt) goto loc_880F30EC;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f30ec
	if (!ctx.cr6.lt) goto loc_880F30EC;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f30ec
	if (!ctx.cr6.gt) goto loc_880F30EC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14065
	ctx.r3.s64 = 14065;
	// bl 0x8801a9c8
	ctx.lr = 0x880F306C;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3074;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f30ec
	if (ctx.cr6.eq) goto loc_880F30EC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14065
	ctx.r3.s64 = 14065;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3094;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F30AC;
	sub_8813FF90(ctx, base);
	// b 0x880f30ec
	goto loc_880F30EC;
loc_880F30B0:
	// subf r4,r28,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r28.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f30ec
	if (!ctx.cr6.lt) goto loc_880F30EC;
	// cmpw cr6,r4,r19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f30ec
	if (!ctx.cr6.gt) goto loc_880F30EC;
	// cmpw cr6,r5,r20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880f30ec
	if (!ctx.cr6.lt) goto loc_880F30EC;
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f30ec
	if (!ctx.cr6.gt) goto loc_880F30EC;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14066
	ctx.r3.s64 = 14066;
	// bl 0x8801a9c8
	ctx.lr = 0x880F30E4;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F30EC;
	sub_8813FF48(ctx, base);
loc_880F30EC:
	// lwz r9,3504(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3504);
	// addi r27,r31,3488
	ctx.r27.s64 = ctx.r31.s64 + 3488;
	// lwz r11,8160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8160);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,8164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8164);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne cr6,0x880f31b4
	if (!ctx.cr6.eq) goto loc_880F31B4;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f3200
	if (!ctx.cr6.lt) goto loc_880F3200;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f3200
	if (!ctx.cr6.gt) goto loc_880F3200;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f3200
	if (!ctx.cr6.lt) goto loc_880F3200;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880f3200
	if (!ctx.cr6.gt) goto loc_880F3200;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14065
	ctx.r3.s64 = 14065;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3150;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F315C;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,160(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3168;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3200
	if (ctx.cr6.eq) goto loc_880F3200;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14065
	ctx.r3.s64 = 14065;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3188;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3194;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F31B0;
	sub_8813FF90(ctx, base);
	// b 0x880f3200
	goto loc_880F3200;
loc_880F31B4:
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f3200
	if (!ctx.cr6.lt) goto loc_880F3200;
	// cmpw cr6,r4,r19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f3200
	if (!ctx.cr6.gt) goto loc_880F3200;
	// cmpw cr6,r5,r20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880f3200
	if (!ctx.cr6.lt) goto loc_880F3200;
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3200
	if (!ctx.cr6.gt) goto loc_880F3200;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14066
	ctx.r3.s64 = 14066;
	// bl 0x8801a9c8
	ctx.lr = 0x880F31E8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F31F4;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,160(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3200;
	sub_8813FF48(ctx, base);
loc_880F3200:
	// lwz r11,3676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3676);
	// addi r28,r31,3660
	ctx.r28.s64 = ctx.r31.s64 + 3660;
	// lwz r30,8112(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,8116(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8116);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// bne cr6,0x880f32a8
	if (!ctx.cr6.eq) goto loc_880F32A8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r30,r11,-78
	ctx.r30.s64 = ctx.r11.s64 + -5111808;
	// addis r29,r10,108
	ctx.r29.s64 = ctx.r10.s64 + 7077888;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880f3344
	if (!ctx.cr6.lt) goto loc_880F3344;
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f3344
	if (!ctx.cr6.gt) goto loc_880F3344;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f3344
	if (!ctx.cr6.lt) goto loc_880F3344;
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f3344
	if (!ctx.cr6.gt) goto loc_880F3344;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14049
	ctx.r3.s64 = 14049;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3264;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F326C;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3344
	if (ctx.cr6.eq) goto loc_880F3344;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14049
	ctx.r3.s64 = 14049;
	// bl 0x8801a9c8
	ctx.lr = 0x880F328C;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F32A4;
	sub_8813FF90(ctx, base);
	// b 0x880f3344
	goto loc_880F3344;
loc_880F32A8:
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r9,272
	ctx.r9.s64 = 17825792;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r4,r8,-74
	ctx.r4.s64 = ctx.r8.s64 + -4849664;
	// addis r5,r7,112
	ctx.r5.s64 = ctx.r7.s64 + 7340032;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f32f0
	if (!ctx.cr6.lt) goto loc_880F32F0;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f32f0
	if (!ctx.cr6.gt) goto loc_880F32F0;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f32f0
	if (!ctx.cr6.lt) goto loc_880F32F0;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f32f0
	if (!ctx.cr6.gt) goto loc_880F32F0;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14050
	ctx.r3.s64 = 14050;
	// bl 0x8801a9c8
	ctx.lr = 0x880F32E8;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F32F0;
	sub_8813FF48(ctx, base);
loc_880F32F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r4,r8,-122
	ctx.r4.s64 = ctx.r8.s64 + -7995392;
	// addis r5,r7,120
	ctx.r5.s64 = ctx.r7.s64 + 7864320;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3344
	if (!ctx.cr6.lt) goto loc_880F3344;
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3344
	if (!ctx.cr6.gt) goto loc_880F3344;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f3344
	if (!ctx.cr6.lt) goto loc_880F3344;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f3344
	if (!ctx.cr6.gt) goto loc_880F3344;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14051
	ctx.r3.s64 = 14051;
	// bl 0x8801a9c8
	ctx.lr = 0x880F333C;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3344;
	sub_8813FF48(ctx, base);
loc_880F3344:
	// lwz r11,4020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4020);
	// addi r28,r31,4004
	ctx.r28.s64 = ctx.r31.s64 + 4004;
	// lwz r30,8104(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,8108(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bne cr6,0x880f33ec
	if (!ctx.cr6.eq) goto loc_880F33EC;
	// addis r30,r11,-87
	ctx.r30.s64 = ctx.r11.s64 + -5701632;
	// addis r29,r10,52
	ctx.r29.s64 = ctx.r10.s64 + 3407872;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880f347c
	if (!ctx.cr6.lt) goto loc_880F347C;
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880f347c
	if (!ctx.cr6.gt) goto loc_880F347C;
	// cmpw cr6,r29,r14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880f347c
	if (!ctx.cr6.lt) goto loc_880F347C;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880f347c
	if (!ctx.cr6.gt) goto loc_880F347C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14054
	ctx.r3.s64 = 14054;
	// bl 0x8801a9c8
	ctx.lr = 0x880F33A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F33B0;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f347c
	if (ctx.cr6.eq) goto loc_880F347C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14054
	ctx.r3.s64 = 14054;
	// bl 0x8801a9c8
	ctx.lr = 0x880F33D0;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F33E8;
	sub_8813FF90(ctx, base);
	// b 0x880f347c
	goto loc_880F347C;
loc_880F33EC:
	// addis r4,r11,-79
	ctx.r4.s64 = ctx.r11.s64 + -5177344;
	// addis r5,r10,60
	ctx.r5.s64 = ctx.r10.s64 + 3932160;
	// cmpw cr6,r4,r16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880f3428
	if (!ctx.cr6.lt) goto loc_880F3428;
	// cmpw cr6,r4,r15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880f3428
	if (!ctx.cr6.gt) goto loc_880F3428;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880f3428
	if (!ctx.cr6.lt) goto loc_880F3428;
	// cmpw cr6,r5,r15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880f3428
	if (!ctx.cr6.gt) goto loc_880F3428;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14055
	ctx.r3.s64 = 14055;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3420;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3428;
	sub_8813FF48(ctx, base);
loc_880F3428:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,260
	ctx.r9.s64 = 17039360;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r4,r8,-139
	ctx.r4.s64 = ctx.r8.s64 + -9109504;
	// addis r5,r7,68
	ctx.r5.s64 = ctx.r7.s64 + 4456448;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f347c
	if (!ctx.cr6.lt) goto loc_880F347C;
	// lis r11,-20
	ctx.r11.s64 = -1310720;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f347c
	if (!ctx.cr6.gt) goto loc_880F347C;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880f347c
	if (!ctx.cr6.lt) goto loc_880F347C;
	// cmpw cr6,r5,r15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880f347c
	if (!ctx.cr6.gt) goto loc_880F347C;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14056
	ctx.r3.s64 = 14056;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3474;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F347C;
	sub_8813FF48(ctx, base);
loc_880F347C:
	// lwz r11,4364(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4364);
	// addi r25,r31,4348
	ctx.r25.s64 = ctx.r31.s64 + 4348;
	// lwz r30,8096(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	// lis r20,67
	ctx.r20.s64 = 4390912;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,8092(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 8092);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r15,115
	ctx.r15.s64 = 7536640;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lis r16,5
	ctx.r16.s64 = 327680;
	// lis r21,268
	ctx.r21.s64 = 17563648;
	// lis r18,143
	ctx.r18.s64 = 9371648;
	// lis r19,23
	ctx.r19.s64 = 1507328;
	// lis r22,25
	ctx.r22.s64 = 1638400;
	// lis r17,384
	ctx.r17.s64 = 25165824;
	// lis r14,-64
	ctx.r14.s64 = -4194304;
	// bne cr6,0x880f3684
	if (!ctx.cr6.eq) goto loc_880F3684;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r9,260
	ctx.r9.s64 = 17039360;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r28,r20,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r20.u64;
	// subf r27,r22,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r22.u64;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f354c
	if (!ctx.cr6.lt) goto loc_880F354C;
	// lis r11,-20
	ctx.r11.s64 = -1310720;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f354c
	if (!ctx.cr6.gt) goto loc_880F354C;
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f354c
	if (!ctx.cr6.lt) goto loc_880F354C;
	// cmpw cr6,r27,r14
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880f354c
	if (!ctx.cr6.gt) goto loc_880F354C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14059
	ctx.r3.s64 = 14059;
	// bl 0x8801a9c8
	ctx.lr = 0x880F350C;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3514;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f354c
	if (ctx.cr6.eq) goto loc_880F354C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14059
	ctx.r3.s64 = 14059;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3534;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F354C;
	sub_8813FF90(ctx, base);
loc_880F354C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r28,r15,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r15.u64;
	// subf r27,r16,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r16.u64;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f35e4
	if (!ctx.cr6.lt) goto loc_880F35E4;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f35e4
	if (!ctx.cr6.gt) goto loc_880F35E4;
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f35e4
	if (!ctx.cr6.lt) goto loc_880F35E4;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f35e4
	if (!ctx.cr6.gt) goto loc_880F35E4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14061
	ctx.r3.s64 = 14061;
	// bl 0x8801a9c8
	ctx.lr = 0x880F35A4;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F35AC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f35e4
	if (ctx.cr6.eq) goto loc_880F35E4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14061
	ctx.r3.s64 = 14061;
	// bl 0x8801a9c8
	ctx.lr = 0x880F35CC;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F35E4;
	sub_8813FF90(ctx, base);
loc_880F35E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,276
	ctx.r9.s64 = 18087936;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r30,r8,-123
	ctx.r30.s64 = ctx.r8.s64 + -8060928;
	// addis r29,r7,-89
	ctx.r29.s64 = ctx.r7.s64 + -5832704;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f377c
	if (!ctx.cr6.lt) goto loc_880F377C;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f377c
	if (!ctx.cr6.gt) goto loc_880F377C;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f377c
	if (!ctx.cr6.lt) goto loc_880F377C;
	// lis r11,-40
	ctx.r11.s64 = -2621440;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f377c
	if (!ctx.cr6.gt) goto loc_880F377C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14063
	ctx.r3.s64 = 14063;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3640;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3648;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f377c
	if (ctx.cr6.eq) goto loc_880F377C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14063
	ctx.r3.s64 = 14063;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3668;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F3680;
	sub_8813FF90(ctx, base);
	// b 0x880f377c
	goto loc_880F377C;
loc_880F3684:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r28,272
	ctx.r28.s64 = 17825792;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r4,r11,-79
	ctx.r4.s64 = ctx.r11.s64 + -5177344;
	// subf r5,r22,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r22.u64;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// lis r27,-32
	ctx.r27.s64 = -2097152;
	// bge cr6,0x880f36d0
	if (!ctx.cr6.lt) goto loc_880F36D0;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f36d0
	if (!ctx.cr6.gt) goto loc_880F36D0;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f36d0
	if (!ctx.cr6.lt) goto loc_880F36D0;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880f36d0
	if (!ctx.cr6.gt) goto loc_880F36D0;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14060
	ctx.r3.s64 = 14060;
	// bl 0x8801a9c8
	ctx.lr = 0x880F36C8;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F36D0;
	sub_8813FF48(ctx, base);
loc_880F36D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r4,r18,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r18.u64;
	// add r5,r10,r19
	ctx.r5.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880f3720
	if (!ctx.cr6.lt) goto loc_880F3720;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f3720
	if (!ctx.cr6.gt) goto loc_880F3720;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3720
	if (!ctx.cr6.lt) goto loc_880F3720;
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f3720
	if (!ctx.cr6.gt) goto loc_880F3720;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14062
	ctx.r3.s64 = 14062;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3718;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3720;
	sub_8813FF48(ctx, base);
loc_880F3720:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r4,r8,-131
	ctx.r4.s64 = ctx.r8.s64 + -8585216;
	// addis r5,r7,-69
	ctx.r5.s64 = ctx.r7.s64 + -4521984;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f377c
	if (!ctx.cr6.lt) goto loc_880F377C;
	// lis r11,-24
	ctx.r11.s64 = -1572864;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f377c
	if (!ctx.cr6.gt) goto loc_880F377C;
	// lis r11,380
	ctx.r11.s64 = 24903680;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f377c
	if (!ctx.cr6.lt) goto loc_880F377C;
	// lis r11,-60
	ctx.r11.s64 = -3932160;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f377c
	if (!ctx.cr6.gt) goto loc_880F377C;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14064
	ctx.r3.s64 = 14064;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3774;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F377C;
	sub_8813FF48(ctx, base);
loc_880F377C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1248, ctx.xer);
	// blt cr6,0x880f3f68
	if (ctx.cr6.lt) goto loc_880F3F68;
	// lwz r11,3676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3676);
	// addi r30,r31,3660
	ctx.r30.s64 = ctx.r31.s64 + 3660;
	// lis r23,-28
	ctx.r23.s64 = -1835008;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f3914
	if (!ctx.cr6.eq) goto loc_880F3914;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r8,r11,-78
	ctx.r8.s64 = ctx.r11.s64 + -78;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// subfic r7,r10,122
	ctx.xer.ca = ctx.r10.u32 <= 122;
	ctx.r7.u64 = static_cast<uint64_t>(122) - ctx.r10.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r28,8112(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8112);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r27,8116(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f385c
	if (!ctx.cr6.lt) goto loc_880F385C;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f385c
	if (!ctx.cr6.gt) goto loc_880F385C;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f385c
	if (!ctx.cr6.lt) goto loc_880F385C;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f385c
	if (!ctx.cr6.gt) goto loc_880F385C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14048
	ctx.r3.s64 = 14048;
	// bl 0x8801a9c8
	ctx.lr = 0x880F381C;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3824;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f385c
	if (ctx.cr6.eq) goto loc_880F385C;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14048
	ctx.r3.s64 = 14048;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3844;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F385C;
	sub_8813FF90(ctx, base);
loc_880F385C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r11,109
	ctx.r9.s64 = ctx.r11.s64 + 109;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,125
	ctx.xer.ca = ctx.r10.u32 <= 125;
	ctx.r7.u64 = static_cast<uint64_t>(125) - ctx.r10.u64;
	// lwz r6,52(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r4,r7,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f3914
	if (!ctx.cr6.lt) goto loc_880F3914;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3914
	if (!ctx.cr6.gt) goto loc_880F3914;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3914
	if (!ctx.cr6.lt) goto loc_880F3914;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3914
	if (!ctx.cr6.gt) goto loc_880F3914;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14047
	ctx.r3.s64 = 14047;
	// bl 0x8801a9c8
	ctx.lr = 0x880F38D4;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F38DC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3914
	if (ctx.cr6.eq) goto loc_880F3914;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14047
	ctx.r3.s64 = 14047;
	// bl 0x8801a9c8
	ctx.lr = 0x880F38FC;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F3914;
	sub_8813FF90(ctx, base);
loc_880F3914:
	// lwz r11,4020(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4020);
	// addi r30,r31,4004
	ctx.r30.s64 = ctx.r31.s64 + 4004;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f3aa0
	if (!ctx.cr6.eq) goto loc_880F3AA0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r8,r11,-85
	ctx.r8.s64 = ctx.r11.s64 + -85;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r9,69
	ctx.xer.ca = ctx.r9.u32 <= 69;
	ctx.r7.u64 = static_cast<uint64_t>(69) - ctx.r9.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r28,8104(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r27,8108(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f39e4
	if (!ctx.cr6.lt) goto loc_880F39E4;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f39e4
	if (!ctx.cr6.gt) goto loc_880F39E4;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f39e4
	if (!ctx.cr6.lt) goto loc_880F39E4;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f39e4
	if (!ctx.cr6.gt) goto loc_880F39E4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14053
	ctx.r3.s64 = 14053;
	// bl 0x8801a9c8
	ctx.lr = 0x880F39A4;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F39AC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f39e4
	if (ctx.cr6.eq) goto loc_880F39E4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14053
	ctx.r3.s64 = 14053;
	// bl 0x8801a9c8
	ctx.lr = 0x880F39CC;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F39E4;
	sub_8813FF90(ctx, base);
loc_880F39E4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r11,118
	ctx.r9.s64 = ctx.r11.s64 + 118;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,74
	ctx.xer.ca = ctx.r10.u32 <= 74;
	ctx.r7.u64 = static_cast<uint64_t>(74) - ctx.r10.u64;
	// lwz r6,52(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r4,r7,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f3aa0
	if (!ctx.cr6.lt) goto loc_880F3AA0;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3aa0
	if (!ctx.cr6.gt) goto loc_880F3AA0;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// lis r23,-40
	ctx.r23.s64 = -2621440;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3aa4
	if (!ctx.cr6.lt) goto loc_880F3AA4;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3aa4
	if (!ctx.cr6.gt) goto loc_880F3AA4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14052
	ctx.r3.s64 = 14052;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3A5C;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3A64;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3aa4
	if (ctx.cr6.eq) goto loc_880F3AA4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14052
	ctx.r3.s64 = 14052;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3A84;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F3A9C;
	sub_8813FF90(ctx, base);
	// b 0x880f3aa4
	goto loc_880F3AA4;
loc_880F3AA0:
	// lis r23,-40
	ctx.r23.s64 = -2621440;
loc_880F3AA4:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lis r26,272
	ctx.r26.s64 = 17825792;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f3c34
	if (!ctx.cr6.eq) goto loc_880F3C34;
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r9,48(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// addi r8,r11,-90
	ctx.r8.s64 = ctx.r11.s64 + -90;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r9,12
	ctx.xer.ca = ctx.r9.u32 <= 12;
	ctx.r7.u64 = static_cast<uint64_t>(12) - ctx.r9.u64;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,8096(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r28,8092(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 8092);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880f3b78
	if (!ctx.cr6.lt) goto loc_880F3B78;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3b78
	if (!ctx.cr6.gt) goto loc_880F3B78;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3b78
	if (!ctx.cr6.lt) goto loc_880F3B78;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3b78
	if (!ctx.cr6.gt) goto loc_880F3B78;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14058
	ctx.r3.s64 = 14058;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3B38;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3B40;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3b78
	if (ctx.cr6.eq) goto loc_880F3B78;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14058
	ctx.r3.s64 = 14058;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3B60;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F3B78;
	sub_8813FF90(ctx, base);
loc_880F3B78:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r10,40(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,18
	ctx.xer.ca = ctx.r10.u32 <= 18;
	ctx.r7.u64 = static_cast<uint64_t>(18) - ctx.r10.u64;
	// lwz r6,52(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 52);
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r4,r7,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880f3c34
	if (!ctx.cr6.lt) goto loc_880F3C34;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3c34
	if (!ctx.cr6.gt) goto loc_880F3C34;
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3c34
	if (!ctx.cr6.lt) goto loc_880F3C34;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3c34
	if (!ctx.cr6.gt) goto loc_880F3C34;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14057
	ctx.r3.s64 = 14057;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3BF4;
	sub_8801A9C8(ctx, base);
	// lwz r4,160(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3BFC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3c34
	if (ctx.cr6.eq) goto loc_880F3C34;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14057
	ctx.r3.s64 = 14057;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3C1C;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F3C34;
	sub_8813FF90(ctx, base);
loc_880F3C34:
	// lwz r11,3848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3848);
	// addi r28,r31,3832
	ctx.r28.s64 = ctx.r31.s64 + 3832;
	// lwz r30,8152(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8152);
	// lwz r29,8156(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f3d0c
	if (!ctx.cr6.eq) goto loc_880F3D0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,276
	ctx.r9.s64 = 18087936;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r30,r8,78
	ctx.r30.s64 = ctx.r8.s64 + 5111808;
	// addis r29,r7,108
	ctx.r29.s64 = ctx.r7.s64 + 7077888;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3de0
	if (!ctx.cr6.lt) goto loc_880F3DE0;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3de0
	if (!ctx.cr6.gt) goto loc_880F3DE0;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3de0
	if (!ctx.cr6.lt) goto loc_880F3DE0;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3de0
	if (!ctx.cr6.gt) goto loc_880F3DE0;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14049
	ctx.r3.s64 = 14049;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3CA8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3CB4;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3CC0;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3de0
	if (ctx.cr6.eq) goto loc_880F3DE0;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14049
	ctx.r3.s64 = 14049;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3CE0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3CEC;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F3D08;
	sub_8813FF90(ctx, base);
	// b 0x880f3de0
	goto loc_880F3DE0;
loc_880F3D0C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addis r4,r10,74
	ctx.r4.s64 = ctx.r10.s64 + 4849664;
	// addis r5,r9,112
	ctx.r5.s64 = ctx.r9.s64 + 7340032;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880f3d74
	if (!ctx.cr6.lt) goto loc_880F3D74;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3d74
	if (!ctx.cr6.gt) goto loc_880F3D74;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3d74
	if (!ctx.cr6.lt) goto loc_880F3D74;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3d74
	if (!ctx.cr6.gt) goto loc_880F3D74;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14050
	ctx.r3.s64 = 14050;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3D5C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3D68;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3D74;
	sub_8813FF48(ctx, base);
loc_880F3D74:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addis r4,r8,122
	ctx.r4.s64 = ctx.r8.s64 + 7995392;
	// addis r5,r7,120
	ctx.r5.s64 = ctx.r7.s64 + 7864320;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3de0
	if (!ctx.cr6.lt) goto loc_880F3DE0;
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3de0
	if (!ctx.cr6.gt) goto loc_880F3DE0;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3de0
	if (!ctx.cr6.lt) goto loc_880F3DE0;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3de0
	if (!ctx.cr6.gt) goto loc_880F3DE0;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14051
	ctx.r3.s64 = 14051;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3DC8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3DD4;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3DE0;
	sub_8813FF48(ctx, base);
loc_880F3DE0:
	// lwz r11,4192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4192);
	// addi r28,r31,4176
	ctx.r28.s64 = ctx.r31.s64 + 4176;
	// lwz r30,8144(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8144);
	// lis r9,280
	ctx.r9.s64 = 18350080;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,8148(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bne cr6,0x880f3eb0
	if (!ctx.cr6.eq) goto loc_880F3EB0;
	// addis r30,r8,87
	ctx.r30.s64 = ctx.r8.s64 + 5701632;
	// addis r29,r7,52
	ctx.r29.s64 = ctx.r7.s64 + 3407872;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3f68
	if (!ctx.cr6.lt) goto loc_880F3F68;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3f68
	if (!ctx.cr6.gt) goto loc_880F3F68;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3f68
	if (!ctx.cr6.lt) goto loc_880F3F68;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3f68
	if (!ctx.cr6.gt) goto loc_880F3F68;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14054
	ctx.r3.s64 = 14054;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3E4C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3E58;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3E64;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3f68
	if (ctx.cr6.eq) goto loc_880F3F68;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14054
	ctx.r3.s64 = 14054;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3E84;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3E90;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F3EAC;
	sub_8813FF90(ctx, base);
	// b 0x880f3f68
	goto loc_880F3F68;
loc_880F3EB0:
	// addis r4,r8,79
	ctx.r4.s64 = ctx.r8.s64 + 5177344;
	// addis r5,r7,60
	ctx.r5.s64 = ctx.r7.s64 + 3932160;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3f00
	if (!ctx.cr6.lt) goto loc_880F3F00;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3f00
	if (!ctx.cr6.gt) goto loc_880F3F00;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3f00
	if (!ctx.cr6.lt) goto loc_880F3F00;
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3f00
	if (!ctx.cr6.gt) goto loc_880F3F00;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14055
	ctx.r3.s64 = 14055;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3EE8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3EF4;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3F00;
	sub_8813FF48(ctx, base);
loc_880F3F00:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,260
	ctx.r9.s64 = 17039360;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addis r4,r8,139
	ctx.r4.s64 = ctx.r8.s64 + 9109504;
	// addis r5,r7,68
	ctx.r5.s64 = ctx.r7.s64 + 4456448;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f3f68
	if (!ctx.cr6.lt) goto loc_880F3F68;
	// lis r11,-20
	ctx.r11.s64 = -1310720;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3f68
	if (!ctx.cr6.gt) goto loc_880F3F68;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f3f68
	if (!ctx.cr6.lt) goto loc_880F3F68;
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x880f3f68
	if (!ctx.cr6.gt) goto loc_880F3F68;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14056
	ctx.r3.s64 = 14056;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3F50;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3F5C;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,160(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3F68;
	sub_8813FF48(ctx, base);
loc_880F3F68:
	// lwz r11,4536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4536);
	// addi r23,r31,4520
	ctx.r23.s64 = ctx.r31.s64 + 4520;
	// lwz r29,8136(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,8132(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 8132);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// bne cr6,0x880f41ac
	if (!ctx.cr6.eq) goto loc_880F41AC;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lis r9,260
	ctx.r9.s64 = 17039360;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r30,r8,r20
	ctx.r30.u64 = ctx.r8.u64 + ctx.r20.u64;
	// subf r27,r22,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r22.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f4034
	if (!ctx.cr6.lt) goto loc_880F4034;
	// lis r11,-20
	ctx.r11.s64 = -1310720;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4034
	if (!ctx.cr6.gt) goto loc_880F4034;
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f4034
	if (!ctx.cr6.lt) goto loc_880F4034;
	// cmpw cr6,r27,r14
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880f4034
	if (!ctx.cr6.gt) goto loc_880F4034;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14059
	ctx.r3.s64 = 14059;
	// bl 0x8801a9c8
	ctx.lr = 0x880F3FD4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F3FE0;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F3FEC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4034
	if (ctx.cr6.eq) goto loc_880F4034;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14059
	ctx.r3.s64 = 14059;
	// bl 0x8801a9c8
	ctx.lr = 0x880F400C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4018;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F4034;
	sub_8813FF90(ctx, base);
loc_880F4034:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r30,r10,r15
	ctx.r30.u64 = ctx.r10.u64 + ctx.r15.u64;
	// subf r27,r16,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r16.u64;
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f40ec
	if (!ctx.cr6.lt) goto loc_880F40EC;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f40ec
	if (!ctx.cr6.gt) goto loc_880F40EC;
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f40ec
	if (!ctx.cr6.lt) goto loc_880F40EC;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f40ec
	if (!ctx.cr6.gt) goto loc_880F40EC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14061
	ctx.r3.s64 = 14061;
	// bl 0x8801a9c8
	ctx.lr = 0x880F408C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4098;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F40A4;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f40ec
	if (ctx.cr6.eq) goto loc_880F40EC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14061
	ctx.r3.s64 = 14061;
	// bl 0x8801a9c8
	ctx.lr = 0x880F40C4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F40D0;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F40EC;
	sub_8813FF90(ctx, base);
loc_880F40EC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,276
	ctx.r9.s64 = 18087936;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addis r30,r8,123
	ctx.r30.s64 = ctx.r8.s64 + 8060928;
	// addis r29,r7,-89
	ctx.r29.s64 = ctx.r7.s64 + -5832704;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f42d4
	if (!ctx.cr6.lt) goto loc_880F42D4;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f42d4
	if (!ctx.cr6.gt) goto loc_880F42D4;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f42d4
	if (!ctx.cr6.lt) goto loc_880F42D4;
	// lis r11,-40
	ctx.r11.s64 = -2621440;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f42d4
	if (!ctx.cr6.gt) goto loc_880F42D4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14063
	ctx.r3.s64 = 14063;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4148;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4154;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4160;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f42d4
	if (ctx.cr6.eq) goto loc_880F42D4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14063
	ctx.r3.s64 = 14063;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4180;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F418C;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F41A8;
	sub_8813FF90(ctx, base);
	// b 0x880f42d4
	goto loc_880F42D4;
loc_880F41AC:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lis r30,272
	ctx.r30.s64 = 17825792;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addis r4,r10,79
	ctx.r4.s64 = ctx.r10.s64 + 5177344;
	// subf r5,r22,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r22.u64;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// lis r27,-32
	ctx.r27.s64 = -2097152;
	// bge cr6,0x880f4208
	if (!ctx.cr6.lt) goto loc_880F4208;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f4208
	if (!ctx.cr6.gt) goto loc_880F4208;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x880f4208
	if (!ctx.cr6.lt) goto loc_880F4208;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880f4208
	if (!ctx.cr6.gt) goto loc_880F4208;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14060
	ctx.r3.s64 = 14060;
	// bl 0x8801a9c8
	ctx.lr = 0x880F41F0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F41FC;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4208;
	sub_8813FF48(ctx, base);
loc_880F4208:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r4,r10,r18
	ctx.r4.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r5,r9,r19
	ctx.r5.u64 = ctx.r9.u64 + ctx.r19.u64;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880f4268
	if (!ctx.cr6.lt) goto loc_880F4268;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f4268
	if (!ctx.cr6.gt) goto loc_880F4268;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f4268
	if (!ctx.cr6.lt) goto loc_880F4268;
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f4268
	if (!ctx.cr6.gt) goto loc_880F4268;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14062
	ctx.r3.s64 = 14062;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4250;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F425C;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4268;
	sub_8813FF48(ctx, base);
loc_880F4268:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addis r4,r8,131
	ctx.r4.s64 = ctx.r8.s64 + 8585216;
	// addis r5,r7,-69
	ctx.r5.s64 = ctx.r7.s64 + -4521984;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f42d4
	if (!ctx.cr6.lt) goto loc_880F42D4;
	// lis r11,-24
	ctx.r11.s64 = -1572864;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f42d4
	if (!ctx.cr6.gt) goto loc_880F42D4;
	// lis r11,380
	ctx.r11.s64 = 24903680;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f42d4
	if (!ctx.cr6.lt) goto loc_880F42D4;
	// lis r11,-60
	ctx.r11.s64 = -3932160;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f42d4
	if (!ctx.cr6.gt) goto loc_880F42D4;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,14064
	ctx.r3.s64 = 14064;
	// bl 0x8801a9c8
	ctx.lr = 0x880F42BC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F42C8;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F42D4;
	sub_8813FF48(ctx, base);
loc_880F42D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1248, ctx.xer);
	// blt cr6,0x880f4850
	if (ctx.cr6.lt) goto loc_880F4850;
	// lwz r11,3848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3848);
	// addi r30,r31,3832
	ctx.r30.s64 = ctx.r31.s64 + 3832;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f44b0
	if (!ctx.cr6.eq) goto loc_880F44B0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// subfic r9,r11,78
	ctx.xer.ca = ctx.r11.u32 <= 78;
	ctx.r9.u64 = static_cast<uint64_t>(78) - ctx.r11.u64;
	// lwz r7,56(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// subfic r6,r10,122
	ctx.xer.ca = ctx.r10.u32 <= 122;
	ctx.r6.u64 = static_cast<uint64_t>(122) - ctx.r10.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,8152(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8152);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r28,8156(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8156);
	// subf r9,r7,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r9,r29
	ctx.r27.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f43d4
	if (!ctx.cr6.lt) goto loc_880F43D4;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f43d4
	if (!ctx.cr6.gt) goto loc_880F43D4;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f43d4
	if (!ctx.cr6.lt) goto loc_880F43D4;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f43d4
	if (!ctx.cr6.gt) goto loc_880F43D4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,14048
	ctx.r3.s64 = 14048;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4374;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4380;
	sub_8813FF08(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F438C;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f43d4
	if (ctx.cr6.eq) goto loc_880F43D4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,14048
	ctx.r3.s64 = 14048;
	// bl 0x8801a9c8
	ctx.lr = 0x880F43AC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F43B8;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F43D4;
	sub_8813FF90(ctx, base);
loc_880F43D4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r11,109
	ctx.r9.s64 = ctx.r11.s64 + 109;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,125
	ctx.xer.ca = ctx.r10.u32 <= 125;
	ctx.r7.u64 = static_cast<uint64_t>(125) - ctx.r10.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f44b0
	if (!ctx.cr6.lt) goto loc_880F44B0;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f44b0
	if (!ctx.cr6.gt) goto loc_880F44B0;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f44b0
	if (!ctx.cr6.lt) goto loc_880F44B0;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f44b0
	if (!ctx.cr6.gt) goto loc_880F44B0;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14047
	ctx.r3.s64 = 14047;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4450;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F445C;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4468;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f44b0
	if (ctx.cr6.eq) goto loc_880F44B0;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14047
	ctx.r3.s64 = 14047;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4488;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4494;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F44B0;
	sub_8813FF90(ctx, base);
loc_880F44B0:
	// lwz r11,4192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4192);
	// addi r30,r31,4176
	ctx.r30.s64 = ctx.r31.s64 + 4176;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f4680
	if (!ctx.cr6.eq) goto loc_880F4680;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,79
	ctx.r6.s64 = 79;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r3,14053
	ctx.r3.s64 = 14053;
	// subfic r9,r11,85
	ctx.xer.ca = ctx.r11.u32 <= 85;
	ctx.r9.u64 = static_cast<uint64_t>(85) - ctx.r11.u64;
	// lwz r7,56(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// subfic r5,r10,69
	ctx.xer.ca = ctx.r10.u32 <= 69;
	ctx.r5.u64 = static_cast<uint64_t>(69) - ctx.r10.u64;
	// lwz r28,8148(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8148);
	// rlwinm r4,r9,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r5,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// lwz r27,8144(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8144);
	// subf r9,r7,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r9,r27
	ctx.r29.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4518;
	sub_8801A9C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f45a4
	if (!ctx.cr6.lt) goto loc_880F45A4;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f45a4
	if (!ctx.cr6.gt) goto loc_880F45A4;
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f45a4
	if (!ctx.cr6.lt) goto loc_880F45A4;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f45a4
	if (!ctx.cr6.gt) goto loc_880F45A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880F4550;
	sub_8813FF08(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F455C;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f45a4
	if (ctx.cr6.eq) goto loc_880F45A4;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14053
	ctx.r3.s64 = 14053;
	// bl 0x8801a9c8
	ctx.lr = 0x880F457C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4588;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F45A4;
	sub_8813FF90(ctx, base);
loc_880F45A4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r9,r11,118
	ctx.r9.s64 = ctx.r11.s64 + 118;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,74
	ctx.xer.ca = ctx.r10.u32 <= 74;
	ctx.r7.u64 = static_cast<uint64_t>(74) - ctx.r10.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r29,r9,r27
	ctx.r29.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880f4680
	if (!ctx.cr6.lt) goto loc_880F4680;
	// lis r11,-28
	ctx.r11.s64 = -1835008;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4680
	if (!ctx.cr6.gt) goto loc_880F4680;
	// lis r11,360
	ctx.r11.s64 = 23592960;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f4680
	if (!ctx.cr6.lt) goto loc_880F4680;
	// lis r11,-40
	ctx.r11.s64 = -2621440;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4680
	if (!ctx.cr6.gt) goto loc_880F4680;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14052
	ctx.r3.s64 = 14052;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4620;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F462C;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4638;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4680
	if (ctx.cr6.eq) goto loc_880F4680;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14052
	ctx.r3.s64 = 14052;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4658;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4664;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F4680;
	sub_8813FF90(ctx, base);
loc_880F4680:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f4850
	if (!ctx.cr6.eq) goto loc_880F4850;
	// lwz r11,44(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// lis r26,272
	ctx.r26.s64 = 17825792;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// subfic r9,r11,90
	ctx.xer.ca = ctx.r11.u32 <= 90;
	ctx.r9.u64 = static_cast<uint64_t>(90) - ctx.r11.u64;
	// lwz r7,56(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
	// subfic r6,r10,12
	ctx.xer.ca = ctx.r10.u32 <= 12;
	ctx.r6.u64 = static_cast<uint64_t>(12) - ctx.r10.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r30,8136(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8136);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,8132(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 8132);
	// subf r9,r7,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880f4774
	if (!ctx.cr6.lt) goto loc_880F4774;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4774
	if (!ctx.cr6.gt) goto loc_880F4774;
	// lis r11,356
	ctx.r11.s64 = 23330816;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f4774
	if (!ctx.cr6.lt) goto loc_880F4774;
	// lis r11,-36
	ctx.r11.s64 = -2359296;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4774
	if (!ctx.cr6.gt) goto loc_880F4774;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14058
	ctx.r3.s64 = 14058;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4714;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4720;
	sub_8813FF08(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F472C;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4774
	if (ctx.cr6.eq) goto loc_880F4774;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14058
	ctx.r3.s64 = 14058;
	// bl 0x8801a9c8
	ctx.lr = 0x880F474C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4758;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F4774;
	sub_8813FF90(ctx, base);
loc_880F4774:
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 36);
	// lwz r10,40(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 40);
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r7,r10,18
	ctx.xer.ca = ctx.r10.u32 <= 18;
	ctx.r7.u64 = static_cast<uint64_t>(18) - ctx.r10.u64;
	// lwz r11,52(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 52);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880f4850
	if (!ctx.cr6.lt) goto loc_880F4850;
	// lis r11,-32
	ctx.r11.s64 = -2097152;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4850
	if (!ctx.cr6.gt) goto loc_880F4850;
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f4850
	if (!ctx.cr6.lt) goto loc_880F4850;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f4850
	if (!ctx.cr6.gt) goto loc_880F4850;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14057
	ctx.r3.s64 = 14057;
	// bl 0x8801a9c8
	ctx.lr = 0x880F47F0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F47FC;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,160(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 160);
	// bl 0x8813ff48
	ctx.lr = 0x880F4808;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4850
	if (ctx.cr6.eq) goto loc_880F4850;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14057
	ctx.r3.s64 = 14057;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4828;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880F4834;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880F4850;
	sub_8813FF90(ctx, base);
loc_880F4850:
	// lwz r9,7752(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// lis r7,288
	ctx.r7.s64 = 18874368;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7756(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7756);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// addis r5,r6,-78
	ctx.r5.s64 = ctx.r6.s64 + -5111808;
	// bge cr6,0x880f48a4
	if (!ctx.cr6.lt) goto loc_880F48A4;
	// lis r11,-48
	ctx.r11.s64 = -3145728;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f48a4
	if (!ctx.cr6.gt) goto loc_880F48A4;
	// lis r10,368
	ctx.r10.s64 = 24117248;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880f48a4
	if (!ctx.cr6.lt) goto loc_880F48A4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f48a4
	if (!ctx.cr6.gt) goto loc_880F48A4;
	// li r6,79
	ctx.r6.s64 = 79;
	// li r3,13904
	ctx.r3.s64 = 13904;
	// bl 0x8801a9c8
	ctx.lr = 0x880F48A4;
	sub_8801A9C8(ctx, base);
loc_880F48A4:
	// lwz r11,4708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f49ac
	if (!ctx.cr6.eq) goto loc_880F49AC;
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r30,r31,6736
	ctx.r30.s64 = ctx.r31.s64 + 6736;
	// lwz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,7760(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7760);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,6752(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6752);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r31,r9,-57
	ctx.r31.s64 = ctx.r9.s64 + -3735552;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lis r11,284
	ctx.r11.s64 = 18612224;
	// bne cr6,0x880f4968
	if (!ctx.cr6.eq) goto loc_880F4968;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f49ac
	if (!ctx.cr6.lt) goto loc_880F49AC;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f49ac
	if (!ctx.cr6.gt) goto loc_880F49AC;
	// lis r10,364
	ctx.r10.s64 = 23855104;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880f49ac
	if (!ctx.cr6.lt) goto loc_880F49AC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f49ac
	if (!ctx.cr6.gt) goto loc_880F49AC;
	// li r6,81
	ctx.r6.s64 = 81;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13892
	ctx.r3.s64 = 13892;
	// bl 0x8801a9c8
	ctx.lr = 0x880F491C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880F4924;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f49ac
	if (ctx.cr6.eq) goto loc_880F49AC;
	// li r6,81
	ctx.r6.s64 = 81;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13892
	ctx.r3.s64 = 13892;
	// bl 0x8801a9c8
	ctx.lr = 0x880F4944;
	sub_8801A9C8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880F495C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880F4968:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880f49ac
	if (!ctx.cr6.lt) goto loc_880F49AC;
	// lis r11,-44
	ctx.r11.s64 = -2883584;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f49ac
	if (!ctx.cr6.gt) goto loc_880F49AC;
	// lis r10,364
	ctx.r10.s64 = 23855104;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880f49ac
	if (!ctx.cr6.lt) goto loc_880F49AC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f49ac
	if (!ctx.cr6.gt) goto loc_880F49AC;
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13895
	ctx.r3.s64 = 13895;
	// bl 0x8801a9c8
	ctx.lr = 0x880F49A4;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880F49AC;
	sub_8813FF48(ctx, base);
loc_880F49AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88112598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x881125B4;
	sub_88021508(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,-28
	ctx.r11.s64 = -28;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r4,-23
	ctx.r4.s64 = -23;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x88112610;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88112624
	if (ctx.cr6.eq) goto loc_88112624;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_88112624:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,8992
	ctx.r5.s64 = ctx.r10.s64 + 8992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x88112640;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x88112C28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88112C34;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88112C40;
	sub_88024030(ctx, base);
	// lwz r11,948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88112cf0
	if (ctx.cr6.eq) goto loc_88112CF0;
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r8,340(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// li r3,14271
	ctx.r3.s64 = 14271;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r30,r7,-19
	ctx.r30.s64 = ctx.r7.s64 + -1245184;
	// addis r29,r5,-10
	ctx.r29.s64 = ctx.r5.s64 + -655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112C84;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112C90;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,808(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 808);
	// bl 0x8813ff48
	ctx.lr = 0x88112C9C;
	sub_8813FF48(ctx, base);
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88112dd8
	if (ctx.cr6.eq) goto loc_88112DD8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14271
	ctx.r3.s64 = 14271;
	// bl 0x8801a9c8
	ctx.lr = 0x88112CBC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112CC8;
	sub_8813FF08(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88112CE4;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_88112CF0:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32632
	ctx.r8.s64 = ctx.r10.s64 + 32632;
	// addi r11,r9,-30432
	ctx.r11.s64 = ctx.r9.s64 + -30432;
	// li r25,6
	ctx.r25.s64 = 6;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88112D24:
	// lwz r27,-4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88112dcc
	if (ctx.cr6.eq) goto loc_88112DCC;
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,340(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r29,r5,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112D6C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112D78;
	sub_8813FF08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,932(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// bl 0x8813ff48
	ctx.lr = 0x88112D84;
	sub_8813FF48(ctx, base);
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88112dcc
	if (ctx.cr6.eq) goto loc_88112DCC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112DA4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112DB0;
	sub_8813FF08(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88112DCC;
	sub_8813FF90(ctx, base);
loc_88112DCC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x88112d24
	if (!ctx.cr0.eq) goto loc_88112D24;
loc_88112DD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88114908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88114910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021be0
	ctx.lr = 0x88114930;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x88024018
	ctx.lr = 0x88114948;
	sub_88024018(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8809cb78
	ctx.lr = 0x88114950;
	sub_8809CB78(ctx, base);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,16768
	ctx.r5.s64 = ctx.r9.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x88114964;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88114DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88114DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88114DD0;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88114DE4;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88114e3c
	if (ctx.cr6.eq) goto loc_88114E3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88114e9c
	if (!ctx.cr6.eq) goto loc_88114E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x88114E08;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88114e9c
	if (!ctx.cr6.eq) goto loc_88114E9C;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,19792
	ctx.r4.s64 = ctx.r11.s64 + 19792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88114E24;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x88114E30;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88114E3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88114e9c
	if (!ctx.cr0.lt) goto loc_88114E9C;
	// lwz r11,1380(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88114e7c
	if (ctx.cr6.lt) goto loc_88114E7C;
	// beq cr6,0x88114e70
	if (ctx.cr6.eq) goto loc_88114E70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88114e94
	if (!ctx.cr6.lt) goto loc_88114E94;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,5904
	ctx.r4.s64 = ctx.r11.s64 + 5904;
	// b 0x88114e84
	goto loc_88114E84;
loc_88114E70:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,3360
	ctx.r4.s64 = ctx.r11.s64 + 3360;
	// b 0x88114e84
	goto loc_88114E84;
loc_88114E7C:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,1296
	ctx.r4.s64 = ctx.r11.s64 + 1296;
loc_88114E84:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88114E90;
	sub_880213F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_88114E94:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88114E9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88115C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88115C2C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x88021de0
	ctx.lr = 0x88115C3C;
	sub_88021DE0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r9,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,23440
	ctx.r4.s64 = ctx.r8.s64 + 23440;
	// bl 0x88021e18
	ctx.lr = 0x88115C64;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881167C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x881167C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r28,8(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x881167F4;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88116814
	if (ctx.cr6.lt) goto loc_88116814;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8801a808
	ctx.lr = 0x8811680C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_88116814:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x88116828;
	sub_8801A3E0(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24064
	ctx.r11.s64 = ctx.r11.s64 + -24064;
loc_88116834:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881168e8
	if (!ctx.cr6.gt) goto loc_881168E8;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// blt cr6,0x88116834
	if (ctx.cr6.lt) goto loc_88116834;
loc_881168E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88117898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881178A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x88024030
	ctx.lr = 0x881178B4;
	sub_88024030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880b1a10
	ctx.lr = 0x881178BC;
	sub_880B1A10(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880a84f0
	ctx.lr = 0x881178D0;
	sub_880A84F0(ctx, base);
	// lwz r5,196(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x881178E0;
	sub_880A85C0(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x881178EC;
	sub_880A8668(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x88023f48
	ctx.lr = 0x881178F4;
	sub_88023F48(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88117998
	if (ctx.cr6.eq) goto loc_88117998;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88117998
	if (ctx.cr6.eq) goto loc_88117998;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88117970
	if (ctx.cr6.lt) goto loc_88117970;
	// beq cr6,0x88117928
	if (ctx.cr6.eq) goto loc_88117928;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88117998
	if (!ctx.cr6.lt) goto loc_88117998;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x88117980
	goto loc_88117980;
loc_88117928:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88117998
	if (!ctx.cr6.gt) goto loc_88117998;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x880244d0
	ctx.lr = 0x88117944;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x88117968;
	sub_88013CE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88117970:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88117998
	if (ctx.cr6.lt) goto loc_88117998;
loc_88117980:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013940
	ctx.lr = 0x88117998;
	sub_88013940(ctx, base);
loc_88117998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x88118488;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,948
	ctx.r4.s64 = 948;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88118498;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x881184A0;
	sub_88023F40(ctx, base);
	// li r5,948
	ctx.r5.s64 = 948;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x881184B0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x881184B8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x881184BC;
	sub_88068E60(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x881184D0;
	sub_8813FA58(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x880211b0
	ctx.lr = 0x881184E4;
	sub_880211B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x881253f8
	ctx.lr = 0x881184F0;
	sub_881253F8(ctx, base);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,23256
	ctx.r4.s64 = ctx.r10.s64 + 23256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88118504;
	sub_88021AD0(ctx, base);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// ori r29,r9,63360
	ctx.r29.u64 = ctx.r9.u64 | 63360;
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r29,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// bl 0x88024498
	ctx.lr = 0x8811852C;
	sub_88024498(ctx, base);
	// lis r7,120
	ctx.r7.s64 = 7864320;
	// lis r6,440
	ctx.r6.s64 = 28835840;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r5,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// stw r4,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x8811855C;
	sub_88024028(ctx, base);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-31872
	ctx.r4.s64 = ctx.r10.s64 + -31872;
	// bl 0x88023e90
	ctx.lr = 0x8811856C;
	sub_88023E90(ctx, base);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lis r8,-30607
	ctx.r8.s64 = -2005860352;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r5,r8,-25048
	ctx.r5.s64 = ctx.r8.s64 + -25048;
	// lis r6,-30683
	ctx.r6.s64 = -2010841088;
	// lfd f0,1224(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 1224);
	// lis r4,-30608
	ctx.r4.s64 = -2005925888;
	// stw r26,-11964(r9)
	REX_STORE_U32(ctx.r9.u32 + -11964, ctx.r26.u32);
	// lis r3,-30683
	ctx.r3.s64 = -2010841088;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r7,14
	ctx.r7.s64 = 14;
	// stfd f0,224(r5)
	REX_STORE_U64(ctx.r5.u32 + 224, ctx.f0.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,-11960(r6)
	REX_STORE_U32(ctx.r6.u32 + -11960, ctx.r26.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r7,21868(r4)
	REX_STORE_U32(ctx.r4.u32 + 21868, ctx.r7.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r11,-11944(r3)
	REX_STORE_U32(ctx.r3.u32 + -11944, ctx.r11.u32);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r9,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r6,48
	ctx.r6.s64 = 3145728;
	// lis r8,56
	ctx.r8.s64 = 3670016;
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r9,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// addi r7,r7,-32320
	ctx.r7.s64 = ctx.r7.s64 + -32320;
	// stw r9,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lis r4,-30702
	ctx.r4.s64 = -2012086272;
	// stw r9,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// lis r3,-30702
	ctx.r3.s64 = -2012086272;
	// stw r9,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// lis r27,-30702
	ctx.r27.s64 = -2012086272;
	// stw r9,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// lis r25,-30702
	ctx.r25.s64 = -2012086272;
	// stw r9,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r9,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r7,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r7.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// stw r6,628(r31)
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r6.u32);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// stw r6,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r6.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// addi r20,r4,-32320
	ctx.r20.s64 = ctx.r4.s64 + -32320;
	// stw r31,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r31.u32);
	// li r9,10800
	ctx.r9.s64 = 10800;
	// stw r31,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r31.u32);
	// addi r3,r3,-32320
	ctx.r3.s64 = ctx.r3.s64 + -32320;
	// stw r31,732(r31)
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r31.u32);
	// addi r27,r27,-32320
	ctx.r27.s64 = ctx.r27.s64 + -32320;
	// stw r31,812(r31)
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r31.u32);
	// addi r25,r25,-32320
	ctx.r25.s64 = ctx.r25.s64 + -32320;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r19,-32
	ctx.r19.s64 = -2097152;
	// sth r11,528(r31)
	REX_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// sth r11,532(r31)
	REX_STORE_U16(ctx.r31.u32 + 532, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r5.u32);
	// stw r5,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r5.u32);
	// stw r10,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// stw r10,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// sth r11,608(r31)
	REX_STORE_U16(ctx.r31.u32 + 608, ctx.r11.u16);
	// sth r11,612(r31)
	REX_STORE_U16(ctx.r31.u32 + 612, ctx.r11.u16);
	// stw r10,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
	// stw r10,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// stw r20,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r20.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r11,688(r31)
	REX_STORE_U16(ctx.r31.u32 + 688, ctx.r11.u16);
	// sth r11,692(r31)
	REX_STORE_U16(ctx.r31.u32 + 692, ctx.r11.u16);
	// stw r21,708(r31)
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r21.u32);
	// stw r7,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r7.u32);
	// stw r6,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r6.u32);
	// stw r7,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r7.u32);
	// stw r6,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r6.u32);
	// stw r7,700(r31)
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r7.u32);
	// stw r6,704(r31)
	REX_STORE_U32(ctx.r31.u32 + 704, ctx.r6.u32);
	// stw r21,712(r31)
	REX_STORE_U32(ctx.r31.u32 + 712, ctx.r21.u32);
	// stw r10,716(r31)
	REX_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// stw r10,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// stw r3,728(r31)
	REX_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// sth r11,768(r31)
	REX_STORE_U16(ctx.r31.u32 + 768, ctx.r11.u16);
	// sth r11,772(r31)
	REX_STORE_U16(ctx.r31.u32 + 772, ctx.r11.u16);
	// stw r7,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r7.u32);
	// stw r6,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// stw r21,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r21.u32);
	// stw r21,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r21.u32);
	// stw r10,796(r31)
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// stw r10,800(r31)
	REX_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// stw r27,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r27.u32);
	// sth r11,848(r31)
	REX_STORE_U16(ctx.r31.u32 + 848, ctx.r11.u16);
	// sth r11,852(r31)
	REX_STORE_U16(ctx.r31.u32 + 852, ctx.r11.u16);
	// stw r7,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r7.u32);
	// stw r6,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r6.u32);
	// stw r31,892(r31)
	REX_STORE_U32(ctx.r31.u32 + 892, ctx.r31.u32);
	// stw r10,868(r31)
	REX_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stw r10,872(r31)
	REX_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// stw r8,876(r31)
	REX_STORE_U32(ctx.r31.u32 + 876, ctx.r8.u32);
	// stw r8,880(r31)
	REX_STORE_U32(ctx.r31.u32 + 880, ctx.r8.u32);
	// stw r25,888(r31)
	REX_STORE_U32(ctx.r31.u32 + 888, ctx.r25.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x88022730
	ctx.lr = 0x8811871C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88118724;
	sub_88022980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r28,r5,11264
	ctx.r28.u64 = ctx.r5.u64 | 11264;
	// ori r27,r4,52096
	ctx.r27.u64 = ctx.r4.u64 | 52096;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88118768
	if (ctx.cr6.lt) goto loc_88118768;
	// beq cr6,0x8811874c
	if (ctx.cr6.eq) goto loc_8811874C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881187a0
	if (!ctx.cr6.lt) goto loc_881187A0;
loc_8811874C:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r28,4
	ctx.r28.s64 = 262144;
	// ori r27,r11,49664
	ctx.r27.u64 = ctx.r11.u64 | 49664;
	// ori r9,r10,44928
	ctx.r9.u64 = ctx.r10.u64 | 44928;
	// ori r28,r28,60800
	ctx.r28.u64 = ctx.r28.u64 | 60800;
	// b 0x88118798
	goto loc_88118798;
loc_88118768:
	// stw r29,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// bl 0x88069640
	ctx.lr = 0x88118778;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881187a0
	if (ctx.cr6.eq) goto loc_881187A0;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r28,3
	ctx.r28.s64 = 196608;
	// ori r27,r11,27392
	ctx.r27.u64 = ctx.r11.u64 | 27392;
	// ori r9,r10,49792
	ctx.r9.u64 = ctx.r10.u64 | 49792;
	// ori r28,r28,22400
	ctx.r28.u64 = ctx.r28.u64 | 22400;
loc_88118798:
	// stw r27,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r9,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
loc_881187A0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r28,928(r31)
	REX_STORE_U32(ctx.r31.u32 + 928, ctx.r28.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// stw r27,932(r31)
	REX_STORE_U32(ctx.r31.u32 + 932, ctx.r27.u32);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r9,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x8809cb88
	ctx.lr = 0x881187C0;
	sub_8809CB88(ctx, base);
	// stw r26,936(r31)
	REX_STORE_U32(ctx.r31.u32 + 936, ctx.r26.u32);
	// stw r26,940(r31)
	REX_STORE_U32(ctx.r31.u32 + 940, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x881187D0;
	sub_880247E8(ctx, base);
	// bl 0x88069710
	ctx.lr = 0x881187D4;
	sub_88069710(ctx, base);
	// stw r3,944(r31)
	REX_STORE_U32(ctx.r31.u32 + 944, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811AEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811AEA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811AEBC;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x88021508
	ctx.lr = 0x8811AECC;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r5,r8,-21088
	ctx.r5.s64 = ctx.r8.s64 + -21088;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r6,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811AF14;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811B440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x8811B448;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811B45C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021508
	ctx.lr = 0x8811B470;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b7a0
	if (ctx.cr6.eq) goto loc_8811B7A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811b7d4
	if (!ctx.cr0.lt) goto loc_8811B7D4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8811b654
	if (!ctx.cr6.eq) goto loc_8811B654;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,72(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r28,76(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8811b570
	if (!ctx.cr6.eq) goto loc_8811B570;
	// bl 0x880244d0
	ctx.lr = 0x8811B4C8;
	sub_880244D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x8811B4D4;
	sub_8801A808(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r26,r10,-30
	ctx.r26.s64 = ctx.r10.s64 + -30;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811b4fc
	if (!ctx.cr6.eq) goto loc_8811B4FC;
	// addi r26,r10,30
	ctx.r26.s64 = ctx.r10.s64 + 30;
loc_8811B4FC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x8811B504;
	sub_8801A448(ctx, base);
	// addi r9,r26,-8
	ctx.r9.s64 = ctx.r26.s64 + -8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r26,r3,r9
	ctx.r26.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x8811B534;
	sub_88013CE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// bl 0x88014578
	ctx.lr = 0x8811B56C;
	sub_88014578(ctx, base);
	// b 0x8811b654
	goto loc_8811B654;
loc_8811B570:
	// bl 0x880244d0
	ctx.lr = 0x8811B574;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x88013ce0
	ctx.lr = 0x8811B59C;
	sub_88013CE0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bl 0x88013ce0
	ctx.lr = 0x8811B5C8;
	sub_88013CE0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bl 0x88013ce0
	ctx.lr = 0x8811B5F4;
	sub_88013CE0(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r6,-6
	ctx.r8.s64 = ctx.r6.s64 + -6;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// bl 0x88014578
	ctx.lr = 0x8811B63C;
	sub_88014578(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
loc_8811B654:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8811b744
	if (!ctx.cr6.eq) goto loc_8811B744;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8811b67c
	if (ctx.cr6.gt) goto loc_8811B67C;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8811B67C:
	// lwz r29,72(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,76(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811B694;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x8811B6A0;
	sub_8801A808(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x88013ce0
	ctx.lr = 0x8811B6C8;
	sub_88013CE0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bgt cr6,0x8811b6e4
	if (ctx.cr6.gt) goto loc_8811B6E4;
	// li r11,-16
	ctx.r11.s64 = -16;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8811B6E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x8801a448
	ctx.lr = 0x8811B6FC;
	sub_8801A448(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// beq cr6,0x8811b73c
	if (ctx.cr6.eq) goto loc_8811B73C;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x8811b740
	goto loc_8811B740;
loc_8811B73C:
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_8811B740:
	// bl 0x88013ce0
	ctx.lr = 0x8811B744;
	sub_88013CE0(ctx, base);
loc_8811B744:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8811b768
	if (!ctx.cr6.eq) goto loc_8811B768;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8811b768
	if (ctx.cr6.gt) goto loc_8811B768;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8811B768:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8811b7d4
	if (ctx.cr0.gt) goto loc_8811B7D4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x8811b7d4
	if (ctx.cr0.gt) goto loc_8811B7D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x8811B794;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_8811B7A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811b7d4
	if (!ctx.cr0.lt) goto loc_8811B7D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x8811B7D0;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_8811B7D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811F838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8811F840;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811F854;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021508
	ctx.lr = 0x8811F868;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811fa04
	if (ctx.cr6.eq) goto loc_8811FA04;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811fa68
	if (!ctx.cr0.lt) goto loc_8811FA68;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-23384
	ctx.r11.s64 = ctx.r11.s64 + -23384;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880246c0
	ctx.lr = 0x8811F8CC;
	sub_880246C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8811f8ec
	if (ctx.cr6.lt) goto loc_8811F8EC;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8811F8EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x8811F904;
	sub_88013940(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8811f920
	if (ctx.cr6.lt) goto loc_8811F920;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
loc_8811F920:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88013940
	ctx.lr = 0x8811F938;
	sub_88013940(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,26215
	ctx.r9.u64 = ctx.r10.u64 | 26215;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8811f9a8
	if (!ctx.cr0.eq) goto loc_8811F9A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8811f98c
	if (ctx.cr6.lt) goto loc_8811F98C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8811F98C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8811f9a8
	if (ctx.cr6.gt) goto loc_8811F9A8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8811F9A8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r7,r9,23
	ctx.r7.u64 = ctx.r9.u32 & 0x1FF;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811f9d0
	if (!ctx.cr6.eq) goto loc_8811F9D0;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8811F9D0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8811fa68
	if (ctx.cr6.gt) goto loc_8811FA68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021738
	ctx.lr = 0x8811F9E4;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8811fa68
	if (!ctx.cr6.eq) goto loc_8811FA68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x8811F9F8;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8811FA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811fa68
	if (!ctx.cr0.lt) goto loc_8811FA68;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// beq cr6,0x8811fa58
	if (ctx.cr6.eq) goto loc_8811FA58;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8811FA58:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_8811FA68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881223B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x881223C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x881223D0;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x881223DC;
	sub_88024030(ctx, base);
	// lwz r27,4(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x8801a860
	ctx.lr = 0x88122404;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r20,12
	ctx.r20.s64 = 786432;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lis r15,26
	ctx.r15.s64 = 1703936;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lis r14,28
	ctx.r14.s64 = 1835008;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,416(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881224e8
	if (!ctx.cr6.eq) goto loc_881224E8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12174
	ctx.r3.s64 = 12174;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r20,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r20.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122454;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122488
	if (ctx.cr6.eq) goto loc_88122488;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122468;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122488
	if (ctx.cr6.eq) goto loc_88122488;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122488;
	sub_8813FF90(ctx, base);
loc_88122488:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12175
	ctx.r3.s64 = 12175;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r14,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r14.u64;
	// addis r5,r5,-10
	ctx.r5.s64 = ctx.r5.s64 + -655360;
	// bl 0x8801a9c8
	ctx.lr = 0x881224B4;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881224e8
	if (ctx.cr6.eq) goto loc_881224E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881224C8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881224e8
	if (ctx.cr6.eq) goto loc_881224E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881224E8;
	sub_8813FF90(ctx, base);
loc_881224E8:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// addi r22,r11,-18560
	ctx.r22.s64 = ctx.r11.s64 + -18560;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// bne cr6,0x881225a0
	if (!ctx.cr6.eq) goto loc_881225A0;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// addi r9,r22,-2400
	ctx.r9.s64 = ctx.r22.s64 + -2400;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8812251C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88122594
	if (!ctx.cr6.gt) goto loc_88122594;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122558;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122590
	if (ctx.cr6.eq) goto loc_88122590;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812256C;
	sub_8813FF48(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122590
	if (ctx.cr6.eq) goto loc_88122590;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122590;
	sub_8813FF90(ctx, base);
loc_88122590:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88122594:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x8812251c
	if (!ctx.cr0.eq) goto loc_8812251C;
loc_881225A0:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lis r23,90
	ctx.r23.s64 = 5898240;
	// lis r24,84
	ctx.r24.s64 = 5505024;
	// li r25,3
	ctx.r25.s64 = 3;
	// lis r18,68
	ctx.r18.s64 = 4456448;
	// lis r19,66
	ctx.r19.s64 = 4325376;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88122774
	if (!ctx.cr6.eq) goto loc_88122774;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12176
	ctx.r3.s64 = 12176;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// subf r4,r23,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r24,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881225FC;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122630
	if (ctx.cr6.eq) goto loc_88122630;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122610;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122630
	if (ctx.cr6.eq) goto loc_88122630;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122630;
	sub_8813FF90(ctx, base);
loc_88122630:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12177
	ctx.r3.s64 = 12177;
	// divw r8,r11,r25
	ctx.r8.u64 = uint32_t((ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r10,r10,r25
	ctx.r10.u64 = uint32_t((ctx.r25.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r10.s32 / ctx.r25.s32 : 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r18,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r18.u64;
	// subf r5,r19,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r19.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122664;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122698
	if (ctx.cr6.eq) goto loc_88122698;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122678;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122698
	if (ctx.cr6.eq) goto loc_88122698;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122698;
	sub_8813FF90(ctx, base);
loc_88122698:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12178
	ctx.r3.s64 = 12178;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addis r4,r4,-45
	ctx.r4.s64 = ctx.r4.s64 + -2949120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r11,-41
	ctx.r5.s64 = ctx.r11.s64 + -2686976;
	// bl 0x8801a9c8
	ctx.lr = 0x881226D4;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122708
	if (ctx.cr6.eq) goto loc_88122708;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881226E8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122708
	if (ctx.cr6.eq) goto loc_88122708;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122708;
	sub_8813FF90(ctx, base);
loc_88122708:
	// lis r11,22
	ctx.r11.s64 = 1441792;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r3,12179
	ctx.r3.s64 = 12179;
	// subf r5,r5,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r5.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122740;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122774
	if (ctx.cr6.eq) goto loc_88122774;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122754;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122774
	if (ctx.cr6.eq) goto loc_88122774;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122774;
	sub_8813FF90(ctx, base);
loc_88122774:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88122820
	if (!ctx.cr6.eq) goto loc_88122820;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// addi r9,r22,-1920
	ctx.r9.s64 = ctx.r22.s64 + -1920;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8812279C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88122814
	if (!ctx.cr6.gt) goto loc_88122814;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881227D8;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122810
	if (ctx.cr6.eq) goto loc_88122810;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881227EC;
	sub_8813FF48(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122810
	if (ctx.cr6.eq) goto loc_88122810;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122810;
	sub_8813FF90(ctx, base);
loc_88122810:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88122814:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x8812279c
	if (!ctx.cr0.eq) goto loc_8812279C;
loc_88122820:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lis r21,60
	ctx.r21.s64 = 3932160;
	// lis r22,82
	ctx.r22.s64 = 5373952;
	// lis r16,54
	ctx.r16.s64 = 3538944;
	// lis r17,59
	ctx.r17.s64 = 3866624;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881229e4
	if (!ctx.cr6.eq) goto loc_881229E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12180
	ctx.r3.s64 = 12180;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122878;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881228ac
	if (ctx.cr6.eq) goto loc_881228AC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812288C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881228ac
	if (ctx.cr6.eq) goto loc_881228AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881228AC;
	sub_8813FF90(ctx, base);
loc_881228AC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12181
	ctx.r3.s64 = 12181;
	// divw r8,r11,r25
	ctx.r8.u64 = uint32_t((ctx.r25.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r11.s32 / ctx.r25.s32 : 0);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r10,r10,r25
	ctx.r10.u64 = uint32_t((ctx.r25.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r10.s32 / ctx.r25.s32 : 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r16,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r16.u64;
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881228E0;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122914
	if (ctx.cr6.eq) goto loc_88122914;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881228F4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122914
	if (ctx.cr6.eq) goto loc_88122914;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122914;
	sub_8813FF90(ctx, base);
loc_88122914:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12182
	ctx.r3.s64 = 12182;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addis r4,r4,-36
	ctx.r4.s64 = ctx.r4.s64 + -2359296;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r11,-34
	ctx.r5.s64 = ctx.r11.s64 + -2228224;
	// bl 0x8801a9c8
	ctx.lr = 0x88122950;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122984
	if (ctx.cr6.eq) goto loc_88122984;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122964;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122984
	if (ctx.cr6.eq) goto loc_88122984;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122984;
	sub_8813FF90(ctx, base);
loc_88122984:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12183
	ctx.r3.s64 = 12183;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r7,-22
	ctx.r4.s64 = ctx.r7.s64 + -1441792;
	// addis r5,r5,-18
	ctx.r5.s64 = ctx.r5.s64 + -1179648;
	// bl 0x8801a9c8
	ctx.lr = 0x881229B0;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881229e4
	if (ctx.cr6.eq) goto loc_881229E4;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881229C4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881229e4
	if (ctx.cr6.eq) goto loc_881229E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881229E4;
	sub_8813FF90(ctx, base);
loc_881229E4:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// addi r25,r31,428
	ctx.r25.s64 = ctx.r31.s64 + 428;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88122ad8
	if (!ctx.cr6.eq) goto loc_88122AD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12174
	ctx.r3.s64 = 12174;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r7,r20
	ctx.r4.u64 = ctx.r7.u64 + ctx.r20.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122A20;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122a5c
	if (ctx.cr6.eq) goto loc_88122A5C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122A34;
	sub_8813FF48(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122a60
	if (ctx.cr6.eq) goto loc_88122A60;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122A58;
	sub_8813FF90(ctx, base);
	// b 0x88122a60
	goto loc_88122A60;
loc_88122A5C:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88122A60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122A6C;
	sub_8813FF08(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12175
	ctx.r3.s64 = 12175;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// addis r5,r10,-10
	ctx.r5.s64 = ctx.r10.s64 + -655360;
	// bl 0x8801a9c8
	ctx.lr = 0x88122A98;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122acc
	if (ctx.cr6.eq) goto loc_88122ACC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122AAC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88122acc
	if (ctx.cr6.eq) goto loc_88122ACC;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122ACC;
	sub_8813FF90(ctx, base);
loc_88122ACC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122AD8;
	sub_8813FF08(ctx, base);
loc_88122AD8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r15,92(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,88(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88122b90
	if (!ctx.cr6.eq) goto loc_88122B90;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r15,-2400
	ctx.r9.s64 = ctx.r15.s64 + -2400;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88122B08:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88122b84
	if (!ctx.cr6.gt) goto loc_88122B84;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122B44;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122B50;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122b84
	if (ctx.cr6.eq) goto loc_88122B84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122B64;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122b84
	if (ctx.cr6.eq) goto loc_88122B84;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122B84;
	sub_8813FF90(ctx, base);
loc_88122B84:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88122b08
	if (!ctx.cr0.eq) goto loc_88122B08;
loc_88122B90:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88122d80
	if (!ctx.cr6.eq) goto loc_88122D80;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12176
	ctx.r3.s64 = 12176;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r24,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122BD8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122BE4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122c18
	if (ctx.cr6.eq) goto loc_88122C18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122BF8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122c18
	if (ctx.cr6.eq) goto loc_88122C18;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122C18;
	sub_8813FF90(ctx, base);
loc_88122C18:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r8,r8,r24
	ctx.r8.u64 = uint32_t((ctx.r24.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r8.s32 / ctx.r24.s32 : 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r7,r18
	ctx.r4.u64 = ctx.r7.u64 + ctx.r18.u64;
	// subf r5,r19,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r19.u64;
	// li r3,12177
	ctx.r3.s64 = 12177;
	// bl 0x8801a9c8
	ctx.lr = 0x88122C50;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122C5C;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122c90
	if (ctx.cr6.eq) goto loc_88122C90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122C70;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122c90
	if (ctx.cr6.eq) goto loc_88122C90;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122C90;
	sub_8813FF90(ctx, base);
loc_88122C90:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12178
	ctx.r3.s64 = 12178;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r4,45
	ctx.r4.s64 = ctx.r4.s64 + 2949120;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r5,r11,-41
	ctx.r5.s64 = ctx.r11.s64 + -2686976;
	// bl 0x8801a9c8
	ctx.lr = 0x88122CCC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122CD8;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122d0c
	if (ctx.cr6.eq) goto loc_88122D0C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122CEC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122d0c
	if (ctx.cr6.eq) goto loc_88122D0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122D0C;
	sub_8813FF90(ctx, base);
loc_88122D0C:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r23,22
	ctx.r23.s64 = 1441792;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12179
	ctx.r3.s64 = 12179;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r5,r23,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r23.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122D3C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122D48;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122d88
	if (ctx.cr6.eq) goto loc_88122D88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122D5C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122d88
	if (ctx.cr6.eq) goto loc_88122D88;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122D7C;
	sub_8813FF90(ctx, base);
	// b 0x88122d88
	goto loc_88122D88;
loc_88122D80:
	// li r24,3
	ctx.r24.s64 = 3;
	// lis r23,22
	ctx.r23.s64 = 1441792;
loc_88122D88:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88122e38
	if (!ctx.cr6.eq) goto loc_88122E38;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r15,-1920
	ctx.r9.s64 = ctx.r15.s64 + -1920;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88122DB0:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88122e2c
	if (!ctx.cr6.gt) goto loc_88122E2C;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122DEC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122DF8;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122e2c
	if (ctx.cr6.eq) goto loc_88122E2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122E0C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122e2c
	if (ctx.cr6.eq) goto loc_88122E2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122E2C;
	sub_8813FF90(ctx, base);
loc_88122E2C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88122db0
	if (!ctx.cr0.eq) goto loc_88122DB0;
loc_88122E38:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8812301c
	if (!ctx.cr6.eq) goto loc_8812301C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12180
	ctx.r3.s64 = 12180;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122E80;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122E8C;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122ec0
	if (ctx.cr6.eq) goto loc_88122EC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122EA0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122ec0
	if (ctx.cr6.eq) goto loc_88122EC0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122EC0;
	sub_8813FF90(ctx, base);
loc_88122EC0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12181
	ctx.r3.s64 = 12181;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r8,r8,r24
	ctx.r8.u64 = uint32_t((ctx.r24.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r8.s32 / ctx.r24.s32 : 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r7,r16
	ctx.r4.u64 = ctx.r7.u64 + ctx.r16.u64;
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122EF4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122F00;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122f34
	if (ctx.cr6.eq) goto loc_88122F34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122F14;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122f34
	if (ctx.cr6.eq) goto loc_88122F34;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122F34;
	sub_8813FF90(ctx, base);
loc_88122F34:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12182
	ctx.r3.s64 = 12182;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 2359296;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r5,r11,-34
	ctx.r5.s64 = ctx.r11.s64 + -2228224;
	// bl 0x8801a9c8
	ctx.lr = 0x88122F70;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122F7C;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122fb0
	if (ctx.cr6.eq) goto loc_88122FB0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122F90;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88122fb0
	if (ctx.cr6.eq) goto loc_88122FB0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88122FB0;
	sub_8813FF90(ctx, base);
loc_88122FB0:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,12183
	ctx.r3.s64 = 12183;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addis r5,r10,-18
	ctx.r5.s64 = ctx.r10.s64 + -1179648;
	// bl 0x8801a9c8
	ctx.lr = 0x88122FDC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122FE8;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812301c
	if (ctx.cr6.eq) goto loc_8812301C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122FFC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8812301c
	if (ctx.cr6.eq) goto loc_8812301C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812301C;
	sub_8813FF90(ctx, base);
loc_8812301C:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8801a860
	ctx.lr = 0x88123034;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r22,27
	ctx.r22.s64 = 1769472;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lis r23,30
	ctx.r23.s64 = 1966080;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881230b4
	if (!ctx.cr6.eq) goto loc_881230B4;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12246
	ctx.r3.s64 = 12246;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r7,r23
	ctx.r5.u64 = ctx.r7.u64 + ctx.r23.u64;
	// subf r4,r22,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r22.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123080;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881230b4
	if (ctx.cr6.eq) goto loc_881230B4;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123094;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x881230b4
	if (ctx.cr6.eq) goto loc_881230B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881230B4;
	sub_8813FF90(ctx, base);
loc_881230B4:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88123158
	if (!ctx.cr6.eq) goto loc_88123158;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// addi r9,r15,-1440
	ctx.r9.s64 = ctx.r15.s64 + -1440;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_881230DC:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8812314c
	if (!ctx.cr6.gt) goto loc_8812314C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123118;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812314c
	if (ctx.cr6.eq) goto loc_8812314C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812312C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8812314c
	if (ctx.cr6.eq) goto loc_8812314C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r20,24
	ctx.r6.u64 = ctx.r20.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812314C;
	sub_8813FF90(ctx, base);
loc_8812314C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x881230dc
	if (!ctx.cr0.eq) goto loc_881230DC;
loc_88123158:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lis r24,32
	ctx.r24.s64 = 2097152;
	// lis r19,75
	ctx.r19.s64 = 4915200;
	// lis r14,23
	ctx.r14.s64 = 1507328;
	// lis r15,3
	ctx.r15.s64 = 196608;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88123330
	if (!ctx.cr6.eq) goto loc_88123330;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12247
	ctx.r3.s64 = 12247;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addis r4,r4,-103
	ctx.r4.s64 = ctx.r4.s64 + -6750208;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r24,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881231B0;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881231ec
	if (ctx.cr6.eq) goto loc_881231EC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881231C4;
	sub_8813FF48(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881231f0
	if (ctx.cr6.eq) goto loc_881231F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881231E8;
	sub_8813FF90(ctx, base);
	// b 0x881231f0
	goto loc_881231F0;
loc_881231EC:
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881231F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r10,r9,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r19,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r19.u64;
	// addis r5,r3,-26
	ctx.r5.s64 = ctx.r3.s64 + -1703936;
	// li r3,12248
	ctx.r3.s64 = 12248;
	// bl 0x8801a9c8
	ctx.lr = 0x88123228;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812325c
	if (ctx.cr6.eq) goto loc_8812325C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812323C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8812325c
	if (ctx.cr6.eq) goto loc_8812325C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812325C;
	sub_8813FF90(ctx, base);
loc_8812325C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12249
	ctx.r3.s64 = 12249;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addis r4,r4,-51
	ctx.r4.s64 = ctx.r4.s64 + -3342336;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r11,-10
	ctx.r5.s64 = ctx.r11.s64 + -655360;
	// bl 0x8801a9c8
	ctx.lr = 0x88123298;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881232cc
	if (ctx.cr6.eq) goto loc_881232CC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881232AC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881232cc
	if (ctx.cr6.eq) goto loc_881232CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881232CC;
	sub_8813FF90(ctx, base);
loc_881232CC:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12250
	ctx.r3.s64 = 12250;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r14,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r14.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881232F8;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123334
	if (ctx.cr6.eq) goto loc_88123334;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812330C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x88123334
	if (ctx.cr6.eq) goto loc_88123334;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812332C;
	sub_8813FF90(ctx, base);
	// b 0x88123334
	goto loc_88123334;
loc_88123330:
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88123334:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x881233dc
	if (!ctx.cr6.eq) goto loc_881233DC;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-960
	ctx.r9.s64 = ctx.r9.s64 + -960;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88123360:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881233d0
	if (!ctx.cr6.gt) goto loc_881233D0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812339C;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881233d0
	if (ctx.cr6.eq) goto loc_881233D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881233B0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881233d0
	if (ctx.cr6.eq) goto loc_881233D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881233D0;
	sub_8813FF90(ctx, base);
loc_881233D0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x88123360
	if (!ctx.cr0.eq) goto loc_88123360;
loc_881233DC:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lis r25,62
	ctx.r25.s64 = 4063232;
	// lis r20,77
	ctx.r20.s64 = 5046272;
	// lis r21,42
	ctx.r21.s64 = 2752512;
	// lis r17,49
	ctx.r17.s64 = 3211264;
	// lis r18,14
	ctx.r18.s64 = 917504;
	// lis r16,21
	ctx.r16.s64 = 1376256;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881235bc
	if (!ctx.cr6.eq) goto loc_881235BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12251
	ctx.r3.s64 = 12251;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// addis r4,r4,-87
	ctx.r4.s64 = ctx.r4.s64 + -5701632;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r25,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812343C;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123478
	if (ctx.cr6.eq) goto loc_88123478;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123450;
	sub_8813FF48(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8812347c
	if (ctx.cr6.eq) goto loc_8812347C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123474;
	sub_8813FF90(ctx, base);
	// b 0x8812347c
	goto loc_8812347C;
loc_88123478:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8812347C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r10,r9,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r20,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r20.u64;
	// subf r5,r21,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r21.u64;
	// li r3,12252
	ctx.r3.s64 = 12252;
	// bl 0x8801a9c8
	ctx.lr = 0x881234B4;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881234e8
	if (ctx.cr6.eq) goto loc_881234E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881234C8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881234e8
	if (ctx.cr6.eq) goto loc_881234E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881234E8;
	sub_8813FF90(ctx, base);
loc_881234E8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12253
	ctx.r3.s64 = 12253;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// subf r4,r17,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r17.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r18,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r18.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123524;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123558
	if (ctx.cr6.eq) goto loc_88123558;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123538;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88123558
	if (ctx.cr6.eq) goto loc_88123558;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123558;
	sub_8813FF90(ctx, base);
loc_88123558:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12254
	ctx.r3.s64 = 12254;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r16,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r16.u64;
	// addis r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -131072;
	// bl 0x8801a9c8
	ctx.lr = 0x88123584;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881235c0
	if (ctx.cr6.eq) goto loc_881235C0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123598;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881235c0
	if (ctx.cr6.eq) goto loc_881235C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881235B8;
	sub_8813FF90(ctx, base);
	// b 0x881235c0
	goto loc_881235C0;
loc_881235BC:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_881235C0:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88123638
	if (!ctx.cr6.eq) goto loc_88123638;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12246
	ctx.r3.s64 = 12246;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r7,r22
	ctx.r4.u64 = ctx.r7.u64 + ctx.r22.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881235F8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123604;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123638
	if (ctx.cr6.eq) goto loc_88123638;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123618;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88123638
	if (ctx.cr6.eq) goto loc_88123638;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123638;
	sub_8813FF90(ctx, base);
loc_88123638:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r22,92(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,88(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881236f0
	if (!ctx.cr6.eq) goto loc_881236F0;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// addi r9,r22,-1440
	ctx.r9.s64 = ctx.r22.s64 + -1440;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88123668:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881236e4
	if (!ctx.cr6.gt) goto loc_881236E4;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881236A4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881236B0;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881236e4
	if (ctx.cr6.eq) goto loc_881236E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881236C4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x881236e4
	if (ctx.cr6.eq) goto loc_881236E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881236E4;
	sub_8813FF90(ctx, base);
loc_881236E4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88123668
	if (!ctx.cr0.eq) goto loc_88123668;
loc_881236F0:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881238dc
	if (!ctx.cr6.eq) goto loc_881238DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12247
	ctx.r3.s64 = 12247;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// addis r4,r4,103
	ctx.r4.s64 = ctx.r4.s64 + 6750208;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r24,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123738;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123744;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123778
	if (ctx.cr6.eq) goto loc_88123778;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123758;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123778
	if (ctx.cr6.eq) goto loc_88123778;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123778;
	sub_8813FF90(ctx, base);
loc_88123778:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r10,r10,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r10.s32 / ctx.r24.s32 : 0);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r8,r8,r24
	ctx.r8.u64 = uint32_t((ctx.r24.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r8.s32 / ctx.r24.s32 : 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r7,r19
	ctx.r4.u64 = ctx.r7.u64 + ctx.r19.u64;
	// addis r5,r5,-26
	ctx.r5.s64 = ctx.r5.s64 + -1703936;
	// li r3,12248
	ctx.r3.s64 = 12248;
	// bl 0x8801a9c8
	ctx.lr = 0x881237B0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881237BC;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881237f0
	if (ctx.cr6.eq) goto loc_881237F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881237D0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x881237f0
	if (ctx.cr6.eq) goto loc_881237F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881237F0;
	sub_8813FF90(ctx, base);
loc_881237F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12249
	ctx.r3.s64 = 12249;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r4,51
	ctx.r4.s64 = ctx.r4.s64 + 3342336;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r11,-10
	ctx.r5.s64 = ctx.r11.s64 + -655360;
	// bl 0x8801a9c8
	ctx.lr = 0x8812382C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123838;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812386c
	if (ctx.cr6.eq) goto loc_8812386C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812384C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8812386c
	if (ctx.cr6.eq) goto loc_8812386C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812386C;
	sub_8813FF90(ctx, base);
loc_8812386C:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12250
	ctx.r3.s64 = 12250;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r14
	ctx.r4.u64 = ctx.r9.u64 + ctx.r14.u64;
	// add r5,r8,r15
	ctx.r5.u64 = ctx.r8.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123898;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881238A4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881238e0
	if (ctx.cr6.eq) goto loc_881238E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881238B8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x881238e0
	if (ctx.cr6.eq) goto loc_881238E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881238D8;
	sub_8813FF90(ctx, base);
	// b 0x881238e0
	goto loc_881238E0;
loc_881238DC:
	// li r24,3
	ctx.r24.s64 = 3;
loc_881238E0:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88123990
	if (!ctx.cr6.eq) goto loc_88123990;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// addi r10,r22,-960
	ctx.r10.s64 = ctx.r22.s64 + -960;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88123908:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88123984
	if (!ctx.cr6.gt) goto loc_88123984;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123944;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123950;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123984
	if (ctx.cr6.eq) goto loc_88123984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123964;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123984
	if (ctx.cr6.eq) goto loc_88123984;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123984;
	sub_8813FF90(ctx, base);
loc_88123984:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88123908
	if (!ctx.cr0.eq) goto loc_88123908;
loc_88123990:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88123b74
	if (!ctx.cr6.eq) goto loc_88123B74;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12251
	ctx.r3.s64 = 12251;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r9,87
	ctx.r4.s64 = ctx.r9.s64 + 5701632;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r25,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881239D8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881239E4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123a18
	if (ctx.cr6.eq) goto loc_88123A18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881239F8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123a18
	if (ctx.cr6.eq) goto loc_88123A18;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123A18;
	sub_8813FF90(ctx, base);
loc_88123A18:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12252
	ctx.r3.s64 = 12252;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r9,r11,r24
	ctx.r9.u64 = uint32_t((ctx.r24.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r11.s32 / ctx.r24.s32 : 0);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r11,r7,r24
	ctx.r11.u64 = uint32_t((ctx.r24.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r7.s32 / ctx.r24.s32 : 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r5,r20
	ctx.r4.u64 = ctx.r5.u64 + ctx.r20.u64;
	// subf r5,r21,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r21.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123A4C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123A58;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123a8c
	if (ctx.cr6.eq) goto loc_88123A8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123A6C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123a8c
	if (ctx.cr6.eq) goto loc_88123A8C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123A8C;
	sub_8813FF90(ctx, base);
loc_88123A8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12253
	ctx.r3.s64 = 12253;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r18,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r18.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123AC8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123AD4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123b08
	if (ctx.cr6.eq) goto loc_88123B08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123AE8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123b08
	if (ctx.cr6.eq) goto loc_88123B08;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123B08;
	sub_8813FF90(ctx, base);
loc_88123B08:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12254
	ctx.r3.s64 = 12254;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r16
	ctx.r4.u64 = ctx.r9.u64 + ctx.r16.u64;
	// addis r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -131072;
	// bl 0x8801a9c8
	ctx.lr = 0x88123B34;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88123B40;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123b74
	if (ctx.cr6.eq) goto loc_88123B74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123B54;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123b74
	if (ctx.cr6.eq) goto loc_88123B74;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123B74;
	sub_8813FF90(ctx, base);
loc_88123B74:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8801a860
	ctx.lr = 0x88123B8C;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r24,70
	ctx.r24.s64 = 4587520;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lis r14,24
	ctx.r14.s64 = 1572864;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88123c6c
	if (!ctx.cr6.eq) goto loc_88123C6C;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12323
	ctx.r3.s64 = 12323;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r7,-28
	ctx.r4.s64 = ctx.r7.s64 + -1835008;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123BD8;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123c0c
	if (ctx.cr6.eq) goto loc_88123C0C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123BEC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123c0c
	if (ctx.cr6.eq) goto loc_88123C0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123C0C;
	sub_8813FF90(ctx, base);
loc_88123C0C:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12324
	ctx.r3.s64 = 12324;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r14,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r14.u64;
	// addis r5,r5,34
	ctx.r5.s64 = ctx.r5.s64 + 2228224;
	// bl 0x8801a9c8
	ctx.lr = 0x88123C38;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123c6c
	if (ctx.cr6.eq) goto loc_88123C6C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123C4C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123c6c
	if (ctx.cr6.eq) goto loc_88123C6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123C6C;
	sub_8813FF90(ctx, base);
loc_88123C6C:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88123d10
	if (!ctx.cr6.eq) goto loc_88123D10;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// addi r10,r22,-480
	ctx.r10.s64 = ctx.r22.s64 + -480;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88123C94:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88123d04
	if (!ctx.cr6.gt) goto loc_88123D04;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123CD0;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123d04
	if (ctx.cr6.eq) goto loc_88123D04;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123CE4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88123d04
	if (ctx.cr6.eq) goto loc_88123D04;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r23,24
	ctx.r6.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123D04;
	sub_8813FF90(ctx, base);
loc_88123D04:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x88123c94
	if (!ctx.cr0.eq) goto loc_88123C94;
loc_88123D10:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lis r25,100
	ctx.r25.s64 = 6553600;
	// lis r23,76
	ctx.r23.s64 = 4980736;
	// lis r22,48
	ctx.r22.s64 = 3145728;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88123ef0
	if (!ctx.cr6.eq) goto loc_88123EF0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12325
	ctx.r3.s64 = 12325;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// subf r4,r25,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r25.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r8,10
	ctx.r5.s64 = ctx.r8.s64 + 655360;
	// bl 0x8801a9c8
	ctx.lr = 0x88123D64;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123da0
	if (ctx.cr6.eq) goto loc_88123DA0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123D78;
	sub_8813FF48(ctx, base);
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88123da4
	if (ctx.cr6.eq) goto loc_88123DA4;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123D9C;
	sub_8813FF90(ctx, base);
	// b 0x88123da4
	goto loc_88123DA4;
loc_88123DA0:
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88123DA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,3
	ctx.r19.s64 = 3;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r17,18
	ctx.r17.s64 = 1179648;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r7,r11,r19
	ctx.r7.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r11,r9,r19
	ctx.r11.u64 = uint32_t((ctx.r19.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r9.s32 / ctx.r19.s32 : 0);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r23.u64;
	// add r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 + ctx.r17.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,12326
	ctx.r3.s64 = 12326;
	// bl 0x8801a9c8
	ctx.lr = 0x88123DE0;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123e14
	if (ctx.cr6.eq) goto loc_88123E14;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123DF4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88123e14
	if (ctx.cr6.eq) goto loc_88123E14;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123E14;
	sub_8813FF90(ctx, base);
loc_88123E14:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r16,22
	ctx.r16.s64 = 1441792;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12327
	ctx.r3.s64 = 12327;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// subf r4,r22,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r22.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r16
	ctx.r5.u64 = ctx.r8.u64 + ctx.r16.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123E54;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123e88
	if (ctx.cr6.eq) goto loc_88123E88;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123E68;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88123e88
	if (ctx.cr6.eq) goto loc_88123E88;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123E88;
	sub_8813FF90(ctx, base);
loc_88123E88:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r15,26
	ctx.r15.s64 = 1703936;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,12328
	ctx.r3.s64 = 12328;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r14,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r14.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123EB8;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123f04
	if (ctx.cr6.eq) goto loc_88123F04;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123ECC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88123f04
	if (ctx.cr6.eq) goto loc_88123F04;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123EEC;
	sub_8813FF90(ctx, base);
	// b 0x88123f04
	goto loc_88123F04;
loc_88123EF0:
	// lwz r21,88(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r17,18
	ctx.r17.s64 = 1179648;
	// lis r16,22
	ctx.r16.s64 = 1441792;
	// li r19,3
	ctx.r19.s64 = 3;
	// lis r15,26
	ctx.r15.s64 = 1703936;
loc_88123F04:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88123fa8
	if (!ctx.cr6.eq) goto loc_88123FA8;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r20
	ctx.r28.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_88123F2C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88123f9c
	if (!ctx.cr6.gt) goto loc_88123F9C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123F68;
	sub_8801A9C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88123f9c
	if (ctx.cr6.eq) goto loc_88123F9C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88123F7C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88123f9c
	if (ctx.cr6.eq) goto loc_88123F9C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88123F9C;
	sub_8813FF90(ctx, base);
loc_88123F9C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x88123f2c
	if (!ctx.cr0.eq) goto loc_88123F2C;
loc_88123FA8:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lis r18,19
	ctx.r18.s64 = 1245184;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88124160
	if (!ctx.cr6.eq) goto loc_88124160;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12329
	ctx.r3.s64 = 12329;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r9,-103
	ctx.r4.s64 = ctx.r9.s64 + -6750208;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r17,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88123FF4;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124028
	if (ctx.cr6.eq) goto loc_88124028;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124008;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124028
	if (ctx.cr6.eq) goto loc_88124028;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124028;
	sub_8813FF90(ctx, base);
loc_88124028:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12330
	ctx.r3.s64 = 12330;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r7,r11,r19
	ctx.r7.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r11,r9,r19
	ctx.r11.u64 = uint32_t((ctx.r19.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r9.s32 / ctx.r19.s32 : 0);
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r5,-87
	ctx.r4.s64 = ctx.r5.s64 + -5701632;
	// addis r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -131072;
	// bl 0x8801a9c8
	ctx.lr = 0x8812405C;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124090
	if (ctx.cr6.eq) goto loc_88124090;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124070;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124090
	if (ctx.cr6.eq) goto loc_88124090;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124090;
	sub_8813FF90(ctx, base);
loc_88124090:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12331
	ctx.r3.s64 = 12331;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r9,-51
	ctx.r4.s64 = ctx.r9.s64 + -3342336;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r16
	ctx.r5.u64 = ctx.r8.u64 + ctx.r16.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881240CC;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124100
	if (ctx.cr6.eq) goto loc_88124100;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881240E0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124100
	if (ctx.cr6.eq) goto loc_88124100;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124100;
	sub_8813FF90(ctx, base);
loc_88124100:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12332
	ctx.r3.s64 = 12332;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r18,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r18.u64;
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812412C;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124160
	if (ctx.cr6.eq) goto loc_88124160;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124140;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124160
	if (ctx.cr6.eq) goto loc_88124160;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124160;
	sub_8813FF90(ctx, base);
loc_88124160:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88124244
	if (!ctx.cr6.eq) goto loc_88124244;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12323
	ctx.r3.s64 = 12323;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r4,r7,28
	ctx.r4.s64 = ctx.r7.s64 + 1835008;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88124198;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881241cc
	if (ctx.cr6.eq) goto loc_881241CC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881241AC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881241cc
	if (ctx.cr6.eq) goto loc_881241CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881241CC;
	sub_8813FF90(ctx, base);
loc_881241CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881241D8;
	sub_8813FF08(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,12324
	ctx.r3.s64 = 12324;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r14
	ctx.r4.u64 = ctx.r9.u64 + ctx.r14.u64;
	// addis r5,r8,34
	ctx.r5.s64 = ctx.r8.s64 + 2228224;
	// bl 0x8801a9c8
	ctx.lr = 0x88124204;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124238
	if (ctx.cr6.eq) goto loc_88124238;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124218;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124238
	if (ctx.cr6.eq) goto loc_88124238;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124238;
	sub_8813FF90(ctx, base);
loc_88124238:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88124244;
	sub_8813FF08(ctx, base);
loc_88124244:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881242f4
	if (!ctx.cr6.eq) goto loc_881242F4;
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// addi r10,r20,-480
	ctx.r10.s64 = ctx.r20.s64 + -480;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8812426C:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881242e8
	if (!ctx.cr6.gt) goto loc_881242E8;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881242A8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881242B4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881242e8
	if (ctx.cr6.eq) goto loc_881242E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881242C8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881242e8
	if (ctx.cr6.eq) goto loc_881242E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881242E8;
	sub_8813FF90(ctx, base);
loc_881242E8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x8812426c
	if (!ctx.cr0.eq) goto loc_8812426C;
loc_881242F4:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881244d8
	if (!ctx.cr6.eq) goto loc_881244D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12325
	ctx.r3.s64 = 12325;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r8,10
	ctx.r5.s64 = ctx.r8.s64 + 655360;
	// bl 0x8801a9c8
	ctx.lr = 0x8812433C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88124348;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812437c
	if (ctx.cr6.eq) goto loc_8812437C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812435C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8812437c
	if (ctx.cr6.eq) goto loc_8812437C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812437C;
	sub_8813FF90(ctx, base);
loc_8812437C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12326
	ctx.r3.s64 = 12326;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r9,r11,r19
	ctx.r9.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r11,r7,r19
	ctx.r11.u64 = uint32_t((ctx.r19.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r7.s32 / ctx.r19.s32 : 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + ctx.r23.u64;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881243B0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881243BC;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881243f0
	if (ctx.cr6.eq) goto loc_881243F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881243D0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881243f0
	if (ctx.cr6.eq) goto loc_881243F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881243F0;
	sub_8813FF90(ctx, base);
loc_881243F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12327
	ctx.r3.s64 = 12327;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812442C;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88124438;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812446c
	if (ctx.cr6.eq) goto loc_8812446C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812444C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8812446c
	if (ctx.cr6.eq) goto loc_8812446C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812446C;
	sub_8813FF90(ctx, base);
loc_8812446C:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12328
	ctx.r3.s64 = 12328;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r14
	ctx.r4.u64 = ctx.r9.u64 + ctx.r14.u64;
	// add r5,r8,r15
	ctx.r5.u64 = ctx.r8.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88124498;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881244A4;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881244d8
	if (ctx.cr6.eq) goto loc_881244D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881244B8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881244d8
	if (ctx.cr6.eq) goto loc_881244D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881244D8;
	sub_8813FF90(ctx, base);
loc_881244D8:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88124584
	if (!ctx.cr6.eq) goto loc_88124584;
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_881244FC:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88124578
	if (!ctx.cr6.gt) goto loc_88124578;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88124538;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88124544;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124578
	if (ctx.cr6.eq) goto loc_88124578;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124558;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124578
	if (ctx.cr6.eq) goto loc_88124578;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124578;
	sub_8813FF90(ctx, base);
loc_88124578:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x881244fc
	if (!ctx.cr0.eq) goto loc_881244FC;
loc_88124584:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88124768
	if (!ctx.cr6.eq) goto loc_88124768;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12329
	ctx.r3.s64 = 12329;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r9,103
	ctx.r4.s64 = ctx.r9.s64 + 6750208;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r17,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881245CC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881245D8;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8812460c
	if (ctx.cr6.eq) goto loc_8812460C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881245EC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8812460c
	if (ctx.cr6.eq) goto loc_8812460C;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8812460C;
	sub_8813FF90(ctx, base);
loc_8812460C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12330
	ctx.r3.s64 = 12330;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// divw r9,r11,r19
	ctx.r9.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// divw r11,r7,r19
	ctx.r11.u64 = uint32_t((ctx.r19.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r7.s32 / ctx.r19.s32 : 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r5,87
	ctx.r4.s64 = ctx.r5.s64 + 5701632;
	// addis r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -131072;
	// bl 0x8801a9c8
	ctx.lr = 0x88124640;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8812464C;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124680
	if (ctx.cr6.eq) goto loc_88124680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124660;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124680
	if (ctx.cr6.eq) goto loc_88124680;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124680;
	sub_8813FF90(ctx, base);
loc_88124680:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12331
	ctx.r3.s64 = 12331;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// addis r4,r4,51
	ctx.r4.s64 = ctx.r4.s64 + 3342336;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881246BC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881246C8;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881246fc
	if (ctx.cr6.eq) goto loc_881246FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881246DC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881246fc
	if (ctx.cr6.eq) goto loc_881246FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881246FC;
	sub_8813FF90(ctx, base);
loc_881246FC:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,12332
	ctx.r3.s64 = 12332;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r18
	ctx.r4.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r5,r8,r15
	ctx.r5.u64 = ctx.r8.u64 + ctx.r15.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88124728;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88124734;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124768
	if (ctx.cr6.eq) goto loc_88124768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124748;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88124768
	if (ctx.cr6.eq) goto loc_88124768;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r21,24
	ctx.r6.u64 = ctx.r21.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88124768;
	sub_8813FF90(ctx, base);
loc_88124768:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88142098) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r0,-24112(r20)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r20.u32 + -24112);
	// lbz r0,28608(0)
	ctx.r0.u64 = REX_LOAD_U8(28608);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x881420A8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x88143970
	ctx.lr = 0x881420C4;
	sub_88143970(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30595
	ctx.r11.s64 = -2005073920;
	// lwz r11,21584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21584);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881421dc
	if (ctx.cr6.eq) goto loc_881421DC;
	// lis r9,-30595
	ctx.r9.s64 = -2005073920;
	// lwz r11,21580(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21580);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881420f0
	if (!ctx.cr6.eq) goto loc_881420F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8814a220
	ctx.lr = 0x881420F0;
	__imp__KeBugCheck(ctx, base);
loc_881420F0:
	// lis r8,-30595
	ctx.r8.s64 = -2005073920;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21580(r9)
	REX_STORE_U32(ctx.r9.u32 + 21580, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r24,21576(r8)
	REX_STORE_U8(ctx.r8.u32 + 21576, ctx.r24.u8);
	// bne cr6,0x881421c8
	if (!ctx.cr6.eq) goto loc_881421C8;
	// lis r25,-30595
	ctx.r25.s64 = -2005073920;
	// lwz r28,22152(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 22152);
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x881421b4
	if (ctx.cr0.eq) goto loc_881421B4;
	// lis r27,-30595
	ctx.r27.s64 = -2005073920;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r30,22148(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 22148);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_88142138:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x881421b4
	if (ctx.cr6.lt) goto loc_881421B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8814215c
	if (!ctx.cr6.eq) goto loc_8814215C;
loc_88142154:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88142138
	goto loc_88142138;
loc_8814215C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x881421b4
	if (ctx.cr6.lt) goto loc_881421B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88142178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,22152(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 22152);
	// lwz r10,22148(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 22148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88142190
	if (!ctx.cr6.eq) goto loc_88142190;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88142154
	if (ctx.cr6.eq) goto loc_88142154;
loc_88142190:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x88142154
	goto loc_88142154;
loc_881421B4:
	// lis r11,-30699
	ctx.r11.s64 = -2011889664;
	// lis r10,-30699
	ctx.r10.s64 = -2011889664;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// bl 0x88142040
	ctx.lr = 0x881421C8;
	sub_88142040(ctx, base);
loc_881421C8:
	// lis r11,-30699
	ctx.r11.s64 = -2011889664;
	// lis r10,-30699
	ctx.r10.s64 = -2011889664;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// bl 0x88142040
	ctx.lr = 0x881421DC;
	sub_88142040(ctx, base);
loc_881421DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x88142224
	ctx.lr = 0x881421E8;
	sub_88142224(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881421fc
	if (!ctx.cr6.eq) goto loc_881421FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8814a220
	ctx.lr = 0x881421FC;
	__imp__KeBugCheck(ctx, base);
loc_881421FC:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88149E14) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149E38) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149E48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30595
	ctx.r11.s64 = -2005073920;
	// lwz r3,22124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 22124);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88149F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6972
	ctx.r30.s64 = ctx.r11.s64 + -6972;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8814a250
	ctx.lr = 0x88149F1C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88149f44
	if (ctx.cr6.eq) goto loc_88149F44;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r10,r11,-6944
	ctx.r10.s64 = ctx.r11.s64 + -6944;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x88149f54
	goto loc_88149F54;
loc_88149F44:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_88149F54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8814a230
	ctx.lr = 0x88149F5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8814a340
	ctx.lr = 0x8814A0A8;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814a198
	ctx.lr = 0x8814A0B0;
	sub_8814A198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

