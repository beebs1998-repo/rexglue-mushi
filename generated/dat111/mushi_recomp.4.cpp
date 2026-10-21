#include "mushi_funcs.4.h"

DEFINE_REX_FUNC(sub_880102B0) {
	REX_FUNC_PROLOGUE();
	// stw r4,5864(r3)
	REX_STORE_U32(ctx.r3.u32 + 5864, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88010488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88010490;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-30692
	ctx.r28.s64 = -2011430912;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r31,r11,-6848
	ctx.r31.s64 = ctx.r11.s64 + -6848;
	// lwz r11,-6860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880104d4
	if (!ctx.cr6.eq) goto loc_880104D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880104B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880104e0
	if (ctx.cr6.eq) goto loc_880104E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,156
	ctx.r31.s64 = ctx.r31.s64 + 156;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x880104b8
	if (ctx.cr6.lt) goto loc_880104B8;
loc_880104D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880104E0:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// stw r4,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r7,12
	ctx.r7.s64 = 786432;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x880b2430
	ctx.lr = 0x88010534;
	sub_880B2430(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8806bcd0
	ctx.lr = 0x88010548;
	sub_8806BCD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88010564
	if (ctx.cr6.eq) goto loc_88010564;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_88010564:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801057c
	if (ctx.cr6.eq) goto loc_8801057C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8801057C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r27,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8806b8a8
	ctx.lr = 0x8801059C;
	sub_8806B8A8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880105c0
	if (!ctx.cr6.eq) goto loc_880105C0;
	// lwz r11,-6860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6860);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-6860(r28)
	REX_STORE_U32(ctx.r28.u32 + -6860, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880105C0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880105d0
	if (!ctx.cr6.eq) goto loc_880105D0;
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_880105D0:
	// lwz r11,-6860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6860);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-6860(r28)
	REX_STORE_U32(ctx.r28.u32 + -6860, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88012E38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,-6428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88012e50
	if (!ctx.cr6.eq) goto loc_88012E50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88012E50:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,57358
	ctx.r9.u64 = ctx.r10.u64 | 57358;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88012F70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88012F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88012F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,42(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r3,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r3.u8);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// bge cr6,0x880131b8
	if (!ctx.cr6.lt) goto loc_880131B8;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r10,43(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 43);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r10,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r10.u8);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// stb r8,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r8.u8);
	// bne cr6,0x8801319c
	if (!ctx.cr6.eq) goto loc_8801319C;
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 41);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88013068
	if (ctx.cr6.lt) goto loc_88013068;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88013060
	if (ctx.cr6.eq) goto loc_88013060;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88069760
	ctx.lr = 0x88013018;
	sub_88069760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013050
	if (ctx.cr6.eq) goto loc_88013050;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8806c7a0
	ctx.lr = 0x88013028;
	sub_8806C7A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x8801304C;
	sub_88011728(ctx, base);
	// b 0x88013068
	goto loc_88013068;
loc_88013050:
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 41);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_88013060:
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x88013068;
	sub_880111C0(ctx, base);
loc_88013068:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,-6440(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801319c
	if (!ctx.cr6.eq) goto loc_8801319C;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880130dc
	if (!ctx.cr6.eq) goto loc_880130DC;
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8801319c
	if (!ctx.cr6.gt) goto loc_8801319C;
loc_88013098:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,125
	ctx.r6.s64 = 125;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r9,r30,r11
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r7,41(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 41);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// subf r5,r4,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// bl 0x880111c0
	ctx.lr = 0x880130C4;
	sub_880111C0(ctx, base);
	// lbz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88013098
	if (ctx.cr6.lt) goto loc_88013098;
	// b 0x8801319c
	goto loc_8801319C;
loc_880130DC:
	// bl 0x880696c8
	ctx.lr = 0x880130E0;
	sub_880696C8(ctx, base);
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 108);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// beq cr6,0x88013154
	if (ctx.cr6.eq) goto loc_88013154;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8801319c
	if (!ctx.cr6.gt) goto loc_8801319C;
loc_880130FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8806c7a0
	ctx.lr = 0x88013110;
	sub_8806C7A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r3,r29,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x8801313C;
	sub_88011728(ctx, base);
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880130fc
	if (ctx.cr6.lt) goto loc_880130FC;
	// b 0x8801319c
	goto loc_8801319C;
loc_88013154:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8801319c
	if (!ctx.cr6.gt) goto loc_8801319C;
loc_8801315C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,125
	ctx.r6.s64 = 125;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r9,r30,r11
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r7,41(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 41);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// subf r5,r4,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// bl 0x880111c0
	ctx.lr = 0x88013188;
	sub_880111C0(ctx, base);
	// lbz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8801315c
	if (ctx.cr6.lt) goto loc_8801315C;
loc_8801319C:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// ble cr6,0x880131b8
	if (!ctx.cr6.gt) goto loc_880131B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880131B8:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a9c8
	ctx.lr = 0x880131D8;
	sub_8801A9C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88015830) {
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
	ctx.lr = 0x88015848;
	sub_88014D38(ctx, base);
	// li r11,4320
	ctx.r11.s64 = 4320;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,21
	ctx.r9.s64 = 21;
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

DEFINE_REX_FUNC(sub_88015BD0) {
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
	ctx.lr = 0x88015BE8;
	sub_88014D38(ctx, base);
	// li r11,4284
	ctx.r11.s64 = 4284;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
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

DEFINE_REX_FUNC(sub_88015EF0) {
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
	ctx.lr = 0x88015F08;
	sub_88014D38(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,21
	ctx.r9.s64 = 21;
	// stb r10,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r10.u8);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// addi r6,r10,4706
	ctx.r6.s64 = ctx.r10.s64 + 4706;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
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

DEFINE_REX_FUNC(sub_880162A0) {
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
	ctx.lr = 0x880162B8;
	sub_88014D38(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r10,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r10.u8);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// addi r6,r10,4519
	ctx.r6.s64 = ctx.r10.s64 + 4519;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
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

DEFINE_REX_FUNC(sub_880167A8) {
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
	// lbz r7,42(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,42(r3)
	REX_STORE_U8(ctx.r3.u32 + 42, ctx.r6.u8);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// bge cr6,0x88016820
	if (!ctx.cr6.lt) goto loc_88016820;
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
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// stb r8,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r8.u8);
	// ble cr6,0x88016820
	if (!ctx.cr6.gt) goto loc_88016820;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
loc_88016820:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x880168a0
	if (!ctx.cr0.lt) goto loc_880168A0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// blt cr6,0x880168a0
	if (ctx.cr6.lt) goto loc_880168A0;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x880244d0
	ctx.lr = 0x8801684C;
	sub_880244D0(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x88016884
	if (ctx.cr6.eq) goto loc_88016884;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88013ce0
	ctx.lr = 0x88016884;
	sub_88013CE0(ctx, base);
loc_88016884:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88013940
	ctx.lr = 0x880168A0;
	sub_88013940(ctx, base);
loc_880168A0:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a9c8
	ctx.lr = 0x880168C0;
	sub_8801A9C8(ctx, base);
	// lhz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880168d4
	if (ctx.cr6.eq) goto loc_880168D4;
	// bl 0x8813ff08
	ctx.lr = 0x880168D4;
	sub_8813FF08(ctx, base);
loc_880168D4:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6444(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -6444);
	// bl 0x8813ff48
	ctx.lr = 0x880168E4;
	sub_8813FF48(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88014a00
	ctx.lr = 0x880168F8;
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

DEFINE_REX_FUNC(sub_88018340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-7048
	ctx.r9.s64 = ctx.r11.s64 + -7048;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88018510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88018518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// bge 0x880185bc
	if (!ctx.cr0.lt) goto loc_880185BC;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880185bc
	if (ctx.cr6.eq) goto loc_880185BC;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// bl 0x880183c8
	ctx.lr = 0x88018570;
	sub_880183C8(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88018588
	if (!ctx.cr6.eq) goto loc_88018588;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_88018588:
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,56
	ctx.r8.s64 = 56;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x88013ce0
	ctx.lr = 0x880185B0;
	sub_88013CE0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880185BC:
	// lbz r11,42(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 42);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r9,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r9.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x880185f0
	if (!ctx.cr6.lt) goto loc_880185F0;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r10,43(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 43);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r10,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r10.u8);
	// stb r8,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r8.u8);
loc_880185F0:
	// li r6,133
	ctx.r6.s64 = 133;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,10337
	ctx.r3.s64 = 10337;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a9c8
	ctx.lr = 0x88018604;
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
	ctx.lr = 0x88018618;
	sub_8813FF90(ctx, base);
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a9c8
	ctx.lr = 0x88018638;
	sub_8801A9C8(ctx, base);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lwz r4,-6444(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -6444);
	// bl 0x8813ff48
	ctx.lr = 0x88018644;
	sub_8813FF48(ctx, base);
	// li r6,218
	ctx.r6.s64 = 218;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,10337
	ctx.r3.s64 = 10337;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a9c8
	ctx.lr = 0x88018658;
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
	ctx.lr = 0x8801866C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8801AE68) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r11,3936
	ctx.r9.s64 = ctx.r11.s64 + 3936;
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// blt cr6,0x8801ae8c
	if (ctx.cr6.lt) goto loc_8801AE8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8801AE8C:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ori r5,r11,52429
	ctx.r5.u64 = ctx.r11.u64 | 52429;
loc_8801AE98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r9,24
	ctx.r7.s64 = ctx.r9.s64 + 24;
	// mulhwu r11,r10,r5
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r3,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8801ae98
	if (!ctx.cr6.eq) goto loc_8801AE98;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// bne cr6,0x8801af3c
	if (!ctx.cr6.eq) goto loc_8801AF3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r5,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8801AF3C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,24(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8801b018
	if (ctx.cr6.gt) goto loc_8801B018;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8801af74
	if (ctx.cr6.gt) goto loc_8801AF74;
loc_8801AF58:
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8801afc8
	if (ctx.cr6.eq) goto loc_8801AFC8;
	// lwz r3,24(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8801af58
	if (!ctx.cr6.gt) goto loc_8801AF58;
loc_8801AF74:
	// lwz r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r4,16(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8801AFC8:
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8801B018:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88020CD8) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x88069520
	ctx.lr = 0x88020CF4;
	sub_88069520(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x88020d34
	if (ctx.cr6.eq) goto loc_88020D34;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// sth r11,10740(r31)
	REX_STORE_U16(ctx.r31.u32 + 10740, ctx.r11.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,3232
	ctx.r4.s64 = ctx.r10.s64 + 3232;
	// bl 0x88069088
	ctx.lr = 0x88020D18;
	sub_88069088(ctx, base);
	// lhz r9,10740(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 10740);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88020d34
	if (!ctx.cr6.eq) goto loc_88020D34;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88068e60
	ctx.lr = 0x88020D2C;
	sub_88068E60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8801a198
	ctx.lr = 0x88020D34;
	sub_8801A198(ctx, base);
loc_88020D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813f908
	ctx.lr = 0x88020D3C;
	sub_8813F908(ctx, base);
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

DEFINE_REX_FUNC(sub_88021040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880210e4
	if (!ctx.cr6.eq) goto loc_880210E4;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r10,6944
	ctx.r7.s64 = ctx.r10.s64 + 6944;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r8,r7,-504
	ctx.r8.s64 = ctx.r7.s64 + -504;
	// addi r6,r7,-504
	ctx.r6.s64 = ctx.r7.s64 + -504;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88021070:
	// lbz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880210cc
	if (!ctx.cr6.eq) goto loc_880210CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x880210d8
	if (!ctx.cr6.eq) goto loc_880210D8;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r5,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x880210c4
	if (!ctx.cr6.gt) goto loc_880210C4;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880210c4
	if (ctx.cr6.eq) goto loc_880210C4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_880210BC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880210bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880210BC;
loc_880210C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_880210CC:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_880210D8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,500
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 500, ctx.xer);
	// blt cr6,0x88021070
	if (ctx.cr6.lt) goto loc_88021070;
loc_880210E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88021278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88021280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880213e8
	if (ctx.cr6.eq) goto loc_880213E8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8802139c
	if (!ctx.cr6.eq) goto loc_8802139C;
	// lwz r11,3752(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 3752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880212bc
	if (ctx.cr6.eq) goto loc_880212BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880212BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880212BC:
	// lwz r11,3644(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3644);
	// addi r5,r30,3640
	ctx.r5.s64 = ctx.r30.s64 + 3640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880212e0
	if (ctx.cr6.eq) goto loc_880212E0;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880212E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880212E0:
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r29,5
	ctx.r29.s64 = 5;
loc_880212E8:
	// lhz r11,-6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88021310
	if (ctx.cr6.eq) goto loc_88021310;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + -8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88021310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88021310:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// bne 0x880212e8
	if (!ctx.cr0.eq) goto loc_880212E8;
	// addi r11,r30,520
	ctx.r11.s64 = ctx.r30.s64 + 520;
	// li r29,10
	ctx.r29.s64 = 10;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_88021328:
	// lhz r11,-6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88021350
	if (ctx.cr6.eq) goto loc_88021350;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + -8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88021350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88021350:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// bne 0x88021328
	if (!ctx.cr0.eq) goto loc_88021328;
	// addi r11,r30,1560
	ctx.r11.s64 = ctx.r30.s64 + 1560;
	// li r29,20
	ctx.r29.s64 = 20;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_88021368:
	// lhz r11,-6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88021390
	if (ctx.cr6.eq) goto loc_88021390;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + -8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88021390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88021390:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// bne 0x88021368
	if (!ctx.cr0.eq) goto loc_88021368;
loc_8802139C:
	// lhz r11,3760(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880213e8
	if (ctx.cr6.eq) goto loc_880213E8;
	// lwz r31,3744(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 3744);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880213e8
	if (ctx.cr6.eq) goto loc_880213E8;
loc_880213B4:
	// lhz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880213dc
	if (ctx.cr6.eq) goto loc_880213DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880213DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880213DC:
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x880213b4
	if (!ctx.cr6.eq) goto loc_880213B4;
loc_880213E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88021B90) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88021bc8
	if (ctx.cr6.eq) goto loc_88021BC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88021BA0:
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88021bb8
	if (ctx.cr6.eq) goto loc_88021BB8;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88021bd0
	if (ctx.cr6.eq) goto loc_88021BD0;
loc_88021BB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x88021ba0
	if (ctx.cr6.lt) goto loc_88021BA0;
loc_88021BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88021BD0:
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88021E18) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88021E70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,3644(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3644);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022050) {
	REX_FUNC_PROLOGUE();
	// lhz r11,3760(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88022080
	if (ctx.cr6.eq) goto loc_88022080;
	// lwz r11,3744(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88022080
	if (ctx.cr6.eq) goto loc_88022080;
loc_88022068:
	// lhz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 92);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88022088
	if (ctx.cr6.eq) goto loc_88022088;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88022068
	if (!ctx.cr6.eq) goto loc_88022068;
loc_88022080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88022088:
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r5,96(r11)
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022508) {
	REX_FUNC_PROLOGUE();
	// lwz r9,1636(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1636);
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8802251C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88022534
	if (ctx.cr6.eq) goto loc_88022534;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88022548
	if (ctx.cr6.eq) goto loc_88022548;
loc_88022534:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8802251c
	if (ctx.cr6.lt) goto loc_8802251C;
	// blr 
	return;
loc_88022548:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880229D0) {
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
	ctx.lr = 0x880229E0;
	sub_88022930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880229f8
	if (!ctx.cr6.eq) goto loc_880229F8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_880229F8:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88022a24
	if (ctx.cr6.eq) goto loc_88022A24;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
loc_88022A24:
	// lwz r9,148(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88022a38
	if (ctx.cr6.eq) goto loc_88022A38;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
loc_88022A38:
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88022a4c
	if (ctx.cr6.eq) goto loc_88022A4C;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
loc_88022A4C:
	// lwz r9,228(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88022a60
	if (ctx.cr6.eq) goto loc_88022A60;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
loc_88022A60:
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,2636(r8)
	REX_STORE_U32(ctx.r8.u32 + 2636, ctx.r10.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88022E60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x88022E68;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-11896(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -11896);
	// bl 0x880690e8
	ctx.lr = 0x88022E7C;
	sub_880690E8(ctx, base);
	// lis r11,-30689
	ctx.r11.s64 = -2011234304;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r10,160
	ctx.r10.s64 = 10485760;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r31,r11,7480
	ctx.r31.s64 = ctx.r11.s64 + 7480;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r17,r10,41120
	ctx.r17.u64 = ctx.r10.u64 | 41120;
	// li r18,10
	ctx.r18.s64 = 10;
	// li r14,70
	ctx.r14.s64 = 70;
	// ori r30,r9,32768
	ctx.r30.u64 = ctx.r9.u64 | 32768;
	// li r21,100
	ctx.r21.s64 = 100;
	// lis r15,4
	ctx.r15.s64 = 262144;
	// lis r16,12
	ctx.r16.s64 = 786432;
loc_88022EBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8802365c
	if (ctx.cr6.eq) goto loc_8802365C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r19,0(r31)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88022f04
	if (ctx.cr6.eq) goto loc_88022F04;
	// stw r20,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
	// stw r20,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r20.u32);
	// stw r20,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r20.u32);
	// stw r20,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r20.u32);
	// stw r20,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r20.u32);
	// stw r20,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r20.u32);
	// stw r20,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r20.u32);
	// stw r20,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r20.u32);
	// stw r20,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r20.u32);
	// stw r20,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r20.u32);
loc_88022F04:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88022fcc
	if (ctx.cr6.eq) goto loc_88022FCC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88022fcc
	if (ctx.cr6.eq) goto loc_88022FCC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88022fec
	if (!ctx.cr6.eq) goto loc_88022FEC;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x88022fc0
	if (!ctx.cr0.lt) goto loc_88022FC0;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// blt cr6,0x88022f58
	if (ctx.cr6.lt) goto loc_88022F58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88022F58:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// blt cr6,0x88022f6c
	if (ctx.cr6.lt) goto loc_88022F6C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88022F6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x88022f80
	if (ctx.cr6.lt) goto loc_88022F80;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88022F80:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5000, ctx.xer);
	// blt cr6,0x88022f94
	if (ctx.cr6.lt) goto loc_88022F94;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88022F94:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88022fbc
	if (ctx.cr6.gt) goto loc_88022FBC;
	// stw r20,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r20.u32);
	// stw r29,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r20,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r20.u32);
	// stw r20,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r20.u32);
	// stw r20,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r20.u32);
	// stw r20,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r20.u32);
loc_88022FBC:
	// stw r20,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r20.u32);
loc_88022FC0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,2632(r19)
	REX_STORE_U32(ctx.r19.u32 + 2632, ctx.r11.u32);
	// b 0x88022fec
	goto loc_88022FEC;
loc_88022FCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88022fec
	if (!ctx.cr6.eq) goto loc_88022FEC;
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// bl 0x8806c658
	ctx.lr = 0x88022FE8;
	sub_8806C658(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_88022FEC:
	// lwz r26,44(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x88023038
	if (!ctx.cr6.eq) goto loc_88023038;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88023010
	if (ctx.cr6.eq) goto loc_88023010;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x88023018
	goto loc_88023018;
loc_88023010:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_88023018:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r25,158
	ctx.r25.s64 = 158;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r23,r10,r8
	ctx.r23.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r24,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// stw r23,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// b 0x88023044
	goto loc_88023044;
loc_88023038:
	// lwz r24,24(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r25,157
	ctx.r25.s64 = 157;
	// lwz r23,28(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
loc_88023044:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8802308c
	if (!ctx.cr6.eq) goto loc_8802308C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r22,255
	ctx.r22.s64 = 16711680;
	// ori r22,r22,8224
	ctx.r22.u64 = ctx.r22.u64 | 8224;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88023074
	if (!ctx.cr6.eq) goto loc_88023074;
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// bl 0x8806c658
	ctx.lr = 0x88023070;
	sub_8806C658(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_88023074:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880230fc
	if (!ctx.cr0.lt) goto loc_880230FC;
	// stw r20,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// b 0x880230fc
	goto loc_880230FC;
loc_8802308C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880230fc
	if (!ctx.cr6.eq) goto loc_880230FC;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880230fc
	if (ctx.cr6.eq) goto loc_880230FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// ble cr6,0x880230bc
	if (!ctx.cr6.gt) goto loc_880230BC;
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880230BC:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,272(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x8806c660
	ctx.lr = 0x880230FC;
	sub_8806C660(ctx, base);
loc_880230FC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88023484
	if (ctx.cr6.eq) goto loc_88023484;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r4,-11968(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -11968);
	// rlwinm r22,r8,8,0,23
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8802312c
	if (ctx.cr6.lt) goto loc_8802312C;
	// stw r18,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r18.u32);
loc_8802312C:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8802318c
	if (ctx.cr6.eq) goto loc_8802318C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// divw r10,r11,r18
	ctx.r10.u64 = uint32_t((ctx.r18.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r11.s32 / ctx.r18.s32 : 0);
	// blt cr6,0x8802315c
	if (ctx.cr6.lt) goto loc_8802315C;
	// divw r10,r11,r14
	ctx.r10.u64 = uint32_t((ctx.r14.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r14.s32 == -1)) ? ctx.r11.s32 / ctx.r14.s32 : 0);
loc_8802315C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x88023168
	if (!ctx.cr6.lt) goto loc_88023168;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_88023168:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8802317c
	if (!ctx.cr6.gt) goto loc_8802317C;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8802317C:
	// li r10,8192
	ctx.r10.s64 = 8192;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// b 0x880231ac
	goto loc_880231AC;
loc_8802318C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x880231a4
	if (!ctx.cr6.lt) goto loc_880231A4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x880231b0
	goto loc_880231B0;
loc_880231A4:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_880231AC:
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_880231B0:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// neg r9,r7
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88023270
	if (ctx.cr6.eq) goto loc_88023270;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x88023230
	if (ctx.cr6.eq) goto loc_88023230;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// divw r7,r8,r18
	ctx.r7.u64 = uint32_t((ctx.r18.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r8.s32 / ctx.r18.s32 : 0);
	// blt cr6,0x8802320c
	if (ctx.cr6.lt) goto loc_8802320C;
	// divw r7,r8,r14
	ctx.r7.u64 = uint32_t((ctx.r14.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r14.s32 == -1)) ? ctx.r8.s32 / ctx.r14.s32 : 0);
loc_8802320C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bge cr6,0x88023218
	if (!ctx.cr6.lt) goto loc_88023218;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_88023218:
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88023270
	if (!ctx.cr6.gt) goto loc_88023270;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x88023270
	goto loc_88023270;
loc_88023230:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divw r7,r6,r21
	ctx.r7.u64 = uint32_t((ctx.r21.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r6.s32 / ctx.r21.s32 : 0);
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// divw r8,r5,r21
	ctx.r8.u64 = uint32_t((ctx.r21.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r5.s32 / ctx.r21.s32 : 0);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_88023270:
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880232fc
	if (ctx.cr6.eq) goto loc_880232FC;
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880232bc
	if (ctx.cr6.eq) goto loc_880232BC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// divw r7,r8,r18
	ctx.r7.u64 = uint32_t((ctx.r18.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r8.s32 / ctx.r18.s32 : 0);
	// blt cr6,0x88023298
	if (ctx.cr6.lt) goto loc_88023298;
	// divw r7,r8,r14
	ctx.r7.u64 = uint32_t((ctx.r14.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r14.s32 == -1)) ? ctx.r8.s32 / ctx.r14.s32 : 0);
loc_88023298:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bge cr6,0x880232a4
	if (!ctx.cr6.lt) goto loc_880232A4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_880232A4:
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x880232fc
	if (!ctx.cr6.gt) goto loc_880232FC;
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// b 0x880232fc
	goto loc_880232FC;
loc_880232BC:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,68(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divw r7,r6,r21
	ctx.r7.u64 = uint32_t((ctx.r21.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r6.s32 / ctx.r21.s32 : 0);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// divw r8,r5,r21
	ctx.r8.u64 = uint32_t((ctx.r21.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r5.s32 / ctx.r21.s32 : 0);
	// stw r30,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_880232FC:
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88023388
	if (ctx.cr6.eq) goto loc_88023388;
	// lwz r6,84(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x88023348
	if (ctx.cr6.eq) goto loc_88023348;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// divw r7,r8,r18
	ctx.r7.u64 = uint32_t((ctx.r18.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r8.s32 / ctx.r18.s32 : 0);
	// blt cr6,0x88023324
	if (ctx.cr6.lt) goto loc_88023324;
	// divw r7,r8,r14
	ctx.r7.u64 = uint32_t((ctx.r14.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r14.s32 == -1)) ? ctx.r8.s32 / ctx.r14.s32 : 0);
loc_88023324:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bge cr6,0x88023330
	if (!ctx.cr6.lt) goto loc_88023330;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_88023330:
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88023388
	if (!ctx.cr6.gt) goto loc_88023388;
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// b 0x88023388
	goto loc_88023388;
loc_88023348:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divw r7,r6,r21
	ctx.r7.u64 = uint32_t((ctx.r21.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r6.s32 / ctx.r21.s32 : 0);
	// stw r3,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// divw r8,r5,r21
	ctx.r8.u64 = uint32_t((ctx.r21.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r5.s32 / ctx.r21.s32 : 0);
	// stw r30,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_88023388:
	// lwz r8,120(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880233ec
	if (ctx.cr6.eq) goto loc_880233EC;
	// lwz r7,124(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x880233d4
	if (ctx.cr6.eq) goto loc_880233D4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// divw r10,r8,r18
	ctx.r10.u64 = uint32_t((ctx.r18.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r8.s32 / ctx.r18.s32 : 0);
	// blt cr6,0x880233b0
	if (ctx.cr6.lt) goto loc_880233B0;
	// divw r10,r8,r14
	ctx.r10.u64 = uint32_t((ctx.r14.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r14.s32 == -1)) ? ctx.r8.s32 / ctx.r14.s32 : 0);
loc_880233B0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x880233bc
	if (!ctx.cr6.lt) goto loc_880233BC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_880233BC:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x880233ec
	if (!ctx.cr6.gt) goto loc_880233EC;
	// stw r8,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// b 0x880233ec
	goto loc_880233EC;
loc_880233D4:
	// lwz r7,148(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r9,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
loc_880233EC:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88023474
	if (!ctx.cr6.eq) goto loc_88023474;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bgt 0x88023474
	if (ctx.cr0.gt) goto loc_88023474;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r20,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bgt 0x88023424
	if (ctx.cr0.gt) goto loc_88023424;
	// stw r20,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
loc_88023424:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bgt 0x88023438
	if (ctx.cr0.gt) goto loc_88023438;
	// stw r20,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r20.u32);
loc_88023438:
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// bgt 0x8802344c
	if (ctx.cr0.gt) goto loc_8802344C;
	// stw r20,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r20.u32);
loc_8802344C:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// bgt 0x88023460
	if (ctx.cr0.gt) goto loc_88023460;
	// stw r20,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r20.u32);
loc_88023460:
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// bgt 0x88023474
	if (ctx.cr0.gt) goto loc_88023474;
	// stw r20,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r20.u32);
loc_88023474:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88023484
	if (!ctx.cr6.eq) goto loc_88023484;
	// stw r20,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
loc_88023484:
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r27,4
	ctx.r27.s64 = 4;
loc_88023494:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88023598
	if (ctx.cr6.eq) goto loc_88023598;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r29,r29,r15
	ctx.r29.u64 = ctx.r29.u64 + ctx.r15.u64;
	// add r28,r28,r16
	ctx.r28.u64 = ctx.r28.u64 + ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880234f4
	if (!ctx.cr6.eq) goto loc_880234F4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x88023504
	if (!ctx.cr0.lt) goto loc_88023504;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// addic. r9,r9,-80
	ctx.xer.ca = ctx.r9.u32 > 79;
	ctx.r9.s64 = ctx.r9.s64 + -80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// ori r8,r8,8224
	ctx.r8.u64 = ctx.r8.u64 | 8224;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bgt 0x88023504
	if (ctx.cr0.gt) goto loc_88023504;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x88023504
	goto loc_88023504;
loc_880234F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r22,r7,8,0,23
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
loc_88023504:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1836
	ctx.r3.s64 = 1836;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8802351c
	if (ctx.cr6.eq) goto loc_8802351C;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8802351C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r7,r11,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88023534
	if (ctx.cr6.lt) goto loc_88023534;
	// li r3,1847
	ctx.r3.s64 = 1847;
	// lis r10,10
	ctx.r10.s64 = 655360;
loc_88023534:
	// mulli r7,r11,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88023548
	if (ctx.cr6.lt) goto loc_88023548;
	// li r3,1858
	ctx.r3.s64 = 1858;
	// lis r10,17
	ctx.r10.s64 = 1114112;
loc_88023548:
	// mulli r11,r11,10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10000));
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8802355c
	if (ctx.cr6.lt) goto loc_8802355C;
	// li r3,1869
	ctx.r3.s64 = 1869;
	// lis r10,19
	ctx.r10.s64 = 1245184;
loc_8802355C:
	// lwz r11,2612(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 2612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8802357c
	if (!ctx.cr6.eq) goto loc_8802357C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8802357c
	if (!ctx.cr6.eq) goto loc_8802357C;
	// li r3,1836
	ctx.r3.s64 = 1836;
	// lis r10,8
	ctx.r10.s64 = 524288;
loc_8802357C:
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// addi r7,r25,1
	ctx.r7.s64 = ctx.r25.s64 + 1;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88022c18
	ctx.lr = 0x88023598;
	sub_88022C18(ctx, base);
loc_88023598:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x88023494
	if (!ctx.cr0.eq) goto loc_88023494;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1836
	ctx.r3.s64 = 1836;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880235c0
	if (ctx.cr6.eq) goto loc_880235C0;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
loc_880235C0:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r8,r11,100
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880235d8
	if (ctx.cr6.lt) goto loc_880235D8;
	// li r3,1847
	ctx.r3.s64 = 1847;
	// lis r10,10
	ctx.r10.s64 = 655360;
loc_880235D8:
	// mulli r8,r11,1000
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880235ec
	if (ctx.cr6.lt) goto loc_880235EC;
	// li r3,1858
	ctx.r3.s64 = 1858;
	// lis r10,17
	ctx.r10.s64 = 1114112;
loc_880235EC:
	// mulli r11,r11,10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10000));
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88023600
	if (ctx.cr6.lt) goto loc_88023600;
	// li r3,1869
	ctx.r3.s64 = 1869;
	// lis r10,19
	ctx.r10.s64 = 1245184;
loc_88023600:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88023634
	if (!ctx.cr6.eq) goto loc_88023634;
	// addi r11,r9,-80
	ctx.r11.s64 = ctx.r9.s64 + -80;
	// lwz r9,2612(r19)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 2612);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addme r6,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bne cr6,0x88023634
	if (!ctx.cr6.eq) goto loc_88023634;
	// li r3,1836
	ctx.r3.s64 = 1836;
	// lis r10,8
	ctx.r10.s64 = 524288;
loc_88023634:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x88022c18
	ctx.lr = 0x8802364C;
	sub_88022C18(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
loc_8802365C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x88022ebc
	if (ctx.cr6.lt) goto loc_88022EBC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88033A30) {
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
	// li r8,14377
	ctx.r8.s64 = 14377;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x8813fdd8
	ctx.lr = 0x88033A58;
	sub_8813FDD8(ctx, base);
	// li r8,14378
	ctx.r8.s64 = 14378;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x8813fdd8
	ctx.lr = 0x88033A74;
	sub_8813FDD8(ctx, base);
	// li r8,14379
	ctx.r8.s64 = 14379;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x8813fdd8
	ctx.lr = 0x88033A90;
	sub_8813FDD8(ctx, base);
	// li r8,14380
	ctx.r8.s64 = 14380;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x8813fdd8
	ctx.lr = 0x88033AAC;
	sub_8813FDD8(ctx, base);
	// li r8,14381
	ctx.r8.s64 = 14381;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,771
	ctx.r3.s64 = 771;
	// bl 0x8813fdd8
	ctx.lr = 0x88033AC8;
	sub_8813FDD8(ctx, base);
	// li r8,14382
	ctx.r8.s64 = 14382;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,771
	ctx.r3.s64 = 771;
	// bl 0x8813fdd8
	ctx.lr = 0x88033AE4;
	sub_8813FDD8(ctx, base);
	// li r8,14383
	ctx.r8.s64 = 14383;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,771
	ctx.r3.s64 = 771;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B00;
	sub_8813FDD8(ctx, base);
	// li r8,14384
	ctx.r8.s64 = 14384;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,771
	ctx.r3.s64 = 771;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B1C;
	sub_8813FDD8(ctx, base);
	// li r8,14385
	ctx.r8.s64 = 14385;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B38;
	sub_8813FDD8(ctx, base);
	// li r8,14386
	ctx.r8.s64 = 14386;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B54;
	sub_8813FDD8(ctx, base);
	// li r8,14387
	ctx.r8.s64 = 14387;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B70;
	sub_8813FDD8(ctx, base);
	// li r8,14388
	ctx.r8.s64 = 14388;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x8813fdd8
	ctx.lr = 0x88033B8C;
	sub_8813FDD8(ctx, base);
	// li r8,14389
	ctx.r8.s64 = 14389;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,773
	ctx.r3.s64 = 773;
	// bl 0x8813fdd8
	ctx.lr = 0x88033BA8;
	sub_8813FDD8(ctx, base);
	// li r8,14390
	ctx.r8.s64 = 14390;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,773
	ctx.r3.s64 = 773;
	// bl 0x8813fdd8
	ctx.lr = 0x88033BC4;
	sub_8813FDD8(ctx, base);
	// li r8,14391
	ctx.r8.s64 = 14391;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,773
	ctx.r3.s64 = 773;
	// bl 0x8813fdd8
	ctx.lr = 0x88033BE0;
	sub_8813FDD8(ctx, base);
	// li r8,14392
	ctx.r8.s64 = 14392;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,773
	ctx.r3.s64 = 773;
	// bl 0x8813fdd8
	ctx.lr = 0x88033BFC;
	sub_8813FDD8(ctx, base);
	// li r8,14409
	ctx.r8.s64 = 14409;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033C18;
	sub_8813FDD8(ctx, base);
	// li r8,14410
	ctx.r8.s64 = 14410;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033C34;
	sub_8813FDD8(ctx, base);
	// li r8,14411
	ctx.r8.s64 = 14411;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033C50;
	sub_8813FDD8(ctx, base);
	// li r8,14412
	ctx.r8.s64 = 14412;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033C6C;
	sub_8813FDD8(ctx, base);
	// li r8,14413
	ctx.r8.s64 = 14413;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033C88;
	sub_8813FDD8(ctx, base);
	// li r8,14414
	ctx.r8.s64 = 14414;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033CA4;
	sub_8813FDD8(ctx, base);
	// li r8,14415
	ctx.r8.s64 = 14415;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033CC0;
	sub_8813FDD8(ctx, base);
	// li r8,14416
	ctx.r8.s64 = 14416;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x88033CDC;
	sub_8813FDD8(ctx, base);
	// li r8,14441
	ctx.r8.s64 = 14441;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,775
	ctx.r3.s64 = 775;
	// bl 0x8813fdd8
	ctx.lr = 0x88033CF8;
	sub_8813FDD8(ctx, base);
	// li r8,14442
	ctx.r8.s64 = 14442;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,775
	ctx.r3.s64 = 775;
	// bl 0x8813fdd8
	ctx.lr = 0x88033D14;
	sub_8813FDD8(ctx, base);
	// li r8,14443
	ctx.r8.s64 = 14443;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,775
	ctx.r3.s64 = 775;
	// bl 0x8813fdd8
	ctx.lr = 0x88033D30;
	sub_8813FDD8(ctx, base);
	// li r8,14444
	ctx.r8.s64 = 14444;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,775
	ctx.r3.s64 = 775;
	// bl 0x8813fdd8
	ctx.lr = 0x88033D4C;
	sub_8813FDD8(ctx, base);
	// li r8,14445
	ctx.r8.s64 = 14445;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,775
	ctx.r3.s64 = 775;
	// bl 0x8813fdd8
	ctx.lr = 0x88033D68;
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

DEFINE_REX_FUNC(sub_8803D1B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8803D1B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,6971
	ctx.r8.s64 = 6971;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D1D8;
	sub_8813FDD8(ctx, base);
	// li r8,6972
	ctx.r8.s64 = 6972;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D1F4;
	sub_8813FDD8(ctx, base);
	// li r8,6973
	ctx.r8.s64 = 6973;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D210;
	sub_8813FDD8(ctx, base);
	// li r8,6974
	ctx.r8.s64 = 6974;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D22C;
	sub_8813FDD8(ctx, base);
	// li r8,6975
	ctx.r8.s64 = 6975;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D248;
	sub_8813FDD8(ctx, base);
	// li r8,6976
	ctx.r8.s64 = 6976;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D264;
	sub_8813FDD8(ctx, base);
	// li r8,6977
	ctx.r8.s64 = 6977;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D280;
	sub_8813FDD8(ctx, base);
	// li r8,6978
	ctx.r8.s64 = 6978;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D29C;
	sub_8813FDD8(ctx, base);
	// li r8,6979
	ctx.r8.s64 = 6979;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D2B8;
	sub_8813FDD8(ctx, base);
	// li r8,6980
	ctx.r8.s64 = 6980;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D2D4;
	sub_8813FDD8(ctx, base);
	// li r8,6981
	ctx.r8.s64 = 6981;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D2F0;
	sub_8813FDD8(ctx, base);
	// li r8,6982
	ctx.r8.s64 = 6982;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D30C;
	sub_8813FDD8(ctx, base);
	// li r8,6983
	ctx.r8.s64 = 6983;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D328;
	sub_8813FDD8(ctx, base);
	// li r8,6984
	ctx.r8.s64 = 6984;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D344;
	sub_8813FDD8(ctx, base);
	// li r8,6985
	ctx.r8.s64 = 6985;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D360;
	sub_8813FDD8(ctx, base);
	// li r8,6986
	ctx.r8.s64 = 6986;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D37C;
	sub_8813FDD8(ctx, base);
	// li r8,6987
	ctx.r8.s64 = 6987;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D398;
	sub_8813FDD8(ctx, base);
	// li r8,6988
	ctx.r8.s64 = 6988;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D3B4;
	sub_8813FDD8(ctx, base);
	// li r8,6989
	ctx.r8.s64 = 6989;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D3D0;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803D3D4:
	// rlwinm r11,r31,3,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFE0;
	// addi r10,r31,6990
	ctx.r10.s64 = ctx.r31.s64 + 6990;
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r4,r31,5,25,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x60;
	// li r3,268
	ctx.r3.s64 = 268;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D3FC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8803d3d4
	if (ctx.cr6.lt) goto loc_8803D3D4;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
loc_8803D418:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r29
	ctx.r10.u64 = uint32_t(ctx.r29.u32 ? ctx.r31.u32 / ctx.r29.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r31,6998
	ctx.r4.s64 = ctx.r31.s64 + 6998;
	// subf r3,r9,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r5,r10,104
	ctx.r5.s64 = ctx.r10.s64 + 104;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r4,r3,5,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFE0;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r3,268
	ctx.r3.s64 = 268;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D458;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8803d418
	if (ctx.cr6.lt) goto loc_8803D418;
	// li r8,7004
	ctx.r8.s64 = 7004;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D480;
	sub_8813FDD8(ctx, base);
	// li r8,7005
	ctx.r8.s64 = 7005;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D49C;
	sub_8813FDD8(ctx, base);
	// li r8,7006
	ctx.r8.s64 = 7006;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D4B8;
	sub_8813FDD8(ctx, base);
	// li r8,7007
	ctx.r8.s64 = 7007;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D4D4;
	sub_8813FDD8(ctx, base);
	// li r8,7008
	ctx.r8.s64 = 7008;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D4F0;
	sub_8813FDD8(ctx, base);
	// li r8,7009
	ctx.r8.s64 = 7009;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D50C;
	sub_8813FDD8(ctx, base);
	// li r8,7010
	ctx.r8.s64 = 7010;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D528;
	sub_8813FDD8(ctx, base);
	// li r8,7011
	ctx.r8.s64 = 7011;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D544;
	sub_8813FDD8(ctx, base);
	// li r8,7012
	ctx.r8.s64 = 7012;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D560;
	sub_8813FDD8(ctx, base);
	// li r8,7013
	ctx.r8.s64 = 7013;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D57C;
	sub_8813FDD8(ctx, base);
	// li r8,7014
	ctx.r8.s64 = 7014;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D598;
	sub_8813FDD8(ctx, base);
	// li r8,7015
	ctx.r8.s64 = 7015;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,269
	ctx.r3.s64 = 269;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D5B4;
	sub_8813FDD8(ctx, base);
	// li r8,7016
	ctx.r8.s64 = 7016;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D5D0;
	sub_8813FDD8(ctx, base);
	// li r8,7017
	ctx.r8.s64 = 7017;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D5EC;
	sub_8813FDD8(ctx, base);
	// li r8,7018
	ctx.r8.s64 = 7018;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D608;
	sub_8813FDD8(ctx, base);
	// li r8,7019
	ctx.r8.s64 = 7019;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,538
	ctx.r3.s64 = 538;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D624;
	sub_8813FDD8(ctx, base);
	// li r8,7020
	ctx.r8.s64 = 7020;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,539
	ctx.r3.s64 = 539;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D640;
	sub_8813FDD8(ctx, base);
	// li r8,7021
	ctx.r8.s64 = 7021;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,539
	ctx.r3.s64 = 539;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D65C;
	sub_8813FDD8(ctx, base);
	// li r8,7022
	ctx.r8.s64 = 7022;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,539
	ctx.r3.s64 = 539;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D678;
	sub_8813FDD8(ctx, base);
	// li r8,7023
	ctx.r8.s64 = 7023;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,539
	ctx.r3.s64 = 539;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D694;
	sub_8813FDD8(ctx, base);
	// li r8,7024
	ctx.r8.s64 = 7024;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D6B0;
	sub_8813FDD8(ctx, base);
	// li r8,7025
	ctx.r8.s64 = 7025;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D6CC;
	sub_8813FDD8(ctx, base);
	// li r8,7026
	ctx.r8.s64 = 7026;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D6E8;
	sub_8813FDD8(ctx, base);
	// li r8,7027
	ctx.r8.s64 = 7027;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D704;
	sub_8813FDD8(ctx, base);
	// li r8,7028
	ctx.r8.s64 = 7028;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D720;
	sub_8813FDD8(ctx, base);
	// li r8,7029
	ctx.r8.s64 = 7029;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D73C;
	sub_8813FDD8(ctx, base);
	// li r8,7030
	ctx.r8.s64 = 7030;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,541
	ctx.r3.s64 = 541;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D758;
	sub_8813FDD8(ctx, base);
	// li r8,7031
	ctx.r8.s64 = 7031;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,541
	ctx.r3.s64 = 541;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D774;
	sub_8813FDD8(ctx, base);
	// li r8,7032
	ctx.r8.s64 = 7032;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D790;
	sub_8813FDD8(ctx, base);
	// li r8,7033
	ctx.r8.s64 = 7033;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D7AC;
	sub_8813FDD8(ctx, base);
	// li r8,7034
	ctx.r8.s64 = 7034;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D7C8;
	sub_8813FDD8(ctx, base);
	// li r8,7035
	ctx.r8.s64 = 7035;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D7E4;
	sub_8813FDD8(ctx, base);
	// li r8,7036
	ctx.r8.s64 = 7036;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D800;
	sub_8813FDD8(ctx, base);
	// li r8,7037
	ctx.r8.s64 = 7037;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D81C;
	sub_8813FDD8(ctx, base);
	// li r8,7038
	ctx.r8.s64 = 7038;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D838;
	sub_8813FDD8(ctx, base);
	// li r8,7039
	ctx.r8.s64 = 7039;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D854;
	sub_8813FDD8(ctx, base);
	// li r8,7040
	ctx.r8.s64 = 7040;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,542
	ctx.r3.s64 = 542;
	// bl 0x8813fdd8
	ctx.lr = 0x8803D870;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88042B60) {
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
	// li r8,8414
	ctx.r8.s64 = 8414;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042B88;
	sub_8813FDD8(ctx, base);
	// li r8,8415
	ctx.r8.s64 = 8415;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042BA4;
	sub_8813FDD8(ctx, base);
	// li r8,8416
	ctx.r8.s64 = 8416;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042BC0;
	sub_8813FDD8(ctx, base);
	// li r8,8417
	ctx.r8.s64 = 8417;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042BDC;
	sub_8813FDD8(ctx, base);
	// li r8,8418
	ctx.r8.s64 = 8418;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042BF8;
	sub_8813FDD8(ctx, base);
	// li r8,8419
	ctx.r8.s64 = 8419;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042C14;
	sub_8813FDD8(ctx, base);
	// li r8,8420
	ctx.r8.s64 = 8420;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042C30;
	sub_8813FDD8(ctx, base);
	// li r8,8421
	ctx.r8.s64 = 8421;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042C4C;
	sub_8813FDD8(ctx, base);
	// li r8,8422
	ctx.r8.s64 = 8422;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042C68;
	sub_8813FDD8(ctx, base);
	// li r8,8423
	ctx.r8.s64 = 8423;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042C84;
	sub_8813FDD8(ctx, base);
	// li r8,8424
	ctx.r8.s64 = 8424;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042CA0;
	sub_8813FDD8(ctx, base);
	// li r8,8425
	ctx.r8.s64 = 8425;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042CBC;
	sub_8813FDD8(ctx, base);
	// li r8,8426
	ctx.r8.s64 = 8426;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042CD8;
	sub_8813FDD8(ctx, base);
	// li r8,8427
	ctx.r8.s64 = 8427;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042CF4;
	sub_8813FDD8(ctx, base);
	// li r8,8428
	ctx.r8.s64 = 8428;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D10;
	sub_8813FDD8(ctx, base);
	// li r8,8429
	ctx.r8.s64 = 8429;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D2C;
	sub_8813FDD8(ctx, base);
	// li r8,8430
	ctx.r8.s64 = 8430;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D48;
	sub_8813FDD8(ctx, base);
	// li r8,8431
	ctx.r8.s64 = 8431;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D64;
	sub_8813FDD8(ctx, base);
	// li r8,8432
	ctx.r8.s64 = 8432;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D80;
	sub_8813FDD8(ctx, base);
	// li r8,8433
	ctx.r8.s64 = 8433;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042D9C;
	sub_8813FDD8(ctx, base);
	// li r8,8434
	ctx.r8.s64 = 8434;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042DB8;
	sub_8813FDD8(ctx, base);
	// li r8,8435
	ctx.r8.s64 = 8435;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042DD4;
	sub_8813FDD8(ctx, base);
	// li r8,8436
	ctx.r8.s64 = 8436;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042DF0;
	sub_8813FDD8(ctx, base);
	// li r8,8437
	ctx.r8.s64 = 8437;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E0C;
	sub_8813FDD8(ctx, base);
	// li r8,8438
	ctx.r8.s64 = 8438;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E28;
	sub_8813FDD8(ctx, base);
	// li r8,8439
	ctx.r8.s64 = 8439;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E44;
	sub_8813FDD8(ctx, base);
	// li r8,8440
	ctx.r8.s64 = 8440;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E60;
	sub_8813FDD8(ctx, base);
	// li r8,8441
	ctx.r8.s64 = 8441;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E7C;
	sub_8813FDD8(ctx, base);
	// li r8,8442
	ctx.r8.s64 = 8442;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042E98;
	sub_8813FDD8(ctx, base);
	// li r8,8443
	ctx.r8.s64 = 8443;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042EB4;
	sub_8813FDD8(ctx, base);
	// li r8,8444
	ctx.r8.s64 = 8444;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042ED0;
	sub_8813FDD8(ctx, base);
	// li r8,8445
	ctx.r8.s64 = 8445;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042EEC;
	sub_8813FDD8(ctx, base);
	// li r8,8446
	ctx.r8.s64 = 8446;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F08;
	sub_8813FDD8(ctx, base);
	// li r8,8447
	ctx.r8.s64 = 8447;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F24;
	sub_8813FDD8(ctx, base);
	// li r8,8448
	ctx.r8.s64 = 8448;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F40;
	sub_8813FDD8(ctx, base);
	// li r8,8449
	ctx.r8.s64 = 8449;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F5C;
	sub_8813FDD8(ctx, base);
	// li r8,8450
	ctx.r8.s64 = 8450;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F78;
	sub_8813FDD8(ctx, base);
	// li r8,8451
	ctx.r8.s64 = 8451;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042F94;
	sub_8813FDD8(ctx, base);
	// li r8,8452
	ctx.r8.s64 = 8452;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042FB0;
	sub_8813FDD8(ctx, base);
	// li r8,8453
	ctx.r8.s64 = 8453;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042FCC;
	sub_8813FDD8(ctx, base);
	// li r8,8454
	ctx.r8.s64 = 8454;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88042FE8;
	sub_8813FDD8(ctx, base);
	// li r8,8455
	ctx.r8.s64 = 8455;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043004;
	sub_8813FDD8(ctx, base);
	// li r8,8456
	ctx.r8.s64 = 8456;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043020;
	sub_8813FDD8(ctx, base);
	// li r8,8457
	ctx.r8.s64 = 8457;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x8804303C;
	sub_8813FDD8(ctx, base);
	// li r8,8458
	ctx.r8.s64 = 8458;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043058;
	sub_8813FDD8(ctx, base);
	// li r8,8459
	ctx.r8.s64 = 8459;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043074;
	sub_8813FDD8(ctx, base);
	// li r8,8460
	ctx.r8.s64 = 8460;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043090;
	sub_8813FDD8(ctx, base);
	// li r8,8461
	ctx.r8.s64 = 8461;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880430AC;
	sub_8813FDD8(ctx, base);
	// li r8,8462
	ctx.r8.s64 = 8462;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880430C8;
	sub_8813FDD8(ctx, base);
	// li r8,8463
	ctx.r8.s64 = 8463;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880430E4;
	sub_8813FDD8(ctx, base);
	// li r8,8464
	ctx.r8.s64 = 8464;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043100;
	sub_8813FDD8(ctx, base);
	// li r8,8465
	ctx.r8.s64 = 8465;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x8804311C;
	sub_8813FDD8(ctx, base);
	// li r8,8466
	ctx.r8.s64 = 8466;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043138;
	sub_8813FDD8(ctx, base);
	// li r8,8467
	ctx.r8.s64 = 8467;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043154;
	sub_8813FDD8(ctx, base);
	// li r8,8468
	ctx.r8.s64 = 8468;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043170;
	sub_8813FDD8(ctx, base);
	// li r8,8469
	ctx.r8.s64 = 8469;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x8804318C;
	sub_8813FDD8(ctx, base);
	// li r8,8470
	ctx.r8.s64 = 8470;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880431A8;
	sub_8813FDD8(ctx, base);
	// li r8,8471
	ctx.r8.s64 = 8471;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880431C4;
	sub_8813FDD8(ctx, base);
	// li r8,8472
	ctx.r8.s64 = 8472;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880431E0;
	sub_8813FDD8(ctx, base);
	// li r8,8473
	ctx.r8.s64 = 8473;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x880431FC;
	sub_8813FDD8(ctx, base);
	// li r8,8474
	ctx.r8.s64 = 8474;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043218;
	sub_8813FDD8(ctx, base);
	// li r8,8475
	ctx.r8.s64 = 8475;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043234;
	sub_8813FDD8(ctx, base);
	// li r8,8476
	ctx.r8.s64 = 8476;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043250;
	sub_8813FDD8(ctx, base);
	// li r8,8477
	ctx.r8.s64 = 8477;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x8804326C;
	sub_8813FDD8(ctx, base);
	// li r8,8478
	ctx.r8.s64 = 8478;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// bl 0x8813fdd8
	ctx.lr = 0x88043288;
	sub_8813FDD8(ctx, base);
	// li r8,8479
	ctx.r8.s64 = 8479;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880432A4;
	sub_8813FDD8(ctx, base);
	// li r8,8480
	ctx.r8.s64 = 8480;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880432C0;
	sub_8813FDD8(ctx, base);
	// li r8,8481
	ctx.r8.s64 = 8481;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880432DC;
	sub_8813FDD8(ctx, base);
	// li r8,8482
	ctx.r8.s64 = 8482;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880432F8;
	sub_8813FDD8(ctx, base);
	// li r8,8483
	ctx.r8.s64 = 8483;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043314;
	sub_8813FDD8(ctx, base);
	// li r8,8484
	ctx.r8.s64 = 8484;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043330;
	sub_8813FDD8(ctx, base);
	// li r8,8485
	ctx.r8.s64 = 8485;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804334C;
	sub_8813FDD8(ctx, base);
	// li r8,8486
	ctx.r8.s64 = 8486;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043368;
	sub_8813FDD8(ctx, base);
	// li r8,8487
	ctx.r8.s64 = 8487;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043384;
	sub_8813FDD8(ctx, base);
	// li r8,8488
	ctx.r8.s64 = 8488;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880433A0;
	sub_8813FDD8(ctx, base);
	// li r8,8489
	ctx.r8.s64 = 8489;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880433BC;
	sub_8813FDD8(ctx, base);
	// li r8,8490
	ctx.r8.s64 = 8490;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880433D8;
	sub_8813FDD8(ctx, base);
	// li r8,8491
	ctx.r8.s64 = 8491;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880433F4;
	sub_8813FDD8(ctx, base);
	// li r8,8492
	ctx.r8.s64 = 8492;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043410;
	sub_8813FDD8(ctx, base);
	// li r8,8493
	ctx.r8.s64 = 8493;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804342C;
	sub_8813FDD8(ctx, base);
	// li r8,8494
	ctx.r8.s64 = 8494;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043448;
	sub_8813FDD8(ctx, base);
	// li r8,8495
	ctx.r8.s64 = 8495;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043464;
	sub_8813FDD8(ctx, base);
	// li r8,8496
	ctx.r8.s64 = 8496;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043480;
	sub_8813FDD8(ctx, base);
	// li r8,8497
	ctx.r8.s64 = 8497;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804349C;
	sub_8813FDD8(ctx, base);
	// li r8,8498
	ctx.r8.s64 = 8498;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880434B8;
	sub_8813FDD8(ctx, base);
	// li r8,8499
	ctx.r8.s64 = 8499;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880434D4;
	sub_8813FDD8(ctx, base);
	// li r8,8500
	ctx.r8.s64 = 8500;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880434F0;
	sub_8813FDD8(ctx, base);
	// li r8,8501
	ctx.r8.s64 = 8501;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804350C;
	sub_8813FDD8(ctx, base);
	// li r8,8502
	ctx.r8.s64 = 8502;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043528;
	sub_8813FDD8(ctx, base);
	// li r8,8503
	ctx.r8.s64 = 8503;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043544;
	sub_8813FDD8(ctx, base);
	// li r8,8504
	ctx.r8.s64 = 8504;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043560;
	sub_8813FDD8(ctx, base);
	// li r8,8505
	ctx.r8.s64 = 8505;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804357C;
	sub_8813FDD8(ctx, base);
	// li r8,8506
	ctx.r8.s64 = 8506;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043598;
	sub_8813FDD8(ctx, base);
	// li r8,8507
	ctx.r8.s64 = 8507;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880435B4;
	sub_8813FDD8(ctx, base);
	// li r8,8508
	ctx.r8.s64 = 8508;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880435D0;
	sub_8813FDD8(ctx, base);
	// li r8,8509
	ctx.r8.s64 = 8509;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880435EC;
	sub_8813FDD8(ctx, base);
	// li r8,8510
	ctx.r8.s64 = 8510;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043608;
	sub_8813FDD8(ctx, base);
	// li r8,8511
	ctx.r8.s64 = 8511;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043624;
	sub_8813FDD8(ctx, base);
	// li r8,8512
	ctx.r8.s64 = 8512;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043640;
	sub_8813FDD8(ctx, base);
	// li r8,8513
	ctx.r8.s64 = 8513;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804365C;
	sub_8813FDD8(ctx, base);
	// li r8,8514
	ctx.r8.s64 = 8514;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043678;
	sub_8813FDD8(ctx, base);
	// li r8,8515
	ctx.r8.s64 = 8515;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043694;
	sub_8813FDD8(ctx, base);
	// li r8,8516
	ctx.r8.s64 = 8516;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880436B0;
	sub_8813FDD8(ctx, base);
	// li r8,8517
	ctx.r8.s64 = 8517;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880436CC;
	sub_8813FDD8(ctx, base);
	// li r8,8518
	ctx.r8.s64 = 8518;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880436E8;
	sub_8813FDD8(ctx, base);
	// li r8,8519
	ctx.r8.s64 = 8519;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043704;
	sub_8813FDD8(ctx, base);
	// li r8,8520
	ctx.r8.s64 = 8520;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043720;
	sub_8813FDD8(ctx, base);
	// li r8,8521
	ctx.r8.s64 = 8521;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804373C;
	sub_8813FDD8(ctx, base);
	// li r8,8522
	ctx.r8.s64 = 8522;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043758;
	sub_8813FDD8(ctx, base);
	// li r8,8523
	ctx.r8.s64 = 8523;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043774;
	sub_8813FDD8(ctx, base);
	// li r8,8524
	ctx.r8.s64 = 8524;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043790;
	sub_8813FDD8(ctx, base);
	// li r8,8525
	ctx.r8.s64 = 8525;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880437AC;
	sub_8813FDD8(ctx, base);
	// li r8,8526
	ctx.r8.s64 = 8526;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880437C8;
	sub_8813FDD8(ctx, base);
	// li r8,8527
	ctx.r8.s64 = 8527;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880437E4;
	sub_8813FDD8(ctx, base);
	// li r8,8528
	ctx.r8.s64 = 8528;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043800;
	sub_8813FDD8(ctx, base);
	// li r8,8529
	ctx.r8.s64 = 8529;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804381C;
	sub_8813FDD8(ctx, base);
	// li r8,8530
	ctx.r8.s64 = 8530;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043838;
	sub_8813FDD8(ctx, base);
	// li r8,8531
	ctx.r8.s64 = 8531;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043854;
	sub_8813FDD8(ctx, base);
	// li r8,8532
	ctx.r8.s64 = 8532;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043870;
	sub_8813FDD8(ctx, base);
	// li r8,8533
	ctx.r8.s64 = 8533;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804388C;
	sub_8813FDD8(ctx, base);
	// li r8,8534
	ctx.r8.s64 = 8534;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880438A8;
	sub_8813FDD8(ctx, base);
	// li r8,8535
	ctx.r8.s64 = 8535;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880438C4;
	sub_8813FDD8(ctx, base);
	// li r8,8536
	ctx.r8.s64 = 8536;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880438E0;
	sub_8813FDD8(ctx, base);
	// li r8,8537
	ctx.r8.s64 = 8537;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880438FC;
	sub_8813FDD8(ctx, base);
	// li r8,8538
	ctx.r8.s64 = 8538;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043918;
	sub_8813FDD8(ctx, base);
	// li r8,8539
	ctx.r8.s64 = 8539;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043934;
	sub_8813FDD8(ctx, base);
	// li r8,8540
	ctx.r8.s64 = 8540;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043950;
	sub_8813FDD8(ctx, base);
	// li r8,8541
	ctx.r8.s64 = 8541;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x8804396C;
	sub_8813FDD8(ctx, base);
	// li r8,8542
	ctx.r8.s64 = 8542;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x88043988;
	sub_8813FDD8(ctx, base);
	// li r8,8543
	ctx.r8.s64 = 8543;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,309
	ctx.r3.s64 = 309;
	// bl 0x8813fdd8
	ctx.lr = 0x880439A4;
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

DEFINE_REX_FUNC(sub_88056F48) {
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
	// li r8,13266
	ctx.r8.s64 = 13266;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056F70;
	sub_8813FDD8(ctx, base);
	// li r8,13267
	ctx.r8.s64 = 13267;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056F8C;
	sub_8813FDD8(ctx, base);
	// li r8,13312
	ctx.r8.s64 = 13312;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056FA8;
	sub_8813FDD8(ctx, base);
	// li r8,13313
	ctx.r8.s64 = 13313;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056FC4;
	sub_8813FDD8(ctx, base);
	// li r8,13314
	ctx.r8.s64 = 13314;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056FE0;
	sub_8813FDD8(ctx, base);
	// li r8,13953
	ctx.r8.s64 = 13953;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88056FFC;
	sub_8813FDD8(ctx, base);
	// li r8,13955
	ctx.r8.s64 = 13955;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x8813fdd8
	ctx.lr = 0x88057018;
	sub_8813FDD8(ctx, base);
	// li r8,13272
	ctx.r8.s64 = 13272;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x88057034;
	sub_8813FDD8(ctx, base);
	// li r8,13273
	ctx.r8.s64 = 13273;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x88057050;
	sub_8813FDD8(ctx, base);
	// li r8,13318
	ctx.r8.s64 = 13318;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x8805706C;
	sub_8813FDD8(ctx, base);
	// li r8,13319
	ctx.r8.s64 = 13319;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x88057088;
	sub_8813FDD8(ctx, base);
	// li r8,13320
	ctx.r8.s64 = 13320;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x880570A4;
	sub_8813FDD8(ctx, base);
	// li r8,13321
	ctx.r8.s64 = 13321;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x880570C0;
	sub_8813FDD8(ctx, base);
	// li r8,13957
	ctx.r8.s64 = 13957;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x880570DC;
	sub_8813FDD8(ctx, base);
	// li r8,13958
	ctx.r8.s64 = 13958;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x880570F8;
	sub_8813FDD8(ctx, base);
	// li r8,13959
	ctx.r8.s64 = 13959;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x88057114;
	sub_8813FDD8(ctx, base);
	// li r8,13960
	ctx.r8.s64 = 13960;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x88057130;
	sub_8813FDD8(ctx, base);
	// li r8,13961
	ctx.r8.s64 = 13961;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,410
	ctx.r3.s64 = 410;
	// bl 0x8813fdd8
	ctx.lr = 0x8805714C;
	sub_8813FDD8(ctx, base);
	// li r8,13274
	ctx.r8.s64 = 13274;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x88057168;
	sub_8813FDD8(ctx, base);
	// li r8,13275
	ctx.r8.s64 = 13275;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x88057184;
	sub_8813FDD8(ctx, base);
	// li r8,13322
	ctx.r8.s64 = 13322;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x880571A0;
	sub_8813FDD8(ctx, base);
	// li r8,13323
	ctx.r8.s64 = 13323;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x880571BC;
	sub_8813FDD8(ctx, base);
	// li r8,13966
	ctx.r8.s64 = 13966;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x880571D8;
	sub_8813FDD8(ctx, base);
	// li r8,13962
	ctx.r8.s64 = 13962;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x880571F4;
	sub_8813FDD8(ctx, base);
	// li r8,13963
	ctx.r8.s64 = 13963;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x88057210;
	sub_8813FDD8(ctx, base);
	// li r8,13964
	ctx.r8.s64 = 13964;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x8805722C;
	sub_8813FDD8(ctx, base);
	// li r8,13965
	ctx.r8.s64 = 13965;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,411
	ctx.r3.s64 = 411;
	// bl 0x8813fdd8
	ctx.lr = 0x88057248;
	sub_8813FDD8(ctx, base);
	// li r8,13670
	ctx.r8.s64 = 13670;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,482
	ctx.r3.s64 = 482;
	// bl 0x8813fdd8
	ctx.lr = 0x88057264;
	sub_8813FDD8(ctx, base);
	// li r8,13701
	ctx.r8.s64 = 13701;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,482
	ctx.r3.s64 = 482;
	// bl 0x8813fdd8
	ctx.lr = 0x88057280;
	sub_8813FDD8(ctx, base);
	// li r8,13949
	ctx.r8.s64 = 13949;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,482
	ctx.r3.s64 = 482;
	// bl 0x8813fdd8
	ctx.lr = 0x8805729C;
	sub_8813FDD8(ctx, base);
	// li r8,13950
	ctx.r8.s64 = 13950;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,482
	ctx.r3.s64 = 482;
	// bl 0x8813fdd8
	ctx.lr = 0x880572B8;
	sub_8813FDD8(ctx, base);
	// li r8,13860
	ctx.r8.s64 = 13860;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x880572D4;
	sub_8813FDD8(ctx, base);
	// li r8,13861
	ctx.r8.s64 = 13861;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x880572F0;
	sub_8813FDD8(ctx, base);
	// li r8,14052
	ctx.r8.s64 = 14052;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x8805730C;
	sub_8813FDD8(ctx, base);
	// li r8,14053
	ctx.r8.s64 = 14053;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x88057328;
	sub_8813FDD8(ctx, base);
	// li r8,14045
	ctx.r8.s64 = 14045;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x88057344;
	sub_8813FDD8(ctx, base);
	// li r8,14046
	ctx.r8.s64 = 14046;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,515
	ctx.r3.s64 = 515;
	// bl 0x8813fdd8
	ctx.lr = 0x88057360;
	sub_8813FDD8(ctx, base);
	// li r8,13869
	ctx.r8.s64 = 13869;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x8805737C;
	sub_8813FDD8(ctx, base);
	// li r8,13870
	ctx.r8.s64 = 13870;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x88057398;
	sub_8813FDD8(ctx, base);
	// li r8,13871
	ctx.r8.s64 = 13871;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x880573B4;
	sub_8813FDD8(ctx, base);
	// li r8,13872
	ctx.r8.s64 = 13872;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x880573D0;
	sub_8813FDD8(ctx, base);
	// li r8,14047
	ctx.r8.s64 = 14047;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x880573EC;
	sub_8813FDD8(ctx, base);
	// li r8,14048
	ctx.r8.s64 = 14048;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,518
	ctx.r3.s64 = 518;
	// bl 0x8813fdd8
	ctx.lr = 0x88057408;
	sub_8813FDD8(ctx, base);
	// li r8,13873
	ctx.r8.s64 = 13873;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x88057424;
	sub_8813FDD8(ctx, base);
	// li r8,13874
	ctx.r8.s64 = 13874;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x88057440;
	sub_8813FDD8(ctx, base);
	// li r8,13875
	ctx.r8.s64 = 13875;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x8805745C;
	sub_8813FDD8(ctx, base);
	// li r8,13876
	ctx.r8.s64 = 13876;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x88057478;
	sub_8813FDD8(ctx, base);
	// li r8,14065
	ctx.r8.s64 = 14065;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x88057494;
	sub_8813FDD8(ctx, base);
	// li r8,14066
	ctx.r8.s64 = 14066;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x880574B0;
	sub_8813FDD8(ctx, base);
	// li r8,14057
	ctx.r8.s64 = 14057;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x880574CC;
	sub_8813FDD8(ctx, base);
	// li r8,14058
	ctx.r8.s64 = 14058;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,519
	ctx.r3.s64 = 519;
	// bl 0x8813fdd8
	ctx.lr = 0x880574E8;
	sub_8813FDD8(ctx, base);
	// li r8,13885
	ctx.r8.s64 = 13885;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x88057504;
	sub_8813FDD8(ctx, base);
	// li r8,13886
	ctx.r8.s64 = 13886;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x88057520;
	sub_8813FDD8(ctx, base);
	// li r8,14067
	ctx.r8.s64 = 14067;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x8805753C;
	sub_8813FDD8(ctx, base);
	// li r8,14068
	ctx.r8.s64 = 14068;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x88057558;
	sub_8813FDD8(ctx, base);
	// li r8,14069
	ctx.r8.s64 = 14069;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x88057574;
	sub_8813FDD8(ctx, base);
	// li r8,14070
	ctx.r8.s64 = 14070;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x8813fdd8
	ctx.lr = 0x88057590;
	sub_8813FDD8(ctx, base);
	// li r8,13887
	ctx.r8.s64 = 13887;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x880575AC;
	sub_8813FDD8(ctx, base);
	// li r8,13888
	ctx.r8.s64 = 13888;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x880575C8;
	sub_8813FDD8(ctx, base);
	// li r8,14071
	ctx.r8.s64 = 14071;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x880575E4;
	sub_8813FDD8(ctx, base);
	// li r8,14072
	ctx.r8.s64 = 14072;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x88057600;
	sub_8813FDD8(ctx, base);
	// li r8,14073
	ctx.r8.s64 = 14073;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x8805761C;
	sub_8813FDD8(ctx, base);
	// li r8,14074
	ctx.r8.s64 = 14074;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,525
	ctx.r3.s64 = 525;
	// bl 0x8813fdd8
	ctx.lr = 0x88057638;
	sub_8813FDD8(ctx, base);
	// li r8,13889
	ctx.r8.s64 = 13889;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x88057654;
	sub_8813FDD8(ctx, base);
	// li r8,13890
	ctx.r8.s64 = 13890;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x88057670;
	sub_8813FDD8(ctx, base);
	// li r8,14075
	ctx.r8.s64 = 14075;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x8805768C;
	sub_8813FDD8(ctx, base);
	// li r8,14076
	ctx.r8.s64 = 14076;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x880576A8;
	sub_8813FDD8(ctx, base);
	// li r8,14077
	ctx.r8.s64 = 14077;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x880576C4;
	sub_8813FDD8(ctx, base);
	// li r8,14078
	ctx.r8.s64 = 14078;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,526
	ctx.r3.s64 = 526;
	// bl 0x8813fdd8
	ctx.lr = 0x880576E0;
	sub_8813FDD8(ctx, base);
	// li r8,13891
	ctx.r8.s64 = 13891;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x880576FC;
	sub_8813FDD8(ctx, base);
	// li r8,14083
	ctx.r8.s64 = 14083;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x88057718;
	sub_8813FDD8(ctx, base);
	// li r8,14084
	ctx.r8.s64 = 14084;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x88057734;
	sub_8813FDD8(ctx, base);
	// li r8,14079
	ctx.r8.s64 = 14079;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x88057750;
	sub_8813FDD8(ctx, base);
	// li r8,14080
	ctx.r8.s64 = 14080;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x8805776C;
	sub_8813FDD8(ctx, base);
	// li r8,14081
	ctx.r8.s64 = 14081;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x88057788;
	sub_8813FDD8(ctx, base);
	// li r8,14082
	ctx.r8.s64 = 14082;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,527
	ctx.r3.s64 = 527;
	// bl 0x8813fdd8
	ctx.lr = 0x880577A4;
	sub_8813FDD8(ctx, base);
	// li r8,13324
	ctx.r8.s64 = 13324;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x880577C0;
	sub_8813FDD8(ctx, base);
	// li r8,13325
	ctx.r8.s64 = 13325;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x880577DC;
	sub_8813FDD8(ctx, base);
	// li r8,13326
	ctx.r8.s64 = 13326;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x880577F8;
	sub_8813FDD8(ctx, base);
	// li r8,13355
	ctx.r8.s64 = 13355;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x88057814;
	sub_8813FDD8(ctx, base);
	// li r8,13356
	ctx.r8.s64 = 13356;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x88057830;
	sub_8813FDD8(ctx, base);
	// li r8,13357
	ctx.r8.s64 = 13357;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x8805784C;
	sub_8813FDD8(ctx, base);
	// li r8,13967
	ctx.r8.s64 = 13967;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x88057868;
	sub_8813FDD8(ctx, base);
	// li r8,13969
	ctx.r8.s64 = 13969;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x88057884;
	sub_8813FDD8(ctx, base);
	// li r8,13973
	ctx.r8.s64 = 13973;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,412
	ctx.r3.s64 = 412;
	// bl 0x8813fdd8
	ctx.lr = 0x880578A0;
	sub_8813FDD8(ctx, base);
	// li r8,13098
	ctx.r8.s64 = 13098;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x880578BC;
	sub_8813FDD8(ctx, base);
	// li r8,13099
	ctx.r8.s64 = 13099;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x880578D8;
	sub_8813FDD8(ctx, base);
	// li r8,13163
	ctx.r8.s64 = 13163;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x880578F4;
	sub_8813FDD8(ctx, base);
	// li r8,13164
	ctx.r8.s64 = 13164;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x88057910;
	sub_8813FDD8(ctx, base);
	// li r8,13937
	ctx.r8.s64 = 13937;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x8805792C;
	sub_8813FDD8(ctx, base);
	// li r8,13938
	ctx.r8.s64 = 13938;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,387
	ctx.r3.s64 = 387;
	// bl 0x8813fdd8
	ctx.lr = 0x88057948;
	sub_8813FDD8(ctx, base);
	// li r8,13508
	ctx.r8.s64 = 13508;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x88057964;
	sub_8813FDD8(ctx, base);
	// li r8,13509
	ctx.r8.s64 = 13509;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x88057980;
	sub_8813FDD8(ctx, base);
	// li r8,13510
	ctx.r8.s64 = 13510;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x8805799C;
	sub_8813FDD8(ctx, base);
	// li r8,13511
	ctx.r8.s64 = 13511;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x880579B8;
	sub_8813FDD8(ctx, base);
	// li r8,13512
	ctx.r8.s64 = 13512;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x880579D4;
	sub_8813FDD8(ctx, base);
	// li r8,13974
	ctx.r8.s64 = 13974;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,447
	ctx.r3.s64 = 447;
	// bl 0x8813fdd8
	ctx.lr = 0x880579F0;
	sub_8813FDD8(ctx, base);
	// li r8,13220
	ctx.r8.s64 = 13220;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A0C;
	sub_8813FDD8(ctx, base);
	// li r8,13221
	ctx.r8.s64 = 13221;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A28;
	sub_8813FDD8(ctx, base);
	// li r8,13222
	ctx.r8.s64 = 13222;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A44;
	sub_8813FDD8(ctx, base);
	// li r8,13223
	ctx.r8.s64 = 13223;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A60;
	sub_8813FDD8(ctx, base);
	// li r8,13224
	ctx.r8.s64 = 13224;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A7C;
	sub_8813FDD8(ctx, base);
	// li r8,13225
	ctx.r8.s64 = 13225;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057A98;
	sub_8813FDD8(ctx, base);
	// li r8,13226
	ctx.r8.s64 = 13226;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057AB4;
	sub_8813FDD8(ctx, base);
	// li r8,13227
	ctx.r8.s64 = 13227;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057AD0;
	sub_8813FDD8(ctx, base);
	// li r8,13941
	ctx.r8.s64 = 13941;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057AEC;
	sub_8813FDD8(ctx, base);
	// li r8,13943
	ctx.r8.s64 = 13943;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B08;
	sub_8813FDD8(ctx, base);
	// li r8,13942
	ctx.r8.s64 = 13942;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B24;
	sub_8813FDD8(ctx, base);
	// li r8,13944
	ctx.r8.s64 = 13944;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B40;
	sub_8813FDD8(ctx, base);
	// li r8,13945
	ctx.r8.s64 = 13945;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B5C;
	sub_8813FDD8(ctx, base);
	// li r8,13248
	ctx.r8.s64 = 13248;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B78;
	sub_8813FDD8(ctx, base);
	// li r8,13249
	ctx.r8.s64 = 13249;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057B94;
	sub_8813FDD8(ctx, base);
	// li r8,13250
	ctx.r8.s64 = 13250;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057BB0;
	sub_8813FDD8(ctx, base);
	// li r8,13294
	ctx.r8.s64 = 13294;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057BCC;
	sub_8813FDD8(ctx, base);
	// li r8,13295
	ctx.r8.s64 = 13295;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057BE8;
	sub_8813FDD8(ctx, base);
	// li r8,13296
	ctx.r8.s64 = 13296;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C04;
	sub_8813FDD8(ctx, base);
	// li r8,13297
	ctx.r8.s64 = 13297;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C20;
	sub_8813FDD8(ctx, base);
	// li r8,13946
	ctx.r8.s64 = 13946;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C3C;
	sub_8813FDD8(ctx, base);
	// li r8,13947
	ctx.r8.s64 = 13947;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,406
	ctx.r3.s64 = 406;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C58;
	sub_8813FDD8(ctx, base);
	// li r8,13948
	ctx.r8.s64 = 13948;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,402
	ctx.r3.s64 = 402;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C74;
	sub_8813FDD8(ctx, base);
	// li r8,13251
	ctx.r8.s64 = 13251;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,403
	ctx.r3.s64 = 403;
	// bl 0x8813fdd8
	ctx.lr = 0x88057C90;
	sub_8813FDD8(ctx, base);
	// li r8,13252
	ctx.r8.s64 = 13252;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,403
	ctx.r3.s64 = 403;
	// bl 0x8813fdd8
	ctx.lr = 0x88057CAC;
	sub_8813FDD8(ctx, base);
	// li r8,13951
	ctx.r8.s64 = 13951;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,403
	ctx.r3.s64 = 403;
	// bl 0x8813fdd8
	ctx.lr = 0x88057CC8;
	sub_8813FDD8(ctx, base);
	// li r8,13952
	ctx.r8.s64 = 13952;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,403
	ctx.r3.s64 = 403;
	// bl 0x8813fdd8
	ctx.lr = 0x88057CE4;
	sub_8813FDD8(ctx, base);
	// li r8,13256
	ctx.r8.s64 = 13256;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D00;
	sub_8813FDD8(ctx, base);
	// li r8,13257
	ctx.r8.s64 = 13257;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D1C;
	sub_8813FDD8(ctx, base);
	// li r8,13304
	ctx.r8.s64 = 13304;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D38;
	sub_8813FDD8(ctx, base);
	// li r8,13305
	ctx.r8.s64 = 13305;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D54;
	sub_8813FDD8(ctx, base);
	// li r8,13306
	ctx.r8.s64 = 13306;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D70;
	sub_8813FDD8(ctx, base);
	// li r8,13307
	ctx.r8.s64 = 13307;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057D8C;
	sub_8813FDD8(ctx, base);
	// li r8,13308
	ctx.r8.s64 = 13308;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057DA8;
	sub_8813FDD8(ctx, base);
	// li r8,13954
	ctx.r8.s64 = 13954;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057DC4;
	sub_8813FDD8(ctx, base);
	// li r8,13956
	ctx.r8.s64 = 13956;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,405
	ctx.r3.s64 = 405;
	// bl 0x8813fdd8
	ctx.lr = 0x88057DE0;
	sub_8813FDD8(ctx, base);
	// li r8,13258
	ctx.r8.s64 = 13258;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,406
	ctx.r3.s64 = 406;
	// bl 0x8813fdd8
	ctx.lr = 0x88057DFC;
	sub_8813FDD8(ctx, base);
	// li r8,13259
	ctx.r8.s64 = 13259;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,406
	ctx.r3.s64 = 406;
	// bl 0x8813fdd8
	ctx.lr = 0x88057E18;
	sub_8813FDD8(ctx, base);
	// li r8,13260
	ctx.r8.s64 = 13260;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,406
	ctx.r3.s64 = 406;
	// bl 0x8813fdd8
	ctx.lr = 0x88057E34;
	sub_8813FDD8(ctx, base);
	// li r8,13261
	ctx.r8.s64 = 13261;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,406
	ctx.r3.s64 = 406;
	// bl 0x8813fdd8
	ctx.lr = 0x88057E50;
	sub_8813FDD8(ctx, base);
	// li r8,13053
	ctx.r8.s64 = 13053;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057E6C;
	sub_8813FDD8(ctx, base);
	// li r8,13054
	ctx.r8.s64 = 13054;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057E88;
	sub_8813FDD8(ctx, base);
	// li r8,13055
	ctx.r8.s64 = 13055;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057EA4;
	sub_8813FDD8(ctx, base);
	// li r8,13118
	ctx.r8.s64 = 13118;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057EC0;
	sub_8813FDD8(ctx, base);
	// li r8,13119
	ctx.r8.s64 = 13119;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057EDC;
	sub_8813FDD8(ctx, base);
	// li r8,13120
	ctx.r8.s64 = 13120;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057EF8;
	sub_8813FDD8(ctx, base);
	// li r8,13897
	ctx.r8.s64 = 13897;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057F14;
	sub_8813FDD8(ctx, base);
	// li r8,13898
	ctx.r8.s64 = 13898;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057F30;
	sub_8813FDD8(ctx, base);
	// li r8,13905
	ctx.r8.s64 = 13905;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057F4C;
	sub_8813FDD8(ctx, base);
	// li r8,13906
	ctx.r8.s64 = 13906;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057F68;
	sub_8813FDD8(ctx, base);
	// li r8,13907
	ctx.r8.s64 = 13907;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057F84;
	sub_8813FDD8(ctx, base);
	// li r8,13908
	ctx.r8.s64 = 13908;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057FA0;
	sub_8813FDD8(ctx, base);
	// li r8,13909
	ctx.r8.s64 = 13909;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057FBC;
	sub_8813FDD8(ctx, base);
	// li r8,13910
	ctx.r8.s64 = 13910;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057FD8;
	sub_8813FDD8(ctx, base);
	// li r8,13911
	ctx.r8.s64 = 13911;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88057FF4;
	sub_8813FDD8(ctx, base);
	// li r8,13912
	ctx.r8.s64 = 13912;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058010;
	sub_8813FDD8(ctx, base);
	// li r8,13913
	ctx.r8.s64 = 13913;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x8805802C;
	sub_8813FDD8(ctx, base);
	// li r8,13914
	ctx.r8.s64 = 13914;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058048;
	sub_8813FDD8(ctx, base);
	// li r8,13915
	ctx.r8.s64 = 13915;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058064;
	sub_8813FDD8(ctx, base);
	// li r8,13916
	ctx.r8.s64 = 13916;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058080;
	sub_8813FDD8(ctx, base);
	// li r8,13917
	ctx.r8.s64 = 13917;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x8805809C;
	sub_8813FDD8(ctx, base);
	// li r8,13918
	ctx.r8.s64 = 13918;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880580B8;
	sub_8813FDD8(ctx, base);
	// li r8,13919
	ctx.r8.s64 = 13919;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880580D4;
	sub_8813FDD8(ctx, base);
	// li r8,13920
	ctx.r8.s64 = 13920;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880580F0;
	sub_8813FDD8(ctx, base);
	// li r8,13921
	ctx.r8.s64 = 13921;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x8805810C;
	sub_8813FDD8(ctx, base);
	// li r8,13922
	ctx.r8.s64 = 13922;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058128;
	sub_8813FDD8(ctx, base);
	// li r8,13923
	ctx.r8.s64 = 13923;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058144;
	sub_8813FDD8(ctx, base);
	// li r8,13924
	ctx.r8.s64 = 13924;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058160;
	sub_8813FDD8(ctx, base);
	// li r8,13925
	ctx.r8.s64 = 13925;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x8805817C;
	sub_8813FDD8(ctx, base);
	// li r8,13926
	ctx.r8.s64 = 13926;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058198;
	sub_8813FDD8(ctx, base);
	// li r8,13927
	ctx.r8.s64 = 13927;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880581B4;
	sub_8813FDD8(ctx, base);
	// li r8,13928
	ctx.r8.s64 = 13928;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880581D0;
	sub_8813FDD8(ctx, base);
	// li r8,13929
	ctx.r8.s64 = 13929;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x880581EC;
	sub_8813FDD8(ctx, base);
	// li r8,13930
	ctx.r8.s64 = 13930;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,371
	ctx.r3.s64 = 371;
	// bl 0x8813fdd8
	ctx.lr = 0x88058208;
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

DEFINE_REX_FUNC(sub_880670F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8813fa58
	sub_8813FA58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f58
	ctx.lr = 0x88067118;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r11,r11,21496
	ctx.r11.s64 = ctx.r11.s64 + 21496;
	// lis r4,-30697
	ctx.r4.s64 = -2011758592;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// lis r3,-30697
	ctx.r3.s64 = -2011758592;
	// lis r5,-30698
	ctx.r5.s64 = -2011824128;
	// lis r6,-30697
	ctx.r6.s64 = -2011758592;
	// lis r7,-30697
	ctx.r7.s64 = -2011758592;
	// lis r8,-30698
	ctx.r8.s64 = -2011824128;
	// lis r9,-30697
	ctx.r9.s64 = -2011758592;
	// lis r10,-30697
	ctx.r10.s64 = -2011758592;
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r17,16
	ctx.r17.s64 = 16;
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// addi r26,r4,29288
	ctx.r26.s64 = ctx.r4.s64 + 29288;
	// addi r25,r3,-7600
	ctx.r25.s64 = ctx.r3.s64 + -7600;
	// addi r24,r5,21048
	ctx.r24.s64 = ctx.r5.s64 + 21048;
	// addi r23,r6,16992
	ctx.r23.s64 = ctx.r6.s64 + 16992;
	// addi r22,r7,-19896
	ctx.r22.s64 = ctx.r7.s64 + -19896;
	// addi r21,r8,8752
	ctx.r21.s64 = ctx.r8.s64 + 8752;
	// addi r20,r9,4696
	ctx.r20.s64 = ctx.r9.s64 + 4696;
	// addi r19,r10,-32192
	ctx.r19.s64 = ctx.r10.s64 + -32192;
	// addi r18,r11,-3544
	ctx.r18.s64 = ctx.r11.s64 + -3544;
loc_88067188:
	// stw r16,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r16.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x88068e88
	ctx.lr = 0x88067194;
	sub_88068E88(ctx, base);
	// stw r30,-28(r31)
	REX_STORE_U32(ctx.r31.u32 + -28, ctx.r30.u32);
	// stw r3,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,-24(r31)
	REX_STORE_U32(ctx.r31.u32 + -24, ctx.r30.u32);
	// stw r30,-20(r31)
	REX_STORE_U32(ctx.r31.u32 + -20, ctx.r30.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r17,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r17.u32);
	// bne cr6,0x880671bc
	if (!ctx.cr6.eq) goto loc_880671BC;
	// addi r11,r18,4
	ctx.r11.s64 = ctx.r18.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880671BC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880671cc
	if (!ctx.cr6.eq) goto loc_880671CC;
	// addi r11,r19,4
	ctx.r11.s64 = ctx.r19.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880671CC:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880671dc
	if (!ctx.cr6.eq) goto loc_880671DC;
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880671DC:
	// bl 0x880676d0
	ctx.lr = 0x880671E0;
	sub_880676D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8806721c
	if (!ctx.cr6.eq) goto loc_8806721C;
	// lwz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880671fc
	if (!ctx.cr6.eq) goto loc_880671FC;
	// addi r10,r21,4
	ctx.r10.s64 = ctx.r21.s64 + 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880671FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8806720c
	if (!ctx.cr6.eq) goto loc_8806720C;
	// addi r10,r22,4
	ctx.r10.s64 = ctx.r22.s64 + 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8806720C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8806721c
	if (!ctx.cr6.eq) goto loc_8806721C;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8806721C:
	// bl 0x880676d0
	ctx.lr = 0x88067220;
	sub_880676D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8806725c
	if (!ctx.cr6.eq) goto loc_8806725C;
	// lwz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806723c
	if (!ctx.cr6.eq) goto loc_8806723C;
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8806723C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8806724c
	if (!ctx.cr6.eq) goto loc_8806724C;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8806724C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8806725c
	if (!ctx.cr6.eq) goto loc_8806725C;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8806725C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,21864(r29)
	REX_STORE_U32(ctx.r29.u32 + 21864, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,21852(r28)
	REX_STORE_U32(ctx.r28.u32 + 21852, ctx.r11.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8801a428
	ctx.lr = 0x8806727C;
	sub_8801A428(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lhz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,-12(r31)
	REX_STORE_U32(ctx.r31.u32 + -12, ctx.r7.u32);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x88067188
	if (!ctx.cr0.eq) goto loc_88067188;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067B70) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_88067B88:
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r31,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r31,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x88067B9C;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88067BA8;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff28
	ctx.lr = 0x88067BB4;
	sub_8813FF28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x88067b88
	if (ctx.cr6.lt) goto loc_88067B88;
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

DEFINE_REX_FUNC(sub_880689D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,21904
	ctx.r11.s64 = ctx.r11.s64 + 21904;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,84
	ctx.r8.s64 = ctx.r11.s64 + 84;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88068AA8) {
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
	// addi r11,r4,19
	ctx.r11.s64 = ctx.r4.s64 + 19;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,21904
	ctx.r10.s64 = ctx.r10.s64 + 21904;
	// mulli r11,r4,1240
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1240));
	// lwzx r3,r9,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r10,r10,1712
	ctx.r10.s64 = ctx.r10.s64 + 1712;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801b368
	ctx.lr = 0x88068ADC;
	sub_8801B368(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88068CE8) {
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
	// li r5,4232
	ctx.r5.s64 = 4232;
	// addi r31,r11,21904
	ctx.r31.s64 = ctx.r11.s64 + 21904;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88068D10;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// bl 0x8806b1e0
	ctx.lr = 0x88068D20;
	sub_8806B1E0(ctx, base);
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r10,1092(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,1092(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-30608
	ctx.r8.s64 = -2005925888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26136(r8)
	REX_STORE_U32(ctx.r8.u32 + 26136, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88068E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88068E98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r3,1712
	ctx.r31.s64 = ctx.r3.s64 + 1712;
	// addi r29,r3,76
	ctx.r29.s64 = ctx.r3.s64 + 76;
	// li r30,2
	ctx.r30.s64 = 2;
loc_88068EB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88068ef8
	if (ctx.cr6.eq) goto loc_88068EF8;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8801b558
	ctx.lr = 0x88068ECC;
	sub_8801B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88068ef8
	if (ctx.cr6.eq) goto loc_88068EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806bc20
	ctx.lr = 0x88068EDC;
	sub_8806BC20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88068ef8
	if (!ctx.cr6.eq) goto loc_88068EF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x88068EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_88068EF8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1240
	ctx.r31.s64 = ctx.r31.s64 + 1240;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x88068eb4
	if (!ctx.cr0.eq) goto loc_88068EB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880690E8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069108) {
	REX_FUNC_PROLOGUE();
	// addi r10,r5,54
	ctx.r10.s64 = ctx.r5.s64 + 54;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069170) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,252(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880691C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8806b228
	ctx.lr = 0x880691E0;
	sub_8806B228(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880691f4
	if (!ctx.cr6.eq) goto loc_880691F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806c870
	ctx.lr = 0x880691F4;
	sub_8806C870(ctx, base);
loc_880691F4:
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

DEFINE_REX_FUNC(sub_880693B8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r10,21904
	ctx.r3.s64 = ctx.r10.s64 + 21904;
	// lis r9,-30713
	ctx.r9.s64 = -2012807168;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-27800
	ctx.r4.s64 = ctx.r9.s64 + -27800;
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// b 0x88069028
	sub_88069028(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// addi r10,r11,21904
	ctx.r10.s64 = ctx.r11.s64 + 21904;
	// lwz r3,292(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 292);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069520) {
	REX_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88069540;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// beq cr6,0x88069560
	if (ctx.cr6.eq) goto loc_88069560;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_88069560:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8806956c
	if (ctx.cr6.eq) goto loc_8806956C;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8806956C:
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r11,r10,21904
	ctx.r11.s64 = ctx.r10.s64 + 21904;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,1712
	ctx.r30.s64 = ctx.r11.s64 + 1712;
loc_88069580:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880695d8
	if (ctx.cr6.eq) goto loc_880695D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806c050
	ctx.lr = 0x880695A0;
	sub_8806C050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880695d8
	if (ctx.cr6.eq) goto loc_880695D8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x880695c0
	if (!ctx.cr6.eq) goto loc_880695C0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880695d4
	if (ctx.cr6.eq) goto loc_880695D4;
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x880695d4
	goto loc_880695D4;
loc_880695C0:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x880695d4
	if (!ctx.cr6.eq) goto loc_880695D4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880695d4
	if (ctx.cr6.eq) goto loc_880695D4;
	// stw r29,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_880695D4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_880695D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1240
	ctx.r30.s64 = ctx.r30.s64 + 1240;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x88069580
	if (ctx.cr6.lt) goto loc_88069580;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069B80) {
	REX_FUNC_PROLOGUE();
	// stw r4,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069B98) {
	REX_FUNC_PROLOGUE();
	// li r3,4232
	ctx.r3.s64 = 4232;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88069FC0) {
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
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,21904
	ctx.r31.s64 = ctx.r11.s64 + 21904;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8801b558
	ctx.lr = 0x88069FE8;
	sub_8801B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8806a064
	if (!ctx.cr6.eq) goto loc_8806A064;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806a064
	if (!ctx.cr6.eq) goto loc_8806A064;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806a064
	if (!ctx.cr6.eq) goto loc_8806A064;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806a064
	if (!ctx.cr6.eq) goto loc_8806A064;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8806a030
	if (ctx.cr6.eq) goto loc_8806A030;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8806a034
	goto loc_8806A034;
loc_8806A030:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8806A034:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// mulli r11,r30,1240
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1240));
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r31,1712
	ctx.r10.s64 = ctx.r31.s64 + 1712;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8806b3e8
	ctx.lr = 0x8806A050;
	sub_8806B3E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88140758
	ctx.lr = 0x8806A058;
	sub_88140758(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88027210
	ctx.lr = 0x8806A064;
	sub_88027210(ctx, base);
loc_8806A064:
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

DEFINE_REX_FUNC(sub_8806A7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806A7C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,21904
	ctx.r31.s64 = ctx.r11.s64 + 21904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806a1b8
	ctx.lr = 0x8806A7E0;
	sub_8806A1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806a1b8
	ctx.lr = 0x8806A7F0;
	sub_8806A1B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30713
	ctx.r10.s64 = -2012807168;
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-30224
	ctx.r4.s64 = ctx.r10.s64 + -30224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88068e90
	ctx.lr = 0x8806A810;
	sub_88068E90(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806a884
	if (!ctx.cr6.eq) goto loc_8806A884;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8806a84c
	if (ctx.cr6.eq) goto loc_8806A84C;
	// addi r3,r31,1712
	ctx.r3.s64 = ctx.r31.s64 + 1712;
	// bl 0x8806b2a0
	ctx.lr = 0x8806A82C;
	sub_8806B2A0(ctx, base);
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A83C;
	sub_8806B5D8(ctx, base);
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r10,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
loc_8806A84C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8806a8e4
	if (ctx.cr6.eq) goto loc_8806A8E4;
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// bl 0x8806b2a0
	ctx.lr = 0x8806A85C;
	sub_8806B2A0(ctx, base);
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,180
	ctx.r4.s64 = 11796480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A86C;
	sub_8806B5D8(ctx, base);
	// lis r11,180
	ctx.r11.s64 = 11796480;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,3020(r31)
	REX_STORE_U32(ctx.r31.u32 + 3020, ctx.r11.u32);
	// stw r10,3024(r31)
	REX_STORE_U32(ctx.r31.u32 + 3024, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8806A884:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8806a8b4
	if (ctx.cr6.eq) goto loc_8806A8B4;
	// addi r3,r31,1712
	ctx.r3.s64 = ctx.r31.s64 + 1712;
	// bl 0x8806b2a0
	ctx.lr = 0x8806A894;
	sub_8806B2A0(ctx, base);
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A8A4;
	sub_8806B5D8(ctx, base);
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r10,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
loc_8806A8B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8806a8e4
	if (ctx.cr6.eq) goto loc_8806A8E4;
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// bl 0x8806b2a0
	ctx.lr = 0x8806A8C4;
	sub_8806B2A0(ctx, base);
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A8D4;
	sub_8806B5D8(ctx, base);
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,3020(r31)
	REX_STORE_U32(ctx.r31.u32 + 3020, ctx.r11.u32);
	// stw r10,3024(r31)
	REX_STORE_U32(ctx.r31.u32 + 3024, ctx.r10.u32);
loc_8806A8E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806B668) {
	REX_FUNC_PROLOGUE();
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r10,192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B888) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B8D8) {
	REX_FUNC_PROLOGUE();
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B8F0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8806b8fc
	if (!ctx.cr6.eq) goto loc_8806B8FC;
	// blr 
	return;
loc_8806B8FC:
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B938) {
	REX_FUNC_PROLOGUE();
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B9C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,296(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 296);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,296(r4)
	REX_STORE_U32(ctx.r4.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BA28) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x8806ba38
	if (ctx.cr6.lt) goto loc_8806BA38;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8806BA38:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8806ba54
	if (!ctx.cr6.eq) goto loc_8806BA54;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8806BA54:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8806ba70
	if (!ctx.cr6.eq) goto loc_8806BA70;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8806BA70:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8806ba8c
	if (!ctx.cr6.eq) goto loc_8806BA8C;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8806BA8C:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x8806baa0
	if (!ctx.cr6.eq) goto loc_8806BAA0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_8806BAA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BCC0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BFB8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BFE0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// li r11,90
	ctx.r11.s64 = 90;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,352(r10)
	REX_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// stw r11,348(r10)
	REX_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// stw r9,344(r10)
	REX_STORE_U32(ctx.r10.u32 + 344, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C028) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806C260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806C268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,216(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880696c8
	ctx.lr = 0x8806C278;
	sub_880696C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88068e60
	ctx.lr = 0x8806C284;
	sub_88068E60(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8806C2A0:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 464);
	// bne cr6,0x8806c2c8
	if (!ctx.cr6.eq) goto loc_8806C2C8;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// b 0x8806c2cc
	goto loc_8806C2CC;
loc_8806C2C8:
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
loc_8806C2CC:
	// beq cr6,0x8806c2e8
	if (ctx.cr6.eq) goto loc_8806C2E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8806c2a0
	if (ctx.cr6.lt) goto loc_8806C2A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8806C2E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8806C2E8:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8806c2e0
	if (ctx.cr6.eq) goto loc_8806C2E0;
	// stw r3,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806C808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8806C810;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x88069b88
	ctx.lr = 0x8806C820;
	sub_88069B88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88068e68
	ctx.lr = 0x8806C828;
	sub_88068E68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1240
	ctx.r5.s64 = 1240;
	// lwz r31,204(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r29,208(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,212(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r27,216(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r26,196(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r25,200(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// bl 0x881410a0
	ctx.lr = 0x8806C850;
	sub_881410A0(ctx, base);
	// stw r26,196(r30)
	REX_STORE_U32(ctx.r30.u32 + 196, ctx.r26.u32);
	// stw r25,200(r30)
	REX_STORE_U32(ctx.r30.u32 + 200, ctx.r25.u32);
	// stw r31,204(r30)
	REX_STORE_U32(ctx.r30.u32 + 204, ctx.r31.u32);
	// stw r29,208(r30)
	REX_STORE_U32(ctx.r30.u32 + 208, ctx.r29.u32);
	// stw r28,212(r30)
	REX_STORE_U32(ctx.r30.u32 + 212, ctx.r28.u32);
	// stw r27,216(r30)
	REX_STORE_U32(ctx.r30.u32 + 216, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806D080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8806D088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// addi r31,r11,30408
	ctx.r31.s64 = ctx.r11.s64 + 30408;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8806d0f8
	if (ctx.cr6.gt) goto loc_8806D0F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8806d0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D0D0;
	// bdzf 4*cr6+eq,0x8806d110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D110;
	// bdzf 4*cr6+eq,0x8806d138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D138;
	// bdzf 4*cr6+eq,0x8806d140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D140;
	// bdzf 4*cr6+eq,0x8806d190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D190;
	// bdzf 4*cr6+eq,0x8806d1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D1A8;
	// bdzf 4*cr6+eq,0x8806d3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D3D0;
	// bne cr6,0x8806d418
	if (!ctx.cr6.eq) goto loc_8806D418;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8806d0f4
	goto loc_8806D0F4;
loc_8806D0D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8806d0f8
	if (!ctx.cr6.gt) goto loc_8806D0F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8806D0F0:
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8806D0F4:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8806D0F8:
	// li r5,248
	ctx.r5.s64 = 248;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x8806D108;
	sub_88067710(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8806D110:
	// bl 0x88069aa0
	ctx.lr = 0x8806D114;
	sub_88069AA0(ctx, base);
	// bl 0x88024ca8
	ctx.lr = 0x8806D118;
	sub_88024CA8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069210
	ctx.lr = 0x8806D120;
	sub_88069210(ctx, base);
	// bl 0x880b1988
	ctx.lr = 0x8806D124;
	sub_880B1988(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x880a6290
	ctx.lr = 0x8806D130;
	sub_880A6290(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8806d0f4
	goto loc_8806D0F4;
loc_8806D138:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8806d0f4
	goto loc_8806D0F4;
loc_8806D140:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806d0f8
	if (!ctx.cr0.lt) goto loc_8806D0F8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x8806d184
	if (!ctx.cr6.eq) goto loc_8806D184;
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-12176
	ctx.r5.s64 = ctx.r11.s64 + -12176;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x88067828
	ctx.lr = 0x8806D17C;
	sub_88067828(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8806D184:
	// bl 0x88069b10
	ctx.lr = 0x8806D188;
	sub_88069B10(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8806d0f4
	goto loc_8806D0F4;
loc_8806D190:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806d0f8
	if (!ctx.cr0.lt) goto loc_8806D0F8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8806d0f4
	goto loc_8806D0F4;
loc_8806D1A8:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lis r6,-30608
	ctx.r6.s64 = -2005925888;
	// addi r30,r11,26144
	ctx.r30.s64 = ctx.r11.s64 + 26144;
	// lis r5,-30608
	ctx.r5.s64 = -2005925888;
	// lis r4,-30608
	ctx.r4.s64 = -2005925888;
	// lwz r11,26144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26144);
	// lis r3,-30608
	ctx.r3.s64 = -2005925888;
	// lis r29,-30692
	ctx.r29.s64 = -2011430912;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r7,4260(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4260);
	// stw r11,21864(r6)
	REX_STORE_U32(ctx.r6.u32 + 21864, ctx.r11.u32);
	// stw r10,21860(r5)
	REX_STORE_U32(ctx.r5.u32 + 21860, ctx.r10.u32);
	// stw r9,21856(r4)
	REX_STORE_U32(ctx.r4.u32 + 21856, ctx.r9.u32);
	// stw r8,21852(r3)
	REX_STORE_U32(ctx.r3.u32 + 21852, ctx.r8.u32);
	// stw r7,-6432(r29)
	REX_STORE_U32(ctx.r29.u32 + -6432, ctx.r7.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8801a428
	ctx.lr = 0x8806D1F4;
	sub_8801A428(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x88069a38
	ctx.lr = 0x8806D1FC;
	sub_88069A38(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-30606
	ctx.r28.s64 = -2005794816;
loc_8806D204:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88068e68
	ctx.lr = 0x8806D210;
	sub_88068E68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8806b5c8
	ctx.lr = 0x8806D218;
	sub_8806B5C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8806d27c
	if (ctx.cr6.eq) goto loc_8806D27C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806bc20
	ctx.lr = 0x8806D228;
	sub_8806BC20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8806d27c
	if (!ctx.cr6.eq) goto loc_8806D27C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806c050
	ctx.lr = 0x8806D240;
	sub_8806C050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8806d27c
	if (!ctx.cr6.eq) goto loc_8806D27C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880689d0
	ctx.lr = 0x8806D250;
	sub_880689D0(ctx, base);
	// lwz r3,18740(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 18740);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,648(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 648);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8806d274
	if (!ctx.cr6.eq) goto loc_8806D274;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8806d2a0
	goto loc_8806D2A0;
loc_8806D274:
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x8806d2a0
	goto loc_8806D2A0;
loc_8806D27C:
	// lwz r3,18740(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 18740);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,648(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 648);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8806d2a0
	if (ctx.cr6.eq) goto loc_8806D2A0;
	// li r4,19
	ctx.r4.s64 = 19;
loc_8806D2A0:
	// bctrl 
	ctx.lr = 0x8806D2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8806d204
	if (ctx.cr6.lt) goto loc_8806D204;
	// bl 0x8806a6b0
	ctx.lr = 0x8806D2B4;
	sub_8806A6B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8809c118
	ctx.lr = 0x8806D2BC;
	sub_8809C118(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806d2d8
	if (!ctx.cr6.eq) goto loc_8806D2D8;
	// bl 0x880b42f8
	ctx.lr = 0x8806D2CC;
	sub_880B42F8(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x880660f8
	ctx.lr = 0x8806D2D4;
	sub_880660F8(ctx, base);
	// b 0x8806d334
	goto loc_8806D334;
loc_8806D2D8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806d2f0
	if (!ctx.cr6.eq) goto loc_8806D2F0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x880660f8
	ctx.lr = 0x8806D2E8;
	sub_880660F8(ctx, base);
	// bl 0x880b4340
	ctx.lr = 0x8806D2EC;
	sub_880B4340(ctx, base);
	// b 0x8806d334
	goto loc_8806D334;
loc_8806D2F0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806d308
	if (!ctx.cr6.eq) goto loc_8806D308;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880660f8
	ctx.lr = 0x8806D300;
	sub_880660F8(ctx, base);
	// bl 0x880b4388
	ctx.lr = 0x8806D304;
	sub_880B4388(ctx, base);
	// b 0x8806d334
	goto loc_8806D334;
loc_8806D308:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8806d320
	if (!ctx.cr6.eq) goto loc_8806D320;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x880660f8
	ctx.lr = 0x8806D318;
	sub_880660F8(ctx, base);
	// bl 0x880b43d0
	ctx.lr = 0x8806D31C;
	sub_880B43D0(ctx, base);
	// b 0x8806d334
	goto loc_8806D334;
loc_8806D320:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8806d334
	if (!ctx.cr6.eq) goto loc_8806D334;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880660f8
	ctx.lr = 0x8806D330;
	sub_880660F8(ctx, base);
	// bl 0x880b4418
	ctx.lr = 0x8806D334;
	sub_880B4418(ctx, base);
loc_8806D334:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023908
	ctx.lr = 0x8806D33C;
	sub_88023908(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069180
	ctx.lr = 0x8806D348;
	sub_88069180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069188
	ctx.lr = 0x8806D354;
	sub_88069188(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21868(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21868);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8806d36c
	if (ctx.cr6.eq) goto loc_8806D36C;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,21868(r11)
	REX_STORE_U32(ctx.r11.u32 + 21868, ctx.r10.u32);
loc_8806D36C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8806a600
	ctx.lr = 0x8806D374;
	sub_8806A600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88069460
	ctx.lr = 0x8806D37C;
	sub_88069460(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806d3bc
	if (ctx.cr6.eq) goto loc_8806D3BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806d3bc
	if (!ctx.cr6.gt) goto loc_8806D3BC;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// lwz r10,18740(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 18740);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,21888(r9)
	REX_STORE_U32(ctx.r9.u32 + 21888, ctx.r11.u32);
	// lwz r8,828(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 828);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806D3BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806D3BC:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8806d0f8
	goto loc_8806D0F8;
loc_8806D3D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d3f4
	if (ctx.cr6.eq) goto loc_8806D3F4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8806d0f8
	if (!ctx.cr0.eq) goto loc_8806D0F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88069358
	ctx.lr = 0x8806D3F0;
	sub_88069358(ctx, base);
	// b 0x8806d0f8
	goto loc_8806D0F8;
loc_8806D3F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x8806d0f8
	if (ctx.cr0.gt) goto loc_8806D0F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8806d0f0
	goto loc_8806D0F0;
loc_8806D418:
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,26144
	ctx.r9.s64 = ctx.r10.s64 + 26144;
	// stw r11,4256(r9)
	REX_STORE_U32(ctx.r9.u32 + 4256, ctx.r11.u32);
	// bl 0x8801b368
	ctx.lr = 0x8806D42C;
	sub_8801B368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071890) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x88071a54
	if (ctx.cr6.gt) goto loc_88071A54;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88071904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88071904;
	// bdzf 4*cr6+eq,0x88071954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88071954;
	// bdzf 4*cr6+eq,0x880719fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880719FC;
	// bne cr6,0x88071a14
	if (!ctx.cr6.eq) goto loc_88071A14;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x88071a50
	if (ctx.cr6.gt) goto loc_88071A50;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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
loc_88071904:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x88071a54
	if (!ctx.cr6.eq) goto loc_88071A54;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
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
loc_88071954:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// ble cr6,0x88071998
	if (!ctx.cr6.gt) goto loc_88071998;
	// li r5,29
	ctx.r5.s64 = 29;
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071618
	ctx.lr = 0x8807198C;
	sub_88071618(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_88071998:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r10,-12
	ctx.r10.s64 = -12;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
loc_880719FC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x88071a50
	goto loc_88071A50;
loc_88071A14:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88071a54
	if (!ctx.cr0.lt) goto loc_88071A54;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// blt cr6,0x88071a54
	if (ctx.cr6.lt) goto loc_88071A54;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_88071A50:
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_88071A54:
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

DEFINE_REX_FUNC(sub_88072BE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88072BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x88024068
	ctx.lr = 0x88072C04;
	sub_88024068(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024488
	ctx.lr = 0x88072C10;
	sub_88024488(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024490
	ctx.lr = 0x88072C20;
	sub_88024490(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,136(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lis r8,13
	ctx.r8.s64 = 851968;
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addis r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -262144;
	// subf r4,r7,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r7.u64;
	// li r3,9435
	ctx.r3.s64 = 9435;
	// bl 0x8801a9c8
	ctx.lr = 0x88072C48;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88072C54;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88072C6C;
	sub_8813FF90(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lis r4,27
	ctx.r4.s64 = 1769472;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// li r3,9436
	ctx.r3.s64 = 9436;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072C8C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88072C98;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88072CB0;
	sub_8813FF90(ctx, base);
	// lwz r9,136(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lis r10,60
	ctx.r10.s64 = 3932160;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addis r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 1835008;
	// li r3,9437
	ctx.r3.s64 = 9437;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072CD0;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88072CDC;
	sub_8813FF08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88072CF4;
	sub_8813FF90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024488
	ctx.lr = 0x88072CFC;
	sub_88024488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024490
	ctx.lr = 0x88072D08;
	sub_88024490(ctx, base);
	// lwz r8,136(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r5,r8,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r11,r5,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,9821
	ctx.r3.s64 = 9821;
	// addis r5,r7,21
	ctx.r5.s64 = ctx.r7.s64 + 1376256;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072D38;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88072D44;
	sub_8813FF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88072D50;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,136(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// addis r5,r11,37
	ctx.r5.s64 = ctx.r11.s64 + 2424832;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,9822
	ctx.r3.s64 = 9822;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072D80;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88072D8C;
	sub_8813FF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88072D98;
	sub_8813FF08(ctx, base);
	// lwz r4,136(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// lis r8,67
	ctx.r8.s64 = 4390912;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,9823
	ctx.r3.s64 = 9823;
	// addis r5,r7,53
	ctx.r5.s64 = ctx.r7.s64 + 3473408;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072DC8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88072DD4;
	sub_8813FF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88072DE0;
	sub_8813FF08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88075138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88075140;
	__savegprlr_29(ctx, base);
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
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x88023f40
	ctx.lr = 0x88075158;
	sub_88023F40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// bl 0x88024018
	ctx.lr = 0x88075170;
	sub_88024018(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88075498) {
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
	ctx.lr = 0x880754B0;
	sub_88075038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880754d0
	if (ctx.cr6.eq) goto loc_880754D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88075340
	ctx.lr = 0x880754C0;
	sub_88075340(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_880754D0:
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

DEFINE_REX_FUNC(sub_88075BC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88075BC8;
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
	ctx.lr = 0x88075BD8;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88075BE0;
	sub_88023F40(ctx, base);
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88075BF0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88075BF8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88075BFC;
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
	ctx.lr = 0x88075C10;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88075C18;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x88075C1C;
	sub_88068E78(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x88075C2C;
	sub_88024028(ctx, base);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880240b8
	ctx.lr = 0x88075C44;
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
	ctx.lr = 0x88075C58;
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
	ctx.lr = 0x88075C78;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88075c84
	if (!ctx.cr6.lt) goto loc_88075C84;
	// li r3,256
	ctx.r3.s64 = 256;
loc_88075C84:
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r3,0,23,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1E0;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r8,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r10,21852(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r5,r6,36
	ctx.xer.ca = ctx.r6.u32 <= 36;
	ctx.r5.u64 = static_cast<uint64_t>(36) - ctx.r6.u64;
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// stw r28,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x880750b8
	ctx.lr = 0x88075CDC;
	sub_880750B8(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r3,-30713
	ctx.r3.s64 = -2012807168;
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// stw r31,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r31.u32);
	// addi r10,r3,19600
	ctx.r10.s64 = ctx.r3.s64 + 19600;
	// sth r28,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r28.u16);
	// sth r28,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r28.u16);
	// lis r9,-30713
	ctx.r9.s64 = -2012807168;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r4,r9,22776
	ctx.r4.s64 = ctx.r9.s64 + 22776;
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
	ctx.lr = 0x88075D28;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88075D38;
	sub_8813FA58(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88075D48;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x88022b68
	ctx.lr = 0x88075D54;
	sub_88022B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88077060) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88077068;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88077074;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88074ea0
	ctx.lr = 0x88077084;
	sub_88074EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88077230
	if (ctx.cr6.eq) goto loc_88077230;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88077224
	if (!ctx.cr6.eq) goto loc_88077224;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a860
	ctx.lr = 0x880770B0;
	sub_8801A860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x880770DC;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,512
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 512, ctx.xer);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// blt cr6,0x880770fc
	if (ctx.cr6.lt) goto loc_880770FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880770FC:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807715c
	if (ctx.cr6.eq) goto loc_8807715C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807715c
	if (ctx.cr6.eq) goto loc_8807715C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x8807715c
	if (!ctx.cr0.lt) goto loc_8807715C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x88077140;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8807715c
	if (ctx.cr6.lt) goto loc_8807715C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a808
	ctx.lr = 0x88077154;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8807715C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x8807716C;
	sub_880244D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8807718c
	if (ctx.cr6.lt) goto loc_8807718C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88077184;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8807718C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077224
	if (!ctx.cr6.eq) goto loc_88077224;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x88077224
	if (ctx.cr0.gt) goto loc_88077224;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r8,-30694
	ctx.r8.s64 = -2011561984;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r8,-5656
	ctx.r11.s64 = ctx.r8.s64 + -5656;
	// lwz r10,21852(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r10,29,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r10,r6,38
	ctx.xer.ca = ctx.r6.u32 <= 38;
	ctx.r10.u64 = static_cast<uint64_t>(38) - ctx.r6.u64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x88024120
	ctx.lr = 0x88077200;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88077224
	if (ctx.cr6.eq) goto loc_88077224;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,12
	ctx.r7.s64 = 12;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88074c28
	ctx.lr = 0x88077224;
	sub_88074C28(ctx, base);
loc_88077224:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88074f88
	ctx.lr = 0x88077230;
	sub_88074F88(ctx, base);
loc_88077230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88079F10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88079F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,408(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 408);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88079fec
	if (!ctx.cr6.gt) goto loc_88079FEC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88079F40;
	sub_880236A8(ctx, base);
	// lwz r11,744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88079f5c
	if (!ctx.cr6.eq) goto loc_88079F5C;
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
loc_88079F5C:
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88079fec
	if (ctx.cr6.gt) goto loc_88079FEC;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r30,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// bl 0x880b1e10
	ctx.lr = 0x88079F7C;
	sub_880B1E10(ctx, base);
	// lwz r10,748(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 748);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88079f90
	if (!ctx.cr6.eq) goto loc_88079F90;
	// li r3,48
	ctx.r3.s64 = 48;
loc_88079F90:
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x88012f38
	ctx.lr = 0x88079F98;
	sub_88012F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88079FA4;
	sub_88022A88(ctx, base);
	// li r5,5820
	ctx.r5.s64 = 5820;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88079FB4;
	sub_88024DE8(ctx, base);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// ori r9,r11,32896
	ctx.r9.u64 = ctx.r11.u64 | 32896;
	// stw r30,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r10,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r9,732(r31)
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// sth r30,412(r31)
	REX_STORE_U16(ctx.r31.u32 + 412, ctx.r30.u16);
	// sth r30,492(r31)
	REX_STORE_U16(ctx.r31.u32 + 492, ctx.r30.u16);
	// sth r30,572(r31)
	REX_STORE_U16(ctx.r31.u32 + 572, ctx.r30.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88079FEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807BA68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8807BA70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807BA7C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x8807BA94;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x8807BAC0;
	sub_88024438(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x8807BAD8;
	sub_88024460(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024758
	ctx.lr = 0x8807BAF8;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8807bb10
	if (!ctx.cr6.eq) goto loc_8807BB10;
	// bl 0x88023f48
	ctx.lr = 0x8807BB08;
	sub_88023F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8807BB10:
	// bl 0x88024030
	ctx.lr = 0x8807BB14;
	sub_88024030(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-11960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb4c
	if (ctx.cr6.eq) goto loc_8807BB4C;
	// li r6,125
	ctx.r6.s64 = 125;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880111c0
	ctx.lr = 0x8807BB3C;
	sub_880111C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807b910
	ctx.lr = 0x8807BB44;
	sub_8807B910(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8807BB4C:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r26,r31,56
	ctx.r26.s64 = ctx.r31.s64 + 56;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lhz r9,58(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 58);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8807bb98
	if (ctx.cr6.eq) goto loc_8807BB98;
	// sth r28,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r28.u16);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// beq cr6,0x8807bb98
	if (ctx.cr6.eq) goto loc_8807BB98;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_8807BB98:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x8807bbd0
	if (!ctx.cr0.lt) goto loc_8807BBD0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
loc_8807BBD0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r9,28
	ctx.r6.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r4,r7,27
	ctx.r4.u64 = ctx.r7.u32 & 0x1F;
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// ble cr6,0x8807bc10
	if (!ctx.cr6.gt) goto loc_8807BC10;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8807BC10:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addis r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -2097152;
	// addis r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 1572864;
	// addi r3,r11,6955
	ctx.r3.s64 = ctx.r11.s64 + 6955;
	// bl 0x8801a9c8
	ctx.lr = 0x8807BC30;
	sub_8801A9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8807BC3C;
	sub_8813FF08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x8807BC48;
	sub_8813FF48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8807BC60;
	sub_8813FF90(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x8807bc94
	if (!ctx.cr6.gt) goto loc_8807BC94;
	// subfic r29,r29,32
	ctx.xer.ca = ctx.r29.u32 <= 32;
	ctx.r29.u64 = static_cast<uint64_t>(32) - ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8807BC94:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,6955
	ctx.r3.s64 = ctx.r11.s64 + 6955;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801a9c8
	ctx.lr = 0x8807BCAC;
	sub_8801A9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8807BCB8;
	sub_8813FF08(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8813ff48
	ctx.lr = 0x8807BCC4;
	sub_8813FF48(ctx, base);
	// addi r11,r29,3214
	ctx.r11.s64 = ctx.r29.s64 + 3214;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8807BCE4;
	sub_8801A9C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8807BCEC;
	sub_8813FF08(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x88018b98
	ctx.lr = 0x8807BD10;
	sub_88018B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88081020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88081028;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88081034;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024030
	ctx.lr = 0x88081040;
	sub_88024030(ctx, base);
	// lis r25,-30608
	ctx.r25.s64 = -2005925888;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,21860(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88081418
	if (!ctx.cr6.eq) goto loc_88081418;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8801a860
	ctx.lr = 0x88081070;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x8808109C;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x880810B4;
	sub_88024460(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r29,r3,r7
	ctx.r29.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bgt cr6,0x88081418
	if (ctx.cr6.gt) goto loc_88081418;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88081138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88081138;
	// bdzf 4*cr6+eq,0x88081174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88081174;
	// bdzf 4*cr6+eq,0x880811e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880811E4;
	// bdzf 4*cr6+eq,0x88081398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88081398;
	// bne cr6,0x880813d8
	if (!ctx.cr6.eq) goto loc_880813D8;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88081418
	if (!ctx.cr6.gt) goto loc_88081418;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x88081418
	if (!ctx.cr0.lt) goto loc_88081418;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r26,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// bl 0x88024018
	ctx.lr = 0x88081134;
	sub_88024018(ctx, base);
	// b 0x88081418
	goto loc_88081418;
loc_88081138:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8801a808
	ctx.lr = 0x88081148;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x88081418
	if (!ctx.cr6.eq) goto loc_88081418;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x88081418
	goto loc_88081418;
loc_88081174:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x88081418
	if (!ctx.cr0.lt) goto loc_88081418;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x880811c4
	if (!ctx.cr6.eq) goto loc_880811C4;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addis r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 524288;
	// li r3,92
	ctx.r3.s64 = 92;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88023b90
	ctx.lr = 0x880811C4;
	sub_88023B90(ctx, base);
loc_880811C4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x88081418
	if (ctx.cr6.lt) goto loc_88081418;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x88081418
	goto loc_88081418;
loc_880811E4:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x88081418
	if (!ctx.cr0.lt) goto loc_88081418;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r28,8(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bne cr6,0x88081224
	if (!ctx.cr6.eq) goto loc_88081224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x88081220;
	sub_880244D0(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_88081224:
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808132c
	if (!ctx.cr6.gt) goto loc_8808132C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88024288
	ctx.lr = 0x88081240;
	sub_88024288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8808132c
	if (ctx.cr6.eq) goto loc_8808132C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,124(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880812e0
	if (ctx.cr6.eq) goto loc_880812E0;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880812bc
	if (ctx.cr6.lt) goto loc_880812BC;
	// beq cr6,0x88081298
	if (ctx.cr6.eq) goto loc_88081298;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8808132c
	if (!ctx.cr6.lt) goto loc_8808132C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,-25
	ctx.r6.s64 = -25;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x88013ce0
	ctx.lr = 0x88081294;
	sub_88013CE0(ctx, base);
	// b 0x8808132c
	goto loc_8808132C;
loc_88081298:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013ce0
	ctx.lr = 0x880812B8;
	sub_88013CE0(ctx, base);
	// b 0x8808132c
	goto loc_8808132C;
loc_880812BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013ce0
	ctx.lr = 0x880812DC;
	sub_88013CE0(ctx, base);
	// b 0x8808132c
	goto loc_8808132C;
loc_880812E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013940
	ctx.lr = 0x880812F8;
	sub_88013940(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r7,124(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88081314
	if (ctx.cr6.lt) goto loc_88081314;
	// bne cr6,0x8808132c
	if (!ctx.cr6.eq) goto loc_8808132C;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x88081318
	goto loc_88081318;
loc_88081314:
	// li r6,0
	ctx.r6.s64 = 0;
loc_88081318:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013940
	ctx.lr = 0x8808132C;
	sub_88013940(ctx, base);
loc_8808132C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bgt 0x88081418
	if (ctx.cr0.gt) goto loc_88081418;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r9,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// bgt 0x88081418
	if (ctx.cr0.gt) goto loc_88081418;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88081364;
	sub_8801A448(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r5,r6,112
	ctx.xer.ca = ctx.r6.u32 <= 112;
	ctx.r5.u64 = static_cast<uint64_t>(112) - ctx.r6.u64;
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r4,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// b 0x88081418
	goto loc_88081418;
loc_88081398:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x88081418
	if (!ctx.cr0.lt) goto loc_88081418;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bge 0x88081418
	if (!ctx.cr0.lt) goto loc_88081418;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r26,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x88081418
	goto loc_88081418;
loc_880813D8:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8801a808
	ctx.lr = 0x880813E8;
	sub_8801A808(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88081418
	if (!ctx.cr6.eq) goto loc_88081418;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x88024018
	ctx.lr = 0x88081414;
	sub_88024018(ctx, base);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_88081418:
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024758
	ctx.lr = 0x88081430;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8808145c
	if (!ctx.cr6.eq) goto loc_8808145C;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88081460
	if (ctx.cr6.eq) goto loc_88081460;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x8808144C;
	sub_88022BE0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f48
	ctx.lr = 0x88081454;
	sub_88023F48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8808145C:
	// stw r30,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_88081460:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r10,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lhz r9,142(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 142);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880814b0
	if (ctx.cr6.eq) goto loc_880814B0;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r11,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// beq cr6,0x880814dc
	if (ctx.cr6.eq) goto loc_880814DC;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880814d8
	goto loc_880814D8;
loc_880814B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x880814dc
	if (!ctx.cr6.lt) goto loc_880814DC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880814dc
	if (!ctx.cr6.eq) goto loc_880814DC;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880814D8:
	// stw r10,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
loc_880814DC:
	// lwz r11,21860(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808151c
	if (!ctx.cr6.eq) goto loc_8808151C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x8808151c
	if (!ctx.cr0.lt) goto loc_8808151C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
loc_8808151C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880815c4
	if (!ctx.cr6.eq) goto loc_880815C4;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8801a808
	ctx.lr = 0x88081538;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// clrlwi r11,r10,23
	ctx.r11.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x88081558
	if (!ctx.cr6.gt) goto loc_88081558;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_88081558:
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,12640
	ctx.r11.s64 = ctx.r10.s64 + 12640;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,792
	ctx.r5.s64 = ctx.r11.s64 + 792;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r10,8684
	ctx.r3.s64 = ctx.r10.s64 + 8684;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880815B0;
	sub_8801A9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880815BC;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x880815dc
	goto loc_880815DC;
loc_880815C4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,8783
	ctx.r3.s64 = ctx.r11.s64 + 8783;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880815DC;
	sub_8801A9C8(ctx, base);
loc_880815DC:
	// lwz r4,220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x8813ff48
	ctx.lr = 0x880815E4;
	sub_8813FF48(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88081614
	if (ctx.cr6.eq) goto loc_88081614;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r9,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x88018b98
	ctx.lr = 0x88081614;
	sub_88018B98(ctx, base);
loc_88081614:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88088178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88088180;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8808821c
	if (!ctx.cr6.gt) goto loc_8808821C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880881A8;
	sub_880236A8(ctx, base);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808821c
	if (!ctx.cr6.eq) goto loc_8808821C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt 0x8808821c
	if (ctx.cr0.gt) goto loc_8808821C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880881D4;
	sub_88022A88(ctx, base);
	// li r5,4260
	ctx.r5.s64 = 4260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x880881E4;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r11,164(r31)
	REX_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// li r8,122
	ctx.r8.s64 = 122;
	// sth r11,244(r31)
	REX_STORE_U16(ctx.r31.u32 + 244, ctx.r11.u16);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// bl 0x880b1e10
	ctx.lr = 0x8808820C;
	sub_880B1E10(ctx, base);
	// bl 0x880b3f30
	ctx.lr = 0x88088210;
	sub_880B3F30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8808821C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88089400) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808941C;
	sub_88023F40(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bge 0x88089464
	if (!ctx.cr0.lt) goto loc_88089464;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blt cr6,0x88089464
	if (ctx.cr6.lt) goto loc_88089464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88089460;
	sub_88023F48(ctx, base);
	// b 0x88089500
	goto loc_88089500;
loc_88089464:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a860
	ctx.lr = 0x88089478;
	sub_8801A860(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880894A4;
	sub_88024438(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x88024460
	ctx.lr = 0x880894BC;
	sub_88024460(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,14433
	ctx.r3.s64 = ctx.r11.s64 + 14433;
	// bl 0x8801a9c8
	ctx.lr = 0x880894E8;
	sub_8801A9C8(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88089500;
	sub_8813FF90(ctx, base);
loc_88089500:
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

DEFINE_REX_FUNC(sub_88089A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88089A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88089A88;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x88089A90;
	sub_88023F40(ctx, base);
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88089AA0;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x88089AA8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88089AAC;
	sub_88068E60(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x88089AC0;
	sub_880240B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,88
	ctx.r10.s64 = 5767168;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x88089AE8;
	sub_8801A448(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x88089AF4;
	sub_8801A448(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,31
	ctx.r6.s64 = ctx.r11.s64 + 31;
	// stw r6,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x880240e0
	ctx.lr = 0x88089B0C;
	sub_880240E0(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x8801a448
	ctx.lr = 0x88089B24;
	sub_8801A448(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88089B3C;
	sub_8801A448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r4,r8,-26568
	ctx.r4.s64 = ctx.r8.s64 + -26568;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x88089B84;
	sub_88023E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808A1B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x8808A1C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808A1CC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88024438
	ctx.lr = 0x8808A1DC;
	sub_88024438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x8808a214
	if (!ctx.cr0.lt) goto loc_8808A214;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
loc_8808A214:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x8808a23c
	if (!ctx.cr0.lt) goto loc_8808A23C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
loc_8808A23C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8808a290
	if (!ctx.cr0.lt) goto loc_8808A290;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// ble cr6,0x8808a278
	if (!ctx.cr6.gt) goto loc_8808A278;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8808a290
	if (ctx.cr6.lt) goto loc_8808A290;
	// b 0x8808a288
	goto loc_8808A288;
loc_8808A278:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bgt cr6,0x8808a290
	if (ctx.cr6.gt) goto loc_8808A290;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_8808A288:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8808A290:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,56(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x880247e8
	ctx.lr = 0x8808A29C;
	sub_880247E8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x8808A2AC;
	sub_88069270(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,127
	ctx.r3.s64 = 127;
	// lwz r27,0(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801a860
	ctx.lr = 0x8808A2C8;
	sub_8801A860(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,-16384
	ctx.r10.s64 = -16384;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r28,304
	ctx.r28.s64 = 19922944;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// lis r26,-64
	ctx.r26.s64 = -4194304;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lis r22,384
	ctx.r22.s64 = 25165824;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lis r24,32
	ctx.r24.s64 = 2097152;
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lis r25,96
	ctx.r25.s64 = 6291456;
	// lis r21,128
	ctx.r21.s64 = 8388608;
loc_8808A308:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8808A30C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8808a388
	if (!ctx.cr6.lt) goto loc_8808A388;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8808a388
	if (!ctx.cr6.gt) goto loc_8808A388;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8808a388
	if (!ctx.cr6.lt) goto loc_8808A388;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x8808a388
	if (!ctx.cr6.gt) goto loc_8808A388;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,14377
	ctx.r3.s64 = ctx.r11.s64 + 14377;
	// bl 0x8801a9c8
	ctx.lr = 0x8808A350;
	sub_8801A9C8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808A36C;
	sub_8813FF90(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8808A388;
	sub_8813FF48(ctx, base);
loc_8808A388:
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8808a30c
	if (ctx.cr6.lt) goto loc_8808A30C;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// bne 0x8808a308
	if (!ctx.cr0.eq) goto loc_8808A308;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-129
	ctx.r10.s64 = -8454144;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// ori r9,r10,49152
	ctx.r9.u64 = ctx.r10.u64 | 49152;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8808a3c4
	if (!ctx.cr6.eq) goto loc_8808A3C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8808A3C4:
	// lwz r11,824(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 824);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,824(r31)
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// bge 0x8808a3e4
	if (!ctx.cr0.lt) goto loc_8808A3E4;
	// lwz r11,828(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 828);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,824(r31)
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// bl 0x8808a0f0
	ctx.lr = 0x8808A3E4;
	sub_8808A0F0(ctx, base);
loc_8808A3E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88089f48
	ctx.lr = 0x8808A3EC;
	sub_88089F48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808CE98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8808CEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,304
	ctx.r4.s64 = 304;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x8808CEB0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808CEB8;
	sub_88023F40(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8808CEC8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x8808CED0;
	sub_880247E8(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// bl 0x88069710
	ctx.lr = 0x8808CED8;
	sub_88069710(ctx, base);
	// stw r3,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x88068e60
	ctx.lr = 0x8808CEE4;
	sub_88068E60(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x88024028
	ctx.lr = 0x8808CEF8;
	sub_88024028(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880240b8
	ctx.lr = 0x8808CF10;
	sub_880240B8(ctx, base);
	// lis r11,-30712
	ctx.r11.s64 = -2012741632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-31664
	ctx.r4.s64 = ctx.r11.s64 + -31664;
	// bl 0x88024dd0
	ctx.lr = 0x8808CF24;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x8808CF2C;
	sub_880240E0(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x8808CF38;
	sub_8801A448(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r3,320
	ctx.r10.s64 = ctx.r3.s64 + 320;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// li r8,1536
	ctx.r8.s64 = 1536;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r6,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// beq cr6,0x8808cf90
	if (ctx.cr6.eq) goto loc_8808CF90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8808cfac
	if (!ctx.cr6.eq) goto loc_8808CFAC;
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// b 0x8808cf94
	goto loc_8808CF94;
loc_8808CF90:
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_8808CF94:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8808CFAC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-30694
	ctx.r9.s64 = -2011561984;
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,24320
	ctx.r5.s64 = ctx.r9.s64 + 24320;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// stw r6,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r9,r11,24808
	ctx.r9.s64 = ctx.r11.s64 + 24808;
	// stw r3,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// lwzx r11,r4,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r5,r7,-15136
	ctx.r5.s64 = ctx.r7.s64 + -15136;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// sth r8,204(r31)
	REX_STORE_U16(ctx.r31.u32 + 204, ctx.r8.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r4.u32);
	// addi r4,r7,-14920
	ctx.r4.s64 = ctx.r7.s64 + -14920;
	// sth r10,200(r31)
	REX_STORE_U16(ctx.r31.u32 + 200, ctx.r10.u16);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r6,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// stw r5,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r5.u32);
	// stw r30,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// bl 0x88023e90
	ctx.lr = 0x8808D058;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x8808D068;
	sub_8813FA58(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x8808D078;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808FE28) {
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
	// bl 0x880247e8
	ctx.lr = 0x8808FE40;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x8808FE44;
	sub_88068E78(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11972(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11972);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8808fe7c
	if (!ctx.cr6.eq) goto loc_8808FE7C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8808fe7c
	if (!ctx.cr6.eq) goto loc_8808FE7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808FE64;
	sub_88023F48(ctx, base);
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
loc_8808FE7C:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8808FE98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8808FEA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808FEAC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8808fab0
	ctx.lr = 0x8808FEBC;
	sub_8808FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880900f0
	if (ctx.cr6.eq) goto loc_880900F0;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880900e4
	if (!ctx.cr6.eq) goto loc_880900E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024438
	ctx.lr = 0x8808FEE0;
	sub_88024438(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8801a860
	ctx.lr = 0x8808FF00;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r11,-11936(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -11936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809008c
	if (!ctx.cr6.eq) goto loc_8809008C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x8809008c
	if (!ctx.cr0.lt) goto loc_8809008C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809008c
	if (!ctx.cr6.eq) goto loc_8809008C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r27,4
	ctx.r27.s64 = 4;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r10,r11,30,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFFFFFFF;
	// subfic r9,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - ctx.r10.u64;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bl 0x88069640
	ctx.lr = 0x8808FF70;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8808ffb4
	if (ctx.cr6.eq) goto loc_8808FFB4;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8808ffa4
	if (!ctx.cr6.eq) goto loc_8808FFA4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x8808FF8C;
	sub_8801A448(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x8808FF9C;
	sub_8801A448(ctx, base);
	// subfic r27,r3,-11
	ctx.xer.ca = ctx.r3.u32 <= 4294967285;
	ctx.r27.u64 = static_cast<uint64_t>(-11) - ctx.r3.u64;
	// b 0x8808ffb4
	goto loc_8808FFB4;
loc_8808FFA4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a448
	ctx.lr = 0x8808FFAC;
	sub_8801A448(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8808FFB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x8808FFC4;
	sub_880244D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8809008c
	if (ctx.cr6.lt) goto loc_8809008C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8809008c
	if (!ctx.cr6.eq) goto loc_8809008C;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
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
	// lis r6,8
	ctx.r6.s64 = 524288;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// blt cr6,0x8809008c
	if (ctx.cr6.lt) goto loc_8809008C;
	// lis r11,232
	ctx.r11.s64 = 15204352;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8809008c
	if (ctx.cr6.gt) goto loc_8809008C;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8809008c
	if (ctx.cr6.lt) goto loc_8809008C;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88090070
	if (ctx.cr6.lt) goto loc_88090070;
	// beq cr6,0x8809005c
	if (ctx.cr6.eq) goto loc_8809005C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809008c
	if (!ctx.cr6.lt) goto loc_8809008C;
	// addi r6,r27,-30
	ctx.r6.s64 = ctx.r27.s64 + -30;
	// b 0x88090074
	goto loc_88090074;
loc_8809005C:
	// bl 0x88069640
	ctx.lr = 0x88090060;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809008c
	if (ctx.cr6.eq) goto loc_8809008C;
	// addi r6,r27,-18
	ctx.r6.s64 = ctx.r27.s64 + -18;
	// b 0x88090074
	goto loc_88090074;
loc_88090070:
	// addi r6,r27,-6
	ctx.r6.s64 = ctx.r27.s64 + -6;
loc_88090074:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88013940
	ctx.lr = 0x8809008C;
	sub_88013940(ctx, base);
loc_8809008C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880900e4
	if (!ctx.cr0.lt) goto loc_880900E4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880900e4
	if (ctx.cr6.eq) goto loc_880900E4;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x880244d0
	ctx.lr = 0x880900C8;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880900e4
	if (ctx.cr6.lt) goto loc_880900E4;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a808
	ctx.lr = 0x880900DC;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880900E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x880900F0;
	sub_8808FBC8(ctx, base);
loc_880900F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880910C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880910D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880910DC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8808fab0
	ctx.lr = 0x880910EC;
	sub_8808FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880912fc
	if (ctx.cr6.eq) goto loc_880912FC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880912f0
	if (!ctx.cr6.eq) goto loc_880912F0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88091118;
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
	ctx.lr = 0x88091144;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x88091214
	if (!ctx.cr6.eq) goto loc_88091214;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x88091214
	if (ctx.cr0.gt) goto loc_88091214;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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
	ctx.lr = 0x88091194;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88091214
	if (ctx.cr6.lt) goto loc_88091214;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88091214
	if (!ctx.cr6.eq) goto loc_88091214;
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
	ctx.lr = 0x880911F0;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88091214
	if (ctx.cr6.eq) goto loc_88091214;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,-2
	ctx.r6.s64 = -2;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88013940
	ctx.lr = 0x88091214;
	sub_88013940(ctx, base);
loc_88091214:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88091280
	if (!ctx.cr6.eq) goto loc_88091280;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x880912c4
	if (!ctx.cr0.lt) goto loc_880912C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bgt 0x880912c4
	if (ctx.cr0.gt) goto loc_880912C4;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880912c0
	goto loc_880912C0;
loc_88091280:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88091298
	if (ctx.cr6.eq) goto loc_88091298;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880912c4
	goto loc_880912C4;
loc_88091298:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// beq cr6,0x880912c4
	if (ctx.cr6.eq) goto loc_880912C4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x880912c4
	if (!ctx.cr0.lt) goto loc_880912C4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880912C0:
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_880912C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x880912D4;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880912f0
	if (ctx.cr6.lt) goto loc_880912F0;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x880912E8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_880912F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x880912FC;
	sub_8808FBC8(ctx, base);
loc_880912FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88093A00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x88093A08;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,728
	ctx.r4.s64 = 728;
	// stw r3,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88093A1C;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x88093A24;
	sub_88023F40(ctx, base);
	// li r5,728
	ctx.r5.s64 = 728;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88093A34;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x88093A3C;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88093A40;
	sub_88068E60(ctx, base);
	// stw r3,724(r31)
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x880240b8
	ctx.lr = 0x88093A64;
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
	ctx.lr = 0x88093A78;
	sub_88024DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880240e0
	ctx.lr = 0x88093A80;
	sub_880240E0(ctx, base);
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r3,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r3.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r10,724(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r5,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,21852(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 21852);
	// rlwinm r3,r9,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r8,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// subfic r3,r3,64
	ctx.xer.ca = ctx.r3.u32 <= 64;
	ctx.r3.u64 = static_cast<uint64_t>(64) - ctx.r3.u64;
	// stw r4,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r9,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r29,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// beq cr6,0x88093b0c
	if (ctx.cr6.eq) goto loc_88093B0C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88093b1c
	if (!ctx.cr6.eq) goto loc_88093B1C;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// b 0x88093b18
	goto loc_88093B18;
loc_88093B0C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r6,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_88093B18:
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
loc_88093B1C:
	// lwz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,476
	ctx.r9.s64 = 476;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r6,436
	ctx.r6.s64 = 436;
	// stw r8,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// li r5,412
	ctx.r5.s64 = 412;
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// li r3,372
	ctx.r3.s64 = 372;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// li r29,308
	ctx.r29.s64 = 308;
	// stw r7,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// li r28,268
	ctx.r28.s64 = 268;
	// li r27,376
	ctx.r27.s64 = 376;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r26,356
	ctx.r26.s64 = 356;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r25,336
	ctx.r25.s64 = 336;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r8,316
	ctx.r8.s64 = 316;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r24,296
	ctx.r24.s64 = 296;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r7,276
	ctx.r7.s64 = 276;
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r6,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// addi r10,r31,264
	ctx.r10.s64 = ctx.r31.s64 + 264;
	// stw r5,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r3,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// stw r29,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r28,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// stw r27,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r26,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// stw r25,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r25.u32);
	// stw r8,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r24,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r24.u32);
	// stw r7,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// stw r4,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
loc_88093BB4:
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
	// bne 0x88093bb4
	if (!ctx.cr0.eq) goto loc_88093BB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r31,512
	ctx.r8.s64 = ctx.r31.s64 + 512;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r10,r31,504
	ctx.r10.s64 = ctx.r31.s64 + 504;
	// lwz r27,4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,0(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r30,r27,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// rotlwi r4,r28,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// rotlwi r7,r29,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r9.u32);
	// rotlwi r29,r29,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r7,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r7.u32);
	// rotlwi r5,r27,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r6,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r6.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r29,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r28,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stw r27,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r27.u32);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// stw r28,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// stw r27,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r27.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r28,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r28.u32);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// stw r27,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r27.u32);
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// stw r28,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r28.u32);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// stw r27,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r27.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r30,92(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// stw r8,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r8.u32);
	// stw r30,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r4,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r4.u32);
	// stw r28,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r27,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r27.u32);
	// stw r28,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r27,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r27.u32);
	// stw r28,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// stw r27,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r27.u32);
	// stw r28,528(r31)
	REX_STORE_U32(ctx.r31.u32 + 528, ctx.r28.u32);
	// stw r5,532(r31)
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r5.u32);
	// stw r11,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r10,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x8813fa58
	ctx.lr = 0x88093D2C;
	sub_8813FA58(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,119
	ctx.r11.s64 = 119;
	// lis r6,-18
	ctx.r6.s64 = -1179648;
	// lwz r29,356(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r3,496
	ctx.r3.s64 = 496;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r28,9
	ctx.r28.s64 = 589824;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x880221d0
	ctx.lr = 0x88093D74;
	sub_880221D0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// stw r28,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x880221d0
	ctx.lr = 0x88093DA0;
	sub_880221D0(ctx, base);
	// sth r30,556(r31)
	REX_STORE_U16(ctx.r31.u32 + 556, ctx.r30.u16);
	// stw r30,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// sth r30,636(r31)
	REX_STORE_U16(ctx.r31.u32 + 636, ctx.r30.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,672(r31)
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// lis r5,28
	ctx.r5.s64 = 1835008;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// sth r9,552(r31)
	REX_STORE_U16(ctx.r31.u32 + 552, ctx.r9.u16);
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// sth r9,632(r31)
	REX_STORE_U16(ctx.r31.u32 + 632, ctx.r9.u16);
	// lis r4,20
	ctx.r4.s64 = 1310720;
	// stw r10,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// lis r28,8
	ctx.r28.s64 = 524288;
	// stw r10,656(r31)
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
	// addi r8,r8,9016
	ctx.r8.s64 = ctx.r8.s64 + 9016;
	// stw r5,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r5.u32);
	// addi r7,r7,9016
	ctx.r7.s64 = ctx.r7.s64 + 9016;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// stw r11,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,580(r31)
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r4,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r4.u32);
	// stw r28,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r28.u32);
	// addi r4,r11,10520
	ctx.r4.s64 = ctx.r11.s64 + 10520;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
	// stw r10,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// stw r9,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// stw r8,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// stw r31,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r31.u32);
	// stw r7,672(r31)
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r7.u32);
	// stw r31,676(r31)
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r31.u32);
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x88023e90
	ctx.lr = 0x88093E48;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8813fa58
	ctx.lr = 0x88093E58;
	sub_8813FA58(ctx, base);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88022730
	ctx.lr = 0x88093E68;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x88022b68
	ctx.lr = 0x88093E74;
	sub_88022B68(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809A670) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8809A678;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
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
	// blt cr6,0x8809a794
	if (ctx.cr6.lt) goto loc_8809A794;
	// beq cr6,0x8809a740
	if (ctx.cr6.eq) goto loc_8809A740;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809a7b8
	if (!ctx.cr6.lt) goto loc_8809A7B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-26
	ctx.r6.s64 = ctx.r28.s64 + -26;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A6CC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-20
	ctx.r6.s64 = ctx.r28.s64 + -20;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A6F0;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-14
	ctx.r6.s64 = ctx.r28.s64 + -14;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A714;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-8
	ctx.r6.s64 = ctx.r28.s64 + -8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A738;
	sub_88013CE0(ctx, base);
	// addi r6,r28,-2
	ctx.r6.s64 = ctx.r28.s64 + -2;
	// b 0x8809a798
	goto loc_8809A798;
loc_8809A740:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-32
	ctx.r6.s64 = ctx.r28.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A764;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r28,-22
	ctx.r6.s64 = ctx.r28.s64 + -22;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A788;
	sub_88013CE0(ctx, base);
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r6,r28,-12
	ctx.r6.s64 = ctx.r28.s64 + -12;
	// b 0x8809a79c
	goto loc_8809A79C;
loc_8809A794:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_8809A798:
	// li r9,24
	ctx.r9.s64 = 24;
loc_8809A79C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8809A7B8;
	sub_88013CE0(ctx, base);
loc_8809A7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809C028) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,130
	ctx.r4.s64 = ctx.r1.s64 + 130;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8813fa88
	ctx.lr = 0x8809C048;
	sub_8813FA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88027210
	ctx.lr = 0x8809C050;
	sub_88027210(ctx, base);
	// lhz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// li r8,5
	ctx.r8.s64 = 5;
	// lhz r6,130(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r11,r11,7888
	ctx.r11.s64 = ctx.r11.s64 + 7888;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r31,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// ori r9,r9,32896
	ctx.r9.u64 = ctx.r9.u64 | 32896;
	// stb r31,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r30.u8);
	// li r8,240
	ctx.r8.s64 = 240;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8813fd10
	ctx.lr = 0x8809C0A0;
	sub_8813FD10(ctx, base);
	// lhz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r6,130(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// addi r3,r5,7920
	ctx.r3.s64 = ctx.r5.s64 + 7920;
	// stb r31,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r31,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r31.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// ori r9,r9,32896
	ctx.r9.u64 = ctx.r9.u64 | 32896;
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r8,240
	ctx.r8.s64 = 240;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// bl 0x8813fd10
	ctx.lr = 0x8809C0E8;
	sub_8813FD10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88027210
	ctx.lr = 0x8809C0F0;
	sub_88027210(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_8809C4B8) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,31732
	ctx.r31.s64 = ctx.r11.s64 + 31732;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8809C4E0;
	sub_8813FA58(ctx, base);
	// li r11,240
	ctx.r11.s64 = 240;
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8809C640) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8809C648;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r31,r10,31760
	ctx.r31.s64 = ctx.r10.s64 + 31760;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r31,72
	ctx.r9.s64 = ctx.r31.s64 + 72;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8809C674:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,-32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -32);
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addme r4,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// and r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x8809c6b4
	if (ctx.cr6.eq) goto loc_8809C6B4;
	// lhz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8809c6b4
	if (!ctx.cr6.eq) goto loc_8809C6B4;
	// cmpwi cr6,r11,7168
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7168, ctx.xer);
	// bgt cr6,0x8809c6b4
	if (ctx.cr6.gt) goto loc_8809C6B4;
	// sth r28,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r28.u16);
loc_8809C6B4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x8809c674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809C674;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8809c8d8
	if (ctx.cr6.gt) goto loc_8809C8D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8809c764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8809C764;
	// bdzf 4*cr6+eq,0x8809c788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8809C788;
	// bdzf 4*cr6+eq,0x8809c7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8809C7E8;
	// bdzf 4*cr6+eq,0x8809c810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8809C810;
	// bne cr6,0x8809c86c
	if (!ctx.cr6.eq) goto loc_8809C86C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r30,50
	ctx.r30.s64 = 50;
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r8,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
loc_8809C718:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8801a860
	ctx.lr = 0x8809C72C;
	sub_8801A860(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bne 0x8809c718
	if (!ctx.cr0.eq) goto loc_8809C718;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x8809c8d8
	goto loc_8809C8D8;
loc_8809C764:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809c8d8
	if (ctx.cr6.eq) goto loc_8809C8D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r28,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// b 0x8809c8d8
	goto loc_8809C8D8;
loc_8809C788:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8801a860
	ctx.lr = 0x8809C7A8;
	sub_8801A860(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bgt 0x8809c8d8
	if (ctx.cr0.gt) goto loc_8809C8D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8809c128
	ctx.lr = 0x8809C7DC;
	sub_8809C128(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8809c8d8
	goto loc_8809C8D8;
loc_8809C7E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,232
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 232, ctx.xer);
	// blt cr6,0x8809c8d8
	if (ctx.cr6.lt) goto loc_8809C8D8;
	// li r11,232
	ctx.r11.s64 = 232;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8809c8d8
	goto loc_8809C8D8;
loc_8809C810:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8809c84c
	if (ctx.cr6.eq) goto loc_8809C84C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8809c844
	if (!ctx.cr6.gt) goto loc_8809C844;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// li r10,232
	ctx.r10.s64 = 232;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r7,r27,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r27.s32 / ctx.r10.s32 : 0);
	// andc r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// divw r11,r8,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8809c848
	goto loc_8809C848;
loc_8809C844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8809C848:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8809C84C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809c8d8
	if (!ctx.cr6.eq) goto loc_8809C8D8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8809c138
	ctx.lr = 0x8809C868;
	sub_8809C138(ctx, base);
	// b 0x8809c8d8
	goto loc_8809C8D8;
loc_8809C86C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8801a860
	ctx.lr = 0x8809C88C;
	sub_8801A860(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// blt cr6,0x8809c8d8
	if (ctx.cr6.lt) goto loc_8809C8D8;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r10,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8809C8D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8809c914
	if (!ctx.cr0.lt) goto loc_8809C914;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,18
	ctx.r10.s64 = 18;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8809C914:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x8809cb18
	if (ctx.cr6.eq) goto loc_8809CB18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,60
	ctx.r29.s64 = 3932160;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r11,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r11.u64;
	// li r3,752
	ctx.r3.s64 = 752;
	// bl 0x8801a9c8
	ctx.lr = 0x8809C948;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809C95C;
	sub_8813FF90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r30,180
	ctx.r30.s64 = 11796480;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// li r3,753
	ctx.r3.s64 = 753;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809C978;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809C98C;
	sub_8813FF90(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809c9f0
	if (ctx.cr6.eq) goto loc_8809C9F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-232
	ctx.r11.s64 = ctx.r11.s64 + -232;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r10,754
	ctx.r3.s64 = ctx.r10.s64 + 754;
	// rlwinm r4,r11,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bl 0x8801a9c8
	ctx.lr = 0x8809C9B8;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8809C9C4;
	sub_8813FF28(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809C9DC;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// bl 0x8809c508
	ctx.lr = 0x8809C9F0;
	sub_8809C508(ctx, base);
loc_8809C9F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r3,750
	ctx.r3.s64 = 750;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r11,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CA08;
	sub_8801A9C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,751
	ctx.r3.s64 = 751;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CA20;
	sub_8801A9C8(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809cb18
	if (ctx.cr6.eq) goto loc_8809CB18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,292
	ctx.r5.s64 = 19136512;
	// li r3,752
	ctx.r3.s64 = 752;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r11,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CA44;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809CA58;
	sub_8813FF90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,292
	ctx.r5.s64 = 19136512;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,753
	ctx.r3.s64 = 753;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CA70;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809CA84;
	sub_8813FF90(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809cae8
	if (ctx.cr6.eq) goto loc_8809CAE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,288
	ctx.r5.s64 = 18874368;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-232
	ctx.r11.s64 = ctx.r11.s64 + -232;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r10,754
	ctx.r3.s64 = ctx.r10.s64 + 754;
	// rlwinm r4,r11,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CAB0;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8809CABC;
	sub_8813FF28(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809CAD4;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lis r4,284
	ctx.r4.s64 = 18612224;
	// bl 0x8809c508
	ctx.lr = 0x8809CAE8;
	sub_8809C508(ctx, base);
loc_8809CAE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,288
	ctx.r5.s64 = 18874368;
	// li r3,750
	ctx.r3.s64 = 750;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r4,r11,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CB00;
	sub_8801A9C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,288
	ctx.r5.s64 = 18874368;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,751
	ctx.r3.s64 = 751;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809CB18;
	sub_8801A9C8(ctx, base);
loc_8809CB18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A02F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x880A0300;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2200
	ctx.r3.s64 = 2200;
	// bl 0x8813f998
	ctx.lr = 0x880A0318;
	sub_8813F998(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8801b4e8
	ctx.lr = 0x880A0328;
	sub_8801B4E8(ctx, base);
	// li r5,2200
	ctx.r5.s64 = 2200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880A0338;
	sub_8813FA58(ctx, base);
	// li r23,255
	ctx.r23.s64 = 255;
	// stw r23,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r23.u32);
	// bl 0x880676d0
	ctx.lr = 0x880A0344;
	sub_880676D0(ctx, base);
	// li r11,1800
	ctx.r11.s64 = 1800;
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r3,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r31,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
	// bl 0x880676f0
	ctx.lr = 0x880A035C;
	sub_880676F0(ctx, base);
	// stw r3,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r3.u32);
	// stw r31,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// bl 0x8813fa80
	ctx.lr = 0x880A0368;
	sub_8813FA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880a0378
	if (ctx.cr6.eq) goto loc_880A0378;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_880A0378:
	// bl 0x8809ed78
	ctx.lr = 0x880A037C;
	sub_8809ED78(ctx, base);
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x88067710
	ctx.lr = 0x880A038C;
	sub_88067710(ctx, base);
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r22,r11,43691
	ctx.r22.u64 = ctx.r11.u64 | 43691;
	// lis r24,-30608
	ctx.r24.s64 = -2005925888;
loc_880A03A4:
	// mulhwu r11,r29,r22
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r22.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r27,r29
	ctx.r27.s64 = ctx.r29.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r26,r10,r29
	ctx.r26.u64 = ctx.r29.u64 - ctx.r10.u64;
loc_880A03C0:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x880ac0a0
	ctx.lr = 0x880A03E0;
	sub_880AC0A0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880abfb0
	ctx.lr = 0x880A03F0;
	sub_880ABFB0(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880abef0
	ctx.lr = 0x880A0404;
	sub_880ABEF0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880abea0
	ctx.lr = 0x880A0414;
	sub_880ABEA0(ctx, base);
	// std r3,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r3.u64);
	// sth r27,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r27.u16);
	// stw r26,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// stw r23,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r23.u32);
	// lwz r11,21900(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 21900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a0434
	if (ctx.cr6.eq) goto loc_880A0434;
	// stw r20,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r20.u32);
loc_880A0434:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x880a03c0
	if (ctx.cr6.lt) goto loc_880A03C0;
	// addi r25,r25,5
	ctx.r25.s64 = ctx.r25.s64 + 5;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r25,30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 30, ctx.xer);
	// blt cr6,0x880a03a4
	if (ctx.cr6.lt) goto loc_880A03A4;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8809fc60
	ctx.lr = 0x880A046C;
	sub_8809FC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30713
	ctx.r10.s64 = -2012807168;
	// stw r11,21900(r24)
	REX_STORE_U32(ctx.r24.u32 + 21900, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-9280
	ctx.r4.s64 = ctx.r10.s64 + -9280;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8801b4b0
	ctx.lr = 0x880A0488;
	sub_8801B4B0(ctx, base);
	// lis r9,-30710
	ctx.r9.s64 = -2012610560;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r9,-520
	ctx.r4.s64 = ctx.r9.s64 + -520;
	// bl 0x8801b478
	ctx.lr = 0x880A0498;
	sub_8801B478(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A0E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x880A0E98;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,240
	ctx.r31.s64 = ctx.r11.s64 + 240;
	// bl 0x8801a150
	ctx.lr = 0x880A0EB0;
	sub_8801A150(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r21,r11,18004
	ctx.r21.s64 = ctx.r11.s64 + 18004;
	// addi r22,r10,17988
	ctx.r22.s64 = ctx.r10.s64 + 17988;
	// addi r23,r9,17972
	ctx.r23.s64 = ctx.r9.s64 + 17972;
	// addi r24,r8,17956
	ctx.r24.s64 = ctx.r8.s64 + 17956;
	// bne cr6,0x880a0ee4
	if (!ctx.cr6.eq) goto loc_880A0EE4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// b 0x880a0f10
	goto loc_880A0F10;
loc_880A0EE4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x880a0ef4
	if (!ctx.cr6.eq) goto loc_880A0EF4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x880a0f10
	goto loc_880A0F10;
loc_880A0EF4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x880a0f04
	if (!ctx.cr6.eq) goto loc_880A0F04;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x880a0f10
	goto loc_880A0F10;
loc_880A0F04:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x880a0f20
	if (!ctx.cr6.eq) goto loc_880A0F20;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_880A0F10:
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88140588
	ctx.lr = 0x880A0F20;
	sub_88140588(ctx, base);
loc_880A0F20:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x881405d8
	ctx.lr = 0x880A0F38;
	sub_881405D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a150
	ctx.lr = 0x880A0F40;
	sub_8801A150(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// addi r27,r11,17944
	ctx.r27.s64 = ctx.r11.s64 + 17944;
	// li r5,250
	ctx.r5.s64 = 250;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x88140588
	ctx.lr = 0x880A0F60;
	sub_88140588(ctx, base);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r30,r11,17568
	ctx.r30.s64 = ctx.r11.s64 + 17568;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,250
	ctx.r5.s64 = 250;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x88140588
	ctx.lr = 0x880A0F8C;
	sub_88140588(ctx, base);
	// li r5,250
	ctx.r5.s64 = 250;
	// lwz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x88140588
	ctx.lr = 0x880A0FA0;
	sub_88140588(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8801a150
	ctx.lr = 0x880A0FA8;
	sub_8801A150(ctx, base);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// addi r6,r9,17936
	ctx.r6.s64 = ctx.r9.s64 + 17936;
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x88140588
	ctx.lr = 0x880A0FC4;
	sub_88140588(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,250
	ctx.r5.s64 = 250;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,260
	ctx.r4.s64 = 260;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x88140588
	ctx.lr = 0x880A0FEC;
	sub_88140588(ctx, base);
	// li r5,250
	ctx.r5.s64 = 250;
	// lwz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// li r29,864
	ctx.r29.s64 = 864;
	// bl 0x88140588
	ctx.lr = 0x880A1004;
	sub_88140588(ctx, base);
	// bl 0x8813fa80
	ctx.lr = 0x880A1008;
	sub_8813FA80(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880a1078
	if (ctx.cr6.eq) goto loc_880A1078;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a150
	ctx.lr = 0x880A101C;
	sub_8801A150(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// addi r6,r11,17928
	ctx.r6.s64 = ctx.r11.s64 + 17928;
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// bl 0x88140588
	ctx.lr = 0x880A1038;
	sub_88140588(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,240
	ctx.r10.s64 = ctx.r30.s64 + 240;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,250
	ctx.r5.s64 = 250;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,260
	ctx.r4.s64 = 260;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x88140588
	ctx.lr = 0x880A1060;
	sub_88140588(ctx, base);
	// li r5,250
	ctx.r5.s64 = 250;
	// lwz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,1320
	ctx.r3.s64 = ctx.r31.s64 + 1320;
	// li r29,1320
	ctx.r29.s64 = 1320;
	// bl 0x88140588
	ctx.lr = 0x880A1078;
	sub_88140588(ctx, base);
loc_880A1078:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8801a150
	ctx.lr = 0x880A1080;
	sub_8801A150(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r29,400
	ctx.r29.s64 = ctx.r29.s64 + 400;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bne cr6,0x880a109c
	if (!ctx.cr6.eq) goto loc_880A109C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// b 0x880a10c8
	goto loc_880A10C8;
loc_880A109C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x880a10ac
	if (!ctx.cr6.eq) goto loc_880A10AC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x880a10c8
	goto loc_880A10C8;
loc_880A10AC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x880a10bc
	if (!ctx.cr6.eq) goto loc_880A10BC;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x880a10c8
	goto loc_880A10C8;
loc_880A10BC:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x880a10d8
	if (!ctx.cr6.eq) goto loc_880A10D8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_880A10C8:
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x88140588
	ctx.lr = 0x880A10D8;
	sub_88140588(ctx, base);
loc_880A10D8:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x881405d8
	ctx.lr = 0x880A10F4;
	sub_881405D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a150
	ctx.lr = 0x880A10FC;
	sub_8801A150(ctx, base);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,260
	ctx.r4.s64 = 260;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x88140588
	ctx.lr = 0x880A1118;
	sub_88140588(ctx, base);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,250
	ctx.r5.s64 = 250;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88140588
	ctx.lr = 0x880A1144;
	sub_88140588(ctx, base);
	// li r5,250
	ctx.r5.s64 = 250;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r29,160
	ctx.r3.s64 = ctx.r29.s64 + 160;
	// bl 0x88140588
	ctx.lr = 0x880A1158;
	sub_88140588(ctx, base);
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// subfic r9,r26,-240
	ctx.xer.ca = ctx.r26.u32 <= 4294967056;
	ctx.r9.u64 = static_cast<uint64_t>(-240) - ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880a1178
	if (ctx.cr6.gt) goto loc_880A1178;
	// li r11,-240
	ctx.r11.s64 = -240;
	// stw r11,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r11.u32);
loc_880A1178:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A2F78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// addi r10,r11,32040
	ctx.r10.s64 = ctx.r11.s64 + 32040;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,272(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A3070) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x880A3078;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,12(r3)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r27,15
	ctx.r27.s64 = 983040;
	// lwz r28,20(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,24(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r25,28(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r27,r27,16960
	ctx.r27.u64 = ctx.r27.u64 | 16960;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x880a31a4
	if (ctx.cr6.eq) goto loc_880A31A4;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// li r21,10
	ctx.r21.s64 = 10;
	// lis r22,8
	ctx.r22.s64 = 524288;
loc_880A30B4:
	// rotlwi r11,r23,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// divw. r29,r23,r27
	ctx.r29.u64 = uint32_t((ctx.r27.s32 && !(ctx.r23.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r23.s32 / ctx.r27.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq 0x880a30d8
	if (ctx.cr0.eq) goto loc_880A30D8;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x880a30e0
	goto loc_880A30E0;
loc_880A30D8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x880a3190
	if (ctx.cr6.eq) goto loc_880A3190;
loc_880A30E0:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r5,r24,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r24.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r28,r24
	ctx.r4.u64 = ctx.r28.u64 + ctx.r24.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r11,r10,11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
	// bl 0x8801a9c8
	ctx.lr = 0x880A3108;
	sub_8801A9C8(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880A312C;
	sub_8813FF90(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x880A3138;
	sub_8813FF48(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r3,r4,30
	ctx.r3.u64 = ctx.r4.u32 & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r11,r3,11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
	// bl 0x8801a9c8
	ctx.lr = 0x880A3160;
	sub_8801A9C8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880A317C;
	sub_8813FF90(ctx, base);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// bl 0x8813ff48
	ctx.lr = 0x880A318C;
	sub_8813FF48(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_880A3190:
	// mullw r11,r29,r27
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// divw. r27,r27,r21
	ctx.r27.u64 = uint32_t((ctx.r21.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r27.s32 / ctx.r21.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// bne 0x880a30b4
	if (!ctx.cr0.eq) goto loc_880A30B4;
loc_880A31A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A3EB8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// bl 0x880a3d38
	ctx.lr = 0x880A3EE0;
	sub_880A3D38(ctx, base);
	// lis r9,-30710
	ctx.r9.s64 = -2012610560;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r9,15032
	ctx.r8.s64 = ctx.r9.s64 + 15032;
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_880A40E0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// bl 0x880a3f58
	ctx.lr = 0x880A4108;
	sub_880A3F58(ctx, base);
	// lis r9,-30710
	ctx.r9.s64 = -2012610560;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r9,15032
	ctx.r8.s64 = ctx.r9.s64 + 15032;
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_880A45E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// bl 0x880a44a8
	ctx.lr = 0x880A4608;
	sub_880A44A8(ctx, base);
	// lis r9,-30710
	ctx.r9.s64 = -2012610560;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r9,15032
	ctx.r8.s64 = ctx.r9.s64 + 15032;
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_880A46D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880a4794
	if (!ctx.cr6.eq) goto loc_880A4794;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880a4730
	if (!ctx.cr6.lt) goto loc_880A4730;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// b 0x880a4740
	goto loc_880A4740;
loc_880A4730:
	// lis r8,224
	ctx.r8.s64 = 14680064;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x880a4748
	if (!ctx.cr6.gt) goto loc_880A4748;
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_880A4740:
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880A4748:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// blt cr6,0x880a476c
	if (ctx.cr6.lt) goto loc_880A476C;
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_880A476C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880a4794
	if (ctx.cr6.gt) goto loc_880A4794;
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
loc_880A4794:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,139
	ctx.r6.s64 = 139;
	// addis r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -3145728;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,1661
	ctx.r3.s64 = 1661;
	// bl 0x8801a9c8
	ctx.lr = 0x880A47B4;
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
	ctx.lr = 0x880A47C8;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880a3678
	ctx.lr = 0x880A47D0;
	sub_880A3678(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_880A63D0) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x880a6450
	if (ctx.cr6.eq) goto loc_880A6450;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a6450
	if (ctx.cr6.eq) goto loc_880A6450;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r9,836(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 836);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A6418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a6450
	if (!ctx.cr6.eq) goto loc_880A6450;
loc_880A6420:
	// li r11,67
	ctx.r11.s64 = 67;
	// li r10,65
	ctx.r10.s64 = 65;
	// li r9,86
	ctx.r9.s64 = 86;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
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
loc_880A6450:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32472
	ctx.r11.s64 = ctx.r11.s64 + -32472;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_880A6468:
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x880a6420
	if (ctx.cr6.eq) goto loc_880A6420;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a6420
	if (ctx.cr6.eq) goto loc_880A6420;
	// lbz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880a64a8
	if (!ctx.cr6.eq) goto loc_880A64A8;
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x880a64a8
	if (!ctx.cr6.eq) goto loc_880A64A8;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880a6420
	if (ctx.cr6.eq) goto loc_880A6420;
loc_880A64A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// blt cr6,0x880a6468
	if (ctx.cr6.lt) goto loc_880A6468;
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
}

DEFINE_REX_FUNC(sub_880A85C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a85f4
	if (!ctx.cr6.eq) goto loc_880A85F4;
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
loc_880A85F4:
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// bl 0x8801a860
	ctx.lr = 0x880A8608;
	sub_8801A860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A8988) {
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
	// bl 0x880a8720
	ctx.lr = 0x880A89A0;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a8a10
	if (!ctx.cr6.eq) goto loc_880A8A10;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x880a89e8
	if (!ctx.cr0.lt) goto loc_880A89E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// blt cr6,0x880a89e8
	if (ctx.cr6.lt) goto loc_880A89E8;
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
loc_880A89E8:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32312
	ctx.r11.s64 = ctx.r11.s64 + -32312;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,2085
	ctx.r4.s64 = ctx.r10.s64 + 2085;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x880a87c0
	ctx.lr = 0x880A8A10;
	sub_880A87C0(ctx, base);
loc_880A8A10:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_880A8E98) {
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
	// bl 0x880a8720
	ctx.lr = 0x880A8EB0;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a8f2c
	if (!ctx.cr6.eq) goto loc_880A8F2C;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r11,-31208
	ctx.r10.s64 = ctx.r11.s64 + -31208;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x880a8f08
	if (!ctx.cr0.lt) goto loc_880A8F08;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// blt cr6,0x880a8ef8
	if (ctx.cr6.lt) goto loc_880A8EF8;
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
loc_880A8EF8:
	// addi r9,r10,-144
	ctx.r9.s64 = ctx.r10.s64 + -144;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_880A8F08:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,2172
	ctx.r4.s64 = ctx.r11.s64 + 2172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x880a87c0
	ctx.lr = 0x880A8F2C;
	sub_880A87C0(ctx, base);
loc_880A8F2C:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_880A9660) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-27832(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -27832);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9808) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-27264
	ctx.r11.s64 = ctx.r11.s64 + -27264;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9958) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// addi r9,r11,-13120
	ctx.r9.s64 = ctx.r11.s64 + -13120;
	// lwz r11,-13120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_880A9980:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a9994
	if (ctx.cr6.eq) goto loc_880A9994;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_880A9994:
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// bdnz 0x880a9980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A9980;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9DA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8801a448
	ctx.lr = 0x880A9DC8;
	sub_8801A448(ctx, base);
	// addi r10,r3,-7
	ctx.r10.s64 = ctx.r3.s64 + -7;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,15
	ctx.r3.s64 = 15;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9DE8;
	sub_8801A448(ctx, base);
	// addi r7,r3,26
	ctx.r7.s64 = ctx.r3.s64 + 26;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8801a448
	ctx.lr = 0x880A9DF8;
	sub_8801A448(ctx, base);
	// add r6,r3,r30
	ctx.r6.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,-30693
	ctx.r4.s64 = -2011496448;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// stw r6,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r10,r4,-26976
	ctx.r10.s64 = ctx.r4.s64 + -26976;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r5,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9E30;
	sub_8801A448(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// stw r5,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// blt cr6,0x880a9e50
	if (ctx.cr6.lt) goto loc_880A9E50;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880A9E50:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_880AA928) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AA95C;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AA978;
	sub_8813FF90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8813ff48
	ctx.lr = 0x880AA984;
	sub_8813FF48(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze. r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880aa9c4
	if (ctx.cr0.eq) goto loc_880AA9C4;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AA9AC;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AA9C4;
	sub_8813FF90(ctx, base);
loc_880AA9C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880aa9fc
	if (!ctx.cr0.lt) goto loc_880AA9FC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bgt 0x880aa9fc
	if (ctx.cr0.gt) goto loc_880AA9FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880aaa20
	goto loc_880AAA20;
loc_880AA9FC:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x880aaa1c
	if (!ctx.cr0.lt) goto loc_880AAA1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880aaa20
	goto loc_880AAA20;
loc_880AAA1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AAA20:
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

DEFINE_REX_FUNC(sub_880AB658) {
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
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// bge 0x880ab690
	if (!ctx.cr0.lt) goto loc_880AB690;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880ab760
	goto loc_880AB760;
loc_880AB690:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880ab6c8
	if (!ctx.cr0.lt) goto loc_880AB6C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne 0x880ab6c8
	if (!ctx.cr0.eq) goto loc_880AB6C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880ab760
	goto loc_880AB760;
loc_880AB6C8:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AB6E4;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AB708;
	sub_8813FF90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8813ff48
	ctx.lr = 0x880AB714;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r3,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AB744;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AB75C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AB760:
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

DEFINE_REX_FUNC(sub_880AC300) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8801b368
	ctx.lr = 0x880AC31C;
	sub_8801B368(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8801b368
	ctx.lr = 0x880AC324;
	sub_8801B368(ctx, base);
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

DEFINE_REX_FUNC(sub_880B18C8) {
	REX_FUNC_PROLOGUE();
	// lis r5,-30606
	ctx.r5.s64 = -2005794816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r5,17480
	ctx.r4.s64 = ctx.r5.s64 + 17480;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r10,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r9,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// stw r8,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// stw r7,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r11,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r11.u32);
	// stw r10,-8(r4)
	REX_STORE_U32(ctx.r4.u32 + -8, ctx.r10.u32);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,17480(r5)
	REX_STORE_U32(ctx.r5.u32 + 17480, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B1A10) {
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
	// li r31,37
	ctx.r31.s64 = 37;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b1a7c
	if (!ctx.cr6.eq) goto loc_880B1A7C;
	// bl 0x880694f0
	ctx.lr = 0x880B1A38;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1a58
	if (ctx.cr6.eq) goto loc_880B1A58;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,18
	ctx.r31.s64 = 18;
	// bl 0x8801a138
	ctx.lr = 0x880B1A4C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1a7c
	if (ctx.cr6.eq) goto loc_880B1A7C;
loc_880B1A58:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1A7C:
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

DEFINE_REX_FUNC(sub_880B1C10) {
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
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b1c7c
	if (!ctx.cr6.eq) goto loc_880B1C7C;
	// bl 0x880694f0
	ctx.lr = 0x880B1C38;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1c58
	if (ctx.cr6.eq) goto loc_880B1C58;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B1C4C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1c7c
	if (ctx.cr6.eq) goto loc_880B1C7C;
loc_880B1C58:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,66
	ctx.r4.s64 = 66;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1C7C:
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

DEFINE_REX_FUNC(sub_880B1F10) {
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
	// li r31,35
	ctx.r31.s64 = 35;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b1f7c
	if (!ctx.cr6.eq) goto loc_880B1F7C;
	// bl 0x880694f0
	ctx.lr = 0x880B1F38;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1f58
	if (ctx.cr6.eq) goto loc_880B1F58;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,17
	ctx.r31.s64 = 17;
	// bl 0x8801a138
	ctx.lr = 0x880B1F4C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1f7c
	if (ctx.cr6.eq) goto loc_880B1F7C;
loc_880B1F58:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1F7C:
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

DEFINE_REX_FUNC(sub_880B24B0) {
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
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b251c
	if (!ctx.cr6.eq) goto loc_880B251C;
	// bl 0x880694f0
	ctx.lr = 0x880B24D8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b24f8
	if (ctx.cr6.eq) goto loc_880B24F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B24EC;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b251c
	if (ctx.cr6.eq) goto loc_880B251C;
loc_880B24F8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B251C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B251C:
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

DEFINE_REX_FUNC(sub_880B2798) {
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
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// lwz r11,17500(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2840
	if (!ctx.cr6.eq) goto loc_880B2840;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r11,17500(r10)
	REX_STORE_U32(ctx.r10.u32 + 17500, ctx.r11.u32);
	// lwz r11,21888(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2840
	if (!ctx.cr6.eq) goto loc_880B2840;
	// bl 0x880694f0
	ctx.lr = 0x880B27DC;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b27fc
	if (ctx.cr6.eq) goto loc_880B27FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,10
	ctx.r30.s64 = 10;
	// bl 0x8801a138
	ctx.lr = 0x880B27F0;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2840
	if (ctx.cr6.eq) goto loc_880B2840;
loc_880B27FC:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,71
	ctx.r5.s64 = 71;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,89
	ctx.r3.s64 = 89;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B281C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2840
	if (ctx.cr6.eq) goto loc_880B2840;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,71
	ctx.r6.s64 = 71;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2840;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2840:
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

DEFINE_REX_FUNC(sub_880B2FA8) {
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
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r30,49
	ctx.r30.s64 = 49;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b3038
	if (!ctx.cr6.eq) goto loc_880B3038;
	// bl 0x880694f0
	ctx.lr = 0x880B2FD4;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b2ff4
	if (ctx.cr6.eq) goto loc_880B2FF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,24
	ctx.r30.s64 = 24;
	// bl 0x8801a138
	ctx.lr = 0x880B2FE8;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3038
	if (ctx.cr6.eq) goto loc_880B3038;
loc_880B2FF4:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,253
	ctx.r5.s64 = 253;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B3014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b3038
	if (ctx.cr6.eq) goto loc_880B3038;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,253
	ctx.r6.s64 = 253;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B3038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3038:
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

DEFINE_REX_FUNC(sub_880B3590) {
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
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r30,66
	ctx.r30.s64 = 66;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b3620
	if (!ctx.cr6.eq) goto loc_880B3620;
	// bl 0x880694f0
	ctx.lr = 0x880B35BC;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b35dc
	if (ctx.cr6.eq) goto loc_880B35DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,33
	ctx.r30.s64 = 33;
	// bl 0x8801a138
	ctx.lr = 0x880B35D0;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3620
	if (ctx.cr6.eq) goto loc_880B3620;
loc_880B35DC:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,129
	ctx.r3.s64 = 129;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B35FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b3620
	if (ctx.cr6.eq) goto loc_880B3620;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,254
	ctx.r6.s64 = 254;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,129
	ctx.r4.s64 = 129;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B3620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3620:
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

DEFINE_REX_FUNC(sub_880B3BE0) {
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
	// bne cr6,0x880b3c4c
	if (!ctx.cr6.eq) goto loc_880B3C4C;
	// bl 0x880694f0
	ctx.lr = 0x880B3C08;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3c28
	if (ctx.cr6.eq) goto loc_880B3C28;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B3C1C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3c4c
	if (ctx.cr6.eq) goto loc_880B3C4C;
loc_880B3C28:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B3C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3C4C:
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

DEFINE_REX_FUNC(sub_880B4190) {
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
	ctx.lr = 0x880B41A0;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b41c8
	if (!ctx.cr6.eq) goto loc_880B41C8;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B41C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B41C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4340) {
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
	ctx.lr = 0x880B4350;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b4378
	if (!ctx.cr6.eq) goto loc_880B4378;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B4378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4378:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B5198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B51A0;
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
	ctx.lr = 0x880B51B0;
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
	ctx.lr = 0x880B51C4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880b5238
	if (!ctx.cr0.lt) goto loc_880B5238;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x880b51f8
	if (ctx.cr6.lt) goto loc_880B51F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_880B51F8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b5238
	if (!ctx.cr6.eq) goto loc_880B5238;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x880b2c60
	ctx.lr = 0x880B5210;
	sub_880B2C60(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x880b523c
	if (ctx.cr6.lt) goto loc_880B523C;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880B5238:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880B523C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B57F8) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021898
	ctx.lr = 0x880B5824;
	sub_88021898(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r6,-30709
	ctx.r6.s64 = -2012545024;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// addi r5,r6,22272
	ctx.r5.s64 = ctx.r6.s64 + 22272;
	// stw r10,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// stw r11,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r11.u32);
	// bl 0x88021848
	ctx.lr = 0x880B586C;
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

DEFINE_REX_FUNC(sub_880B5AE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880B5AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B5B00;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021898
	ctx.lr = 0x880B5B14;
	sub_88021898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// stw r11,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r4,948(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 948);
	// bl 0x88021928
	ctx.lr = 0x880B5B34;
	sub_88021928(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,948(r28)
	REX_STORE_U32(ctx.r28.u32 + 948, ctx.r29.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r31,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// lis r8,-30709
	ctx.r8.s64 = -2012545024;
	// stw r10,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r5,r8,23040
	ctx.r5.s64 = ctx.r8.s64 + 23040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021848
	ctx.lr = 0x880B5B60;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B5DC0) {
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
	ctx.lr = 0x880B5DE0;
	sub_88023F40(ctx, base);
	// lwz r10,1236(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1236);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,1236(r3)
	REX_STORE_U32(ctx.r3.u32 + 1236, ctx.r10.u32);
	// bgt 0x880b5e18
	if (ctx.cr0.gt) goto loc_880B5E18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1236(r11)
	REX_STORE_U32(ctx.r11.u32 + 1236, ctx.r10.u32);
	// bl 0x880bb400
	ctx.lr = 0x880B5E04;
	sub_880BB400(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021928
	ctx.lr = 0x880B5E10;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880b5e1c
	goto loc_880B5E1C;
loc_880B5E18:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880B5E1C:
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

DEFINE_REX_FUNC(sub_880B6630) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B6638;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B664C;
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
	ctx.lr = 0x880B6660;
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
	// bge 0x880b6764
	if (!ctx.cr0.lt) goto loc_880B6764;
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
	// bne cr6,0x880b66ac
	if (!ctx.cr6.eq) goto loc_880B66AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B66A8;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_880B66AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88013ce0
	ctx.lr = 0x880B66D0;
	sub_88013CE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,38
	ctx.r3.s64 = 38;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,-30
	ctx.r6.s64 = ctx.r11.s64 + -30;
	// bl 0x880140f0
	ctx.lr = 0x880B670C;
	sub_880140F0(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b6764
	if (!ctx.cr0.lt) goto loc_880B6764;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880b6738
	if (!ctx.cr0.lt) goto loc_880B6738;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880B6738;
	sub_88021598(ctx, base);
loc_880B6738:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x880b6754
	if (!ctx.cr6.gt) goto loc_880B6754;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880B6754:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880B6764:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B8480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B8488;
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
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880B84A8;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r6,-30708
	ctx.r6.s64 = -2012479488;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addi r5,r6,-31960
	ctx.r5.s64 = ctx.r6.s64 + -31960;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// bl 0x880214b8
	ctx.lr = 0x880B84FC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B8C18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880B8C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880B8C44;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,24
	ctx.r7.s64 = 24;
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
	// stw r11,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r6,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r6.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r5,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r5.u32);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880B8C98;
	sub_880244A8(ctx, base);
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-30368
	ctx.r5.s64 = ctx.r3.s64 + -30368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880B8CAC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B95D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880B95E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880B9604;
	sub_88021508(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r9,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// stw r10,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// stw r8,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r11,32(r27)
	REX_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// stw r11,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// stw r11,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r7.u32);
	// stw r11,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,56(r27)
	REX_STORE_U32(ctx.r27.u32 + 56, ctx.r6.u32);
	// stw r11,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880B9658;
	sub_880244A8(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// stw r5,84(r27)
	REX_STORE_U32(ctx.r27.u32 + 84, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-28320
	ctx.r5.s64 = ctx.r3.s64 + -28320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880B9674;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B9CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880B9CB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B9CC4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880B9CD0;
	sub_88024030(ctx, base);
	// lwz r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1024);
	// lwz r10,1028(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1028);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,932(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// addze r29,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r28.s64 = temp.s64;
	// beq cr6,0x880b9d68
	if (ctx.cr6.eq) goto loc_880B9D68;
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// lis r25,52
	ctx.r25.s64 = 3407872;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lis r26,80
	ctx.r26.s64 = 5242880;
	// addi r30,r11,10099
	ctx.r30.s64 = ctx.r11.s64 + 10099;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// subf r4,r25,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r25.u64;
	// stw r5,964(r31)
	REX_STORE_U32(ctx.r31.u32 + 964, ctx.r5.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r4,960(r31)
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9D38;
	sub_8801A9C8(ctx, base);
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9D40;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r4,r29,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// stw r5,988(r31)
	REX_STORE_U32(ctx.r31.u32 + 988, ctx.r5.u32);
	// stw r4,984(r31)
	REX_STORE_U32(ctx.r31.u32 + 984, ctx.r4.u32);
	// b 0x880b9e18
	goto loc_880B9E18;
loc_880B9D68:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-28087
	ctx.r10.s64 = -1840709632;
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// ori r30,r10,9363
	ctx.r30.u64 = ctx.r10.u64 | 9363;
	// addi r24,r8,-23360
	ctx.r24.s64 = ctx.r8.s64 + -23360;
	// mulhw r10,r11,r30
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32)) >> 32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r29,r9
	ctx.r5.u64 = ctx.r29.u64 + ctx.r9.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r3,r7,r28
	ctx.r3.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r25,31
	ctx.r25.s64 = 2031616;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r26,87
	ctx.r26.s64 = 5701632;
	// mulli r9,r10,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r4,r25,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r25.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r3,r26
	ctx.r5.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x880B9DCC;
	sub_8801A9C8(ctx, base);
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9DD4;
	sub_8813FF48(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// mulhw r10,r11,r30
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32)) >> 32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r4,r8,r25
	ctx.r4.u64 = ctx.r8.u64 + ctx.r25.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r3,r7,28
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
loc_880B9E18:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9E20;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880B9E2C;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9E38;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BB7E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880BB7E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x880bb910
	if (!ctx.cr6.gt) goto loc_880BB910;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
loc_880BB808:
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880BB82C;
	sub_880A84F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x880BB840;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a8620
	ctx.lr = 0x880BB84C;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880a8638
	ctx.lr = 0x880BB858;
	sub_880A8638(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a84f0
	ctx.lr = 0x880BB86C;
	sub_880A84F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x880BB878;
	sub_880A8638(ctx, base);
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x880BB880;
	sub_8801A448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x880a85c0
	ctx.lr = 0x880BB890;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x880BB89C;
	sub_880A8620(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x880BB8A8;
	sub_880A8668(ctx, base);
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x880bb8c0
	if (!ctx.cr6.eq) goto loc_880BB8C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8650
	ctx.lr = 0x880BB8C0;
	sub_880A8650(ctx, base);
loc_880BB8C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880bb904
	if (!ctx.cr6.gt) goto loc_880BB904;
loc_880BB8D0:
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x880a99a8
	ctx.lr = 0x880BB8F4;
	sub_880A99A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880bb8d0
	if (ctx.cr6.lt) goto loc_880BB8D0;
loc_880BB904:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x880bb808
	if (!ctx.cr0.eq) goto loc_880BB808;
loc_880BB910:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCE48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BCE50;
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
	ctx.lr = 0x880BCE60;
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
	ctx.lr = 0x880BCE74;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880bcea4
	if (ctx.cr6.gt) goto loc_880BCEA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880bceb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCEB0;
	// bdzf 4*cr6+eq,0x880bcecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCECC;
	// bdzf 4*cr6+eq,0x880bcef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCEF0;
	// bne cr6,0x880bcf18
	if (!ctx.cr6.eq) goto loc_880BCF18;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880BCEA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BCEB0:
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
loc_880BCECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880bcea4
	if (!ctx.cr0.lt) goto loc_880BCEA4;
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
loc_880BCEF0:
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BCF04;
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
loc_880BCF18:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 144);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880bcea4
	if (!ctx.cr6.gt) goto loc_880BCEA4;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BCF3C;
	sub_88021D68(ctx, base);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-10720
	ctx.r4.s64 = ctx.r10.s64 + -10720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880BCF50;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BCF5C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BDEB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880BDEB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BDECC;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BDEE0;
	sub_88021BE0(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lis r10,416
	ctx.r10.s64 = 27262976;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880bdf18
	if (!ctx.cr6.lt) goto loc_880BDF18;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4288
	ctx.r4.s64 = ctx.r11.s64 + -4288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BDF0C;
	sub_88021D68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x880bdf1c
	goto loc_880BDF1C;
loc_880BDF18:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_880BDF1C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,120(r30)
	REX_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,1280(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1280);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r9,1280(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1280);
	// addic. r11,r9,-16
	ctx.xer.ca = ctx.r9.u32 > 15;
	ctx.r11.s64 = ctx.r9.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1280(r30)
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r11.u32);
	// bge 0x880bdf44
	if (!ctx.cr0.lt) goto loc_880BDF44;
	// stw r29,1280(r30)
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r29.u32);
loc_880BDF44:
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x880BDF80;
	sub_880244A8(ctx, base);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r7,-9104
	ctx.r5.s64 = ctx.r7.s64 + -9104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021b90
	ctx.lr = 0x880BDF94;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BED40) {
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
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,72(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x8801a860
	ctx.lr = 0x880BED68;
	sub_8801A860(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// bl 0x88024438
	ctx.lr = 0x880BED94;
	sub_88024438(ctx, base);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// bl 0x88024460
	ctx.lr = 0x880BEDAC;
	sub_88024460(ctx, base);
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r4,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_880BEF40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BEF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BEF58;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x880BEF68;
	sub_88021DE0(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880BEF78;
	sub_8801A448(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add. r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// blt 0x880bef9c
	if (ctx.cr0.lt) goto loc_880BEF9C;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880befb0
	if (ctx.cr6.lt) goto loc_880BEFB0;
	// b 0x880befa8
	goto loc_880BEFA8;
loc_880BEF9C:
	// lis r9,112
	ctx.r9.s64 = 7340032;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880befb0
	if (ctx.cr6.gt) goto loc_880BEFB0;
loc_880BEFA8:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880BEFB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1000(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1000);
	// bl 0x88021928
	ctx.lr = 0x880BEFBC;
	sub_88021928(ctx, base);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,21064
	ctx.r4.s64 = ctx.r11.s64 + 21064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x880BEFD0;
	sub_88021780(ctx, base);
	// stw r3,1000(r31)
	REX_STORE_U32(ctx.r31.u32 + 1000, ctx.r3.u32);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-4368
	ctx.r4.s64 = ctx.r10.s64 + -4368;
	// bl 0x88021e18
	ctx.lr = 0x880BEFE4;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BFE00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BFE1C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8801a860
	ctx.lr = 0x880BFE34;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880BFE60;
	sub_88024438(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024758
	ctx.lr = 0x880BFE80;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bfe94
	if (!ctx.cr6.eq) goto loc_880BFE94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x880BFE90;
	sub_88023F48(ctx, base);
	// b 0x880bfff0
	goto loc_880BFFF0;
loc_880BFE94:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lhz r9,26(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 26);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880bfebc
	if (ctx.cr6.eq) goto loc_880BFEBC;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x88023f48
	ctx.lr = 0x880BFEB8;
	sub_88023F48(ctx, base);
	// b 0x880bfff0
	goto loc_880BFFF0;
loc_880BFEBC:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bff50
	if (ctx.cr6.eq) goto loc_880BFF50;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bff50
	if (ctx.cr6.eq) goto loc_880BFF50;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bge 0x880bff70
	if (!ctx.cr0.lt) goto loc_880BFF70;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-21
	ctx.r6.s64 = -21;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// bne cr6,0x880bff24
	if (!ctx.cr6.eq) goto loc_880BFF24;
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
loc_880BFF24:
	// bl 0x88013940
	ctx.lr = 0x880BFF28;
	sub_88013940(ctx, base);
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r9,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stw r8,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stw r7,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// b 0x880bff70
	goto loc_880BFF70;
loc_880BFF50:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bge 0x880bff70
	if (!ctx.cr0.lt) goto loc_880BFF70;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
loc_880BFF70:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bge 0x880bffa4
	if (!ctx.cr0.lt) goto loc_880BFFA4;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// ble cr6,0x880bffa4
	if (!ctx.cr6.gt) goto loc_880BFFA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_880BFFA4:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// li r6,210
	ctx.r6.s64 = 210;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,-15676
	ctx.r9.s64 = ctx.r10.s64 + -15676;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// bl 0x8801a9c8
	ctx.lr = 0x880BFFCC;
	sub_8801A9C8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,180(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// bl 0x88018b98
	ctx.lr = 0x880BFFF0;
	sub_88018B98(ctx, base);
loc_880BFFF0:
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

DEFINE_REX_FUNC(sub_880C2008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C2010;
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
	ctx.lr = 0x880C2020;
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
	ctx.lr = 0x880C2034;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880c207c
	if (!ctx.cr0.lt) goto loc_880C207C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x880c2074
	if (ctx.cr6.lt) goto loc_880C2074;
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x880C2074;
	sub_88021928(ctx, base);
loc_880C2074:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_880C207C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C26C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C26C8;
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
	ctx.lr = 0x880C26DC;
	sub_88023F40(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021898
	ctx.lr = 0x880C26EC;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// beq cr6,0x880c272c
	if (ctx.cr6.eq) goto loc_880C272C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880c272c
	if (ctx.cr6.eq) goto loc_880C272C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880c2734
	if (!ctx.cr6.eq) goto loc_880C2734;
loc_880C272C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_880C2734:
	// bl 0x880b1e10
	ctx.lr = 0x880C2738;
	sub_880B1E10(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9424
	ctx.r5.s64 = ctx.r11.s64 + 9424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880C274C;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C30E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C30F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C3108;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x880C311C;
	sub_88021508(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,1936(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 1936);
	// subfic r9,r7,24
	ctx.xer.ca = ctx.r7.u32 <= 24;
	ctx.r9.u64 = static_cast<uint64_t>(24) - ctx.r7.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x880c315c
	if (ctx.cr6.gt) goto loc_880C315C;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_880C315C:
	// li r9,-8
	ctx.r9.s64 = -8;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C3170;
	sub_880244A8(ctx, base);
	// lis r8,-30708
	ctx.r8.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,11944
	ctx.r5.s64 = ctx.r8.s64 + 11944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C3184;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C3700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C3708;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021508
	ctx.lr = 0x880C3728;
	sub_88021508(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C374C;
	sub_880244A8(ctx, base);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,13896
	ctx.r5.s64 = ctx.r7.s64 + 13896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C3760;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C3D08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C3D10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C3D28;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x880C3D3C;
	sub_88021508(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,1936(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 1936);
	// subfic r10,r7,24
	ctx.xer.ca = ctx.r7.u32 <= 24;
	ctx.r10.u64 = static_cast<uint64_t>(24) - ctx.r7.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x880c3d80
	if (ctx.cr6.gt) goto loc_880C3D80;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_880C3D80:
	// li r10,-18
	ctx.r10.s64 = -18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C3D90;
	sub_880244A8(ctx, base);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,15104
	ctx.r5.s64 = ctx.r9.s64 + 15104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C3DA4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C4598;
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
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C45B8;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,-10
	ctx.r6.s64 = -10;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r5,-30708
	ctx.r5.s64 = -2012479488;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r6.u32);
	// addi r5,r5,17416
	ctx.r5.s64 = ctx.r5.s64 + 17416;
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x880C4608;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C4F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C4F6C;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r5,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// stw r7,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// stw r4,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C4FB0;
	sub_880244A8(ctx, base);
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,19608
	ctx.r5.s64 = ctx.r3.s64 + 19608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C4FC4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5998) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C59A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C59C0;
	sub_88021508(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r5,-30708
	ctx.r5.s64 = -2012479488;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// addi r5,r5,22664
	ctx.r5.s64 = ctx.r5.s64 + 22664;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r6,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stw r28,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r28.u32);
	// bl 0x880214b8
	ctx.lr = 0x880C5A18;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x880C6408;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C641C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021508
	ctx.lr = 0x880C6430;
	sub_88021508(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r26,r11,-36
	ctx.r26.s64 = ctx.r11.s64 + -2359296;
	// lwz r28,92(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r27,24
	ctx.r27.s64 = 1572864;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// bge 0x880c64fc
	if (!ctx.cr0.lt) goto loc_880C64FC;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// add r25,r26,r27
	ctx.r25.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x880C6470;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x88013940
	ctx.lr = 0x880C648C;
	sub_88013940(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x880c64a8
	if (!ctx.cr6.lt) goto loc_880C64A8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_880C64A8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r25,5
	ctx.r25.s64 = 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x880c64c4
	if (ctx.cr6.lt) goto loc_880C64C4;
	// stw r25,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
loc_880C64C4:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x880c64fc
	if (!ctx.cr0.lt) goto loc_880C64FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C64DC;
	sub_880244A8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// blt cr6,0x880c64fc
	if (ctx.cr6.lt) goto loc_880C64FC;
	// stw r25,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
loc_880C64FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880c686c
	if (!ctx.cr0.lt) goto loc_880C686C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880c6558
	if (!ctx.cr6.eq) goto loc_880C6558;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x880244d0
	ctx.lr = 0x880C653C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880c6548
	if (ctx.cr6.lt) goto loc_880C6548;
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_880C6548:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r25,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880c6578
	goto loc_880C6578;
loc_880C6558:
	// bl 0x880244d0
	ctx.lr = 0x880C655C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880c6578
	if (ctx.cr6.lt) goto loc_880C6578;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8801a808
	ctx.lr = 0x880C6570;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880C6578:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,20164
	ctx.r10.s64 = 1321467904;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// ori r6,r10,60495
	ctx.r6.u64 = ctx.r10.u64 | 60495;
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r25,56(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r22,r9,-11888
	ctx.r22.s64 = ctx.r9.s64 + -11888;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mulhw r4,r11,r6
	ctx.r4.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// lwz r21,92(r30)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// lis r28,32
	ctx.r28.s64 = 2097152;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r29,27
	ctx.r29.s64 = 1769472;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r9,r10,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(13));
	// subf r4,r9,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r21,r29
	ctx.r4.u64 = ctx.r21.u64 + ctx.r29.u64;
	// lwzx r22,r11,r22
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// mullw r10,r7,r22
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// subf r9,r10,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r10.u64;
	// subf r11,r25,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r25.u64;
	// addi r7,r11,-60
	ctx.r7.s64 = ctx.r11.s64 + -60;
	// bl 0x88013940
	ctx.lr = 0x880C65F4;
	sub_88013940(ctx, base);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r10,r7,r22
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// bl 0x88013940
	ctx.lr = 0x880C6630;
	sub_88013940(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r29,52
	ctx.r29.s64 = 3407872;
	// mullw r9,r11,r22
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// addi r7,r11,-40
	ctx.r7.s64 = ctx.r11.s64 + -40;
	// bl 0x88013940
	ctx.lr = 0x880C6670;
	sub_88013940(ctx, base);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r11,r7,r22
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// bl 0x88013940
	ctx.lr = 0x880C66AC;
	sub_88013940(ctx, base);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lis r28,66
	ctx.r28.s64 = 4325376;
	// lis r29,20
	ctx.r29.s64 = 1310720;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r10,r3,r22
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,96(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r5,r28,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r28.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r7,r11,-20
	ctx.r7.s64 = ctx.r11.s64 + -20;
	// bl 0x88013940
	ctx.lr = 0x880C66F0;
	sub_88013940(ctx, base);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r11,r7,r22
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// bl 0x88013940
	ctx.lr = 0x880C672C;
	sub_88013940(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r28,76
	ctx.r28.s64 = 4980736;
	// mullw r9,r11,r22
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lis r29,4
	ctx.r29.s64 = 262144;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x88013940
	ctx.lr = 0x880C676C;
	sub_88013940(ctx, base);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r11,r7,r22
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r22.s32);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// bl 0x88013940
	ctx.lr = 0x880C67A4;
	sub_88013940(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// blt cr6,0x880c67b8
	if (ctx.cr6.lt) goto loc_880C67B8;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880C67B8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x880c6800
	if (!ctx.cr0.lt) goto loc_880C6800;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r9,47
	ctx.r9.s64 = 47;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// blt cr6,0x880c6800
	if (ctx.cr6.lt) goto loc_880C6800;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_880C6800:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x880c681c
	if (ctx.cr6.gt) goto loc_880C681C;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_880C681C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x880c6844
	if (!ctx.cr0.lt) goto loc_880C6844;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge cr6,0x880c6844
	if (!ctx.cr6.lt) goto loc_880C6844;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_880C6844:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880c686c
	if (!ctx.cr0.lt) goto loc_880C686C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021598
	ctx.lr = 0x880C6860;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
loc_880C686C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CBFE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CBFF0;
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
	ctx.lr = 0x880CC004;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x88021be0
	ctx.lr = 0x880CC014;
	sub_88021BE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CC040;
	sub_880244A8(ctx, base);
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-17184
	ctx.r5.s64 = ctx.r8.s64 + -17184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CC054;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC180) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CC188;
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
	ctx.lr = 0x880CC1B4;
	sub_88021D68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cc060
	ctx.lr = 0x880CC1C4;
	sub_880CC060(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC890) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CC898;
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
	ctx.lr = 0x880CC8A8;
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
	ctx.lr = 0x880CC8BC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880cca10
	if (ctx.cr6.gt) goto loc_880CCA10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cc928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CC928;
	// bdzf 4*cr6+eq,0x880cc96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CC96C;
	// bdzf 4*cr6+eq,0x880cca1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CCA1C;
	// bdzf 4*cr6+eq,0x880ccabc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CCABC;
	// bne cr6,0x880ccb58
	if (!ctx.cr6.eq) goto loc_880CCB58;
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
	ctx.lr = 0x880CC914;
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
loc_880CC928:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CC938;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cca10
	if (ctx.cr6.eq) goto loc_880CCA10;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8784
	ctx.r4.s64 = ctx.r11.s64 + 8784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880CC954;
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
loc_880CC96C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88021a28
	ctx.lr = 0x880CC978;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cca10
	if (!ctx.cr6.eq) goto loc_880CCA10;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21176
	ctx.r4.s64 = ctx.r11.s64 + 21176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CC994;
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
	// addi r4,r9,21696
	ctx.r4.s64 = ctx.r9.s64 + 21696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CC9B4;
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
	// addi r4,r7,21696
	ctx.r4.s64 = ctx.r7.s64 + 21696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CC9D4;
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
	// beq cr6,0x880cc9f8
	if (ctx.cr6.eq) goto loc_880CC9F8;
	// lis r11,-120
	ctx.r11.s64 = -7864320;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880CC9F8:
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
loc_880CCA10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CCA1C:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CCA2C;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cca10
	if (ctx.cr6.eq) goto loc_880CCA10;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880cca48
	if (!ctx.cr6.eq) goto loc_880CCA48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880CCA48:
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
	ctx.lr = 0x880CCA64;
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
	ctx.lr = 0x880CCA84;
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
	// bgt 0x880cca10
	if (ctx.cr0.gt) goto loc_880CCA10;
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
loc_880CCABC:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9096
	ctx.r4.s64 = ctx.r11.s64 + -9096;
	// bl 0x88021e70
	ctx.lr = 0x880CCACC;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cca10
	if (ctx.cr6.eq) goto loc_880CCA10;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880CCAE8;
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
	ctx.lr = 0x880CCAFC;
	sub_880216E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x880216e8
	ctx.lr = 0x880CCB0C;
	sub_880216E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021598
	ctx.lr = 0x880CCB18;
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
	ctx.lr = 0x880CCB44;
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
loc_880CCB58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88021a28
	ctx.lr = 0x880CCB64;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cca10
	if (!ctx.cr6.eq) goto loc_880CCA10;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14440
	ctx.r4.s64 = ctx.r11.s64 + -14440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880CCB80;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880CCB8C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF1D0;
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
	ctx.lr = 0x880CF1E0;
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
	ctx.lr = 0x880CF1F4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880cf23c
	if (!ctx.cr0.lt) goto loc_880CF23C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x880cf23c
	if (!ctx.cr0.lt) goto loc_880CF23C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x880CF230;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CF23C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF680) {
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
	ctx.lr = 0x880CF6A0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x880CF6B0;
	sub_88021898(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-2600
	ctx.r5.s64 = ctx.r9.s64 + -2600;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880CF6D4;
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

DEFINE_REX_FUNC(sub_880CFE98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CFEA0;
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
	ctx.lr = 0x880CFEB4;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021508
	ctx.lr = 0x880CFEC4;
	sub_88021508(ctx, base);
	// li r8,48
	ctx.r8.s64 = 48;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// stw r6,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// stw r5,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r5.u32);
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// stw r4,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r4.u32);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CFF20;
	sub_880244A8(ctx, base);
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,-1176
	ctx.r5.s64 = ctx.r7.s64 + -1176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880CFF34;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1030) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880D1038;
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
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021508
	ctx.lr = 0x880D1058;
	sub_88021508(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,-18
	ctx.r10.s64 = -18;
	// li r11,-28
	ctx.r11.s64 = -28;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r4.u32);
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r10,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// stw r11,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r11,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880D10A8;
	sub_880244A8(ctx, base);
	// lis r3,-30707
	ctx.r3.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,3376
	ctx.r5.s64 = ctx.r3.s64 + 3376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880D10BC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D2208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880D2210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D221C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880D2228;
	sub_88024030(ctx, base);
	// lwz r10,988(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 988);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,12839
	ctx.r3.s64 = 12839;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addis r28,r11,44
	ctx.r28.s64 = ctx.r11.s64 + 2883584;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880D2254;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D225C;
	sub_8813FF48(ctx, base);
	// lwz r10,936(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d2294
	if (ctx.cr6.eq) goto loc_880D2294;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12839
	ctx.r3.s64 = 12839;
	// bl 0x8801a9c8
	ctx.lr = 0x880D227C;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D2294;
	sub_8813FF90(ctx, base);
loc_880D2294:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r28,r10,30
	ctx.r28.s64 = ctx.r10.s64 + 1966080;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880D22C0;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D22C8;
	sub_8813FF48(ctx, base);
	// lwz r9,936(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d2304
	if (ctx.cr6.eq) goto loc_880D2304;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// bl 0x8801a9c8
	ctx.lr = 0x880D22EC;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D2304;
	sub_8813FF90(ctx, base);
loc_880D2304:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r27,20
	ctx.r27.s64 = 1310720;
	// lwz r10,1000(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r28,r10,r27
	ctx.r28.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880D2334;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D233C;
	sub_8813FF48(ctx, base);
	// lwz r9,936(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d2378
	if (ctx.cr6.eq) goto loc_880D2378;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// bl 0x8801a9c8
	ctx.lr = 0x880D2360;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D2378;
	sub_8813FF90(ctx, base);
loc_880D2378:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,996(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r28,r10,10
	ctx.r28.s64 = ctx.r10.s64 + 655360;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880D23A4;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D23AC;
	sub_8813FF48(ctx, base);
	// lwz r9,936(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d23e8
	if (ctx.cr6.eq) goto loc_880D23E8;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// bl 0x8801a9c8
	ctx.lr = 0x880D23D0;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D23E8;
	sub_8813FF90(ctx, base);
loc_880D23E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,992(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 992);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// bl 0x8801a9c8
	ctx.lr = 0x880D2410;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D2418;
	sub_8813FF48(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2454
	if (ctx.cr6.eq) goto loc_880D2454;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,12830
	ctx.r3.s64 = ctx.r11.s64 + 12830;
	// bl 0x8801a9c8
	ctx.lr = 0x880D243C;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D2454;
	sub_8813FF90(ctx, base);
loc_880D2454:
	// lwz r11,1008(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1008);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,12838
	ctx.r3.s64 = 12838;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r28,r27,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880D247C;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D2484;
	sub_8813FF48(ctx, base);
	// lwz r10,936(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d24bc
	if (ctx.cr6.eq) goto loc_880D24BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12838
	ctx.r3.s64 = 12838;
	// bl 0x8801a9c8
	ctx.lr = 0x880D24A4;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D24BC;
	sub_8813FF90(ctx, base);
loc_880D24BC:
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addis r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -65536;
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// bl 0x8801a9c8
	ctx.lr = 0x880D24EC;
	sub_8801A9C8(ctx, base);
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8813ff48
	ctx.lr = 0x880D24F4;
	sub_8813FF48(ctx, base);
	// lwz r7,936(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880d2530
	if (ctx.cr6.eq) goto loc_880D2530;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// bl 0x8801a9c8
	ctx.lr = 0x880D2518;
	sub_8801A9C8(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 936);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880D2530;
	sub_8813FF90(ctx, base);
loc_880D2530:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,13035
	ctx.r3.s64 = 13035;
	// addis r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 917504;
	// addis r5,r10,-24
	ctx.r5.s64 = ctx.r10.s64 + -1572864;
	// bl 0x8801a9c8
	ctx.lr = 0x880D254C;
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
	ctx.lr = 0x880D2560;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D5BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x8801a860
	ctx.lr = 0x880D5BF8;
	sub_8801A860(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r4.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8801a860
	ctx.lr = 0x880D5C20;
	sub_8801A860(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r7,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 15;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// bne cr6,0x880d5c70
	if (!ctx.cr6.eq) goto loc_880D5C70;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d5c78
	if (!ctx.cr6.eq) goto loc_880D5C78;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880D5C68;
	sub_8801A448(ctx, base);
	// addi r11,r3,256
	ctx.r11.s64 = ctx.r3.s64 + 256;
	// b 0x880d5c74
	goto loc_880D5C74;
loc_880D5C70:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_880D5C74:
	// stw r11,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_880D5C78:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880D5C8C;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r7,r11,14
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 14;
	// lwz r8,280(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bge 0x880d5d28
	if (!ctx.cr0.lt) goto loc_880D5D28;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// blt cr6,0x880d5cd8
	if (ctx.cr6.lt) goto loc_880D5CD8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
loc_880D5CD8:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bge 0x880d5d04
	if (!ctx.cr0.lt) goto loc_880D5D04;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
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
loc_880D5D04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r11,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r11,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
loc_880D5D28:
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

DEFINE_REX_FUNC(sub_880D7500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D7508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,724
	ctx.r4.s64 = 724;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D7518;
	sub_88023E98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D7520;
	sub_88023F40(ctx, base);
	// li r5,724
	ctx.r5.s64 = 724;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D7530;
	sub_8813FA58(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D7544;
	sub_880240B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D754C;
	sub_88023C50(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lis r8,320
	ctx.r8.s64 = 20971520;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lis r7,160
	ctx.r7.s64 = 10485760;
	// stw r30,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r30,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r27,128
	ctx.r27.s64 = 128;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r27,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r28,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r29,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x880D75B4;
	sub_8801A448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r5,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// stw r4,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r4.u32);
	// stw r11,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880D75E4;
	sub_8801A448(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// stw r28,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// addi r4,r9,28688
	ctx.r4.s64 = ctx.r9.s64 + 28688;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x880D7614;
	sub_88023E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D89E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D89F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D89FC;
	sub_88023F40(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,132(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x8801a860
	ctx.lr = 0x880D8A14;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880D8A40;
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
	// blt cr6,0x880d8b98
	if (ctx.cr6.lt) goto loc_880D8B98;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d8a94
	if (!ctx.cr6.eq) goto loc_880D8A94;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880d8a94
	if (ctx.cr6.lt) goto loc_880D8A94;
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r29,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
loc_880D8A94:
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D8AA8;
	sub_880244D0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r26,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d8ae8
	if (ctx.cr6.eq) goto loc_880D8AE8;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bge 0x880d8ae8
	if (!ctx.cr0.lt) goto loc_880D8AE8;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r29,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// stw r9,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
loc_880D8AE8:
	// srawi r9,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
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
	// bge cr6,0x880d8b20
	if (!ctx.cr6.lt) goto loc_880D8B20;
	// neg r30,r30
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r30.u64);
loc_880D8B20:
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
	// bgt 0x880d8ba8
	if (ctx.cr0.gt) goto loc_880D8BA8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,-27
	ctx.r6.s64 = -27;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013940
	ctx.lr = 0x880D8B50;
	sub_88013940(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r7,180(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,-14
	ctx.r6.s64 = -14;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88013ce0
	ctx.lr = 0x880D8B74;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,76
	ctx.r9.s64 = 76;
	// lwz r7,180(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,-26
	ctx.r6.s64 = -26;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x880D8B98;
	sub_88013CE0(ctx, base);
loc_880D8B98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f48
	ctx.lr = 0x880D8BA0;
	sub_88023F48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D8BA8:
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// li r27,8
	ctx.r27.s64 = 8;
loc_880D8BB0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a860
	ctx.lr = 0x880D8BC4;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801ac60
	ctx.lr = 0x880D8BF0;
	sub_8801AC60(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801ab78
	ctx.lr = 0x880D8C00;
	sub_8801AB78(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801aa90
	ctx.lr = 0x880D8C10;
	sub_8801AA90(ctx, base);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8801ad48
	ctx.lr = 0x880D8C20;
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
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x880d8c70
	if (!ctx.cr6.lt) goto loc_880D8C70;
	// li r11,-8
	ctx.r11.s64 = -8;
	// b 0x880d8c7c
	goto loc_880D8C7C;
loc_880D8C70:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x880d8c7c
	if (ctx.cr6.lt) goto loc_880D8C7C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_880D8C7C:
	// subfic r6,r11,130
	ctx.xer.ca = ctx.r11.u32 <= 130;
	ctx.r6.u64 = static_cast<uint64_t>(130) - ctx.r11.u64;
	// addi r3,r11,10345
	ctx.r3.s64 = ctx.r11.s64 + 10345;
	// bl 0x8801a9c8
	ctx.lr = 0x880D8C88;
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
	ctx.lr = 0x880D8C9C;
	sub_8813FF90(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x880d8bb0
	if (!ctx.cr0.eq) goto loc_880D8BB0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DB0C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880DB0C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DB0DC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x880DB0F0;
	sub_88021508(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880db220
	if (!ctx.cr0.lt) goto loc_880DB220;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addis r29,r7,45
	ctx.r29.s64 = ctx.r7.s64 + 2949120;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x880db17c
	if (ctx.cr6.eq) goto loc_880DB17C;
	// lwz r11,2236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2236);
	// lwz r10,2368(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2368);
	// lwz r9,2104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2104);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 5242880;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880db1c8
	if (!ctx.cr6.eq) goto loc_880DB1C8;
	// li r10,128
	ctx.r10.s64 = 128;
	// addis r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 1310720;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,209
	ctx.r3.s64 = 209;
	// bl 0x88023b90
	ctx.lr = 0x880DB170;
	sub_88023B90(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x880db1d8
	goto loc_880DB1D8;
loc_880DB17C:
	// lwz r11,1972(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// lwz r10,1840(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1840);
	// lwz r9,1708(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1708);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r31,r11,-80
	ctx.r31.s64 = ctx.r11.s64 + -5242880;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880db1c8
	if (!ctx.cr6.eq) goto loc_880DB1C8;
	// li r10,384
	ctx.r10.s64 = 384;
	// addis r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -1310720;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,209
	ctx.r3.s64 = 209;
	// bl 0x88023b90
	ctx.lr = 0x880DB1BC;
	sub_88023B90(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x880db1d8
	goto loc_880DB1D8;
loc_880DB1C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DB1D4;
	sub_880244D0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_880DB1D8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,209
	ctx.r3.s64 = 209;
	// bl 0x88023b90
	ctx.lr = 0x880DB1EC;
	sub_88023B90(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bge 0x880db220
	if (!ctx.cr0.lt) goto loc_880DB220;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244a8
	ctx.lr = 0x880DB204;
	sub_880244A8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
loc_880DB220:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DD4D0;
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
	ctx.lr = 0x880DD4E4;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880DD4F4;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,-2
	ctx.r6.s64 = -2;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r6.u32);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r5,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r5.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DD538;
	sub_880244A8(ctx, base);
	// lis r3,-30706
	ctx.r3.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-11296
	ctx.r5.s64 = ctx.r3.s64 + -11296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DD54C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DDAF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DDB00;
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
	ctx.lr = 0x880DDB14;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x88021508
	ctx.lr = 0x880DDB24;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,44
	ctx.r8.s64 = 44;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,-21
	ctx.r7.s64 = -21;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// stw r11,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r6,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DDB68;
	sub_880244A8(ctx, base);
	// lis r5,-30706
	ctx.r5.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,-9944
	ctx.r5.s64 = ctx.r5.s64 + -9944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DDB7C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DE920) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880DE928;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DE934;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880DE940;
	sub_88024030(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8801a860
	ctx.lr = 0x880DE960;
	sub_8801A860(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,1180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1180);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r10,-3248
	ctx.r30.s64 = ctx.r10.s64 + -3248;
	// lwz r9,620(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// beq cr6,0x880de9c0
	if (ctx.cr6.eq) goto loc_880DE9C0;
	// addi r10,r30,512
	ctx.r10.s64 = ctx.r30.s64 + 512;
	// addi r7,r30,512
	ctx.r7.s64 = ctx.r30.s64 + 512;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// addi r3,r11,11436
	ctx.r3.s64 = ctx.r11.s64 + 11436;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DE9B8;
	sub_8801A9C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x880de9f4
	goto loc_880DE9F4;
loc_880DE9C0:
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r3,r11,11020
	ctx.r3.s64 = ctx.r11.s64 + 11020;
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DE9E8;
	sub_8801A9C8(ctx, base);
	// lwz r4,1164(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1164);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880DE9F4;
	sub_8813FF48(ctx, base);
loc_880DE9F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DEA0C;
	sub_8813FF90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,1176(r31)
	REX_STORE_U32(ctx.r31.u32 + 1176, ctx.r27.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,1172(r31)
	REX_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// lwz r10,1444(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r8,616(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,620(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x880dea78
	if (ctx.cr6.eq) goto loc_880DEA78;
	// addi r9,r30,512
	ctx.r9.s64 = ctx.r30.s64 + 512;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r3,r11,11436
	ctx.r3.s64 = ctx.r11.s64 + 11436;
	// lwzx r9,r7,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEA70;
	sub_8801A9C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x880deaa8
	goto loc_880DEAA8;
loc_880DEA78:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// lwzx r9,r7,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r3,r11,11020
	ctx.r3.s64 = ctx.r11.s64 + 11020;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEA9C;
	sub_8801A9C8(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880DEAA8;
	sub_8813FF48(ctx, base);
loc_880DEAA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DEAC0;
	sub_8813FF90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r27.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,1436(r31)
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r10,1312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x880deb2c
	if (ctx.cr6.eq) goto loc_880DEB2C;
	// addi r10,r30,1536
	ctx.r10.s64 = ctx.r30.s64 + 1536;
	// addi r5,r30,1536
	ctx.r5.s64 = ctx.r30.s64 + 1536;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 628);
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEB24;
	sub_8801A9C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x880deb68
	goto loc_880DEB68;
loc_880DEB2C:
	// addi r10,r30,1024
	ctx.r10.s64 = ctx.r30.s64 + 1024;
	// addi r5,r30,1024
	ctx.r5.s64 = ctx.r30.s64 + 1024;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 628);
	// addi r3,r11,11084
	ctx.r3.s64 = ctx.r11.s64 + 11084;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEB5C;
	sub_8801A9C8(ctx, base);
	// lwz r4,1296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1296);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880DEB68;
	sub_8813FF48(ctx, base);
loc_880DEB68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DEB80;
	sub_8813FF90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,1308(r31)
	REX_STORE_U32(ctx.r31.u32 + 1308, ctx.r27.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,1304(r31)
	REX_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// lwz r10,1576(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 628);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x880debec
	if (ctx.cr6.eq) goto loc_880DEBEC;
	// addi r9,r30,1536
	ctx.r9.s64 = ctx.r30.s64 + 1536;
	// addi r4,r30,1536
	ctx.r4.s64 = ctx.r30.s64 + 1536;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// lwzx r9,r7,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEBE4;
	sub_8801A9C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x880dec24
	goto loc_880DEC24;
loc_880DEBEC:
	// addi r9,r30,1024
	ctx.r9.s64 = ctx.r30.s64 + 1024;
	// addi r4,r30,1024
	ctx.r4.s64 = ctx.r30.s64 + 1024;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r3,r11,11084
	ctx.r3.s64 = ctx.r11.s64 + 11084;
	// lwzx r9,r7,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEC18;
	sub_8801A9C8(ctx, base);
	// lwz r4,1560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880DEC24;
	sub_8813FF48(ctx, base);
loc_880DEC24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880DEC3C;
	sub_8813FF90(ctx, base);
	// addi r11,r30,2048
	ctx.r11.s64 = ctx.r30.s64 + 2048;
	// addi r7,r30,2048
	ctx.r7.s64 = ctx.r30.s64 + 2048;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,1572(r31)
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r27.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r4,1568(r31)
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r4.u32);
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,620(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// addi r3,r11,11148
	ctx.r3.s64 = ctx.r11.s64 + 11148;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r9,r4,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DEC88;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880DEC9C;
	sub_8813FF90(ctx, base);
	// addi r11,r30,2048
	ctx.r11.s64 = ctx.r30.s64 + 2048;
	// lwz r5,116(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r30,2048
	ctx.r9.s64 = ctx.r30.s64 + 2048;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r8,616(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// lwz r10,620(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,11148
	ctx.r3.s64 = ctx.r11.s64 + 11148;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DECDC;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880DECF0;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x880E2BB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E2BC0;
	sub_88023F40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021898
	ctx.lr = 0x880E2BD4;
	sub_88021898(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r30,r24,76
	ctx.r30.s64 = ctx.r24.s64 + 76;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r26,31
	ctx.r26.s64 = 31;
	// li r21,15
	ctx.r21.s64 = 15;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r23,4
	ctx.r23.s64 = 4;
loc_880E2BF8:
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e2c9c
	if (ctx.cr6.lt) goto loc_880E2C9C;
	// beq cr6,0x880e2cd8
	if (ctx.cr6.eq) goto loc_880E2CD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880e2dc8
	if (!ctx.cr6.lt) goto loc_880E2DC8;
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e2c50
	if (!ctx.cr6.eq) goto loc_880E2C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880e2c50
	if (!ctx.cr0.lt) goto loc_880E2C50;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x880e2c50
	if (ctx.cr6.lt) goto loc_880E2C50;
	// stw r29,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// stw r26,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_880E2C50:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bge 0x880e2dc8
	if (!ctx.cr0.lt) goto loc_880E2DC8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x880e2c78
	if (ctx.cr6.gt) goto loc_880E2C78;
	// stw r29,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
loc_880E2C78:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r11,-32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-32(r30)
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r11.u32);
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// blt cr6,0x880e2dc8
	if (ctx.cr6.lt) goto loc_880E2DC8;
	// stw r28,-20(r31)
	REX_STORE_U32(ctx.r31.u32 + -20, ctx.r28.u32);
	// b 0x880e2dc8
	goto loc_880E2DC8;
loc_880E2C9C:
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e2cb8
	if (ctx.cr6.eq) goto loc_880E2CB8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// b 0x880e2dc8
	goto loc_880E2DC8;
loc_880E2CB8:
	// stw r29,-20(r31)
	REX_STORE_U32(ctx.r31.u32 + -20, ctx.r29.u32);
	// stw r28,-32(r30)
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r28.u32);
	// stw r28,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r28.u32);
	// stw r28,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stw r28,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_880E2CD8:
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e2d00
	if (!ctx.cr6.eq) goto loc_880E2D00;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x880e2d00
	if (ctx.cr6.lt) goto loc_880E2D00;
	// stw r29,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// stw r21,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
loc_880E2D00:
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e2d40
	if (!ctx.cr6.eq) goto loc_880E2D40;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880e2d40
	if (!ctx.cr0.lt) goto loc_880E2D40;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x880e2d40
	if (ctx.cr6.lt) goto loc_880E2D40;
	// stw r29,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// stw r26,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_880E2D40:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bge 0x880e2dc8
	if (!ctx.cr0.lt) goto loc_880E2DC8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r11,-32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-32(r30)
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r11.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x880e2d70
	if (!ctx.cr6.eq) goto loc_880E2D70;
	// stw r22,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r22.u32);
loc_880E2D70:
	// lwz r11,-32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// blt cr6,0x880e2dc8
	if (ctx.cr6.lt) goto loc_880E2DC8;
	// stw r23,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r23.u32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// stw r23,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r23.u32);
	// stw r22,-20(r31)
	REX_STORE_U32(ctx.r31.u32 + -20, ctx.r22.u32);
	// bgt cr6,0x880e2dc8
	if (ctx.cr6.gt) goto loc_880E2DC8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8524(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 8524);
	// bl 0x88021a28
	ctx.lr = 0x880E2D9C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e2dc8
	if (!ctx.cr6.eq) goto loc_880E2DC8;
	// rlwinm r11,r27,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x2;
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r10,11064
	ctx.r4.s64 = ctx.r10.s64 + 11064;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021780
	ctx.lr = 0x880E2DC4;
	sub_88021780(ctx, base);
	// stw r3,8524(r24)
	REX_STORE_U32(ctx.r24.u32 + 8524, ctx.r3.u32);
loc_880E2DC8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// blt cr6,0x880e2bf8
	if (ctx.cr6.lt) goto loc_880E2BF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E5F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880E5F38;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E5F4C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021898
	ctx.lr = 0x880E5F60;
	sub_88021898(ctx, base);
	// lwz r11,4692(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4692);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// addi r31,r28,4692
	ctx.r31.s64 = ctx.r28.s64 + 4692;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r25,r10,32896
	ctx.r25.u64 = ctx.r10.u64 | 32896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e6004
	if (ctx.cr6.eq) goto loc_880E6004;
	// stw r25,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r25.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e5fd8
	if (ctx.cr6.eq) goto loc_880E5FD8;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880e5fb4
	if (ctx.cr6.eq) goto loc_880E5FB4;
	// stw r29,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
loc_880E5FB4:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x880e6004
	if (ctx.cr6.eq) goto loc_880E6004;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880e6000
	goto loc_880E6000;
loc_880E5FD8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,8448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8448, ctx.xer);
	// bge cr6,0x880e6004
	if (!ctx.cr6.lt) goto loc_880E6004;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880e6004
	if (!ctx.cr6.eq) goto loc_880E6004;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880E6000:
	// stw r10,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
loc_880E6004:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x880e604c
	if (ctx.cr6.gt) goto loc_880E604C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880e6058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E6058;
	// bdzf 4*cr6+eq,0x880e6198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E6198;
	// bdzf 4*cr6+eq,0x880e624c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E624C;
	// bdzf 4*cr6+eq,0x880e62c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E62C4;
	// bdzf 4*cr6+eq,0x880e62f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E62F8;
	// bdzf 4*cr6+eq,0x880e6364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E6364;
	// bne cr6,0x880e63a8
	if (!ctx.cr6.eq) goto loc_880E63A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880E604C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E6058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e5a40
	ctx.lr = 0x880E6064;
	sub_880E5A40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r27,20(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E6070;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88069270
	ctx.lr = 0x880E6080;
	sub_88069270(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e604c
	if (ctx.cr6.gt) goto loc_880E604C;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e611c
	if (!ctx.cr6.eq) goto loc_880E611C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// ori r7,r7,33792
	ctx.r7.u64 = ctx.r7.u64 | 33792;
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r8,r8,22880
	ctx.r8.s64 = ctx.r8.s64 + 22880;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r11,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r29,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r29.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r8,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r31,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r31.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880E6108;
	sub_8813FA58(ctx, base);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880E6118;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_880E611C:
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// lfd f0,1216(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1216);
	// stfd f0,216(r9)
	REX_STORE_U64(ctx.r9.u32 + 216, ctx.f0.u64);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,8532(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8532);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e616c
	if (ctx.cr6.lt) goto loc_880E616C;
	// beq cr6,0x880e6160
	if (ctx.cr6.eq) goto loc_880E6160;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880e6184
	if (!ctx.cr6.lt) goto loc_880E6184;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-14144
	ctx.r4.s64 = ctx.r11.s64 + -14144;
	// b 0x880e6174
	goto loc_880E6174;
loc_880E6160:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// b 0x880e6174
	goto loc_880E6174;
loc_880E616C:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-15160
	ctx.r4.s64 = ctx.r11.s64 + -15160;
loc_880E6174:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E6180;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880E6184:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E6198:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x880e61ac
	if (!ctx.cr0.lt) goto loc_880E61AC;
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_880E61AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e5a40
	ctx.lr = 0x880E61B8;
	sub_880E5A40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,20(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E61C4;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x88069270
	ctx.lr = 0x880E61D4;
	sub_88069270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1388
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1388, ctx.xer);
	// bne cr6,0x880e6208
	if (!ctx.cr6.eq) goto loc_880E6208;
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// lfd f0,19576(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19576);
	// stfd f0,216(r9)
	REX_STORE_U64(ctx.r9.u32 + 216, ctx.f0.u64);
	// bl 0x88069348
	ctx.lr = 0x880E6208;
	sub_88069348(ctx, base);
loc_880E6208:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e604c
	if (ctx.cr6.gt) goto loc_880E604C;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r25,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r25.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880E6230;
	sub_88021598(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E624C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880E6258;
	sub_88021598(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E626C;
	sub_8801A448(ctx, base);
	// lis r10,-30607
	ctx.r10.s64 = -2005860352;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// stw r29,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// addi r7,r10,-25048
	ctx.r7.s64 = ctx.r10.s64 + -25048;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfd f0,19504(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 19504);
	// stw r6,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r6.u32);
	// stw r11,-11916(r8)
	REX_STORE_U32(ctx.r8.u32 + -11916, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfd f0,216(r7)
	REX_STORE_U64(ctx.r7.u32 + 216, ctx.f0.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88140548
	ctx.lr = 0x880E62A8;
	sub_88140548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88069348
	ctx.lr = 0x880E62B0;
	sub_88069348(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E62C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e5ab8
	ctx.lr = 0x880E62D0;
	sub_880E5AB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e604c
	if (!ctx.cr6.eq) goto loc_880E604C;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E62F8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bgt 0x880e6334
	if (ctx.cr0.gt) goto loc_880E6334;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x880e6334
	if (ctx.cr6.lt) goto loc_880E6334;
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_880E6334:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E6364:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880e5c60
	ctx.lr = 0x880E6374;
	sub_880E5C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e604c
	if (!ctx.cr6.eq) goto loc_880E604C;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// ori r9,r11,24672
	ctx.r9.u64 = ctx.r11.u64 | 24672;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E63A8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bge 0x880e604c
	if (!ctx.cr0.lt) goto loc_880E604C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021928
	ctx.lr = 0x880E63CC;
	sub_88021928(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x88023b90
	ctx.lr = 0x880E63E0;
	sub_88023B90(ctx, base);
	// bl 0x880b3398
	ctx.lr = 0x880E63E4;
	sub_880B3398(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f48
	ctx.lr = 0x880E63EC;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EAAE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880EAAF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-11924(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eab2c
	if (ctx.cr6.eq) goto loc_880EAB2C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021598
	ctx.lr = 0x880EAB20;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880EAB2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EAB34;
	sub_88023F40(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,172
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(172));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3316
	ctx.r30.s64 = ctx.r11.s64 + 3316;
	// bl 0x88021508
	ctx.lr = 0x880EAB54;
	sub_88021508(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880eacd4
	if (!ctx.cr0.lt) goto loc_880EACD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r26,23
	ctx.r26.s64 = 1507328;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r27,11
	ctx.r27.s64 = 720896;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r28,3
	ctx.r28.s64 = 196608;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880eac08
	if (!ctx.cr6.eq) goto loc_880EAC08;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880eaba0
	if (!ctx.cr6.eq) goto loc_880EABA0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880EABA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244c0
	ctx.lr = 0x880EABA8;
	sub_880244C0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EABC4;
	sub_880244D0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EABE4;
	sub_880244D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EAC04;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_880EAC08:
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// add r5,r7,r26
	ctx.r5.u64 = ctx.r7.u64 + ctx.r26.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x880EAC38;
	sub_88013CE0(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,-6
	ctx.r6.s64 = ctx.r6.s64 + -6;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EAC6C;
	sub_88013CE0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,40
	ctx.r9.s64 = 40;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r6,r6,-12
	ctx.r6.s64 = ctx.r6.s64 + -12;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EACA0;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880eacd4
	if (!ctx.cr0.lt) goto loc_880EACD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_880EACD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EC768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880EC770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EC780;
	sub_88023F40(ctx, base);
	// addi r29,r3,4692
	ctx.r29.s64 = ctx.r3.s64 + 4692;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x880EC794;
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
	// bge 0x880ec8b4
	if (!ctx.cr0.lt) goto loc_880EC8B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r28,-30683
	ctx.r28.s64 = -2010841088;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,-11940(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -11940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880ec7c8
	if (!ctx.cr6.eq) goto loc_880EC7C8;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_880EC7C8:
	// lwz r30,64(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,68(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,-28
	ctx.r6.s64 = -28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x880EC7F4;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ec82c
	if (ctx.cr6.eq) goto loc_880EC82C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// li r6,-28
	ctx.r6.s64 = -28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x880EC82C;
	sub_88013CE0(ctx, base);
loc_880EC82C:
	// lwz r11,-11940(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -11940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880ec858
	if (!ctx.cr6.eq) goto loc_880EC858;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
loc_880EC858:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880ec8b4
	if (!ctx.cr0.lt) goto loc_880EC8B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bge 0x880ec8b8
	if (!ctx.cr0.lt) goto loc_880EC8B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880EC8B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880EC8B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EE3C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880EE3D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EE3E8;
	sub_88023F40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mulli r11,r11,312
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(312));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021508
	ctx.lr = 0x880EE404;
	sub_88021508(ctx, base);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,12208
	ctx.r11.s64 = ctx.r10.s64 + 12208;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// beq cr6,0x880ee430
	if (ctx.cr6.eq) goto loc_880EE430;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_880EE430:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,1668(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1668);
	// lwz r8,1664(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1664);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bge 0x880ee5a4
	if (!ctx.cr0.lt) goto loc_880EE5A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880ee4a4
	if (!ctx.cr6.eq) goto loc_880EE4A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EE47C;
	sub_880244D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880EE490;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ee4a4
	if (ctx.cr6.eq) goto loc_880EE4A4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_880EE4A4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x880ee4e0
	if (ctx.cr6.eq) goto loc_880EE4E0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x880ee4f0
	goto loc_880EE4F0;
loc_880EE4E0:
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_880EE4F0:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88013ce0
	ctx.lr = 0x880EE4F8;
	sub_88013CE0(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bge 0x880ee5a4
	if (!ctx.cr0.lt) goto loc_880EE5A4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ee538
	if (!ctx.cr6.eq) goto loc_880EE538;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880244a8
	ctx.lr = 0x880EE538;
	sub_880244A8(ctx, base);
loc_880EE538:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bgt 0x880ee554
	if (ctx.cr0.gt) goto loc_880EE554;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x880EE554;
	sub_88021598(ctx, base);
loc_880EE554:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x880ee570
	if (ctx.cr6.lt) goto loc_880EE570;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_880EE570:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bge cr6,0x880ee59c
	if (!ctx.cr6.lt) goto loc_880EE59C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_880EE59C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_880EE5A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FB168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880FB170;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880FB188;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021898
	ctx.lr = 0x880FB19C;
	sub_88021898(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r25,r9,32896
	ctx.r25.u64 = ctx.r9.u64 | 32896;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,5720
	ctx.r31.s64 = ctx.r11.s64 + 5720;
	// lwz r7,5720(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 5720);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880fb240
	if (ctx.cr6.eq) goto loc_880FB240;
	// stw r25,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lhz r10,54(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 54);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880fb214
	if (ctx.cr6.eq) goto loc_880FB214;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// beq cr6,0x880fb240
	if (ctx.cr6.eq) goto loc_880FB240;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880fb23c
	goto loc_880FB23C;
loc_880FB214:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bge cr6,0x880fb240
	if (!ctx.cr6.lt) goto loc_880FB240;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fb240
	if (!ctx.cr6.eq) goto loc_880FB240;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880FB23C:
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_880FB240:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880fb360
	if (ctx.cr6.gt) goto loc_880FB360;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880fb2a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB2A4;
	// bdzf 4*cr6+eq,0x880fb2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB2E4;
	// bdzf 4*cr6+eq,0x880fb300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB300;
	// bne cr6,0x880fb330
	if (!ctx.cr6.eq) goto loc_880FB330;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,20(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880FB270;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x880FB280;
	sub_88069270(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880fb360
	if (ctx.cr6.gt) goto loc_880FB360;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FB2A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,20(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880FB2B0;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x880FB2C0;
	sub_88069270(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880fb360
	if (ctx.cr6.gt) goto loc_880FB360;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x880fb354
	goto loc_880FB354;
loc_880FB2E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FB300:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fae48
	ctx.lr = 0x880FB310;
	sub_880FAE48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fb360
	if (!ctx.cr6.eq) goto loc_880FB360;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FB330:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bge 0x880fb360
	if (!ctx.cr0.lt) goto loc_880FB360;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,24672
	ctx.r9.u64 = ctx.r11.u64 | 24672;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
loc_880FB354:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021928
	ctx.lr = 0x880FB360;
	sub_88021928(ctx, base);
loc_880FB360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FCDE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880FCDF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x880fcf4c
	if (!ctx.cr0.lt) goto loc_880FCF4C;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// lwz r9,44(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r4,48(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addis r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 1310720;
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r6,r7
	ctx.r28.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bl 0x8801a448
	ctx.lr = 0x880FCE5C;
	sub_8801A448(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// addi r27,r3,224
	ctx.r27.s64 = ctx.r3.s64 + 224;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a84f0
	ctx.lr = 0x880FCE74;
	sub_880A84F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880FCE80;
	sub_8801A448(ctx, base);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880FCE90;
	sub_880A85C0(ctx, base);
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a84f0
	ctx.lr = 0x880FCEA4;
	sub_880A84F0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880FCEB4;
	sub_880A85C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x880FCEC0;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880a8668
	ctx.lr = 0x880FCECC;
	sub_880A8668(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x880fcef8
	if (ctx.cr6.lt) goto loc_880FCEF8;
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_880FCEF8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fcf38
	if (!ctx.cr6.gt) goto loc_880FCF38;
loc_880FCF04:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r28,r10
	ctx.r5.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x880a99a8
	ctx.lr = 0x880FCF20;
	sub_880A99A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880FCF28;
	sub_880A9A58(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fcf04
	if (ctx.cr6.lt) goto loc_880FCF04;
loc_880FCF38:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// ble 0x880fcf50
	if (!ctx.cr0.gt) goto loc_880FCF50;
loc_880FCF4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880FCF50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FE8F0) {
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
	ctx.lr = 0x880FE904;
	sub_88023F40(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,29752
	ctx.r10.s64 = ctx.r11.s64 + 29752;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880FE940;
	sub_8801A448(ctx, base);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// li r3,10
	ctx.r3.s64 = 10;
	// rlwinm r6,r7,19,0,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0xFFF80000;
	// stw r6,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// bl 0x8801a448
	ctx.lr = 0x880FE954;
	sub_8801A448(ctx, base);
	// addi r5,r3,15
	ctx.r5.s64 = ctx.r3.s64 + 15;
	// rlwinm r4,r5,19,0,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0xFFF80000;
	// stw r4,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_880FF168) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880FF170;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880FF17C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880FF188;
	sub_88024030(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-11960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ff1b4
	if (ctx.cr6.eq) goto loc_880FF1B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fe7d0
	ctx.lr = 0x880FF1A4;
	sub_880FE7D0(ctx, base);
loc_880FF1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x880FF1AC;
	sub_88023F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880FF1B4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880ff558
	if (ctx.cr6.gt) goto loc_880FF558;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880ff26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FF26C;
	// bdzf 4*cr6+eq,0x880ff304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FF304;
	// bdzf 4*cr6+eq,0x880ff470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FF470;
	// bne cr6,0x880ff4c0
	if (!ctx.cr6.eq) goto loc_880FF4C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x88024030
	ctx.lr = 0x880FF1F0;
	sub_88024030(ctx, base);
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff24c
	if (!ctx.cr6.eq) goto loc_880FF24C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8801a860
	ctx.lr = 0x880FF214;
	sub_8801A860(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,48(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r4,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
loc_880FF24C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880ff558
	if (ctx.cr6.lt) goto loc_880FF558;
	// stw r27,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x880ff558
	goto loc_880FF558;
loc_880FF26C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x88024030
	ctx.lr = 0x880FF278;
	sub_88024030(ctx, base);
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff2c8
	if (!ctx.cr6.eq) goto loc_880FF2C8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8801a860
	ctx.lr = 0x880FF29C;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_880FF2C8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x880ff2e8
	if (ctx.cr6.gt) goto loc_880FF2E8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_880FF2E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88024438
	ctx.lr = 0x880FF2F4;
	sub_88024438(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x880ff558
	goto loc_880FF558;
loc_880FF304:
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff558
	if (!ctx.cr6.eq) goto loc_880FF558;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ff3c4
	if (!ctx.cr6.eq) goto loc_880FF3C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x88024498
	ctx.lr = 0x880FF334;
	sub_88024498(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r29,104(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// subf r24,r3,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880FF354;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8801a808
	ctx.lr = 0x880FF364;
	sub_8801A808(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a3e0
	ctx.lr = 0x880FF380;
	sub_8801A3E0(ctx, base);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880ff3c0
	if (!ctx.cr6.gt) goto loc_880FF3C0;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bge 0x880ff3b4
	if (!ctx.cr0.lt) goto loc_880FF3B4;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_880FF3B4:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880ff3c4
	if (ctx.cr6.gt) goto loc_880FF3C4;
loc_880FF3C0:
	// stw r27,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
loc_880FF3C4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ff3fc
	if (ctx.cr6.eq) goto loc_880FF3FC;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bge 0x880ff3fc
	if (!ctx.cr0.lt) goto loc_880FF3FC;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_880FF3FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880ff4f4
	if (ctx.cr6.gt) goto loc_880FF4F4;
	// stw r25,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880ff0e0
	ctx.lr = 0x880FF414;
	sub_880FF0E0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ff454
	if (ctx.cr6.eq) goto loc_880FF454;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880FF438;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-32
	ctx.r6.s64 = -32;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x88013940
	ctx.lr = 0x880FF454;
	sub_88013940(ctx, base);
loc_880FF454:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x880ff4f4
	if (ctx.cr0.gt) goto loc_880FF4F4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x880ff4f4
	goto loc_880FF4F4;
loc_880FF470:
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff558
	if (!ctx.cr6.eq) goto loc_880FF558;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880FF494;
	sub_880244D0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8801a808
	ctx.lr = 0x880FF4A4;
	sub_8801A808(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x880ff4f8
	if (!ctx.cr6.eq) goto loc_880FF4F8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x880ff4f8
	goto loc_880FF4F8;
loc_880FF4C0:
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff558
	if (!ctx.cr6.eq) goto loc_880FF558;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bge 0x880ff4f4
	if (!ctx.cr0.lt) goto loc_880FF4F4;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_880FF4F4:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_880FF4F8:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a808
	ctx.lr = 0x880FF504;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8801a860
	ctx.lr = 0x880FF520;
	sub_8801A860(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880FF54C;
	sub_88024438(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_880FF558:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880ff584
	if (ctx.cr6.lt) goto loc_880FF584;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024758
	ctx.lr = 0x880FF57C;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ff1a4
	if (ctx.cr6.eq) goto loc_880FF1A4;
loc_880FF584:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880ff5cc
	if (ctx.cr6.eq) goto loc_880FF5CC;
	// sth r25,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r25.u16);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// beq cr6,0x880ff5cc
	if (ctx.cr6.eq) goto loc_880FF5CC;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
loc_880FF5CC:
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ff688
	if (!ctx.cr6.eq) goto loc_880FF688;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ff688
	if (!ctx.cr6.eq) goto loc_880FF688;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x880ff688
	if (ctx.cr6.lt) goto loc_880FF688;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880ff688
	if (!ctx.cr6.lt) goto loc_880FF688;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x880ff688
	if (!ctx.cr0.lt) goto loc_880FF688;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne cr6,0x880ff630
	if (!ctx.cr6.eq) goto loc_880FF630;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r27,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880FF630:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,-4
	ctx.r30.s64 = -4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_880FF644:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,15
	ctx.r8.s64 = 15;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x880FF668;
	sub_88013CE0(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x880ff644
	if (ctx.cr6.lt) goto loc_880FF644;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bgt 0x880ff688
	if (ctx.cr0.gt) goto loc_880FF688;
	// stw r27,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_880FF688:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x880ff6b0
	if (!ctx.cr0.lt) goto loc_880FF6B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
loc_880FF6B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x880ff6cc
	if (ctx.cr6.lt) goto loc_880FF6CC;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_880FF6CC:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,11887
	ctx.r3.s64 = ctx.r11.s64 + 11887;
	// bl 0x8801a9c8
	ctx.lr = 0x880FF6FC;
	sub_8801A9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880FF708;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x8813ff48
	ctx.lr = 0x880FF714;
	sub_8813FF48(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r8,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// stw r7,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// bl 0x88018b98
	ctx.lr = 0x880FF738;
	sub_88018B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88103228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88103230;
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
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x88103250;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,-8
	ctx.r6.s64 = -8;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r5,12408
	ctx.r5.s64 = ctx.r5.s64 + 12408;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// stw r7,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r6,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x881032AC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88103708) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88103710;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88103724;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x88103738;
	sub_88021508(ctx, base);
	// lwz r11,172(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 172);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810384c
	if (!ctx.cr6.eq) goto loc_8810384C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881037ac
	if (!ctx.cr6.eq) goto loc_881037AC;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bge 0x881037ac
	if (!ctx.cr0.lt) goto loc_881037AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 76);
	// bl 0x88021c70
	ctx.lr = 0x8810377C;
	sub_88021C70(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-24736
	ctx.r4.s64 = ctx.r11.s64 + -24736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88103790;
	sub_88021AD0(ctx, base);
	// stw r3,76(r27)
	REX_STORE_U32(ctx.r27.u32 + 76, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021598
	ctx.lr = 0x881037A0;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_881037AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x8810389c
	if (!ctx.cr0.lt) goto loc_8810389C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r30,48(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r29,52(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x881037DC;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881037f8
	if (ctx.cr6.lt) goto loc_881037F8;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8801a808
	ctx.lr = 0x881037F0;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_881037F8:
	// li r4,170
	ctx.r4.s64 = 170;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r6,r11,-15
	ctx.r6.s64 = ctx.r11.s64 + -15;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x880140f0
	ctx.lr = 0x8810382C;
	sub_880140F0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8810389c
	if (ctx.cr6.lt) goto loc_8810389C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8810389c
	goto loc_8810389C;
loc_8810384C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8810389c
	if (!ctx.cr0.lt) goto loc_8810389C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,48(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r5,52(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x880244d0
	ctx.lr = 0x8810387C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88103888
	if (ctx.cr6.lt) goto loc_88103888;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_88103888:
	// li r11,-15
	ctx.r11.s64 = -15;
	// stw r26,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810389C;
	sub_880244A8(ctx, base);
loc_8810389C:
	// lwz r11,172(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88103930
	if (ctx.cr6.eq) goto loc_88103930;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8810392c
	if (!ctx.cr0.lt) goto loc_8810392C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,-31
	ctx.r10.s64 = -31;
	// lwz r30,48(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r28,48(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r27,52(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_881038D8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013940
	ctx.lr = 0x881038F4;
	sub_88013940(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// bl 0x88013940
	ctx.lr = 0x88103914;
	sub_88013940(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x881038d8
	if (!ctx.cr0.eq) goto loc_881038D8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8810392C:
	// stw r26,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
loc_88103930:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881059B0) {
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
	ctx.lr = 0x881059D0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x881059E0;
	sub_88021508(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,20
	ctx.r8.s64 = 20;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lis r7,-30704
	ctx.r7.s64 = -2012217344;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// addi r5,r7,22496
	ctx.r5.s64 = ctx.r7.s64 + 22496;
	// stw r8,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x88105A40;
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

DEFINE_REX_FUNC(sub_881061E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881061E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x881061FC;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8810620C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,-8
	ctx.r6.s64 = -8;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r28,5
	ctx.r28.s64 = 5;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// addi r5,r5,24328
	ctx.r5.s64 = ctx.r5.s64 + 24328;
	// stw r6,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// stw r10,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r10.u32);
	// stw r11,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// stw r28,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r28.u32);
	// bl 0x880214b8
	ctx.lr = 0x88106270;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88106730) {
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
	ctx.lr = 0x88106750;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x88106760;
	sub_88021508(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,20
	ctx.r8.s64 = 20;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,-8
	ctx.r9.s64 = -8;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r6,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// addi r5,r5,25952
	ctx.r5.s64 = ctx.r5.s64 + 25952;
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
	// bl 0x880214b8
	ctx.lr = 0x881067BC;
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

DEFINE_REX_FUNC(sub_88107040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88107048;
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
	ctx.lr = 0x8810705C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8810706C;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20480
	ctx.r9.s64 = 20480;
	// li r8,-8
	ctx.r8.s64 = -8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// addi r5,r5,28008
	ctx.r5.s64 = ctx.r5.s64 + 28008;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r7,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r7.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// stw r6,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x881070CC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88108C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88023f40
	ctx.lr = 0x88108C18;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,100
	ctx.r29.s64 = 100;
	// addi r31,r3,560
	ctx.r31.s64 = ctx.r3.s64 + 560;
	// li r28,0
	ctx.r28.s64 = 0;
loc_88108C28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88108ca8
	if (ctx.cr6.eq) goto loc_88108CA8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,11886
	ctx.r3.s64 = 11886;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a9c8
	ctx.lr = 0x88108C48;
	sub_8801A9C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88108C60;
	sub_8813FF90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r27,16(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88024438
	ctx.lr = 0x88108C70;
	sub_88024438(ctx, base);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r27,20(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88024460
	ctx.lr = 0x88108C88;
	sub_88024460(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r9,-3
	ctx.xer.ca = ctx.r9.u32 > 2;
	ctx.r11.s64 = ctx.r9.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r3,r27
	ctx.r8.u64 = ctx.r3.u64 + ctx.r27.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bgt 0x88108ca8
	if (ctx.cr0.gt) goto loc_88108CA8;
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_88108CA8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x88108c28
	if (!ctx.cr0.eq) goto loc_88108C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108F88) {
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
	ctx.lr = 0x88108FA8;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x88021be0
	ctx.lr = 0x88108FB8;
	sub_88021BE0(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-28896
	ctx.r5.s64 = ctx.r11.s64 + -28896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x88108FCC;
	sub_88021B90(ctx, base);
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

DEFINE_REX_FUNC(sub_88109578) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x88109580;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88109594;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021be0
	ctx.lr = 0x881095A8;
	sub_88021BE0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x88024030
	ctx.lr = 0x881095C4;
	sub_88024030(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x8810961c
	if (!ctx.cr0.lt) goto loc_8810961C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x881095E8;
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
	ctx.lr = 0x881095FC;
	sub_8801A860(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
loc_8810961C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x881097b0
	if (ctx.cr6.gt) goto loc_881097B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x881097bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881097BC;
	// bdzf 4*cr6+eq,0x88109998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88109998;
	// bdzf 4*cr6+eq,0x88109b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88109B14;
	// bne cr6,0x88109cd4
	if (!ctx.cr6.eq) goto loc_88109CD4;
	// bl 0x880b1e10
	ctx.lr = 0x88109644;
	sub_880B1E10(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// addi r27,r11,31080
	ctx.r27.s64 = ctx.r11.s64 + 31080;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r27,384
	ctx.r3.s64 = ctx.r27.s64 + 384;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x880c9b98
	ctx.lr = 0x88109660;
	sub_880C9B98(ctx, base);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
loc_88109668:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,-12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -12);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r9,-8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + -8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a99a8
	ctx.lr = 0x88109694;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x881096A0;
	sub_8801A448(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x881096B8;
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
	ctx.lr = 0x881096CC;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x881096D8;
	sub_8801A448(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x881096F0;
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
	ctx.lr = 0x88109704;
	sub_880A99A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x88109710;
	sub_8801A448(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,-64
	ctx.r6.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88109728;
	sub_880A9A58(ctx, base);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r5,r27,592
	ctx.r5.s64 = ctx.r27.s64 + 592;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88109668
	if (ctx.cr6.lt) goto loc_88109668;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,192(r30)
	REX_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
	// bl 0x88108dd8
	ctx.lr = 0x88109754;
	sub_88108DD8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r10,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r27,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// bl 0x8801a448
	ctx.lr = 0x88109794;
	sub_8801A448(ctx, base);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r27,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_881097B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_881097BC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bge 0x881097f0
	if (!ctx.cr0.lt) goto loc_881097F0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x881097DC;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881097ec
	if (ctx.cr6.eq) goto loc_881097EC;
	// bl 0x880b1c90
	ctx.lr = 0x881097E8;
	sub_880B1C90(ctx, base);
	// b 0x881097f0
	goto loc_881097F0;
loc_881097EC:
	// bl 0x880b1a90
	ctx.lr = 0x881097F0;
	sub_880B1A90(ctx, base);
loc_881097F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x88109844
	if (!ctx.cr0.lt) goto loc_88109844;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88109844
	if (ctx.cr6.lt) goto loc_88109844;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88109844:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88109874
	if (!ctx.cr6.eq) goto loc_88109874;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x88109874
	if (ctx.cr6.lt) goto loc_88109874;
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88109874:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subfic r6,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// subfic r5,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r11,192(r30)
	REX_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x881097b0
	if (!ctx.cr0.lt) goto loc_881097B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// addi r11,r8,31080
	ctx.r11.s64 = ctx.r8.s64 + 31080;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r4,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r8,40
	ctx.r5.s64 = ctx.r8.s64 + 2621440;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a84f0
	ctx.lr = 0x8810991C;
	sub_880A84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x88109928;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x88109938;
	sub_880A85C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x8810994C;
	sub_880A99A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x88109958;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88109964;
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
	// blt cr6,0x881097b0
	if (ctx.cr6.lt) goto loc_881097B0;
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_88109998:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bge 0x881099cc
	if (!ctx.cr0.lt) goto loc_881099CC;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x881099B8;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881099c8
	if (ctx.cr6.eq) goto loc_881099C8;
	// bl 0x880b1c90
	ctx.lr = 0x881099C4;
	sub_880B1C90(ctx, base);
	// b 0x881099cc
	goto loc_881099CC;
loc_881099C8:
	// bl 0x880b1a90
	ctx.lr = 0x881099CC;
	sub_880B1A90(ctx, base);
loc_881099CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x881097b0
	if (!ctx.cr0.lt) goto loc_881097B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r27,40
	ctx.r27.s64 = 2621440;
	// addi r11,r9,31080
	ctx.r11.s64 = ctx.r9.s64 + 31080;
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
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
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
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880a84f0
	ctx.lr = 0x88109A4C;
	sub_880A84F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x88109A58;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x88109A68;
	sub_880A85C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x880a99a8
	ctx.lr = 0x88109A7C;
	sub_880A99A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x88109A88;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88109A94;
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
	// blt cr6,0x88109ac0
	if (ctx.cr6.lt) goto loc_88109AC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_88109AC0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x881097b0
	if (ctx.cr0.gt) goto loc_881097B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,1480
	ctx.r4.s64 = ctx.r10.s64 + 1480;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r7,r8,r27
	ctx.r7.u64 = ctx.r8.u64 + ctx.r27.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x88021ad0
	ctx.lr = 0x88109B04;
	sub_88021AD0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_88109B14:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_88109B1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88108cc0
	ctx.lr = 0x88109B2C;
	sub_88108CC0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x88109b1c
	if (ctx.cr6.lt) goto loc_88109B1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88109c14
	if (!ctx.cr6.eq) goto loc_88109C14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024750
	ctx.lr = 0x88109B4C;
	sub_88024750(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,60
	ctx.r29.s64 = 60;
loc_88109B54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024068
	ctx.lr = 0x88109B5C;
	sub_88024068(ctx, base);
	// addi r25,r3,-1
	ctx.r25.s64 = ctx.r3.s64 + -1;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8801a448
	ctx.lr = 0x88109B68;
	sub_8801A448(ctx, base);
	// addi r24,r3,-24
	ctx.r24.s64 = ctx.r3.s64 + -24;
	// li r3,127
	ctx.r3.s64 = 127;
	// lwz r26,52(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x8801a448
	ctx.lr = 0x88109B78;
	sub_8801A448(ctx, base);
	// addi r10,r3,-64
	ctx.r10.s64 = ctx.r3.s64 + -64;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r11,r24,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x88011948
	ctx.lr = 0x88109BA0;
	sub_88011948(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88011ae8
	ctx.lr = 0x88109BA8;
	sub_88011AE8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88109b54
	if (!ctx.cr0.eq) goto loc_88109B54;
	// li r29,30
	ctx.r29.s64 = 30;
loc_88109BB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024068
	ctx.lr = 0x88109BBC;
	sub_88024068(ctx, base);
	// addi r25,r3,-1
	ctx.r25.s64 = ctx.r3.s64 + -1;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8801a448
	ctx.lr = 0x88109BC8;
	sub_8801A448(ctx, base);
	// addi r24,r3,-24
	ctx.r24.s64 = ctx.r3.s64 + -24;
	// li r3,127
	ctx.r3.s64 = 127;
	// lwz r26,52(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x8801a448
	ctx.lr = 0x88109BD8;
	sub_8801A448(ctx, base);
	// addi r10,r3,-64
	ctx.r10.s64 = ctx.r3.s64 + -64;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r11,r24,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r3,3
	ctx.r3.s64 = 3;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x88011948
	ctx.lr = 0x88109C00;
	sub_88011948(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88011ae8
	ctx.lr = 0x88109C08;
	sub_88011AE8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x88109bb4
	if (!ctx.cr0.eq) goto loc_88109BB4;
	// b 0x88109cb4
	goto loc_88109CB4;
loc_88109C14:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,188
	ctx.r8.s64 = 188;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r7,188
	ctx.r7.s64 = 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x88109C44;
	sub_880114D8(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88024748
	ctx.lr = 0x88109C4C;
	sub_88024748(ctx, base);
	// li r6,120
	ctx.r6.s64 = 120;
	// divwu r26,r3,r6
	ctx.r26.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// cmpwi cr6,r26,200
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 200, ctx.xer);
	// ble cr6,0x88109c60
	if (!ctx.cr6.gt) goto loc_88109C60;
	// li r26,200
	ctx.r26.s64 = 200;
loc_88109C60:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88109cb4
	if (!ctx.cr6.gt) goto loc_88109CB4;
	// lis r27,40
	ctx.r27.s64 = 2621440;
loc_88109C70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r25,16(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x88024068
	ctx.lr = 0x88109C7C;
	sub_88024068(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r8,208
	ctx.r8.s64 = 208;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x88011310
	ctx.lr = 0x88109CA0;
	sub_88011310(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88011ae8
	ctx.lr = 0x88109CA8;
	sub_88011AE8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88109c70
	if (ctx.cr6.lt) goto loc_88109C70;
loc_88109CB4:
	// bl 0x880b3fb0
	ctx.lr = 0x88109CB8;
	sub_880B3FB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,270
	ctx.r10.s64 = 270;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_88109CD4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x881097b0
	if (!ctx.cr0.lt) goto loc_881097B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88023f48
	ctx.lr = 0x88109CEC;
	sub_88023F48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880247f8
	ctx.lr = 0x88109CF4;
	sub_880247F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F7F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810F800;
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
	ctx.lr = 0x8810F810;
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
	ctx.lr = 0x8810F824;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x8810f864
	if (!ctx.cr0.lt) goto loc_8810F864;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x8810f868
	if (ctx.cr6.lt) goto loc_8810F868;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810F864:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810F868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810FBD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8810FBD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810FBEC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021898
	ctx.lr = 0x8810FC00;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x8810fccc
	if (!ctx.cr0.lt) goto loc_8810FCCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8810fccc
	if (ctx.cr6.lt) goto loc_8810FCCC;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x8810FC44;
	sub_8813FA58(ctx, base);
	// li r11,81
	ctx.r11.s64 = 81;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r27,-39
	ctx.r27.s64 = -2555904;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880221d0
	ctx.lr = 0x8810FC88;
	sub_880221D0(ctx, base);
	// addi r6,r31,168
	ctx.r6.s64 = ctx.r31.s64 + 168;
	// lis r5,-4
	ctx.r5.s64 = -262144;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,448
	ctx.r4.s64 = 448;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880221d0
	ctx.lr = 0x8810FCB4;
	sub_880221D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021928
	ctx.lr = 0x8810FCC0;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8810FCCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88110D20) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021508
	ctx.lr = 0x88110D4C;
	sub_88021508(ctx, base);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,80
	ctx.r7.s64 = 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,-8
	ctx.r11.s64 = -8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r5.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r3,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// addi r5,r8,2896
	ctx.r5.s64 = ctx.r8.s64 + 2896;
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x88110DA4;
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

DEFINE_REX_FUNC(sub_88111710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88111718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x88111734;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,-8
	ctx.r11.s64 = -8;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r8,96
	ctx.r8.s64 = 96;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x8811178C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881117a0
	if (ctx.cr6.eq) goto loc_881117A0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_881117A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,5368
	ctx.r5.s64 = ctx.r9.s64 + 5368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x881117C4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88112268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021508
	ctx.lr = 0x88112284;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// bl 0x8801a448
	ctx.lr = 0x881122DC;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881122f0
	if (ctx.cr6.eq) goto loc_881122F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_881122F0:
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880694c8
	ctx.lr = 0x881122FC;
	sub_880694C8(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,8176
	ctx.r5.s64 = ctx.r11.s64 + 8176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880214b8
	ctx.lr = 0x88112310;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88112AC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x88023f40
	ctx.lr = 0x88112AD4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88112AE0;
	sub_88024030(ctx, base);
	// lwz r9,548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// addi r26,r3,2
	ctx.r26.s64 = ctx.r3.s64 + 2;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r30,544(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 544);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88112b6c
	if (ctx.cr6.lt) goto loc_88112B6C;
	// bne cr6,0x88112ba0
	if (!ctx.cr6.eq) goto loc_88112BA0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// addi r10,r10,-30696
	ctx.r10.s64 = ctx.r10.s64 + -30696;
	// ble cr6,0x88112b4c
	if (!ctx.cr6.gt) goto loc_88112B4C;
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,14093
	ctx.r28.s64 = ctx.r11.s64 + 14093;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r30,r8,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88112ba0
	goto loc_88112BA0;
loc_88112B4C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,14093
	ctx.r28.s64 = ctx.r11.s64 + 14093;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88112ba0
	goto loc_88112BA0;
loc_88112B6C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-30792
	ctx.r11.s64 = ctx.r11.s64 + -30792;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r28,r8,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_88112BA0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112BB4;
	sub_8801A9C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112BC0;
	sub_8813FF08(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,808(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 808);
	// bl 0x8813ff48
	ctx.lr = 0x88112BCC;
	sub_8813FF48(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88112c14
	if (ctx.cr6.eq) goto loc_88112C14;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112BEC;
	sub_8801A9C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88112BF8;
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
	ctx.lr = 0x88112C14;
	sub_8813FF90(ctx, base);
loc_88112C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f60
	ctx.lr = 0x88113908;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811391C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x88113930;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x88113a7c
	if (ctx.cr6.gt) goto loc_88113A7C;
	// beq cr6,0x88113a18
	if (ctx.cr6.eq) goto loc_88113A18;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881139e0
	if (ctx.cr6.eq) goto loc_881139E0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x881139b4
	if (ctx.cr6.eq) goto loc_881139B4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024028
	ctx.lr = 0x88113978;
	sub_88024028(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x88022460
	ctx.lr = 0x88113988;
	sub_88022460(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x88022460
	ctx.lr = 0x88113998;
	sub_88022460(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_881139B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x88113bf4
	if (!ctx.cr0.lt) goto loc_88113BF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8809cb78
	ctx.lr = 0x881139CC;
	sub_8809CB78(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_881139E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x88113bf4
	if (!ctx.cr0.lt) goto loc_88113BF4;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-11972(r10)
	REX_STORE_U32(ctx.r10.u32 + -11972, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_88113A18:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x88113bf4
	if (!ctx.cr0.lt) goto loc_88113BF4;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-560
	ctx.r4.s64 = ctx.r10.s64 + -560;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x88113A44;
	sub_88021780(ctx, base);
	// stw r3,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-808
	ctx.r4.s64 = ctx.r9.s64 + -808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x88113A5C;
	sub_88021780(ctx, base);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_88113A7C:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x88113ae0
	if (ctx.cr6.eq) goto loc_88113AE0;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23112
	ctx.r4.s64 = ctx.r11.s64 + 23112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x88113AAC;
	sub_88021D68(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,20136
	ctx.r4.s64 = ctx.r9.s64 + 20136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88113AC8;
	sub_88021AD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021c70
	ctx.lr = 0x88113AD4;
	sub_88021C70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
loc_88113AE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x88021a28
	ctx.lr = 0x88113AEC;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8810ff28
	ctx.lr = 0x88113B04;
	sub_8810FF28(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// stw r9,1348(r31)
	REX_STORE_U32(ctx.r31.u32 + 1348, ctx.r9.u32);
	// li r11,20
	ctx.r11.s64 = 20;
loc_88113B14:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bne 0x88113b14
	if (!ctx.cr0.eq) goto loc_88113B14;
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r18,80(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r5,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r5.u32);
	// stw r10,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// rotlwi r26,r10,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r24,r10,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r8.u32);
	// rotlwi r22,r10,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// rotlwi r20,r10,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r28,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r28.u32);
	// lis r6,-30608
	ctx.r6.s64 = -2005925888;
	// stw r26,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r26.u32);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r24,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r24.u32);
	// rotlwi r29,r8,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r22,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r22.u32);
	// rotlwi r27,r8,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r3,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r3.u32);
	// rotlwi r25,r8,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r29,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r29.u32);
	// rotlwi r23,r8,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r27,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r27.u32);
	// rotlwi r21,r8,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r25,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r25.u32);
	// rotlwi r19,r8,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r23,580(r31)
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r21.u32);
	// stw r20,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r20.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r19,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r19.u32);
	// stw r7,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// stw r9,680(r31)
	REX_STORE_U32(ctx.r31.u32 + 680, ctx.r9.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,804(r31)
	REX_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// stw r9,928(r31)
	REX_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// stw r9,1052(r31)
	REX_STORE_U32(ctx.r31.u32 + 1052, ctx.r9.u32);
	// stw r9,1176(r31)
	REX_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// stw r9,1300(r31)
	REX_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// stw r4,1352(r31)
	REX_STORE_U32(ctx.r31.u32 + 1352, ctx.r4.u32);
	// stw r10,21868(r6)
	REX_STORE_U32(ctx.r6.u32 + 21868, ctx.r10.u32);
	// stw r11,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_88113BF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88117578) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,228(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// bl 0x88024030
	ctx.lr = 0x88117598;
	sub_88024030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880b1a10
	ctx.lr = 0x881175A0;
	sub_880B1A10(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a84f0
	ctx.lr = 0x881175B4;
	sub_880A84F0(ctx, base);
	// lwz r5,196(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r4,188(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x881175C4;
	sub_880A85C0(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880a8668
	ctx.lr = 0x881175D0;
	sub_880A8668(ctx, base);
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// bl 0x88023f48
	ctx.lr = 0x881175D8;
	sub_88023F48(ctx, base);
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

DEFINE_REX_FUNC(sub_88117A00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88117A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88117A14;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88117A20;
	sub_88024030(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x8801a860
	ctx.lr = 0x88117A38;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x88117A64;
	sub_88024438(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88117a9c
	if (ctx.cr6.lt) goto loc_88117A9C;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_88117A9C:
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,21864(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21864);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88117b2c
	if (!ctx.cr6.eq) goto loc_88117B2C;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r6,-40
	ctx.r6.s64 = -40;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x88117AD8;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,192
	ctx.r7.s64 = 192;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-40
	ctx.r6.s64 = -40;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x88117AF4;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,320
	ctx.r7.s64 = 320;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-40
	ctx.r6.s64 = -40;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x88117B10;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,448
	ctx.r7.s64 = 448;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-40
	ctx.r6.s64 = -40;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x88117B2C;
	sub_88013940(ctx, base);
loc_88117B2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88117b4c
	if (!ctx.cr6.lt) goto loc_88117B4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88117B44;
	sub_88023F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88117B4C:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// beq cr6,0x88117b8c
	if (ctx.cr6.eq) goto loc_88117B8C;
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88117b8c
	if (ctx.cr6.lt) goto loc_88117B8C;
	// lwz r11,21864(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21864);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88117b8c
	if (ctx.cr6.eq) goto loc_88117B8C;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_88117B8C:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88117bb0
	if (ctx.cr6.eq) goto loc_88117BB0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r9.u16);
loc_88117BB0:
	// lhz r11,82(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88117bd0
	if (ctx.cr6.eq) goto loc_88117BD0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r30)
	REX_STORE_U16(ctx.r30.u32 + 82, ctx.r10.u16);
	// b 0x88117bd8
	goto loc_88117BD8;
loc_88117BD0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88117bfc
	if (ctx.cr6.eq) goto loc_88117BFC;
loc_88117BD8:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// beq cr6,0x88117bfc
	if (ctx.cr6.eq) goto loc_88117BFC;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// stw r10,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
loc_88117BFC:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// stw r11,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bge 0x88117c30
	if (!ctx.cr0.lt) goto loc_88117C30;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r10,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r8,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
loc_88117C30:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,6955
	ctx.r3.s64 = ctx.r11.s64 + 6955;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8801a9c8
	ctx.lr = 0x88117C48;
	sub_8801A9C8(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x8813ff48
	ctx.lr = 0x88117C50;
	sub_8813FF48(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// stw r8,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x88117C8C;
	sub_88018B98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119290) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x881192AC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x881192C0;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// bgt cr6,0x881192d0
	if (ctx.cr6.gt) goto loc_881192D0;
	// li r3,192
	ctx.r3.s64 = 192;
	// b 0x881192dc
	goto loc_881192DC;
loc_881192D0:
	// cmpwi cr6,r3,320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 320, ctx.xer);
	// blt cr6,0x881192dc
	if (ctx.cr6.lt) goto loc_881192DC;
	// li r3,320
	ctx.r3.s64 = 320;
loc_881192DC:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,376(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x8801a808
	ctx.lr = 0x881192E8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88119A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88119A60;
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
	ctx.lr = 0x88119A70;
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
	ctx.lr = 0x88119A84;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88119b1c
	if (!ctx.cr0.lt) goto loc_88119B1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x88119ac4
	if (!ctx.cr6.eq) goto loc_88119AC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-19984
	ctx.r4.s64 = ctx.r10.s64 + -19984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x88119AC4;
	sub_88021D68(ctx, base);
loc_88119AC4:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x88119b1c
	if (ctx.cr6.lt) goto loc_88119B1C;
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-27528
	ctx.r4.s64 = ctx.r10.s64 + -27528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88119AF4;
	sub_88021780(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r3,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r8,r9,-60
	ctx.r8.s64 = ctx.r9.s64 + -3932160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// bl 0x88021928
	ctx.lr = 0x88119B10;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88119B1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811AAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811AAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811AAEC;
	sub_88023F40(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x8811AAFC;
	sub_88021508(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r7,-18
	ctx.r7.s64 = -18;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8811ab4c
	if (!ctx.cr6.eq) goto loc_8811AB4C;
	// li r9,-6
	ctx.r9.s64 = -6;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_8811AB4C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,-22392
	ctx.r5.s64 = ctx.r7.s64 + -22392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811AB88;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811B320) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8811B328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811B33C;
	sub_88023F40(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021508
	ctx.lr = 0x8811B34C;
	sub_88021508(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r9,-6
	ctx.r9.s64 = -6;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// addi r6,r11,-7
	ctx.r6.s64 = ctx.r11.s64 + -7;
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8811b3b0
	if (ctx.cr6.eq) goto loc_8811B3B0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_8811B3B0:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8811b3f4
	if (!ctx.cr6.eq) goto loc_8811B3F4;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x8811B3CC;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8811b3dc
	if (ctx.cr6.eq) goto loc_8811B3DC;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8811B3DC:
	// li r11,-16
	ctx.r11.s64 = -16;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_8811B3F4:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r5,r10,-20064
	ctx.r5.s64 = ctx.r10.s64 + -20064;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811B430;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811C198) {
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
	ctx.lr = 0x8811C1B8;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x8811C1C8;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// addi r5,r5,-16280
	ctx.r5.s64 = ctx.r5.s64 + -16280;
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811C214;
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

DEFINE_REX_FUNC(sub_8811DEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811DEA8;
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
	ctx.lr = 0x8811DEBC;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x88021508
	ctx.lr = 0x8811DECC;
	sub_88021508(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,-20
	ctx.r10.s64 = -20;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lis r3,-30702
	ctx.r3.s64 = -2012086272;
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// addi r5,r3,-9256
	ctx.r5.s64 = ctx.r3.s64 + -9256;
	// stw r10,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r7.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// stw r10,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r10.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r7.u32);
	// stw r9,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r11,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811DF48;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x8811E278;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811E28C;
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
	ctx.lr = 0x8811E2A0;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811e428
	if (ctx.cr6.eq) goto loc_8811E428;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811e4e0
	if (!ctx.cr0.lt) goto loc_8811E4E0;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,-23688
	ctx.r29.s64 = ctx.r11.s64 + -23688;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// li r27,24
	ctx.r27.s64 = 24;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r10,r7,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r5,944(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bne cr6,0x8811e328
	if (!ctx.cr6.eq) goto loc_8811E328;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,24
	ctx.r9.s64 = 24;
	// bl 0x88013ce0
	ctx.lr = 0x8811E324;
	sub_88013CE0(ctx, base);
	// b 0x8811e344
	goto loc_8811E344;
loc_8811E328:
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r11,-6
	ctx.r6.s64 = ctx.r11.s64 + -6;
	// bl 0x880140f0
	ctx.lr = 0x8811E344;
	sub_880140F0(ctx, base);
loc_8811E344:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// lwz r7,944(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// li r3,14
	ctx.r3.s64 = 14;
	// subfic r11,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r11.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r11,r6,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x8811e398
	if (!ctx.cr6.eq) goto loc_8811E398;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,24
	ctx.r9.s64 = 24;
	// bl 0x88013ce0
	ctx.lr = 0x8811E394;
	sub_88013CE0(ctx, base);
	// b 0x8811e3b4
	goto loc_8811E3B4;
loc_8811E398:
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r6,r11,-6
	ctx.r6.s64 = ctx.r11.s64 + -6;
	// bl 0x880140f0
	ctx.lr = 0x8811E3B4;
	sub_880140F0(ctx, base);
loc_8811E3B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x8811E3C8;
	sub_880244A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8811e4e0
	if (ctx.cr6.gt) goto loc_8811E4E0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x88021738
	ctx.lr = 0x8811E3F8;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8811e410
	if (ctx.cr6.eq) goto loc_8811E410;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x8811e4e0
	if (ctx.cr0.gt) goto loc_8811E4E0;
loc_8811E410:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x8811E41C;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_8811E428:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811e4e0
	if (!ctx.cr0.lt) goto loc_8811E4E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8811E450;
	sub_8801A448(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// addi r29,r9,-23688
	ctx.r29.s64 = ctx.r9.s64 + -23688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// lwzx r9,r7,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811E484;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// subfic r11,r5,15
	ctx.xer.ca = ctx.r5.u32 <= 15;
	ctx.r11.u64 = static_cast<uint64_t>(15) - ctx.r5.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811E4B8;
	sub_880244D0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8811e4e0
	if (!ctx.cr6.eq) goto loc_8811E4E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x8811E4D8;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8811E4E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88120F38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88120F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88120F54;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021508
	ctx.lr = 0x88120F68;
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
	// bge 0x88121030
	if (!ctx.cr0.lt) goto loc_88121030;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x88120f9c
	if (ctx.cr6.gt) goto loc_88120F9C;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_88120F9C:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,72(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// addis r29,r11,60
	ctx.r29.s64 = ctx.r11.s64 + 3932160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x88120FB8;
	sub_880244D0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// subfic r8,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r8.u64;
	// bl 0x88013ce0
	ctx.lr = 0x88120FE4;
	sub_88013CE0(ctx, base);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r11.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// blt 0x88120ffc
	if (ctx.cr0.lt) goto loc_88120FFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_88120FFC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88121030
	if (!ctx.cr0.lt) goto loc_88121030;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88121024;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88121030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88121C98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x88121CA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x88121CB0;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88121CBC;
	sub_88024030(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r22,4(r29)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8801a860
	ctx.lr = 0x88121CE0;
	sub_8801A860(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r23,r11,-17184
	ctx.r23.s64 = ctx.r11.s64 + -17184;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r23,-536
	ctx.r11.s64 = ctx.r23.s64 + -536;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r23,-536
	ctx.r26.s64 = ctx.r23.s64 + -536;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,12105
	ctx.r28.s64 = ctx.r11.s64 + 12105;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwzx r9,r29,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121D34;
	sub_8801A9C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88121d6c
	if (ctx.cr6.eq) goto loc_88121D6C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121D48;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88121d6c
	if (ctx.cr6.eq) goto loc_88121D6C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88121D6C;
	sub_8813FF90(ctx, base);
loc_88121D6C:
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r8,r29,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121DA0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88121DAC;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88121de4
	if (ctx.cr6.eq) goto loc_88121DE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121DC0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88121de4
	if (ctx.cr6.eq) goto loc_88121DE4;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88121DE4;
	sub_8813FF90(ctx, base);
loc_88121DE4:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88121ecc
	if (ctx.cr6.eq) goto loc_88121ECC;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r27,60
	ctx.r27.s64 = 3932160;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r28,29
	ctx.r28.s64 = 1900544;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,12702
	ctx.r3.s64 = 12702;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r27,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121E24;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88121e5c
	if (ctx.cr6.eq) goto loc_88121E5C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121E38;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88121e5c
	if (ctx.cr6.eq) goto loc_88121E5C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88121E5C;
	sub_8813FF90(ctx, base);
loc_88121E5C:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12702
	ctx.r3.s64 = 12702;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121E88;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88121E94;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88121ecc
	if (ctx.cr6.eq) goto loc_88121ECC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121EA8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88121ecc
	if (ctx.cr6.eq) goto loc_88121ECC;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88121ECC;
	sub_8813FF90(ctx, base);
loc_88121ECC:
	// lis r11,20164
	ctx.r11.s64 = 1321467904;
	// lwz r9,328(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// lis r27,28
	ctx.r27.s64 = 1835008;
	// ori r24,r11,60495
	ctx.r24.u64 = ctx.r11.u64 | 60495;
	// lis r26,25
	ctx.r26.s64 = 1638400;
	// mulhw r7,r9,r24
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32)) >> 32;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,13
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(13));
	// subf r4,r5,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r3,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	// beq cr6,0x88121f7c
	if (ctx.cr6.eq) goto loc_88121F7C;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r29,12703
	ctx.r3.s64 = ctx.r29.s64 + 12703;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r27,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121F38;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88121f7c
	if (ctx.cr6.eq) goto loc_88121F7C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121F4C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x88121f6c
	if (ctx.cr6.eq) goto loc_88121F6C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x88121f74
	goto loc_88121F74;
loc_88121F6C:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r5,3
	ctx.r5.s64 = 3;
loc_88121F74:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88121F7C;
	sub_8813FF90(ctx, base);
loc_88121F7C:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122004
	if (ctx.cr6.eq) goto loc_88122004;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r29,12703
	ctx.r3.s64 = ctx.r29.s64 + 12703;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121FB4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88121FC0;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122004
	if (ctx.cr6.eq) goto loc_88122004;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88121FD4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x88121ff4
	if (ctx.cr6.eq) goto loc_88121FF4;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x88121ffc
	goto loc_88121FFC;
loc_88121FF4:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// li r5,3
	ctx.r5.s64 = 3;
loc_88121FFC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88122004;
	sub_8813FF90(ctx, base);
loc_88122004:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// lis r27,56
	ctx.r27.s64 = 3670016;
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulhw r9,r11,r24
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32)) >> 32;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r7,r8,13
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(13));
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r5,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// beq cr6,0x881220ac
	if (ctx.cr6.eq) goto loc_881220AC;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r29,12711
	ctx.r3.s64 = ctx.r29.s64 + 12711;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122068;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881220ac
	if (ctx.cr6.eq) goto loc_881220AC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812207C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8812209c
	if (ctx.cr6.eq) goto loc_8812209C;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x881220a4
	goto loc_881220A4;
loc_8812209C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// li r5,3
	ctx.r5.s64 = 3;
loc_881220A4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x881220AC;
	sub_8813FF90(ctx, base);
loc_881220AC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122134
	if (ctx.cr6.eq) goto loc_88122134;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r29,12711
	ctx.r3.s64 = ctx.r29.s64 + 12711;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881220E4;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x881220F0;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122134
	if (ctx.cr6.eq) goto loc_88122134;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122104;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x88122124
	if (ctx.cr6.eq) goto loc_88122124;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8812212c
	goto loc_8812212C;
loc_88122124:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// li r5,3
	ctx.r5.s64 = 3;
loc_8812212C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88122134;
	sub_8813FF90(ctx, base);
loc_88122134:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// lis r27,68
	ctx.r27.s64 = 4456448;
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lis r26,37
	ctx.r26.s64 = 2424832;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulhw r9,r11,r24
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32)) >> 32;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r7,r8,13
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(13));
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r5,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// beq cr6,0x881221e0
	if (ctx.cr6.eq) goto loc_881221E0;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r29,12719
	ctx.r3.s64 = ctx.r29.s64 + 12719;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812219C;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881221e0
	if (ctx.cr6.eq) goto loc_881221E0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881221B0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x881221d0
	if (ctx.cr6.eq) goto loc_881221D0;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x881221d8
	goto loc_881221D8;
loc_881221D0:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// li r5,3
	ctx.r5.s64 = 3;
loc_881221D8:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x881221E0;
	sub_8813FF90(ctx, base);
loc_881221E0:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122268
	if (ctx.cr6.eq) goto loc_88122268;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r29,12719
	ctx.r3.s64 = ctx.r29.s64 + 12719;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122218;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122224;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122268
	if (ctx.cr6.eq) goto loc_88122268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122238;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x88122258
	if (ctx.cr6.eq) goto loc_88122258;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x88122260
	goto loc_88122260;
loc_88122258:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,3
	ctx.r5.s64 = 3;
loc_88122260:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88122268;
	sub_8813FF90(ctx, base);
loc_88122268:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// lis r27,92
	ctx.r27.s64 = 6029312;
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulhw r9,r11,r24
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32)) >> 32;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r7,r8,13
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(13));
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r5,r23
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// beq cr6,0x88122310
	if (ctx.cr6.eq) goto loc_88122310;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r29,12727
	ctx.r3.s64 = ctx.r29.s64 + 12727;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r27.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881222CC;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88122310
	if (ctx.cr6.eq) goto loc_88122310;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881222E0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x88122300
	if (ctx.cr6.eq) goto loc_88122300;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x88122308
	goto loc_88122308;
loc_88122300:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// li r5,3
	ctx.r5.s64 = 3;
loc_88122308:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88122310;
	sub_8813FF90(ctx, base);
loc_88122310:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881223a8
	if (ctx.cr6.eq) goto loc_881223A8;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r29,12727
	ctx.r3.s64 = ctx.r29.s64 + 12727;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 + ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88122348;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88122354;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881223a8
	if (ctx.cr6.eq) goto loc_881223A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88122368;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x88122398
	if (ctx.cr6.eq) goto loc_88122398;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8812238C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_88122398:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// li r5,3
	ctx.r5.s64 = 3;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x881223A8;
	sub_8813FF90(ctx, base);
loc_881223A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812B0E8) {
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
	ctx.lr = 0x8812B104;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x88021de0
	ctx.lr = 0x8812B114;
	sub_88021DE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r11,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// addi r4,r10,-20384
	ctx.r4.s64 = ctx.r10.s64 + -20384;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e18
	ctx.lr = 0x8812B134;
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

DEFINE_REX_FUNC(sub_8812B400) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8812B408;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812B418;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x8812B428;
	sub_88021DE0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8801a860
	ctx.lr = 0x8812B440;
	sub_8801A860(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x8812afc8
	ctx.lr = 0x8812B468;
	sub_8812AFC8(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812b518
	if (!ctx.cr6.eq) goto loc_8812B518;
	// lwz r28,72(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88024498
	ctx.lr = 0x8812B484;
	sub_88024498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r26,44(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r25,r3,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x8812B4A4;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8801a808
	ctx.lr = 0x8812B4B4;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x8812B4D0;
	sub_8801A3E0(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8812b510
	if (!ctx.cr6.gt) goto loc_8812B510;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8812b504
	if (!ctx.cr0.lt) goto loc_8812B504;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_8812B504:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8812b518
	if (ctx.cr6.gt) goto loc_8812B518;
loc_8812B510:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8812B518:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812b54c
	if (ctx.cr6.eq) goto loc_8812B54C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8812b54c
	if (!ctx.cr0.lt) goto loc_8812B54C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
loc_8812B54C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8812b57c
	if (ctx.cr6.gt) goto loc_8812B57C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-19608
	ctx.r4.s64 = ctx.r9.s64 + -19608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x8812B57C;
	sub_88021D68(ctx, base);
loc_8812B57C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812CCD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x8812CCD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812CCEC;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88021898
	ctx.lr = 0x8812CD00;
	sub_88021898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x8812CD0C;
	sub_88024030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r3,3
	ctx.r30.s64 = ctx.r3.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8812ce2c
	if (!ctx.cr0.lt) goto loc_8812CE2C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// mulli r11,r11,124
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(124));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,448(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r27,452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// bl 0x8801a448
	ctx.lr = 0x8812CD3C;
	sub_8801A448(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// addi r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 1;
	// addi r11,r9,-15192
	ctx.r11.s64 = ctx.r9.s64 + -15192;
	// addi r8,r10,-5
	ctx.r8.s64 = ctx.r10.s64 + -5;
	// addi r7,r11,216
	ctx.r7.s64 = ctx.r11.s64 + 216;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// addi r23,r30,2
	ctx.r23.s64 = ctx.r30.s64 + 2;
	// li r30,6
	ctx.r30.s64 = 6;
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// add r26,r3,r5
	ctx.r26.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_8812CD70:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8812CD8C;
	sub_880A84F0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8812CD9C;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880a8620
	ctx.lr = 0x8812CDA8;
	sub_880A8620(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x880a99a8
	ctx.lr = 0x8812CDC4;
	sub_880A99A8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880a9a58
	ctx.lr = 0x8812CDCC;
	sub_880A9A58(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8801a448
	ctx.lr = 0x8812CDD4;
	sub_8801A448(ctx, base);
	// addi r20,r3,-12
	ctx.r20.s64 = ctx.r3.s64 + -12;
	// li r3,47
	ctx.r3.s64 = 47;
	// lwz r25,8(r29)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8801a448
	ctx.lr = 0x8812CDE4;
	sub_8801A448(ctx, base);
	// addi r10,r3,-24
	ctx.r10.s64 = ctx.r3.s64 + -24;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r20,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x8812CE08;
	sub_880111C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x8812cd70
	if (!ctx.cr0.eq) goto loc_8812CD70;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88021928
	ctx.lr = 0x8812CE20;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
loc_8812CE2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812E908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8812E910;
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
	ctx.lr = 0x8812E924;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021508
	ctx.lr = 0x8812E938;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812eb00
	if (ctx.cr6.eq) goto loc_8812EB00;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8812eb84
	if (!ctx.cr0.lt) goto loc_8812EB84;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// li r11,128
	ctx.r11.s64 = 128;
	// lis r5,-30683
	ctx.r5.s64 = -2010841088;
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// lis r6,-30683
	ctx.r6.s64 = -2010841088;
	// lis r4,-30683
	ctx.r4.s64 = -2010841088;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,-11904(r8)
	REX_STORE_U32(ctx.r8.u32 + -11904, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,-15
	ctx.r8.s64 = -15;
	// stw r11,-11908(r7)
	REX_STORE_U32(ctx.r7.u32 + -11908, ctx.r11.u32);
	// stw r9,-11916(r5)
	REX_STORE_U32(ctx.r5.u32 + -11916, ctx.r9.u32);
	// stw r10,-11912(r6)
	REX_STORE_U32(ctx.r6.u32 + -11912, ctx.r10.u32);
	// stw r8,-11920(r4)
	REX_STORE_U32(ctx.r4.u32 + -11920, ctx.r8.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x8812e9f8
	if (ctx.cr6.eq) goto loc_8812E9F8;
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812E9D0;
	sub_880244D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812e9f0
	if (ctx.cr6.lt) goto loc_8812E9F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x8812E9E8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8812E9F0:
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x8812ea28
	goto loc_8812EA28;
loc_8812E9F8:
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812EA04;
	sub_880244D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812ea24
	if (ctx.cr6.lt) goto loc_8812EA24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x8812EA1C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8812EA24:
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
loc_8812EA28:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x88013ce0
	ctx.lr = 0x8812EA48;
	sub_88013CE0(ctx, base);
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,26215
	ctx.r10.u64 = ctx.r11.u64 | 26215;
	// mulhw r8,r9,r10
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8812eaa0
	if (!ctx.cr0.eq) goto loc_8812EAA0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,13
	ctx.r8.s64 = 13;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// li r6,-27
	ctx.r6.s64 = -27;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013ce0
	ctx.lr = 0x8812EAA0;
	sub_88013CE0(ctx, base);
loc_8812EAA0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8812eabc
	if (ctx.cr6.gt) goto loc_8812EABC;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8812EABC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8812eb84
	if (ctx.cr0.gt) goto loc_8812EB84;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x8812eb84
	if (ctx.cr0.gt) goto loc_8812EB84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x8812EAF4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8812EB00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8812eb84
	if (!ctx.cr0.lt) goto loc_8812EB84;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,-27
	ctx.r8.s64 = -27;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// divw r5,r9,r10
	ctx.r5.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// beq cr6,0x8812eb80
	if (ctx.cr6.eq) goto loc_8812EB80;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8812EB80:
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8812EB84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88131260) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021be0
	ctx.lr = 0x8813128C;
	sub_88021BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,4168
	ctx.r5.s64 = ctx.r9.s64 + 4168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x881312B0;
	sub_88021B90(ctx, base);
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

DEFINE_REX_FUNC(sub_88132138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88132140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x88023f40
	ctx.lr = 0x88132150;
	sub_88023F40(ctx, base);
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,19024
	ctx.r4.s64 = ctx.r11.s64 + 19024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021e70
	ctx.lr = 0x88132164;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132190
	if (!ctx.cr6.eq) goto loc_88132190;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88022be0
	ctx.lr = 0x88132174;
	sub_88022BE0(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x88022be0
	ctx.lr = 0x8813217C;
	sub_88022BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88023f48
	ctx.lr = 0x88132184;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88132190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881325C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881325D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881325E0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021be0
	ctx.lr = 0x881325F4;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88132650
	if (ctx.cr6.gt) goto loc_88132650;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88132650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132650;
	// bdzf 4*cr6+eq,0x8813265c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813265C;
	// bdzf 4*cr6+eq,0x88132650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132650;
	// bdzf 4*cr6+eq,0x881326a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881326A4;
	// bne cr6,0x881326e4
	if (!ctx.cr6.eq) goto loc_881326E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x88132650
	if (!ctx.cr0.lt) goto loc_88132650;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13808
	ctx.r4.s64 = ctx.r11.s64 + -13808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x88132644;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_88132650:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8813265C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x88021a28
	ctx.lr = 0x88132668;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132650
	if (!ctx.cr6.eq) goto loc_88132650;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-10904
	ctx.r4.s64 = ctx.r10.s64 + -10904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813268C;
	sub_880213F0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r3,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881326A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x881326B0;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132650
	if (!ctx.cr6.eq) goto loc_88132650;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13568
	ctx.r4.s64 = ctx.r11.s64 + -13568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x881326CC;
	sub_88021780(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881326E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x88021a28
	ctx.lr = 0x881326F0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132650
	if (!ctx.cr6.eq) goto loc_88132650;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9568
	ctx.r4.s64 = ctx.r11.s64 + 9568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813270C;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x88132718;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88133948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88133950;
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
	// bl 0x88021be0
	ctx.lr = 0x88133970;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x8813398C;
	sub_880244A8(ctx, base);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,14312
	ctx.r5.s64 = ctx.r8.s64 + 14312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x881339A0;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881342C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x881342D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8801a860
	ctx.lr = 0x881342EC;
	sub_8801A860(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88134318;
	sub_88024438(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88134378
	if (ctx.cr6.eq) goto loc_88134378;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,388(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x88134340;
	sub_8801A860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,384(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// addic. r11,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r11.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bgt 0x88134378
	if (ctx.cr0.gt) goto loc_88134378;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_88134378:
	// addi r6,r31,176
	ctx.r6.s64 = ctx.r31.s64 + 176;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x8813438C;
	sub_8801A860(ctx, base);
	// addi r6,r31,180
	ctx.r6.s64 = ctx.r31.s64 + 180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x881343A0;
	sub_8801A860(ctx, base);
	// addi r6,r31,184
	ctx.r6.s64 = ctx.r31.s64 + 184;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x881343B4;
	sub_8801A860(ctx, base);
	// addi r6,r31,188
	ctx.r6.s64 = ctx.r31.s64 + 188;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x881343C8;
	sub_8801A860(ctx, base);
	// addi r6,r31,208
	ctx.r6.s64 = ctx.r31.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x881343DC;
	sub_8801A860(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8801a860
	ctx.lr = 0x881343F0;
	sub_8801A860(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r8,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// bl 0x8801a860
	ctx.lr = 0x8813441C;
	sub_8801A860(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r9,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r11,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x88134448;
	sub_8801A860(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// lwz r5,432(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// stw r7,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// beq cr6,0x88134800
	if (ctx.cr6.eq) goto loc_88134800;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r8,144(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lwz r7,152(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r6,r6,23
	ctx.r6.u64 = ctx.r6.u32 & 0x1FF;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// stw r6,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r4,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi r3,r3,23
	ctx.r3.u64 = ctx.r3.u32 & 0x1FF;
	// clrlwi r7,r7,23
	ctx.r7.u64 = ctx.r7.u32 & 0x1FF;
	// clrlwi r6,r8,23
	ctx.r6.u64 = ctx.r8.u32 & 0x1FF;
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// clrlwi r5,r9,23
	ctx.r5.u64 = ctx.r9.u32 & 0x1FF;
	// stw r7,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// clrlwi r4,r10,23
	ctx.r4.u64 = ctx.r10.u32 & 0x1FF;
	// stw r6,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// stw r5,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r4,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_881344FC:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x8813450C;
	sub_8813FA60(ctx, base);
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024438
	ctx.lr = 0x88134518;
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
	// bne 0x881344fc
	if (!ctx.cr0.eq) goto loc_881344FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r7,-2
	ctx.r7.s64 = -131072;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r8,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88134568
	if (!ctx.cr6.gt) goto loc_88134568;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88134574
	goto loc_88134574;
loc_88134568:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88134578
	if (!ctx.cr6.lt) goto loc_88134578;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_88134574:
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_88134578:
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r9,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88134598
	if (!ctx.cr6.gt) goto loc_88134598;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x881345a4
	goto loc_881345A4;
loc_88134598:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881345a8
	if (!ctx.cr6.lt) goto loc_881345A8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881345A4:
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_881345A8:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r9,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881345c8
	if (!ctx.cr6.gt) goto loc_881345C8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x881345d4
	goto loc_881345D4;
loc_881345C8:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881345d8
	if (!ctx.cr6.lt) goto loc_881345D8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881345D4:
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_881345D8:
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881345f8
	if (!ctx.cr6.gt) goto loc_881345F8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88134604
	goto loc_88134604;
loc_881345F8:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88134608
	if (!ctx.cr6.lt) goto loc_88134608;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_88134604:
	// stw r11,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_88134608:
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// stw r8,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88134630
	if (!ctx.cr6.gt) goto loc_88134630;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8813463c
	goto loc_8813463C;
loc_88134630:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134640
	if (!ctx.cr6.lt) goto loc_88134640;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8813463C:
	// stw r9,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
loc_88134640:
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r8,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88134660
	if (!ctx.cr6.gt) goto loc_88134660;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8813466c
	goto loc_8813466C;
loc_88134660:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134670
	if (!ctx.cr6.lt) goto loc_88134670;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8813466C:
	// stw r9,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
loc_88134670:
	// lwz r8,244(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r8,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88134690
	if (!ctx.cr6.gt) goto loc_88134690;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8813469c
	goto loc_8813469C;
loc_88134690:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881346a0
	if (!ctx.cr6.lt) goto loc_881346A0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8813469C:
	// stw r9,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
loc_881346A0:
	// lwz r8,248(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r8,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881346c0
	if (!ctx.cr6.gt) goto loc_881346C0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x881346cc
	goto loc_881346CC;
loc_881346C0:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881346d0
	if (!ctx.cr6.lt) goto loc_881346D0;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881346CC:
	// stw r10,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
loc_881346D0:
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// stw r9,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881346f0
	if (!ctx.cr6.gt) goto loc_881346F0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881346fc
	goto loc_881346FC;
loc_881346F0:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134700
	if (!ctx.cr6.lt) goto loc_88134700;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_881346FC:
	// stw r10,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
loc_88134700:
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// stw r9,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88134720
	if (!ctx.cr6.gt) goto loc_88134720;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8813472c
	goto loc_8813472C;
loc_88134720:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134730
	if (!ctx.cr6.lt) goto loc_88134730;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8813472C:
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
loc_88134730:
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// stw r9,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88134750
	if (!ctx.cr6.gt) goto loc_88134750;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8813475c
	goto loc_8813475C;
loc_88134750:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134760
	if (!ctx.cr6.lt) goto loc_88134760;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8813475C:
	// stw r10,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
loc_88134760:
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// stw r9,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88134780
	if (!ctx.cr6.gt) goto loc_88134780;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8813478c
	goto loc_8813478C;
loc_88134780:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134790
	if (!ctx.cr6.lt) goto loc_88134790;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8813478C:
	// stw r10,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
loc_88134790:
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r9,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881347b0
	if (!ctx.cr6.gt) goto loc_881347B0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881347bc
	goto loc_881347BC;
loc_881347B0:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881347c0
	if (!ctx.cr6.lt) goto loc_881347C0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_881347BC:
	// stw r10,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_881347C0:
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r9,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881347e8
	if (!ctx.cr6.gt) goto loc_881347E8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_881347E8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88134870
	if (!ctx.cr6.lt) goto loc_88134870;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88134800:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r10,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r10,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// stw r11,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r10,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r10,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
loc_88134870:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813A050) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8813A058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8813a188
	if (!ctx.cr6.gt) goto loc_8813A188;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_8813A074:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r3,-12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8813A0A8;
	sub_880A84F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x8813A0BC;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a8620
	ctx.lr = 0x8813A0C8;
	sub_880A8620(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a84f0
	ctx.lr = 0x8813A0DC;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x8813A0E8;
	sub_8801A448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x880a85c0
	ctx.lr = 0x8813A0F8;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8813A104;
	sub_880A8620(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x8813A110;
	sub_880A8668(ctx, base);
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x8813a128
	if (!ctx.cr6.eq) goto loc_8813A128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8650
	ctx.lr = 0x8813A128;
	sub_880A8650(ctx, base);
loc_8813A128:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8813a17c
	if (!ctx.cr6.gt) goto loc_8813A17C;
loc_8813A138:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x880a99a8
	ctx.lr = 0x8813A16C;
	sub_880A99A8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8813a138
	if (ctx.cr6.lt) goto loc_8813A138;
loc_8813A17C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x8813a074
	if (!ctx.cr0.eq) goto loc_8813A074;
loc_8813A188:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8813C460;
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
	ctx.lr = 0x8813C474;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021be0
	ctx.lr = 0x8813C484;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x8813C4A0;
	sub_880244A8(ctx, base);
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-15656
	ctx.r5.s64 = ctx.r8.s64 + -15656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8813C4B4;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C9D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8813C9D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813C9E8;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813C9FC;
	sub_88021BE0(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8813ca20
	if (!ctx.cr6.eq) goto loc_8813CA20;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813c950
	ctx.lr = 0x8813CA20;
	sub_8813C950(ctx, base);
loc_8813CA20:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8813caac
	if (ctx.cr6.lt) goto loc_8813CAAC;
	// beq cr6,0x8813ca70
	if (ctx.cr6.eq) goto loc_8813CA70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8813cb44
	if (!ctx.cr6.lt) goto loc_8813CB44;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813cab8
	if (!ctx.cr6.eq) goto loc_8813CAB8;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-12136
	ctx.r4.s64 = ctx.r11.s64 + -12136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813CA58;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8813CA64;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813CA70:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813ca90
	if (ctx.cr6.eq) goto loc_8813CA90;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813CA90:
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813CAAC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813cacc
	if (ctx.cr6.eq) goto loc_8813CACC;
loc_8813CAB8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813CACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,288(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x88021928
	ctx.lr = 0x8813CAD8;
	sub_88021928(ctx, base);
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,30744
	ctx.r4.s64 = ctx.r11.s64 + 30744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8813CAEC;
	sub_88021780(ctx, base);
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r29,72(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r28,76(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// bne cr6,0x8813cb38
	if (!ctx.cr6.eq) goto loc_8813CB38;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r26,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r26.u32);
loc_8813CB14:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,249
	ctx.r3.s64 = 249;
	// bl 0x88023b90
	ctx.lr = 0x8813CB2C;
	sub_88023B90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8813cb14
	if (ctx.cr6.lt) goto loc_8813CB14;
loc_8813CB38:
	// li r11,768
	ctx.r11.s64 = 768;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r26,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_8813CB44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813DA68) {
	REX_FUNC_PROLOGUE();
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DA70) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DAA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813dab4
	if (ctx.cr6.eq) goto loc_8813DAB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8813DAB4:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DB60) {
	REX_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DB88) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DC58) {
	REX_FUNC_PROLOGUE();
	// stw r4,668(r3)
	REX_STORE_U32(ctx.r3.u32 + 668, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DC88) {
	REX_FUNC_PROLOGUE();
	// stw r4,692(r3)
	REX_STORE_U32(ctx.r3.u32 + 692, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DCC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,724(r3)
	REX_STORE_U32(ctx.r3.u32 + 724, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD10) {
	REX_FUNC_PROLOGUE();
	// stw r4,760(r3)
	REX_STORE_U32(ctx.r3.u32 + 760, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD58) {
	REX_FUNC_PROLOGUE();
	// stw r4,796(r3)
	REX_STORE_U32(ctx.r3.u32 + 796, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DDB0) {
	REX_FUNC_PROLOGUE();
	// stw r4,840(r3)
	REX_STORE_U32(ctx.r3.u32 + 840, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DE08) {
	REX_FUNC_PROLOGUE();
	// stw r4,884(r3)
	REX_STORE_U32(ctx.r3.u32 + 884, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DE60) {
	REX_FUNC_PROLOGUE();
	// stw r4,928(r3)
	REX_STORE_U32(ctx.r3.u32 + 928, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DEB8) {
	REX_FUNC_PROLOGUE();
	// stw r4,972(r3)
	REX_STORE_U32(ctx.r3.u32 + 972, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DF10) {
	REX_FUNC_PROLOGUE();
	// stw r4,1016(r3)
	REX_STORE_U32(ctx.r3.u32 + 1016, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DF78) {
	REX_FUNC_PROLOGUE();
	// stw r4,1072(r3)
	REX_STORE_U32(ctx.r3.u32 + 1072, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DFE0) {
	REX_FUNC_PROLOGUE();
	// stw r4,1120(r3)
	REX_STORE_U32(ctx.r3.u32 + 1120, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813E6B4) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8813eae8
	if (ctx.cr6.lt) goto loc_8813EAE8;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_8813E73C:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x8813e74c
	if (ctx.cr6.lt) goto loc_8813E74C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_8813E74C:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v64,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x8813e73c
	if (!ctx.cr6.lt) goto loc_8813E73C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8813eae8
	if (!ctx.cr6.eq) goto loc_8813EAE8;
	// b 0x8813eb64
	goto loc_8813EB64;
loc_8813EAE8:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x8813eae8
	if (ctx.cr6.gt) goto loc_8813EAE8;
loc_8813EB64:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	ea = (ctx.r1.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	ea = (ctx.r1.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

