#include "mushi_funcs.8.h"

DEFINE_REX_FUNC(sub_880102F0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,1160
	ctx.r3.s64 = ctx.r3.s64 + 1160;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88010418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,-6860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88010430
	if (!ctx.cr6.eq) goto loc_88010430;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88010430:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r11,r11,-6848
	ctx.r11.s64 = ctx.r11.s64 + -6848;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8801045c
	if (ctx.cr6.eq) goto loc_8801045C;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8801045C:
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88010480
	if (ctx.cr6.eq) goto loc_88010480;
	// lwz r10,184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_88010480:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88011E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88011E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r10,-6528
	ctx.r30.s64 = ctx.r10.s64 + -6528;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-6528(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -6528);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x88011e2c
	if (ctx.cr6.eq) goto loc_88011E2C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_88011E2C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r4,r29,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// bl 0x8801a3e0
	ctx.lr = 0x88011E54;
	sub_8801A3E0(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88011e74
	if (!ctx.cr6.eq) goto loc_88011E74;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88011e74
	if (ctx.cr6.eq) goto loc_88011E74;
	// lis r3,24
	ctx.r3.s64 = 1572864;
loc_88011E74:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x88011e8c
	if (!ctx.cr6.gt) goto loc_88011E8C;
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_88011E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88012D40) {
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
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88012D60;
	sub_8801A448(ctx, base);
	// li r5,2000
	ctx.r5.s64 = 2000;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,44(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// stb r3,9(r30)
	REX_STORE_U8(ctx.r30.u32 + 9, ctx.r3.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r4,80(r30)
	REX_STORE_U16(ctx.r30.u32 + 80, ctx.r4.u16);
	// li r3,8
	ctx.r3.s64 = 8;
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,140(r30)
	REX_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stb r3,90(r30)
	REX_STORE_U8(ctx.r30.u32 + 90, ctx.r3.u8);
	// li r4,56
	ctx.r4.s64 = 56;
	// sth r10,120(r30)
	REX_STORE_U16(ctx.r30.u32 + 120, ctx.r10.u16);
	// li r31,16
	ctx.r31.s64 = 16;
	// sth r9,124(r30)
	REX_STORE_U16(ctx.r30.u32 + 124, ctx.r9.u16);
	// sth r6,84(r30)
	REX_STORE_U16(ctx.r30.u32 + 84, ctx.r6.u16);
	// li r3,6
	ctx.r3.s64 = 6;
	// sth r31,88(r30)
	REX_STORE_U16(ctx.r30.u32 + 88, ctx.r31.u16);
	// sth r5,86(r30)
	REX_STORE_U16(ctx.r30.u32 + 86, ctx.r5.u16);
	// stb r4,91(r30)
	REX_STORE_U8(ctx.r30.u32 + 91, ctx.r4.u8);
	// stw r8,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r8.u32);
	// stw r7,136(r30)
	REX_STORE_U32(ctx.r30.u32 + 136, ctx.r7.u32);
	// stw r11,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// stw r11,148(r30)
	REX_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// stw r11,152(r30)
	REX_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// stw r9,160(r30)
	REX_STORE_U32(ctx.r30.u32 + 160, ctx.r9.u32);
	// stb r10,13(r30)
	REX_STORE_U8(ctx.r30.u32 + 13, ctx.r10.u8);
	// stb r10,12(r30)
	REX_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
	// bl 0x8801a448
	ctx.lr = 0x88012DE4;
	sub_8801A448(ctx, base);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r3,14(r30)
	REX_STORE_U8(ctx.r30.u32 + 14, ctx.r3.u8);
	// addi r8,r11,10824
	ctx.r8.s64 = ctx.r11.s64 + 10824;
	// stw r31,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stb r9,15(r30)
	REX_STORE_U8(ctx.r30.u32 + 15, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,116(r30)
	REX_STORE_U32(ctx.r30.u32 + 116, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_88013CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x88013CE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mullw r5,r9,r6
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// subf r3,r5,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// subf r19,r11,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880140e8
	if (!ctx.cr6.gt) goto loc_880140E8;
	// lis r24,-30692
	ctx.r24.s64 = -2011430912;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r15,-30683
	ctx.r15.s64 = -2010841088;
	// lwz r29,-6428(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + -6428);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r20,16
	ctx.r20.s64 = 16;
	// li r17,8
	ctx.r17.s64 = 8;
	// ori r21,r11,50000
	ctx.r21.u64 = ctx.r11.u64 | 50000;
	// lis r14,-30683
	ctx.r14.s64 = -2010841088;
	// ori r22,r10,57352
	ctx.r22.u64 = ctx.r10.u64 | 57352;
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// lis r26,-30692
	ctx.r26.s64 = -2011430912;
	// lis r23,-30692
	ctx.r23.s64 = -2011430912;
	// lis r16,-30698
	ctx.r16.s64 = -2011824128;
loc_88013D7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880140d4
	if (ctx.cr6.eq) goto loc_880140D4;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880140d4
	if (!ctx.cr6.eq) goto loc_880140D4;
	// lwz r11,-6152(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + -6152);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880140d4
	if (!ctx.cr6.lt) goto loc_880140D4;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addis r25,r29,8
	ctx.r25.s64 = ctx.r29.s64 + 524288;
	// ori r10,r11,57360
	ctx.r10.u64 = ctx.r11.u64 | 57360;
	// addi r25,r25,-8178
	ctx.r25.s64 = ctx.r25.s64 + -8178;
	// lhzx r8,r29,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// lhz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880140d4
	if (!ctx.cr6.lt) goto loc_880140D4;
	// bl 0x880103a0
	ctx.lr = 0x88013DCC;
	sub_880103A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880140d0
	if (!ctx.cr6.eq) goto loc_880140D0;
	// addis r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 524288;
	// addi r9,r9,-8180
	ctx.r9.s64 = ctx.r9.s64 + -8180;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,244
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(244));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88013e34
	if (ctx.cr6.eq) goto loc_88013E34;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_88013E00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,244
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(244));
	// sth r5,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lhz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88013e00
	if (!ctx.cr6.eq) goto loc_88013E00;
loc_88013E34:
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r8,316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// sth r27,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// addi r7,r8,212
	ctx.r7.s64 = ctx.r8.s64 + 212;
	// sth r18,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r18.u16);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x880690e8
	ctx.lr = 0x88013E64;
	sub_880690E8(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,284(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// subf r4,r3,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r3.u64;
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r11,-6432(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -6432);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r30,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// sth r3,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r3.u16);
	// lwz r10,-6440(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88013f4c
	if (!ctx.cr6.eq) goto loc_88013F4C;
	// bl 0x88069640
	ctx.lr = 0x88013EA0;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013f1c
	if (ctx.cr6.eq) goto loc_88013F1C;
	// stw r20,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r20.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r17,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r17.u32);
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// bl 0x880697c8
	ctx.lr = 0x88013ED0;
	sub_880697C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013f30
	if (ctx.cr6.eq) goto loc_88013F30;
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// sth r8,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r8.u16);
	// blt cr6,0x88013f30
	if (ctx.cr6.lt) goto loc_88013F30;
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r11,29,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// stw r10,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r8.u16);
	// b 0x88013f30
	goto loc_88013F30;
loc_88013F1C:
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013F30:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x88013f78
	if (ctx.cr6.gt) goto loc_88013F78;
	// li r11,24
	ctx.r11.s64 = 24;
	// sth r11,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// b 0x88013f78
	goto loc_88013F78;
loc_88013F4C:
	// lwz r11,-6440(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88013f78
	if (!ctx.cr6.eq) goto loc_88013F78;
	// bl 0x88069640
	ctx.lr = 0x88013F5C;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013f78
	if (ctx.cr6.eq) goto loc_88013F78;
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013F78:
	// lwz r11,-6440(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88013fdc
	if (ctx.cr6.lt) goto loc_88013FDC;
	// lwz r11,-11976(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + -11976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88013fa0
	if (ctx.cr6.eq) goto loc_88013FA0;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88013fdc
	goto loc_88013FDC;
loc_88013FA0:
	// lwz r11,-11944(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + -11944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88013fbc
	if (ctx.cr6.eq) goto loc_88013FBC;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88013fdc
	goto loc_88013FDC;
loc_88013FBC:
	// bl 0x88069640
	ctx.lr = 0x88013FC0;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013fdc
	if (ctx.cr6.eq) goto loc_88013FDC;
	// lwz r11,21852(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013FDC:
	// clrlwi r11,r19,23
	ctx.r11.u64 = ctx.r19.u32 & 0x1FF;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// sth r11,38(r31)
	REX_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bl 0x8801a860
	ctx.lr = 0x88013FFC;
	sub_8801A860(ctx, base);
	// stb r27,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r27.u8);
	// stb r30,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stb r30,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r30.u8);
	// sth r30,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r30.u16);
	// stw r30,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stb r30,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stw r30,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r11,-6440(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801405c
	if (!ctx.cr6.eq) goto loc_8801405C;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// blt cr6,0x88014060
	if (ctx.cr6.lt) goto loc_88014060;
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// stw r27,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// ble cr6,0x8801404c
	if (!ctx.cr6.gt) goto loc_8801404C;
	// li r11,46
	ctx.r11.s64 = 46;
loc_8801404C:
	// li r10,5
	ctx.r10.s64 = 5;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stb r9,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// b 0x88014060
	goto loc_88014060;
loc_8801405C:
	// stb r17,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r17.u8);
loc_88014060:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_88014074:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88014074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88014074;
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880140a0
	if (ctx.cr6.eq) goto loc_880140A0;
	// lwzx r11,r29,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x880140b0
	goto loc_880140B0;
loc_880140A0:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,57348
	ctx.r10.u64 = ctx.r11.u64 | 57348;
	// stwx r31,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_880140B0:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stwx r31,r29,r22
	REX_STORE_U32(ctx.r29.u32 + ctx.r22.u32, ctx.r31.u32);
	// lwz r31,308(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r9.u16);
loc_880140D0:
	// lwz r29,-6428(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + -6428);
loc_880140D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r19,r19,r31
	ctx.r19.u64 = ctx.r19.u64 + ctx.r31.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x88013d7c
	if (!ctx.cr0.eq) goto loc_88013D7C;
loc_880140E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880178D8) {
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
	ctx.lr = 0x880178F0;
	sub_88014D38(ctx, base);
	// li r11,5070
	ctx.r11.s64 = 5070;
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

DEFINE_REX_FUNC(sub_88017C30) {
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
	ctx.lr = 0x88017C48;
	sub_88014D38(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,16
	ctx.r8.s64 = 16;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stb r9,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// addi r6,r11,4468
	ctx.r6.s64 = ctx.r11.s64 + 4468;
	// li r4,160
	ctx.r4.s64 = 160;
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r6,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// stw r4,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lhz r10,38(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_880188B8) {
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
	ctx.lr = 0x880188D0;
	sub_88014D38(ctx, base);
	// lhz r5,38(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4252
	ctx.r9.s64 = 4252;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r9,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r8,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r8.u8);
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r6,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r5,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// stw r5,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// bl 0x8801a448
	ctx.lr = 0x8801891C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x88018934
	if (ctx.cr6.eq) goto loc_88018934;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_88018934:
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

DEFINE_REX_FUNC(sub_8801A198) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8801a1d4
	if (ctx.cr6.eq) goto loc_8801A1D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x881401a0
	sub_881401A0(ctx, base);
	return;
loc_8801A1D4:
	// lbz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8801a1e8
	if (!ctx.cr6.eq) goto loc_8801A1E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8801a1f4
	goto loc_8801A1F4;
loc_8801A1E8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8801a1fc
	if (!ctx.cr6.eq) goto loc_8801A1FC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8801A1F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
loc_8801A1FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// blt cr6,0x8801a210
	if (ctx.cr6.lt) goto loc_8801A210;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
loc_8801A210:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x881401a0
	sub_881401A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8801AD48) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8801ad5c
	if (!ctx.cr6.eq) goto loc_8801AD5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8801AD5C:
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f0,1216(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 1216);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// li r10,4
	ctx.r10.s64 = 4;
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// fdiv f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 / ctx.f9.f64;
	// fmul f6,f7,f8
	ctx.f6.f64 = ctx.f7.f64 * ctx.f8.f64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f5.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f12
	ctx.f2.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fmul f1,f2,f8
	ctx.f1.f64 = ctx.f2.f64 * ctx.f8.f64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801B4B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,3940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8801B4C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8801b4dc
	if (ctx.cr6.eq) goto loc_8801B4DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8801b4c0
	if (!ctx.cr6.eq) goto loc_8801B4C0;
	// blr 
	return;
loc_8801B4DC:
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801C4F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x8801C4F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4760
	ctx.r31.s64 = ctx.r11.s64 + 4760;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,255
	ctx.r25.s64 = 255;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r26,-30608
	ctx.r26.s64 = -2005925888;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r24,2
	ctx.r24.s64 = 2;
	// li r23,3
	ctx.r23.s64 = 3;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8801caf0
	if (ctx.cr6.gt) goto loc_8801CAF0;
	// lis r12,-30718
	ctx.r12.s64 = -2013134848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15032
	ctx.r12.s64 = ctx.r12.s64 + -15032;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8801C574;
	case 1:
		goto loc_8801C678;
	case 2:
		goto loc_8801C744;
	case 3:
		goto loc_8801C77C;
	case 4:
		goto loc_8801CAF0;
	case 5:
		goto loc_8801C7F8;
	case 6:
		goto loc_8801CAF0;
	case 7:
		goto loc_8801CA18;
	case 8:
		goto loc_8801C734;
	case 9:
		goto loc_8801CA60;
	case 10:
		goto loc_8801CAA8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8801C574:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88069358
	ctx.lr = 0x8801C57C;
	sub_88069358(ctx, base);
	// bl 0x880694f0
	ctx.lr = 0x8801C580;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8801c710
	if (!ctx.cr6.eq) goto loc_8801C710;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8801c59c
	if (ctx.cr6.eq) goto loc_8801C59C;
	// bl 0x88067728
	ctx.lr = 0x8801C59C;
	sub_88067728(ctx, base);
loc_8801C59C:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r25,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// blt cr6,0x8801c5e0
	if (ctx.cr6.lt) goto loc_8801C5E0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8801c5e0
	if (ctx.cr6.gt) goto loc_8801C5E0;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-18992
	ctx.r5.s64 = ctx.r11.s64 + -18992;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88067828
	ctx.lr = 0x8801C5E0;
	sub_88067828(ctx, base);
loc_8801C5E0:
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r10,21876(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r8,239
	ctx.r8.s64 = 239;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r27,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r28,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r8,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r28,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// beq cr6,0x8801c658
	if (ctx.cr6.eq) goto loc_8801C658;
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// lwz r11,13184(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 13184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c664
	if (ctx.cr6.eq) goto loc_8801C664;
	// stw r28,13184(r9)
	REX_STORE_U32(ctx.r9.u32 + 13184, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r27,1452(r31)
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r27.u32);
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,828(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8801C654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C658:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c678
	if (ctx.cr6.eq) goto loc_8801C678;
loc_8801C664:
	// li r10,220
	ctx.r10.s64 = 220;
	// stw r27,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x880b41d8
	ctx.lr = 0x8801C678;
	sub_880B41D8(ctx, base);
loc_8801C678:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8801caf0
	if (ctx.cr6.lt) goto loc_8801CAF0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r27,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bl 0x880110d8
	ctx.lr = 0x8801C6B0;
	sub_880110D8(ctx, base);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r31,1132
	ctx.r30.s64 = ctx.r31.s64 + 1132;
loc_8801C6B8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8801c700
	if (ctx.cr6.eq) goto loc_8801C700;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8806baa8
	ctx.lr = 0x8801C6CC;
	sub_8806BAA8(ctx, base);
	// stw r3,-92(r30)
	REX_STORE_U32(ctx.r30.u32 + -92, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8806baa8
	ctx.lr = 0x8801C6DC;
	sub_8806BAA8(ctx, base);
	// stw r3,-76(r30)
	REX_STORE_U32(ctx.r30.u32 + -76, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8806baa8
	ctx.lr = 0x8801C6EC;
	sub_8806BAA8(ctx, base);
	// stw r3,-60(r30)
	REX_STORE_U32(ctx.r30.u32 + -60, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8806baa8
	ctx.lr = 0x8801C6FC;
	sub_8806BAA8(ctx, base);
	// stw r3,-44(r30)
	REX_STORE_U32(ctx.r30.u32 + -44, ctx.r3.u32);
loc_8801C700:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// bne 0x8801c6b8
	if (!ctx.cr0.eq) goto loc_8801C6B8;
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C710:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88069358
	ctx.lr = 0x8801C718;
	sub_88069358(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069180
	ctx.lr = 0x8801C724;
	sub_88069180(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8809c118
	ctx.lr = 0x8801C72C;
	sub_8809C118(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8806a600
	ctx.lr = 0x8801C734;
	sub_8806A600(ctx, base);
loc_8801C734:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8801b368
	ctx.lr = 0x8801C73C;
	sub_8801B368(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_8801C744:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c75c
	if (ctx.cr6.eq) goto loc_8801C75C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C75C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x8801caf0
	if (ctx.cr0.gt) goto loc_8801CAF0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r23,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C77C:
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801c7a8
	if (ctx.cr6.eq) goto loc_8801C7A8;
	// lwz r11,1452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c7a8
	if (ctx.cr6.eq) goto loc_8801C7A8;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C7A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801c7c8
	if (!ctx.cr6.eq) goto loc_8801C7C8;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C7C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8801caf0
	if (ctx.cr6.gt) goto loc_8801CAF0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x8801caec
	goto loc_8801CAEC;
loc_8801C7F8:
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801c84c
	if (ctx.cr6.eq) goto loc_8801C84C;
	// lwz r11,1452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801c84c
	if (!ctx.cr6.eq) goto loc_8801C84C;
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x88068e68
	ctx.lr = 0x8801C820;
	sub_88068E68(ctx, base);
	// bl 0x8806b850
	ctx.lr = 0x8801C824;
	sub_8806B850(ctx, base);
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// ld r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// cmpld cr6,r3,r10
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x8801c838
	if (!ctx.cr6.gt) goto loc_8801C838;
	// std r3,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r3.u64);
loc_8801C838:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C84C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c88c
	if (ctx.cr6.eq) goto loc_8801C88C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8801c884
	if (ctx.cr6.eq) goto loc_8801C884;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8801c884
	if (!ctx.cr6.eq) goto loc_8801C884;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88140548
	ctx.lr = 0x8801C880;
	sub_88140548(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
loc_8801C884:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801caf0
	if (!ctx.cr6.eq) goto loc_8801CAF0;
loc_8801C88C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8801caf0
	if (!ctx.cr6.eq) goto loc_8801CAF0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8801c8c4
	if (!ctx.cr6.eq) goto loc_8801C8C4;
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x88068e80
	ctx.lr = 0x8801C8C0;
	sub_88068E80(ctx, base);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C8C4:
	// bl 0x88069a90
	ctx.lr = 0x8801C8C8;
	sub_88069A90(ctx, base);
	// bl 0x88066b28
	ctx.lr = 0x8801C8CC;
	sub_88066B28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88066c30
	ctx.lr = 0x8801C8D8;
	sub_88066C30(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801c8ec
	if (ctx.cr6.eq) goto loc_8801C8EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8809c118
	ctx.lr = 0x8801C8EC;
	sub_8809C118(ctx, base);
loc_8801C8EC:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8801c914
	if (!ctx.cr6.eq) goto loc_8801C914;
	// bl 0x880b3050
	ctx.lr = 0x8801C904;
	sub_880B3050(ctx, base);
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801c914
	if (ctx.cr6.eq) goto loc_8801C914;
	// bl 0x880b42f8
	ctx.lr = 0x8801C914;
	sub_880B42F8(ctx, base);
loc_8801C914:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8801c930
	if (!ctx.cr6.eq) goto loc_8801C930;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880660f8
	ctx.lr = 0x8801C928;
	sub_880660F8(ctx, base);
	// bl 0x880b4340
	ctx.lr = 0x8801C92C;
	sub_880B4340(ctx, base);
	// bl 0x880b31a0
	ctx.lr = 0x8801C930;
	sub_880B31A0(ctx, base);
loc_8801C930:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8801c94c
	if (!ctx.cr6.eq) goto loc_8801C94C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880660f8
	ctx.lr = 0x8801C944;
	sub_880660F8(ctx, base);
	// bl 0x880b4388
	ctx.lr = 0x8801C948;
	sub_880B4388(ctx, base);
	// bl 0x880b32f0
	ctx.lr = 0x8801C94C;
	sub_880B32F0(ctx, base);
loc_8801C94C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8801c968
	if (!ctx.cr6.eq) goto loc_8801C968;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880660f8
	ctx.lr = 0x8801C960;
	sub_880660F8(ctx, base);
	// bl 0x880b43d0
	ctx.lr = 0x8801C964;
	sub_880B43D0(ctx, base);
	// bl 0x880b3440
	ctx.lr = 0x8801C968;
	sub_880B3440(ctx, base);
loc_8801C968:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8801c984
	if (!ctx.cr6.eq) goto loc_8801C984;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880660f8
	ctx.lr = 0x8801C97C;
	sub_880660F8(ctx, base);
	// bl 0x880b4418
	ctx.lr = 0x8801C980;
	sub_880B4418(ctx, base);
	// bl 0x880b3590
	ctx.lr = 0x8801C984;
	sub_880B3590(ctx, base);
loc_8801C984:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069180
	ctx.lr = 0x8801C990;
	sub_88069180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88069188
	ctx.lr = 0x8801C99C;
	sub_88069188(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21868(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21868);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8801c9b4
	if (ctx.cr6.eq) goto loc_8801C9B4;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,21868(r11)
	REX_STORE_U32(ctx.r11.u32 + 21868, ctx.r10.u32);
loc_8801C9B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8806a600
	ctx.lr = 0x8801C9BC;
	sub_8806A600(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x88069460
	ctx.lr = 0x8801C9CC;
	sub_88069460(ctx, base);
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801caf0
	if (ctx.cr6.eq) goto loc_8801CAF0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8801c9f8
	if (!ctx.cr6.gt) goto loc_8801C9F8;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,21888(r10)
	REX_STORE_U32(ctx.r10.u32 + 21888, ctx.r27.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801C9F8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,828(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8801CA14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801CA18:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801ca3c
	if (ctx.cr6.eq) goto loc_8801CA3C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x8801caf0
	if (!ctx.cr0.eq) goto loc_8801CAF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88069358
	ctx.lr = 0x8801CA38;
	sub_88069358(ctx, base);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801CA3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8801caf0
	if (ctx.cr0.gt) goto loc_8801CAF0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801CA60:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801ca78
	if (ctx.cr6.eq) goto loc_8801CA78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801CA78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// blt cr6,0x8801caf0
	if (ctx.cr6.lt) goto loc_8801CAF0;
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bl 0x880693b8
	ctx.lr = 0x8801CA9C;
	sub_880693B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8801caf0
	goto loc_8801CAF0;
loc_8801CAA8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cac0
	if (ctx.cr6.eq) goto loc_8801CAC0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8801caf0
	if (!ctx.cr0.lt) goto loc_8801CAF0;
loc_8801CAC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// blt cr6,0x8801caf0
	if (ctx.cr6.lt) goto loc_8801CAF0;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,21884(r10)
	REX_STORE_U32(ctx.r10.u32 + 21884, ctx.r27.u32);
loc_8801CAEC:
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8801CAF0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cd68
	if (ctx.cr6.eq) goto loc_8801CD68;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-30698
	ctx.r10.s64 = -2011824128;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r10,-3568
	ctx.r30.s64 = ctx.r10.s64 + -3568;
	// lwz r29,40(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r9,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x8801CB24;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CB30;
	sub_8813FF28(ctx, base);
	// rlwinm r8,r29,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 | ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8801CB4C;
	sub_8813FF48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8801CB68;
	sub_8813FF90(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8801a9c8
	ctx.lr = 0x8801CB88;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CB94;
	sub_8813FF28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8801CBA0;
	sub_8813FF48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8801CBBC;
	sub_8813FF90(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cd68
	if (ctx.cr6.eq) goto loc_8801CD68;
	// li r29,18
	ctx.r29.s64 = 18;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
loc_8801CBD0:
	// lwz r11,-20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8801cc70
	if (ctx.cr6.lt) goto loc_8801CC70;
	// beq cr6,0x8801cc04
	if (ctx.cr6.eq) goto loc_8801CC04;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8801cce4
	if (!ctx.cr6.lt) goto loc_8801CCE4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r11.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bgt 0x8801cce4
	if (ctx.cr0.gt) goto loc_8801CCE4;
	// stw r28,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r23,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r23.u32);
	// b 0x8801cce4
	goto loc_8801CCE4;
loc_8801CC04:
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r4,-16(r30)
	REX_STORE_U32(ctx.r30.u32 + -16, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x8801CC20;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,-8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r3,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 12;
	// bl 0x8801a860
	ctx.lr = 0x8801CC38;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,-16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,-28(r30)
	REX_STORE_U32(ctx.r30.u32 + -28, ctx.r7.u32);
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// stw r6,-24(r30)
	REX_STORE_U32(ctx.r30.u32 + -24, ctx.r6.u32);
	// blt cr6,0x8801cce4
	if (ctx.cr6.lt) goto loc_8801CCE4;
	// stw r28,-28(r30)
	REX_STORE_U32(ctx.r30.u32 + -28, ctx.r28.u32);
	// stw r28,-24(r30)
	REX_STORE_U32(ctx.r30.u32 + -24, ctx.r28.u32);
	// stw r25,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r24,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r24.u32);
	// b 0x8801cce4
	goto loc_8801CCE4;
loc_8801CC70:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cc88
	if (ctx.cr6.eq) goto loc_8801CC88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8801cce4
	goto loc_8801CCE4;
loc_8801CC88:
	// lwz r11,-12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,-8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,-12(r30)
	REX_STORE_U32(ctx.r30.u32 + -12, ctx.r3.u32);
	// bl 0x8801a860
	ctx.lr = 0x8801CCA4;
	sub_8801A860(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,-28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -28);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r6,-24(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r5,-4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// mullw r4,r11,r9
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	// stw r11,-4(r30)
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// stw r3,-28(r30)
	REX_STORE_U32(ctx.r30.u32 + -28, ctx.r3.u32);
	// stw r10,-24(r30)
	REX_STORE_U32(ctx.r30.u32 + -24, ctx.r10.u32);
	// bgt 0x8801cce4
	if (ctx.cr0.gt) goto loc_8801CCE4;
	// stw r27,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r27.u32);
loc_8801CCE4:
	// lwz r10,-36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -36);
	// lwz r11,-28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r8,-32(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r9,-24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x8801CD10;
	sub_8801A9C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801CD28;
	sub_8813FF90(ctx, base);
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x8801CD3C;
	sub_8801A9C8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801CD54;
	sub_8813FF90(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// bne 0x8801cbd0
	if (!ctx.cr0.eq) goto loc_8801CBD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8801b6e0
	ctx.lr = 0x8801CD68;
	sub_8801B6E0(ctx, base);
loc_8801CD68:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cf24
	if (ctx.cr6.eq) goto loc_8801CF24;
	// lwz r11,21876(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801cdd8
	if (ctx.cr6.eq) goto loc_8801CDD8;
	// lwz r11,1452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801cdd8
	if (ctx.cr6.eq) goto loc_8801CDD8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8801cdd8
	if (!ctx.cr6.lt) goto loc_8801CDD8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8801CD9C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x8801CDB4;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8801CDC0;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CDCC;
	sub_8813FF28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x8801cd9c
	if (ctx.cr6.lt) goto loc_8801CD9C;
loc_8801CDD8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-30698
	ctx.r10.s64 = -2011824128;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r10,-3592
	ctx.r7.s64 = ctx.r10.s64 + -3592;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r30,r3,r7
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8801CE10;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CE1C;
	sub_8813FF28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8801CE38;
	sub_8813FF90(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r29,256
	ctx.r29.s64 = 16777216;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8801CE54;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CE60;
	sub_8813FF28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8801CE7C;
	sub_8813FF90(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a9c8
	ctx.lr = 0x8801CE94;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CEA0;
	sub_8813FF28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8801CEBC;
	sub_8813FF90(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 3;
	// subf r5,r29,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8801CED8;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8801CEE4;
	sub_8813FF28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8801CF00;
	sub_8813FF90(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8801CF24:
	// li r5,248
	ctx.r5.s64 = 248;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x8801CF34;
	sub_88067710(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88027668) {
	REX_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r10,156(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r10,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88027928) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// addi r9,r11,-9944
	ctx.r9.s64 = ctx.r11.s64 + -9944;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-9816(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -9816);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88027970) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88027978;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r5,-30683
	ctx.r5.s64 = -2010841088;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r8,6576
	ctx.r8.s64 = ctx.r8.s64 + 6576;
	// addi r10,r5,-9808
	ctx.r10.s64 = ctx.r5.s64 + -9808;
	// mulli r9,r7,300
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(300));
	// rlwinm r11,r6,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88027210
	ctx.lr = 0x880279CC;
	sub_88027210(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_880279D4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880279f8
	if (ctx.cr6.eq) goto loc_880279F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,300
	ctx.r31.s64 = ctx.r31.s64 + 300;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x880279d4
	if (ctx.cr6.lt) goto loc_880279D4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880279F8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88028b38
	ctx.lr = 0x88027A14;
	sub_88028B38(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r25,4
	ctx.r25.s64 = 262144;
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r27,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// add r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 + ctx.r25.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x8813da80
	ctx.lr = 0x88027A3C;
	sub_8813DA80(ctx, base);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r5,-30718
	ctx.r5.s64 = -2013134848;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r28,r6,1772
	ctx.r28.s64 = ctx.r6.s64 + 1772;
	// stw r25,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// lis r4,-30718
	ctx.r4.s64 = -2013134848;
	// addi r3,r5,31040
	ctx.r3.s64 = ctx.r5.s64 + 31040;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r8,r4,29128
	ctx.r8.s64 = ctx.r4.s64 + 29128;
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r9,r28,56
	ctx.r9.s64 = ctx.r28.s64 + 56;
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// li r5,4067
	ctx.r5.s64 = 4067;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// stw r5,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// addi r6,r31,180
	ctx.r6.s64 = ctx.r31.s64 + 180;
	// stw r29,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r29,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x880262e8
	ctx.lr = 0x88027AB8;
	sub_880262E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lis r4,-30718
	ctx.r4.s64 = -2013134848;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-30718
	ctx.r9.s64 = -2013134848;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r28,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// li r11,4075
	ctx.r11.s64 = 4075;
	// stw r29,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r29,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r5,r28,88
	ctx.r5.s64 = ctx.r28.s64 + 88;
	// stw r27,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// addi r4,r4,30208
	ctx.r4.s64 = ctx.r4.s64 + 30208;
	// stw r10,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// addi r9,r9,30312
	ctx.r9.s64 = ctx.r9.s64 + 30312;
	// stw r5,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// stw r4,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r10,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r6,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r6.u32);
	// stw r6,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r6.u32);
	// stw r3,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r26,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r26.u32);
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r27,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_88027B5C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88027b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88027B5C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880295D0) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88029614
	if (ctx.cr6.eq) goto loc_88029614;
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88029614
	if (!ctx.cr6.eq) goto loc_88029614;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// bne 0x88029614
	if (!ctx.cr0.eq) goto loc_88029614;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_88029614:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88029628
	if (ctx.cr6.eq) goto loc_88029628;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_88029628:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bge 0x88029658
	if (!ctx.cr0.lt) goto loc_88029658;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// bge 0x88029658
	if (!ctx.cr0.lt) goto loc_88029658;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_88029658:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88029684
	if (ctx.cr6.eq) goto loc_88029684;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bne 0x88029684
	if (!ctx.cr0.eq) goto loc_88029684;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a860
	ctx.lr = 0x88029684;
	sub_8801A860(ctx, base);
loc_88029684:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8806b630
	ctx.lr = 0x880296B4;
	sub_8806B630(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add. r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x880296e0
	if (!ctx.cr0.eq) goto loc_880296E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x880690e8
	ctx.lr = 0x880296D0;
	sub_880690E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_880296E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// sth r9,70(r31)
	REX_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// bl 0x88018b68
	ctx.lr = 0x88029704;
	sub_88018B68(ctx, base);
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// li r6,150
	ctx.r6.s64 = 150;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8802972C;
	sub_8801A9C8(ctx, base);
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88029740
	if (ctx.cr6.eq) goto loc_88029740;
	// bl 0x8813ff08
	ctx.lr = 0x88029740;
	sub_8813FF08(ctx, base);
loc_88029740:
	// lis r4,112
	ctx.r4.s64 = 7340032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28784
	ctx.r4.u64 = ctx.r4.u64 | 28784;
	// bl 0x8813ff48
	ctx.lr = 0x88029750;
	sub_8813FF48(ctx, base);
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

DEFINE_REX_FUNC(sub_8802B280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-30717
	ctx.r8.s64 = -2013069312;
	// addi r10,r11,-18396
	ctx.r10.s64 = ctx.r11.s64 + -18396;
	// addi r7,r8,-22888
	ctx.r7.s64 = ctx.r8.s64 + -22888;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// addi r11,r10,-64
	ctx.r11.s64 = ctx.r10.s64 + -64;
	// bne cr6,0x8802b2b4
	if (!ctx.cr6.eq) goto loc_8802B2B4;
	// lis r8,-30717
	ctx.r8.s64 = -2013069312;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// addi r7,r8,-21808
	ctx.r7.s64 = ctx.r8.s64 + -21808;
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
loc_8802B2B4:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8802b2cc
	if (!ctx.cr6.eq) goto loc_8802B2CC;
	// lis r9,-30717
	ctx.r9.s64 = -2013069312;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r9,-20728
	ctx.r8.s64 = ctx.r9.s64 + -20728;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
loc_8802B2CC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sth r9,4(r4)
	REX_STORE_U16(ctx.r4.u32 + 4, ctx.r9.u16);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r8,6(r4)
	REX_STORE_U16(ctx.r4.u32 + 6, ctx.r8.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8802C770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x8802C778;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C780:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r31,30,2,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFE;
	// addi r9,r31,1355
	ctx.r9.s64 = ctx.r31.s64 + 1355;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// rlwinm r4,r4,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFF0;
	// li r3,587
	ctx.r3.s64 = 587;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C7AC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c780
	if (ctx.cr6.lt) goto loc_8802C780;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C7BC:
	// rlwinm r11,r31,3,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFC0;
	// addi r10,r31,1371
	ctx.r10.s64 = ctx.r31.s64 + 1371;
	// addi r9,r11,104
	ctx.r9.s64 = ctx.r11.s64 + 104;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,587
	ctx.r3.s64 = 587;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C7E4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c7bc
	if (ctx.cr6.lt) goto loc_8802C7BC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C7F4:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r31,30,2,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFE;
	// addi r9,r31,1387
	ctx.r9.s64 = ctx.r31.s64 + 1387;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// rlwinm r4,r4,5,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFE0;
	// li r3,588
	ctx.r3.s64 = 588;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C820;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c7f4
	if (ctx.cr6.lt) goto loc_8802C7F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C830:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1403
	ctx.r10.s64 = ctx.r31.s64 + 1403;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,598
	ctx.r3.s64 = 598;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C858;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c830
	if (ctx.cr6.lt) goto loc_8802C830;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C868:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1419
	ctx.r10.s64 = ctx.r31.s64 + 1419;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,600
	ctx.r3.s64 = 600;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C890;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c868
	if (ctx.cr6.lt) goto loc_8802C868;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C8A0:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1435
	ctx.r10.s64 = ctx.r31.s64 + 1435;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,602
	ctx.r3.s64 = 602;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C8C8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c8a0
	if (ctx.cr6.lt) goto loc_8802C8A0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C8D8:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r31,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r31,1451
	ctx.r9.s64 = ctx.r31.s64 + 1451;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,590
	ctx.r3.s64 = 590;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C904;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c8d8
	if (ctx.cr6.lt) goto loc_8802C8D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C914:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r31,30,2,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFE;
	// addi r9,r31,1467
	ctx.r9.s64 = ctx.r31.s64 + 1467;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// rlwinm r4,r4,5,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFE0;
	// li r3,589
	ctx.r3.s64 = 589;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C940;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c914
	if (ctx.cr6.lt) goto loc_8802C914;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C950:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1483
	ctx.r10.s64 = ctx.r31.s64 + 1483;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,599
	ctx.r3.s64 = 599;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C978;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c950
	if (ctx.cr6.lt) goto loc_8802C950;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C988:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1499
	ctx.r10.s64 = ctx.r31.s64 + 1499;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,601
	ctx.r3.s64 = 601;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C9B0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c988
	if (ctx.cr6.lt) goto loc_8802C988;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C9C0:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,1515
	ctx.r10.s64 = ctx.r31.s64 + 1515;
	// mulli r9,r11,104
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,104
	ctx.r6.s64 = 104;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,603
	ctx.r3.s64 = 603;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C9E8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c9c0
	if (ctx.cr6.lt) goto loc_8802C9C0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802C9F8:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r31,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r31,1531
	ctx.r9.s64 = ctx.r31.s64 + 1531;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,72
	ctx.r6.s64 = 72;
	// rlwinm r5,r31,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,591
	ctx.r3.s64 = 591;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CA24;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8802c9f8
	if (ctx.cr6.lt) goto loc_8802C9F8;
	// li r8,1547
	ctx.r8.s64 = 1547;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CA4C;
	sub_8813FDD8(ctx, base);
	// li r8,1548
	ctx.r8.s64 = 1548;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CA68;
	sub_8813FDD8(ctx, base);
	// li r8,1549
	ctx.r8.s64 = 1549;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CA84;
	sub_8813FDD8(ctx, base);
	// li r8,1550
	ctx.r8.s64 = 1550;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CAA0;
	sub_8813FDD8(ctx, base);
	// li r8,1551
	ctx.r8.s64 = 1551;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CABC;
	sub_8813FDD8(ctx, base);
	// li r8,1552
	ctx.r8.s64 = 1552;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CAD8;
	sub_8813FDD8(ctx, base);
	// li r8,1553
	ctx.r8.s64 = 1553;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CAF4;
	sub_8813FDD8(ctx, base);
	// li r8,1554
	ctx.r8.s64 = 1554;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CB10;
	sub_8813FDD8(ctx, base);
	// li r8,1555
	ctx.r8.s64 = 1555;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CB2C;
	sub_8813FDD8(ctx, base);
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,6
	ctx.r27.s64 = 6;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
loc_8802CB3C:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1556
	ctx.r10.s64 = ctx.r31.s64 + 1556;
	// subf r11,r3,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r3.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r4,5,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFE0;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CB88;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8802cb3c
	if (ctx.cr6.lt) goto loc_8802CB3C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,96
	ctx.r31.s64 = 96;
loc_8802CB9C:
	// addi r11,r29,1564
	ctx.r11.s64 = ctx.r29.s64 + 1564;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,120
	ctx.r5.s64 = 120;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CBBC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,224
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 224, ctx.xer);
	// blt cr6,0x8802cb9c
	if (ctx.cr6.lt) goto loc_8802CB9C;
	// li r8,1572
	ctx.r8.s64 = 1572;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CBE8;
	sub_8813FDD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,96
	ctx.r31.s64 = 96;
loc_8802CBF0:
	// addi r11,r29,1573
	ctx.r11.s64 = ctx.r29.s64 + 1573;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CC10;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,216
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 216, ctx.xer);
	// blt cr6,0x8802cbf0
	if (ctx.cr6.lt) goto loc_8802CBF0;
	// li r8,1578
	ctx.r8.s64 = 1578;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,597
	ctx.r3.s64 = 597;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CC3C;
	sub_8813FDD8(ctx, base);
	// li r8,1591
	ctx.r8.s64 = 1591;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CC58;
	sub_8813FDD8(ctx, base);
	// li r8,1592
	ctx.r8.s64 = 1592;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CC74;
	sub_8813FDD8(ctx, base);
	// li r8,1593
	ctx.r8.s64 = 1593;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CC90;
	sub_8813FDD8(ctx, base);
	// li r8,1594
	ctx.r8.s64 = 1594;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CCAC;
	sub_8813FDD8(ctx, base);
	// li r8,1595
	ctx.r8.s64 = 1595;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CCC8;
	sub_8813FDD8(ctx, base);
	// li r8,1596
	ctx.r8.s64 = 1596;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CCE4;
	sub_8813FDD8(ctx, base);
	// li r8,1597
	ctx.r8.s64 = 1597;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD00;
	sub_8813FDD8(ctx, base);
	// li r8,1598
	ctx.r8.s64 = 1598;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD1C;
	sub_8813FDD8(ctx, base);
	// li r8,1599
	ctx.r8.s64 = 1599;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD38;
	sub_8813FDD8(ctx, base);
	// li r8,1600
	ctx.r8.s64 = 1600;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD54;
	sub_8813FDD8(ctx, base);
	// li r8,1601
	ctx.r8.s64 = 1601;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD70;
	sub_8813FDD8(ctx, base);
	// li r8,1602
	ctx.r8.s64 = 1602;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CD8C;
	sub_8813FDD8(ctx, base);
	// li r8,1603
	ctx.r8.s64 = 1603;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CDA8;
	sub_8813FDD8(ctx, base);
	// li r8,1604
	ctx.r8.s64 = 1604;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CDC4;
	sub_8813FDD8(ctx, base);
	// li r8,1605
	ctx.r8.s64 = 1605;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CDE0;
	sub_8813FDD8(ctx, base);
	// li r8,1606
	ctx.r8.s64 = 1606;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CDFC;
	sub_8813FDD8(ctx, base);
	// li r8,1607
	ctx.r8.s64 = 1607;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CE18;
	sub_8813FDD8(ctx, base);
	// li r8,1608
	ctx.r8.s64 = 1608;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CE34;
	sub_8813FDD8(ctx, base);
	// li r8,1609
	ctx.r8.s64 = 1609;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CE50;
	sub_8813FDD8(ctx, base);
	// li r8,1610
	ctx.r8.s64 = 1610;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CE6C;
	sub_8813FDD8(ctx, base);
	// li r8,1611
	ctx.r8.s64 = 1611;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CE88;
	sub_8813FDD8(ctx, base);
	// li r8,1612
	ctx.r8.s64 = 1612;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CEA4;
	sub_8813FDD8(ctx, base);
	// li r8,1613
	ctx.r8.s64 = 1613;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CEC0;
	sub_8813FDD8(ctx, base);
	// li r8,1614
	ctx.r8.s64 = 1614;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CEDC;
	sub_8813FDD8(ctx, base);
	// li r8,1615
	ctx.r8.s64 = 1615;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CEF8;
	sub_8813FDD8(ctx, base);
	// li r8,1616
	ctx.r8.s64 = 1616;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CF14;
	sub_8813FDD8(ctx, base);
	// li r8,1617
	ctx.r8.s64 = 1617;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CF30;
	sub_8813FDD8(ctx, base);
	// li r8,1618
	ctx.r8.s64 = 1618;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CF4C;
	sub_8813FDD8(ctx, base);
	// li r8,1619
	ctx.r8.s64 = 1619;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CF68;
	sub_8813FDD8(ctx, base);
	// li r8,1620
	ctx.r8.s64 = 1620;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CF84;
	sub_8813FDD8(ctx, base);
	// li r8,1621
	ctx.r8.s64 = 1621;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CFA0;
	sub_8813FDD8(ctx, base);
	// li r8,1622
	ctx.r8.s64 = 1622;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CFBC;
	sub_8813FDD8(ctx, base);
	// li r8,1623
	ctx.r8.s64 = 1623;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CFD8;
	sub_8813FDD8(ctx, base);
	// li r8,1624
	ctx.r8.s64 = 1624;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802CFF4;
	sub_8813FDD8(ctx, base);
	// li r8,1625
	ctx.r8.s64 = 1625;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D010;
	sub_8813FDD8(ctx, base);
	// li r8,1626
	ctx.r8.s64 = 1626;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D02C;
	sub_8813FDD8(ctx, base);
	// li r8,1627
	ctx.r8.s64 = 1627;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D048;
	sub_8813FDD8(ctx, base);
	// li r8,1628
	ctx.r8.s64 = 1628;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D064;
	sub_8813FDD8(ctx, base);
	// li r8,1629
	ctx.r8.s64 = 1629;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D080;
	sub_8813FDD8(ctx, base);
	// li r8,1630
	ctx.r8.s64 = 1630;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D09C;
	sub_8813FDD8(ctx, base);
	// li r8,1631
	ctx.r8.s64 = 1631;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D0B8;
	sub_8813FDD8(ctx, base);
	// li r8,1632
	ctx.r8.s64 = 1632;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D0D4;
	sub_8813FDD8(ctx, base);
	// li r8,1588
	ctx.r8.s64 = 1588;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D0F0;
	sub_8813FDD8(ctx, base);
	// li r8,1589
	ctx.r8.s64 = 1589;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D10C;
	sub_8813FDD8(ctx, base);
	// li r8,1590
	ctx.r8.s64 = 1590;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D128;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// li r28,5
	ctx.r28.s64 = 5;
	// ori r29,r11,52429
	ctx.r29.u64 = ctx.r11.u64 | 52429;
loc_8802D138:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r28
	ctx.r11.u64 = uint32_t(ctx.r28.u32 ? ctx.r31.u32 / ctx.r28.u32 : 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r7,r31,1649
	ctx.r7.s64 = ctx.r31.s64 + 1649;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r4,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFF0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D184;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x8802d138
	if (ctx.cr6.lt) goto loc_8802D138;
	// li r8,1659
	ctx.r8.s64 = 1659;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D1AC;
	sub_8813FDD8(ctx, base);
	// li r8,1660
	ctx.r8.s64 = 1660;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D1C8;
	sub_8813FDD8(ctx, base);
	// li r8,1661
	ctx.r8.s64 = 1661;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D1E4;
	sub_8813FDD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D1EC:
	// addi r11,r29,1633
	ctx.r11.s64 = ctx.r29.s64 + 1633;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D20C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// blt cr6,0x8802d1ec
	if (ctx.cr6.lt) goto loc_8802D1EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,96
	ctx.r31.s64 = 96;
loc_8802D224:
	// addi r11,r29,1637
	ctx.r11.s64 = ctx.r29.s64 + 1637;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D244;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 192, ctx.xer);
	// blt cr6,0x8802d224
	if (ctx.cr6.lt) goto loc_8802D224;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D25C:
	// addi r11,r29,1645
	ctx.r11.s64 = ctx.r29.s64 + 1645;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,208
	ctx.r5.s64 = 208;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D27C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// blt cr6,0x8802d25c
	if (ctx.cr6.lt) goto loc_8802D25C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,96
	ctx.r31.s64 = 96;
loc_8802D294:
	// addi r11,r29,1641
	ctx.r11.s64 = ctx.r29.s64 + 1641;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D2B4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,224
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 224, ctx.xer);
	// blt cr6,0x8802d294
	if (ctx.cr6.lt) goto loc_8802D294;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D2C8:
	// divwu r10,r31,r27
	ctx.r10.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,1662
	ctx.r3.s64 = ctx.r31.s64 + 1662;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,104
	ctx.r5.s64 = ctx.r9.s64 + 104;
	// subf r11,r4,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r4.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r3,861
	ctx.r3.s64 = 861;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D31C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x8802d2c8
	if (ctx.cr6.lt) goto loc_8802D2C8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_8802D330:
	// addi r11,r29,1674
	ctx.r11.s64 = ctx.r29.s64 + 1674;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D350;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x8802d330
	if (ctx.cr6.lt) goto loc_8802D330;
	// li r8,1579
	ctx.r8.s64 = 1579;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D37C;
	sub_8813FDD8(ctx, base);
	// li r8,1580
	ctx.r8.s64 = 1580;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D398;
	sub_8813FDD8(ctx, base);
	// li r8,1581
	ctx.r8.s64 = 1581;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D3B4;
	sub_8813FDD8(ctx, base);
	// li r8,1582
	ctx.r8.s64 = 1582;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D3D0;
	sub_8813FDD8(ctx, base);
	// li r8,1583
	ctx.r8.s64 = 1583;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D3EC;
	sub_8813FDD8(ctx, base);
	// li r8,1584
	ctx.r8.s64 = 1584;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D408;
	sub_8813FDD8(ctx, base);
	// li r8,1585
	ctx.r8.s64 = 1585;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D424;
	sub_8813FDD8(ctx, base);
	// li r8,1586
	ctx.r8.s64 = 1586;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D440;
	sub_8813FDD8(ctx, base);
	// li r8,1587
	ctx.r8.s64 = 1587;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D45C;
	sub_8813FDD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
loc_8802D464:
	// addi r11,r29,1679
	ctx.r11.s64 = ctx.r29.s64 + 1679;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,593
	ctx.r3.s64 = 593;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D484;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x8802d464
	if (ctx.cr6.lt) goto loc_8802D464;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D498:
	// divwu r11,r31,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// mulhwu r10,r31,r30
	ctx.r10.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,1682
	ctx.r3.s64 = ctx.r31.s64 + 1682;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,72
	ctx.r5.s64 = ctx.r9.s64 + 72;
	// subf r11,r4,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r4.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r3,593
	ctx.r3.s64 = 593;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D4EC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x8802d498
	if (ctx.cr6.lt) goto loc_8802D498;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D4FC:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
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
	// addi r7,r31,1706
	ctx.r7.s64 = ctx.r31.s64 + 1706;
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
	// li r3,594
	ctx.r3.s64 = 594;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D548;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,36
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 36, ctx.xer);
	// blt cr6,0x8802d4fc
	if (ctx.cr6.lt) goto loc_8802D4FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802D558:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r31,r27
	ctx.r11.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
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
	// addi r7,r31,1742
	ctx.r7.s64 = ctx.r31.s64 + 1742;
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
	// li r3,595
	ctx.r3.s64 = 595;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D5A4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 30, ctx.xer);
	// blt cr6,0x8802d558
	if (ctx.cr6.lt) goto loc_8802D558;
	// li r8,1772
	ctx.r8.s64 = 1772;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D5CC;
	sub_8813FDD8(ctx, base);
	// li r8,1773
	ctx.r8.s64 = 1773;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D5E8;
	sub_8813FDD8(ctx, base);
	// li r8,1774
	ctx.r8.s64 = 1774;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D604;
	sub_8813FDD8(ctx, base);
	// li r8,1775
	ctx.r8.s64 = 1775;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D620;
	sub_8813FDD8(ctx, base);
	// li r8,1776
	ctx.r8.s64 = 1776;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D63C;
	sub_8813FDD8(ctx, base);
	// li r8,1777
	ctx.r8.s64 = 1777;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D658;
	sub_8813FDD8(ctx, base);
	// li r8,1778
	ctx.r8.s64 = 1778;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D674;
	sub_8813FDD8(ctx, base);
	// li r8,1779
	ctx.r8.s64 = 1779;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D690;
	sub_8813FDD8(ctx, base);
	// li r8,1780
	ctx.r8.s64 = 1780;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D6AC;
	sub_8813FDD8(ctx, base);
	// li r8,1781
	ctx.r8.s64 = 1781;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D6C8;
	sub_8813FDD8(ctx, base);
	// li r8,1782
	ctx.r8.s64 = 1782;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D6E4;
	sub_8813FDD8(ctx, base);
	// li r8,1783
	ctx.r8.s64 = 1783;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D700;
	sub_8813FDD8(ctx, base);
	// li r8,1784
	ctx.r8.s64 = 1784;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D71C;
	sub_8813FDD8(ctx, base);
	// li r8,1785
	ctx.r8.s64 = 1785;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D738;
	sub_8813FDD8(ctx, base);
	// li r8,1786
	ctx.r8.s64 = 1786;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D754;
	sub_8813FDD8(ctx, base);
	// li r8,1787
	ctx.r8.s64 = 1787;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D770;
	sub_8813FDD8(ctx, base);
	// li r8,1788
	ctx.r8.s64 = 1788;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D78C;
	sub_8813FDD8(ctx, base);
	// li r8,1789
	ctx.r8.s64 = 1789;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D7A8;
	sub_8813FDD8(ctx, base);
	// li r8,1790
	ctx.r8.s64 = 1790;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D7C4;
	sub_8813FDD8(ctx, base);
	// li r8,1791
	ctx.r8.s64 = 1791;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D7E0;
	sub_8813FDD8(ctx, base);
	// li r8,1792
	ctx.r8.s64 = 1792;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D7FC;
	sub_8813FDD8(ctx, base);
	// li r8,1793
	ctx.r8.s64 = 1793;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D818;
	sub_8813FDD8(ctx, base);
	// li r8,1794
	ctx.r8.s64 = 1794;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D834;
	sub_8813FDD8(ctx, base);
	// li r8,1795
	ctx.r8.s64 = 1795;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D850;
	sub_8813FDD8(ctx, base);
	// li r8,1796
	ctx.r8.s64 = 1796;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D86C;
	sub_8813FDD8(ctx, base);
	// li r8,1797
	ctx.r8.s64 = 1797;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D888;
	sub_8813FDD8(ctx, base);
	// li r8,1798
	ctx.r8.s64 = 1798;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D8A4;
	sub_8813FDD8(ctx, base);
	// li r8,1799
	ctx.r8.s64 = 1799;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D8C0;
	sub_8813FDD8(ctx, base);
	// li r8,1800
	ctx.r8.s64 = 1800;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D8DC;
	sub_8813FDD8(ctx, base);
	// li r8,1801
	ctx.r8.s64 = 1801;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D8F8;
	sub_8813FDD8(ctx, base);
	// li r8,1802
	ctx.r8.s64 = 1802;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D914;
	sub_8813FDD8(ctx, base);
	// li r8,1803
	ctx.r8.s64 = 1803;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D930;
	sub_8813FDD8(ctx, base);
	// li r8,1820
	ctx.r8.s64 = 1820;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D94C;
	sub_8813FDD8(ctx, base);
	// li r8,1821
	ctx.r8.s64 = 1821;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D968;
	sub_8813FDD8(ctx, base);
	// li r8,1822
	ctx.r8.s64 = 1822;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D984;
	sub_8813FDD8(ctx, base);
	// li r8,1823
	ctx.r8.s64 = 1823;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D9A0;
	sub_8813FDD8(ctx, base);
	// li r8,1824
	ctx.r8.s64 = 1824;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D9BC;
	sub_8813FDD8(ctx, base);
	// li r8,1825
	ctx.r8.s64 = 1825;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D9D8;
	sub_8813FDD8(ctx, base);
	// li r8,1826
	ctx.r8.s64 = 1826;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802D9F4;
	sub_8813FDD8(ctx, base);
	// li r8,1827
	ctx.r8.s64 = 1827;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA10;
	sub_8813FDD8(ctx, base);
	// li r8,1828
	ctx.r8.s64 = 1828;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA2C;
	sub_8813FDD8(ctx, base);
	// li r8,1829
	ctx.r8.s64 = 1829;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA48;
	sub_8813FDD8(ctx, base);
	// li r8,1830
	ctx.r8.s64 = 1830;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA64;
	sub_8813FDD8(ctx, base);
	// li r8,1831
	ctx.r8.s64 = 1831;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA80;
	sub_8813FDD8(ctx, base);
	// li r8,1832
	ctx.r8.s64 = 1832;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DA9C;
	sub_8813FDD8(ctx, base);
	// li r8,1833
	ctx.r8.s64 = 1833;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DAB8;
	sub_8813FDD8(ctx, base);
	// li r8,1834
	ctx.r8.s64 = 1834;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DAD4;
	sub_8813FDD8(ctx, base);
	// li r8,1835
	ctx.r8.s64 = 1835;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DAF0;
	sub_8813FDD8(ctx, base);
	// li r8,1804
	ctx.r8.s64 = 1804;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB0C;
	sub_8813FDD8(ctx, base);
	// li r8,1805
	ctx.r8.s64 = 1805;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB28;
	sub_8813FDD8(ctx, base);
	// li r8,1806
	ctx.r8.s64 = 1806;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB44;
	sub_8813FDD8(ctx, base);
	// li r8,1807
	ctx.r8.s64 = 1807;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB60;
	sub_8813FDD8(ctx, base);
	// li r8,1808
	ctx.r8.s64 = 1808;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB7C;
	sub_8813FDD8(ctx, base);
	// li r8,1809
	ctx.r8.s64 = 1809;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DB98;
	sub_8813FDD8(ctx, base);
	// li r8,1810
	ctx.r8.s64 = 1810;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DBB4;
	sub_8813FDD8(ctx, base);
	// li r8,1811
	ctx.r8.s64 = 1811;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DBD0;
	sub_8813FDD8(ctx, base);
	// li r8,1812
	ctx.r8.s64 = 1812;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DBEC;
	sub_8813FDD8(ctx, base);
	// li r8,1813
	ctx.r8.s64 = 1813;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC08;
	sub_8813FDD8(ctx, base);
	// li r8,1814
	ctx.r8.s64 = 1814;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC24;
	sub_8813FDD8(ctx, base);
	// li r8,1815
	ctx.r8.s64 = 1815;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC40;
	sub_8813FDD8(ctx, base);
	// li r8,1816
	ctx.r8.s64 = 1816;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC5C;
	sub_8813FDD8(ctx, base);
	// li r8,1817
	ctx.r8.s64 = 1817;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC78;
	sub_8813FDD8(ctx, base);
	// li r8,1818
	ctx.r8.s64 = 1818;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DC94;
	sub_8813FDD8(ctx, base);
	// li r8,1819
	ctx.r8.s64 = 1819;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,604
	ctx.r3.s64 = 604;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DCB0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802DCB8:
	// addi r11,r30,1836
	ctx.r11.s64 = ctx.r30.s64 + 1836;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DCD8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,176
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 176, ctx.xer);
	// blt cr6,0x8802dcb8
	if (ctx.cr6.lt) goto loc_8802DCB8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802DCF0:
	// addi r11,r30,1847
	ctx.r11.s64 = ctx.r30.s64 + 1847;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,136
	ctx.r5.s64 = 136;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DD10;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x8802dcf0
	if (ctx.cr6.lt) goto loc_8802DCF0;
	// li r8,1857
	ctx.r8.s64 = 1857;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DD3C;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802DD44:
	// addi r11,r30,1858
	ctx.r11.s64 = ctx.r30.s64 + 1858;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,152
	ctx.r5.s64 = 152;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DD64;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x8802dd44
	if (ctx.cr6.lt) goto loc_8802DD44;
	// li r8,1868
	ctx.r8.s64 = 1868;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DD90;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802DD94:
	// rlwinm r11,r31,2,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFE0;
	// addi r10,r31,1869
	ctx.r10.s64 = ctx.r31.s64 + 1869;
	// addi r9,r11,176
	ctx.r9.s64 = ctx.r11.s64 + 176;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,596
	ctx.r3.s64 = 596;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DDBC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x8802dd94
	if (ctx.cr6.lt) goto loc_8802DD94;
	// li r8,1879
	ctx.r8.s64 = 1879;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DDE4;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,64
	ctx.r30.s64 = 64;
	// li r31,1881
	ctx.r31.s64 = 1881;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_8802DDF4:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// clrlwi r28,r30,16
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DE18;
	sub_8813FDD8(ctx, base);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DE3C;
	sub_8813FDD8(ctx, base);
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DE64;
	sub_8813FDD8(ctx, base);
	// addi r7,r30,96
	ctx.r7.s64 = ctx.r30.s64 + 96;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// clrlwi r25,r7,16
	ctx.r25.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DE8C;
	sub_8813FDD8(ctx, base);
	// addi r5,r30,128
	ctx.r5.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DEB4;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,208
	ctx.r5.s64 = 208;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DED8;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 5;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DEF8;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DF18;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,7
	ctx.r8.s64 = ctx.r31.s64 + 7;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DF38;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DF58;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,9
	ctx.r5.s64 = ctx.r31.s64 + 9;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x8813fdd8
	ctx.lr = 0x8802DF78;
	sub_8813FDD8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,11
	ctx.r31.s64 = ctx.r31.s64 + 11;
	// cmpwi cr6,r30,96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 96, ctx.xer);
	// blt cr6,0x8802ddf4
	if (ctx.cr6.lt) goto loc_8802DDF4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805E2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8805E2C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,11652
	ctx.r8.s64 = 11652;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E2E0;
	sub_8813FDD8(ctx, base);
	// li r8,11653
	ctx.r8.s64 = 11653;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E2FC;
	sub_8813FDD8(ctx, base);
	// li r8,11654
	ctx.r8.s64 = 11654;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E318;
	sub_8813FDD8(ctx, base);
	// li r8,11655
	ctx.r8.s64 = 11655;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E334;
	sub_8813FDD8(ctx, base);
	// li r8,11656
	ctx.r8.s64 = 11656;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E350;
	sub_8813FDD8(ctx, base);
	// li r8,11657
	ctx.r8.s64 = 11657;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E36C;
	sub_8813FDD8(ctx, base);
	// li r8,11658
	ctx.r8.s64 = 11658;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E388;
	sub_8813FDD8(ctx, base);
	// li r8,11659
	ctx.r8.s64 = 11659;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E3A4;
	sub_8813FDD8(ctx, base);
	// li r8,11660
	ctx.r8.s64 = 11660;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E3C0;
	sub_8813FDD8(ctx, base);
	// li r8,11661
	ctx.r8.s64 = 11661;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E3DC;
	sub_8813FDD8(ctx, base);
	// li r8,11662
	ctx.r8.s64 = 11662;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E3F8;
	sub_8813FDD8(ctx, base);
	// li r8,11663
	ctx.r8.s64 = 11663;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E414;
	sub_8813FDD8(ctx, base);
	// li r8,11664
	ctx.r8.s64 = 11664;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E430;
	sub_8813FDD8(ctx, base);
	// li r8,11665
	ctx.r8.s64 = 11665;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E44C;
	sub_8813FDD8(ctx, base);
	// li r8,11666
	ctx.r8.s64 = 11666;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E468;
	sub_8813FDD8(ctx, base);
	// li r8,11667
	ctx.r8.s64 = 11667;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E484;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,11695
	ctx.r31.s64 = 11695;
	// li r29,80
	ctx.r29.s64 = 80;
	// li r30,6
	ctx.r30.s64 = 6;
	// ori r27,r11,65509
	ctx.r27.u64 = ctx.r11.u64 | 65509;
loc_8805E498:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E4BC;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,232
	ctx.r5.s64 = 232;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E4D8;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bne 0x8805e498
	if (!ctx.cr0.eq) goto loc_8805E498;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,11681
	ctx.r31.s64 = 11681;
	// li r29,80
	ctx.r29.s64 = 80;
	// li r30,7
	ctx.r30.s64 = 7;
	// ori r28,r11,65529
	ctx.r28.u64 = ctx.r11.u64 | 65529;
loc_8805E4FC:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E520;
	sub_8813FDD8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E53C;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E55C;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x8805e4fc
	if (!ctx.cr0.eq) goto loc_8805E4FC;
	// li r8,11701
	ctx.r8.s64 = 11701;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E588;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,11718
	ctx.r31.s64 = 11718;
	// li r30,16
	ctx.r30.s64 = 16;
	// ori r28,r11,65520
	ctx.r28.u64 = ctx.r11.u64 | 65520;
loc_8805E59C:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E5C0;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E5DC;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x8805e59c
	if (!ctx.cr0.eq) goto loc_8805E59C;
	// li r8,11734
	ctx.r8.s64 = 11734;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E608;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,11741
	ctx.r31.s64 = 11741;
	// li r30,6
	ctx.r30.s64 = 6;
	// ori r28,r11,65530
	ctx.r28.u64 = ctx.r11.u64 | 65530;
loc_8805E61C:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E640;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E65C;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bne 0x8805e61c
	if (!ctx.cr0.eq) goto loc_8805E61C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805E674:
	// addi r11,r30,11747
	ctx.r11.s64 = ctx.r30.s64 + 11747;
	// li r7,72
	ctx.r7.s64 = 72;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E694;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x8805e674
	if (ctx.cr6.lt) goto loc_8805E674;
	// li r8,11752
	ctx.r8.s64 = 11752;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E6C0;
	sub_8813FDD8(ctx, base);
	// li r8,11753
	ctx.r8.s64 = 11753;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E6DC;
	sub_8813FDD8(ctx, base);
	// li r8,11754
	ctx.r8.s64 = 11754;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E6F8;
	sub_8813FDD8(ctx, base);
	// li r8,11755
	ctx.r8.s64 = 11755;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E714;
	sub_8813FDD8(ctx, base);
	// li r8,11756
	ctx.r8.s64 = 11756;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E730;
	sub_8813FDD8(ctx, base);
	// li r8,11757
	ctx.r8.s64 = 11757;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E74C;
	sub_8813FDD8(ctx, base);
	// li r8,11758
	ctx.r8.s64 = 11758;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E768;
	sub_8813FDD8(ctx, base);
	// li r8,11759
	ctx.r8.s64 = 11759;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E784;
	sub_8813FDD8(ctx, base);
	// li r8,11760
	ctx.r8.s64 = 11760;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E7A0;
	sub_8813FDD8(ctx, base);
	// li r8,11761
	ctx.r8.s64 = 11761;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E7BC;
	sub_8813FDD8(ctx, base);
	// li r8,11762
	ctx.r8.s64 = 11762;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E7D8;
	sub_8813FDD8(ctx, base);
	// li r8,11763
	ctx.r8.s64 = 11763;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E7F4;
	sub_8813FDD8(ctx, base);
	// li r8,11764
	ctx.r8.s64 = 11764;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E810;
	sub_8813FDD8(ctx, base);
	// li r8,11765
	ctx.r8.s64 = 11765;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E82C;
	sub_8813FDD8(ctx, base);
	// li r8,11766
	ctx.r8.s64 = 11766;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E848;
	sub_8813FDD8(ctx, base);
	// li r8,11767
	ctx.r8.s64 = 11767;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E864;
	sub_8813FDD8(ctx, base);
	// li r8,11768
	ctx.r8.s64 = 11768;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E880;
	sub_8813FDD8(ctx, base);
	// li r8,11769
	ctx.r8.s64 = 11769;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E89C;
	sub_8813FDD8(ctx, base);
	// li r8,11770
	ctx.r8.s64 = 11770;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E8B8;
	sub_8813FDD8(ctx, base);
	// li r8,11771
	ctx.r8.s64 = 11771;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E8D4;
	sub_8813FDD8(ctx, base);
	// li r8,11772
	ctx.r8.s64 = 11772;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E8F0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805E8F8:
	// addi r11,r30,11773
	ctx.r11.s64 = ctx.r30.s64 + 11773;
	// li r7,104
	ctx.r7.s64 = 104;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E918;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 192, ctx.xer);
	// blt cr6,0x8805e8f8
	if (ctx.cr6.lt) goto loc_8805E8F8;
	// li r8,11779
	ctx.r8.s64 = 11779;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E944;
	sub_8813FDD8(ctx, base);
	// lis r11,40
	ctx.r11.s64 = 2621440;
	// li r30,8
	ctx.r30.s64 = 8;
	// lis r31,40
	ctx.r31.s64 = 2621440;
	// ori r29,r11,80
	ctx.r29.u64 = ctx.r11.u64 | 80;
loc_8805E954:
	// addi r11,r30,11772
	ctx.r11.s64 = ctx.r30.s64 + 11772;
	// li r7,112
	ctx.r7.s64 = 112;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,104
	ctx.r5.s64 = 104;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E974;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8805e954
	if (!ctx.cr6.gt) goto loc_8805E954;
	// li r8,11783
	ctx.r8.s64 = 11783;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E9A0;
	sub_8813FDD8(ctx, base);
	// li r8,11784
	ctx.r8.s64 = 11784;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E9BC;
	sub_8813FDD8(ctx, base);
	// li r8,11785
	ctx.r8.s64 = 11785;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E9D8;
	sub_8813FDD8(ctx, base);
	// li r8,11786
	ctx.r8.s64 = 11786;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805E9F4;
	sub_8813FDD8(ctx, base);
	// li r8,11787
	ctx.r8.s64 = 11787;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA10;
	sub_8813FDD8(ctx, base);
	// li r8,11788
	ctx.r8.s64 = 11788;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA2C;
	sub_8813FDD8(ctx, base);
	// li r8,11789
	ctx.r8.s64 = 11789;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA48;
	sub_8813FDD8(ctx, base);
	// li r8,11790
	ctx.r8.s64 = 11790;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA64;
	sub_8813FDD8(ctx, base);
	// li r8,11791
	ctx.r8.s64 = 11791;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA80;
	sub_8813FDD8(ctx, base);
	// li r8,11792
	ctx.r8.s64 = 11792;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EA9C;
	sub_8813FDD8(ctx, base);
	// li r8,11793
	ctx.r8.s64 = 11793;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EAB8;
	sub_8813FDD8(ctx, base);
	// li r8,11794
	ctx.r8.s64 = 11794;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EAD4;
	sub_8813FDD8(ctx, base);
	// li r8,11795
	ctx.r8.s64 = 11795;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EAF0;
	sub_8813FDD8(ctx, base);
	// li r8,11796
	ctx.r8.s64 = 11796;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB0C;
	sub_8813FDD8(ctx, base);
	// li r8,11797
	ctx.r8.s64 = 11797;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB28;
	sub_8813FDD8(ctx, base);
	// li r8,11798
	ctx.r8.s64 = 11798;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB44;
	sub_8813FDD8(ctx, base);
	// li r8,11799
	ctx.r8.s64 = 11799;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB60;
	sub_8813FDD8(ctx, base);
	// li r8,11800
	ctx.r8.s64 = 11800;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB7C;
	sub_8813FDD8(ctx, base);
	// li r8,11801
	ctx.r8.s64 = 11801;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EB98;
	sub_8813FDD8(ctx, base);
	// li r8,11802
	ctx.r8.s64 = 11802;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EBB4;
	sub_8813FDD8(ctx, base);
	// li r8,11803
	ctx.r8.s64 = 11803;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EBD0;
	sub_8813FDD8(ctx, base);
	// li r8,11804
	ctx.r8.s64 = 11804;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EBEC;
	sub_8813FDD8(ctx, base);
	// li r8,11805
	ctx.r8.s64 = 11805;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EC08;
	sub_8813FDD8(ctx, base);
	// li r8,11806
	ctx.r8.s64 = 11806;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EC24;
	sub_8813FDD8(ctx, base);
	// li r8,11807
	ctx.r8.s64 = 11807;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EC40;
	sub_8813FDD8(ctx, base);
	// li r8,11808
	ctx.r8.s64 = 11808;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,175
	ctx.r3.s64 = 175;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EC5C;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,11811
	ctx.r31.s64 = 11811;
	// li r29,200
	ctx.r29.s64 = 200;
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r28,r11,65534
	ctx.r28.u64 = ctx.r11.u64 | 65534;
loc_8805EC70:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EC94;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ECB0;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x8805ec70
	if (!ctx.cr0.eq) goto loc_8805EC70;
	// li r8,11817
	ctx.r8.s64 = 11817;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ECDC;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,11818
	ctx.r31.s64 = 11818;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,120
	ctx.r28.s64 = 120;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r27,r11,65531
	ctx.r27.u64 = ctx.r11.u64 | 65531;
loc_8805ECF4:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,200
	ctx.r5.s64 = 200;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ED14;
	sub_8813FDD8(ctx, base);
	// clrlwi r26,r28,16
	ctx.r26.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ED34;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ED54;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// bne 0x8805ecf4
	if (!ctx.cr0.eq) goto loc_8805ECF4;
	// li r8,11826
	ctx.r8.s64 = 11826;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ED84;
	sub_8813FDD8(ctx, base);
	// li r8,11827
	ctx.r8.s64 = 11827;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EDA0;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,11832
	ctx.r31.s64 = 11832;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r28,r11,65532
	ctx.r28.u64 = ctx.r11.u64 | 65532;
loc_8805EDB4:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r26,r29,16
	ctx.r26.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EDD8;
	sub_8813FDD8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EDF4;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r7,56
	ctx.r7.s64 = 56;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EE14;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bne 0x8805edb4
	if (!ctx.cr0.eq) goto loc_8805EDB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805EE2C:
	// addi r11,r30,11840
	ctx.r11.s64 = ctx.r30.s64 + 11840;
	// li r7,56
	ctx.r7.s64 = 56;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EE4C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 192, ctx.xer);
	// blt cr6,0x8805ee2c
	if (ctx.cr6.lt) goto loc_8805EE2C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,11848
	ctx.r31.s64 = 11848;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8805EE68:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r28,r29,16
	ctx.r28.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EE8C;
	sub_8813FDD8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EEA8;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 5;
	// li r7,64
	ctx.r7.s64 = 64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EEC8;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x8805ee68
	if (!ctx.cr0.eq) goto loc_8805EE68;
	// li r8,11858
	ctx.r8.s64 = 11858;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EEF4;
	sub_8813FDD8(ctx, base);
	// li r8,11859
	ctx.r8.s64 = 11859;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF10;
	sub_8813FDD8(ctx, base);
	// li r8,11860
	ctx.r8.s64 = 11860;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF2C;
	sub_8813FDD8(ctx, base);
	// li r8,11861
	ctx.r8.s64 = 11861;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF48;
	sub_8813FDD8(ctx, base);
	// li r8,11862
	ctx.r8.s64 = 11862;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF64;
	sub_8813FDD8(ctx, base);
	// li r8,11863
	ctx.r8.s64 = 11863;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF80;
	sub_8813FDD8(ctx, base);
	// li r8,11864
	ctx.r8.s64 = 11864;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EF9C;
	sub_8813FDD8(ctx, base);
	// li r8,11865
	ctx.r8.s64 = 11865;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EFB8;
	sub_8813FDD8(ctx, base);
	// li r8,11866
	ctx.r8.s64 = 11866;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EFD4;
	sub_8813FDD8(ctx, base);
	// li r8,11867
	ctx.r8.s64 = 11867;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805EFF0;
	sub_8813FDD8(ctx, base);
	// li r8,11868
	ctx.r8.s64 = 11868;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F00C;
	sub_8813FDD8(ctx, base);
	// li r8,11869
	ctx.r8.s64 = 11869;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F028;
	sub_8813FDD8(ctx, base);
	// li r8,11870
	ctx.r8.s64 = 11870;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F044;
	sub_8813FDD8(ctx, base);
	// li r8,11871
	ctx.r8.s64 = 11871;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F060;
	sub_8813FDD8(ctx, base);
	// li r8,11872
	ctx.r8.s64 = 11872;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F07C;
	sub_8813FDD8(ctx, base);
	// li r8,11873
	ctx.r8.s64 = 11873;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F098;
	sub_8813FDD8(ctx, base);
	// li r8,11874
	ctx.r8.s64 = 11874;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F0B4;
	sub_8813FDD8(ctx, base);
	// li r8,11875
	ctx.r8.s64 = 11875;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F0D0;
	sub_8813FDD8(ctx, base);
	// li r8,11876
	ctx.r8.s64 = 11876;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F0EC;
	sub_8813FDD8(ctx, base);
	// li r8,11877
	ctx.r8.s64 = 11877;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F108;
	sub_8813FDD8(ctx, base);
	// li r8,11878
	ctx.r8.s64 = 11878;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F124;
	sub_8813FDD8(ctx, base);
	// li r8,11879
	ctx.r8.s64 = 11879;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F140;
	sub_8813FDD8(ctx, base);
	// li r8,11880
	ctx.r8.s64 = 11880;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,182
	ctx.r3.s64 = 182;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F15C;
	sub_8813FDD8(ctx, base);
	// li r8,11881
	ctx.r8.s64 = 11881;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F178;
	sub_8813FDD8(ctx, base);
	// li r8,11882
	ctx.r8.s64 = 11882;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F194;
	sub_8813FDD8(ctx, base);
	// li r8,11883
	ctx.r8.s64 = 11883;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F1B0;
	sub_8813FDD8(ctx, base);
	// li r8,11884
	ctx.r8.s64 = 11884;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F1CC;
	sub_8813FDD8(ctx, base);
	// li r8,11885
	ctx.r8.s64 = 11885;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F1E8;
	sub_8813FDD8(ctx, base);
	// li r8,11886
	ctx.r8.s64 = 11886;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F204;
	sub_8813FDD8(ctx, base);
	// li r8,11887
	ctx.r8.s64 = 11887;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F220;
	sub_8813FDD8(ctx, base);
	// li r8,11888
	ctx.r8.s64 = 11888;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,177
	ctx.r3.s64 = 177;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F23C;
	sub_8813FDD8(ctx, base);
	// li r8,11889
	ctx.r8.s64 = 11889;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F258;
	sub_8813FDD8(ctx, base);
	// li r8,11890
	ctx.r8.s64 = 11890;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F274;
	sub_8813FDD8(ctx, base);
	// li r8,11891
	ctx.r8.s64 = 11891;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F290;
	sub_8813FDD8(ctx, base);
	// li r8,11892
	ctx.r8.s64 = 11892;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F2AC;
	sub_8813FDD8(ctx, base);
	// li r8,11893
	ctx.r8.s64 = 11893;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F2C8;
	sub_8813FDD8(ctx, base);
	// li r8,11894
	ctx.r8.s64 = 11894;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F2E4;
	sub_8813FDD8(ctx, base);
	// li r8,11895
	ctx.r8.s64 = 11895;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F300;
	sub_8813FDD8(ctx, base);
	// li r8,11896
	ctx.r8.s64 = 11896;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F31C;
	sub_8813FDD8(ctx, base);
	// li r8,11897
	ctx.r8.s64 = 11897;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F338;
	sub_8813FDD8(ctx, base);
	// li r8,11898
	ctx.r8.s64 = 11898;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F354;
	sub_8813FDD8(ctx, base);
	// li r8,11899
	ctx.r8.s64 = 11899;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F370;
	sub_8813FDD8(ctx, base);
	// li r8,11900
	ctx.r8.s64 = 11900;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F38C;
	sub_8813FDD8(ctx, base);
	// li r8,11901
	ctx.r8.s64 = 11901;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F3A8;
	sub_8813FDD8(ctx, base);
	// li r8,11902
	ctx.r8.s64 = 11902;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F3C4;
	sub_8813FDD8(ctx, base);
	// li r8,11903
	ctx.r8.s64 = 11903;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F3E0;
	sub_8813FDD8(ctx, base);
	// li r8,11904
	ctx.r8.s64 = 11904;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F3FC;
	sub_8813FDD8(ctx, base);
	// li r8,11905
	ctx.r8.s64 = 11905;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F418;
	sub_8813FDD8(ctx, base);
	// li r8,11906
	ctx.r8.s64 = 11906;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,181
	ctx.r3.s64 = 181;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F434;
	sub_8813FDD8(ctx, base);
	// li r8,11907
	ctx.r8.s64 = 11907;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F450;
	sub_8813FDD8(ctx, base);
	// li r8,11908
	ctx.r8.s64 = 11908;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F46C;
	sub_8813FDD8(ctx, base);
	// li r8,11909
	ctx.r8.s64 = 11909;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F488;
	sub_8813FDD8(ctx, base);
	// li r8,11910
	ctx.r8.s64 = 11910;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F4A4;
	sub_8813FDD8(ctx, base);
	// li r8,11911
	ctx.r8.s64 = 11911;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F4C0;
	sub_8813FDD8(ctx, base);
	// li r8,11912
	ctx.r8.s64 = 11912;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F4DC;
	sub_8813FDD8(ctx, base);
	// li r8,11913
	ctx.r8.s64 = 11913;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F4F8;
	sub_8813FDD8(ctx, base);
	// li r8,11914
	ctx.r8.s64 = 11914;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F514;
	sub_8813FDD8(ctx, base);
	// li r8,11915
	ctx.r8.s64 = 11915;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F530;
	sub_8813FDD8(ctx, base);
	// li r8,11916
	ctx.r8.s64 = 11916;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F54C;
	sub_8813FDD8(ctx, base);
	// li r8,11917
	ctx.r8.s64 = 11917;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F568;
	sub_8813FDD8(ctx, base);
	// li r8,11918
	ctx.r8.s64 = 11918;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F584;
	sub_8813FDD8(ctx, base);
	// li r8,11919
	ctx.r8.s64 = 11919;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F5A0;
	sub_8813FDD8(ctx, base);
	// li r8,11920
	ctx.r8.s64 = 11920;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F5BC;
	sub_8813FDD8(ctx, base);
	// li r8,11921
	ctx.r8.s64 = 11921;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F5D8;
	sub_8813FDD8(ctx, base);
	// li r8,11922
	ctx.r8.s64 = 11922;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F5F4;
	sub_8813FDD8(ctx, base);
	// li r8,11923
	ctx.r8.s64 = 11923;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F610;
	sub_8813FDD8(ctx, base);
	// li r8,11924
	ctx.r8.s64 = 11924;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F62C;
	sub_8813FDD8(ctx, base);
	// li r8,11925
	ctx.r8.s64 = 11925;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F648;
	sub_8813FDD8(ctx, base);
	// li r8,11926
	ctx.r8.s64 = 11926;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F664;
	sub_8813FDD8(ctx, base);
	// li r8,11927
	ctx.r8.s64 = 11927;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F680;
	sub_8813FDD8(ctx, base);
	// li r8,11928
	ctx.r8.s64 = 11928;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F69C;
	sub_8813FDD8(ctx, base);
	// li r8,11929
	ctx.r8.s64 = 11929;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F6B8;
	sub_8813FDD8(ctx, base);
	// li r8,11930
	ctx.r8.s64 = 11930;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F6D4;
	sub_8813FDD8(ctx, base);
	// li r8,11931
	ctx.r8.s64 = 11931;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F6F0;
	sub_8813FDD8(ctx, base);
	// li r8,11932
	ctx.r8.s64 = 11932;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F70C;
	sub_8813FDD8(ctx, base);
	// li r8,11933
	ctx.r8.s64 = 11933;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F728;
	sub_8813FDD8(ctx, base);
	// li r8,11934
	ctx.r8.s64 = 11934;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F744;
	sub_8813FDD8(ctx, base);
	// li r8,11935
	ctx.r8.s64 = 11935;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F760;
	sub_8813FDD8(ctx, base);
	// li r8,11936
	ctx.r8.s64 = 11936;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F77C;
	sub_8813FDD8(ctx, base);
	// li r8,11937
	ctx.r8.s64 = 11937;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F798;
	sub_8813FDD8(ctx, base);
	// li r8,11938
	ctx.r8.s64 = 11938;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F7B4;
	sub_8813FDD8(ctx, base);
	// li r8,11939
	ctx.r8.s64 = 11939;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F7D0;
	sub_8813FDD8(ctx, base);
	// li r8,11940
	ctx.r8.s64 = 11940;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F7EC;
	sub_8813FDD8(ctx, base);
	// li r8,11941
	ctx.r8.s64 = 11941;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F808;
	sub_8813FDD8(ctx, base);
	// li r8,11942
	ctx.r8.s64 = 11942;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F824;
	sub_8813FDD8(ctx, base);
	// li r8,11943
	ctx.r8.s64 = 11943;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F840;
	sub_8813FDD8(ctx, base);
	// li r8,11944
	ctx.r8.s64 = 11944;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F85C;
	sub_8813FDD8(ctx, base);
	// li r8,11945
	ctx.r8.s64 = 11945;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F878;
	sub_8813FDD8(ctx, base);
	// li r8,11946
	ctx.r8.s64 = 11946;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F894;
	sub_8813FDD8(ctx, base);
	// li r8,11947
	ctx.r8.s64 = 11947;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F8B0;
	sub_8813FDD8(ctx, base);
	// li r8,11948
	ctx.r8.s64 = 11948;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F8CC;
	sub_8813FDD8(ctx, base);
	// li r8,11949
	ctx.r8.s64 = 11949;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F8E8;
	sub_8813FDD8(ctx, base);
	// li r8,11950
	ctx.r8.s64 = 11950;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F904;
	sub_8813FDD8(ctx, base);
	// li r8,11951
	ctx.r8.s64 = 11951;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F920;
	sub_8813FDD8(ctx, base);
	// li r8,11952
	ctx.r8.s64 = 11952;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8813fdd8
	ctx.lr = 0x8805F93C;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806A528) {
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
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,21904
	ctx.r31.s64 = ctx.r10.s64 + 21904;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r8.u32);
	// stw r3,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stw r7,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// bl 0x880676d0
	ctx.lr = 0x8806A570;
	sub_880676D0(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8806A6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806A6B8;
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
	ctx.lr = 0x8806A6D0;
	sub_8806A1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806a1b8
	ctx.lr = 0x8806A6E0;
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
	ctx.lr = 0x8806A700;
	sub_88068E90(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806a764
	if (!ctx.cr6.eq) goto loc_8806A764;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8806a734
	if (ctx.cr6.eq) goto loc_8806A734;
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A724;
	sub_8806B5D8(ctx, base);
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r10,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
loc_8806A734:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8806a7b4
	if (ctx.cr6.eq) goto loc_8806A7B4;
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,180
	ctx.r4.s64 = 11796480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A74C;
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
loc_8806A764:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8806a78c
	if (ctx.cr6.eq) goto loc_8806A78C;
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A77C;
	sub_8806B5D8(ctx, base);
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r10,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
loc_8806A78C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8806a7b4
	if (ctx.cr6.eq) goto loc_8806A7B4;
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8806A7A4;
	sub_8806B5D8(ctx, base);
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// stw r11,3020(r31)
	REX_STORE_U32(ctx.r31.u32 + 3020, ctx.r11.u32);
	// stw r10,3024(r31)
	REX_STORE_U32(ctx.r31.u32 + 3024, ctx.r10.u32);
loc_8806A7B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806B5F0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8806b600
	if (ctx.cr6.eq) goto loc_8806B600;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8806B600:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8806b610
	if (ctx.cr6.eq) goto loc_8806B610;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8806B610:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B680) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8806b6b4
	if (!ctx.cr6.eq) goto loc_8806B6B4;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8806b6b4
	if (ctx.cr6.lt) goto loc_8806B6B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_8806B6B4:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// ldx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stdx r9,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806B990) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8806b9b0
	if (ctx.cr6.lt) goto loc_8806B9B0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8806b9a8
	if (ctx.cr6.eq) goto loc_8806B9A8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8806B9A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8806B9B0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BAF0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BAF8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806BB38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806BB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,216(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806bbbc
	if (ctx.cr6.eq) goto loc_8806BBBC;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806bbbc
	if (!ctx.cr6.eq) goto loc_8806BBBC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r4,76(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x88010488
	ctx.lr = 0x8806BB78;
	sub_88010488(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bbbc
	if (ctx.cr6.eq) goto loc_8806BBBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8806bb94
	if (!ctx.cr6.eq) goto loc_8806BB94;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8806bb98
	goto loc_8806BB98;
loc_8806BB94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8806BB98:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,180(r29)
	REX_STORE_U32(ctx.r29.u32 + 180, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88069180
	ctx.lr = 0x8806BBB0;
	sub_88069180(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8806BBBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806C158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8806C160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,216(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806c258
	if (!ctx.cr6.eq) goto loc_8806C258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x88069948
	ctx.lr = 0x8806C184;
	sub_88069948(ctx, base);
	// ld r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 40);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8806c19c
	if (ctx.cr6.lt) goto loc_8806C19C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8806c080
	ctx.lr = 0x8806C19C;
	sub_8806C080(ctx, base);
loc_8806C19C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880696c8
	ctx.lr = 0x8806C1A4;
	sub_880696C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,216(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 216);
	// bl 0x88068e60
	ctx.lr = 0x8806C1B0;
	sub_88068E60(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r28.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_8806C1D0:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// ld r9,432(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 432);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x8806c208
	if (ctx.cr6.gt) goto loc_8806C208;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8806c1d0
	if (ctx.cr6.lt) goto loc_8806C1D0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8806C208:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8806c250
	if (ctx.cr6.eq) goto loc_8806C250;
	// mulli r11,r6,200
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(200));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfic r30,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r30.u64 = static_cast<uint64_t>(4) - ctx.r10.u64;
	// addi r31,r11,592
	ctx.r31.s64 = ctx.r11.s64 + 592;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8806c24c
	if (!ctx.cr6.gt) goto loc_8806C24C;
	// subf r29,r31,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r31.u64;
loc_8806C230:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8813fa60
	ctx.lr = 0x8806C244;
	sub_8813FA60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8806c230
	if (!ctx.cr0.eq) goto loc_8806C230;
loc_8806C24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8806C250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8806c080
	ctx.lr = 0x8806C258;
	sub_8806C080(ctx, base);
loc_8806C258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806CFE0) {
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
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// lis r8,-30608
	ctx.r8.s64 = -2005925888;
	// lis r7,-30692
	ctx.r7.s64 = -2011430912;
	// lis r6,-30608
	ctx.r6.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// lwz r10,21860(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21860);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,21856(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 21856);
	// addi r31,r6,26144
	ctx.r31.s64 = ctx.r6.s64 + 26144;
	// lwz r8,21852(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 21852);
	// lwz r7,-6432(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -6432);
	// stw r11,26144(r6)
	REX_STORE_U32(ctx.r6.u32 + 26144, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,4260(r31)
	REX_STORE_U32(ctx.r31.u32 + 4260, ctx.r7.u32);
	// bl 0x8801a438
	ctx.lr = 0x8806D040;
	sub_8801A438(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r5,4232
	ctx.r5.s64 = 4232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8813fa60
	ctx.lr = 0x8806D054;
	sub_8813FA60(ctx, base);
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

DEFINE_REX_FUNC(sub_8806D958) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806D960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,30472
	ctx.r31.s64 = ctx.r11.s64 + 30472;
	// lwz r11,30472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30472);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8806daac
	if (ctx.cr6.gt) goto loc_8806DAAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8806d9b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806D9B4;
	// bdzf 4*cr6+eq,0x8806da10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8806DA10;
	// bne cr6,0x8806da24
	if (!ctx.cr6.eq) goto loc_8806DA24;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r3,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r3.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bgt 0x8806daa0
	if (ctx.cr0.gt) goto loc_8806DAA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8806daa0
	goto loc_8806DAA0;
loc_8806D9B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806daac
	if (!ctx.cr0.lt) goto loc_8806DAAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bgt 0x8806daac
	if (ctx.cr0.gt) goto loc_8806DAAC;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,336
	ctx.r10.s64 = 336;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x88027210
	ctx.lr = 0x8806DA0C;
	sub_88027210(ctx, base);
	// b 0x8806daac
	goto loc_8806DAAC;
loc_8806DA10:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8806daac
	goto loc_8806DAAC;
loc_8806DA24:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806da78
	if (!ctx.cr0.lt) goto loc_8806DA78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// ble cr6,0x8806da84
	if (!ctx.cr6.gt) goto loc_8806DA84;
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88067710
	ctx.lr = 0x8806DA68;
	sub_88067710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8801b368
	ctx.lr = 0x8806DA70;
	sub_8801B368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8806DA78:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806daac
	if (ctx.cr6.eq) goto loc_8806DAAC;
loc_8806DA84:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// subfic r3,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r3.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
loc_8806DAA0:
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x8806DAAC;
	sub_88067710(ctx, base);
loc_8806DAAC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8806DAB0:
	// li r6,241
	ctx.r6.s64 = 241;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x8806DAC4;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8806DADC;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x8806DAE8;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8806DAF4;
	sub_8813FF28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x8806dab0
	if (ctx.cr6.lt) goto loc_8806DAB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,241
	ctx.r6.s64 = 241;
	// lis r5,180
	ctx.r5.s64 = 11796480;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// addi r3,r11,922
	ctx.r3.s64 = ctx.r11.s64 + 922;
	// bl 0x8801a9c8
	ctx.lr = 0x8806DB18;
	sub_8801A9C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8806DB30;
	sub_8813FF90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88070060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88070068;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880702a0
	if (ctx.cr6.gt) goto loc_880702A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880700c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880700C8;
	// bdzf 4*cr6+eq,0x8807010c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8807010C;
	// bdzf 4*cr6+eq,0x88070234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88070234;
	// bne cr6,0x88070254
	if (!ctx.cr6.eq) goto loc_88070254;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x88070248
	if (ctx.cr6.gt) goto loc_88070248;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880700C8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x880702a0
	if (!ctx.cr6.eq) goto loc_880702A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8807010C:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// ble cr6,0x880701e4
	if (!ctx.cr6.gt) goto loc_880701E4;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x8807013C;
	sub_8801A448(ctx, base);
	// addi r10,r3,-16
	ctx.r10.s64 = ctx.r3.s64 + -16;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,31
	ctx.r3.s64 = 31;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a448
	ctx.lr = 0x88070154;
	sub_8801A448(ctx, base);
	// addi r9,r3,-16
	ctx.r9.s64 = ctx.r3.s64 + -16;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a448
	ctx.lr = 0x8807016C;
	sub_8801A448(ctx, base);
	// addi r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 2;
	// li r3,95
	ctx.r3.s64 = 95;
	// bl 0x8801a448
	ctx.lr = 0x88070178;
	sub_8801A448(ctx, base);
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r3,272
	ctx.r11.s64 = ctx.r3.s64 + 272;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8807018c
	if (ctx.cr6.eq) goto loc_8807018C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8807018C:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x880701a4
	if (ctx.cr6.lt) goto loc_880701A4;
	// beq cr6,0x880701a4
	if (ctx.cr6.eq) goto loc_880701A4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x880701c8
	if (!ctx.cr6.lt) goto loc_880701C8;
loc_880701A4:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,89
	ctx.r3.s64 = 89;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x88023b90
	ctx.lr = 0x880701C8;
	sub_88023B90(ctx, base);
loc_880701C8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880701e4
	if (!ctx.cr0.eq) goto loc_880701E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806f908
	ctx.lr = 0x880701E4;
	sub_8806F908(ctx, base);
loc_880701E4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88070234:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_88070248:
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88070254:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880702a0
	if (!ctx.cr0.lt) goto loc_880702A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// blt cr6,0x880702a0
	if (ctx.cr6.lt) goto loc_880702A0;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r9,r11,31,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFFFFF;
	// subfic r8,r9,136
	ctx.xer.ca = ctx.r9.u32 <= 136;
	ctx.r8.u64 = static_cast<uint64_t>(136) - ctx.r9.u64;
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r8,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_880702A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880725A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880725A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x88023f40
	ctx.lr = 0x880725BC;
	sub_88023F40(ctx, base);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88072684
	if (!ctx.cr6.gt) goto loc_88072684;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880236a8
	ctx.lr = 0x880725DC;
	sub_880236A8(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88072684
	if (!ctx.cr6.eq) goto loc_88072684;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bgt 0x88072684
	if (ctx.cr0.gt) goto loc_88072684;
	// bl 0x880b1e10
	ctx.lr = 0x88072600;
	sub_880B1E10(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88072618
	if (!ctx.cr6.eq) goto loc_88072618;
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x88072620
	goto loc_88072620;
loc_88072618:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
loc_88072620:
	// bl 0x88012f38
	ctx.lr = 0x88072624;
	sub_88012F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88072630;
	sub_88022A88(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r5,r5,42670
	ctx.r5.u64 = ctx.r5.u64 | 42670;
	// bl 0x88024de8
	ctx.lr = 0x88072644;
	sub_88024DE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88072660;
	sub_8801A448(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r30,148(r31)
	REX_STORE_U16(ctx.r31.u32 + 148, ctx.r30.u16);
	// sth r30,228(r31)
	REX_STORE_U16(ctx.r31.u32 + 228, ctx.r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88072684:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88072DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88072DF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88072DFC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88072E08;
	sub_88024030(ctx, base);
	// lis r26,-30608
	ctx.r26.s64 = -2005925888;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,21860(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88072e94
	if (!ctx.cr6.eq) goto loc_88072E94;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88072E30;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88072E5C;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x88072E74;
	sub_88024460(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x88072e94
	if (ctx.cr6.eq) goto loc_88072E94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
loc_88072E94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-120
	ctx.r10.s64 = -7864320;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88072ebc
	if (!ctx.cr6.lt) goto loc_88072EBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88072EAC;
	sub_88022BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88072EB4;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_88072EBC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88072edc
	if (!ctx.cr6.eq) goto loc_88072EDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072be8
	ctx.lr = 0x88072ED4;
	sub_88072BE8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_88072EDC:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// addi r28,r31,148
	ctx.r28.s64 = ctx.r31.s64 + 148;
	// stw r10,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88072f14
	if (ctx.cr6.eq) goto loc_88072F14;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r28)
	REX_STORE_U16(ctx.r28.u32 + 2, ctx.r9.u16);
loc_88072F14:
	// lhz r11,82(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88072f34
	if (ctx.cr6.eq) goto loc_88072F34;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r28)
	REX_STORE_U16(ctx.r28.u32 + 82, ctx.r10.u16);
	// b 0x88072f3c
	goto loc_88072F3C;
loc_88072F34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88072f60
	if (ctx.cr6.eq) goto loc_88072F60;
loc_88072F3C:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// beq cr6,0x88072f8c
	if (ctx.cr6.eq) goto loc_88072F8C;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x88072f88
	goto loc_88072F88;
loc_88072F60:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x88072f8c
	if (!ctx.cr6.lt) goto loc_88072F8C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88072f8c
	if (!ctx.cr6.eq) goto loc_88072F8C;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_88072F88:
	// stw r10,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
loc_88072F8C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8807313c
	if (ctx.cr6.gt) goto loc_8807313C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88073084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88073084;
	// bdzf 4*cr6+eq,0x880730a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880730A8;
	// bne cr6,0x88073114
	if (!ctx.cr6.eq) goto loc_88073114;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x88072fdc
	if (!ctx.cr0.lt) goto loc_88072FDC;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// blt cr6,0x88072fdc
	if (ctx.cr6.lt) goto loc_88072FDC;
	// stw r27,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
loc_88072FDC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x88073028
	if (!ctx.cr0.lt) goto loc_88073028;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// ble cr6,0x88073018
	if (!ctx.cr6.gt) goto loc_88073018;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x88073028
	if (ctx.cr6.lt) goto loc_88073028;
	// b 0x88073020
	goto loc_88073020;
loc_88073018:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x88073028
	if (ctx.cr6.gt) goto loc_88073028;
loc_88073020:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_88073028:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21860(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 21860);
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x88073044
	if (!ctx.cr0.eq) goto loc_88073044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072368
	ctx.lr = 0x88073044;
	sub_88072368(ctx, base);
loc_88073044:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x88073080;
	sub_88018B98(ctx, base);
	// b 0x8807313c
	goto loc_8807313C;
loc_88073084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072690
	ctx.lr = 0x8807308C;
	sub_88072690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807313c
	if (!ctx.cr6.eq) goto loc_8807313C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r27,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x88073138
	goto loc_88073138;
loc_880730A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x880730ec
	if (ctx.cr0.gt) goto loc_880730EC;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x880730ec
	if (ctx.cr6.lt) goto loc_880730EC;
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_880730EC:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
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
	// stw r6,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r6.u32);
	// b 0x8807313c
	goto loc_8807313C;
loc_88073114:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88072908
	ctx.lr = 0x88073120;
	sub_88072908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807313c
	if (!ctx.cr6.eq) goto loc_8807313C;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r9,r11,24672
	ctx.r9.u64 = ctx.r11.u64 | 24672;
	// stw r9,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
loc_88073138:
	// stw r10,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_8807313C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r24,13
	ctx.r24.s64 = 851968;
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// addis r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -262144;
	// li r3,9435
	ctx.r3.s64 = 9435;
	// subf r4,r10,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073164;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073170;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88073188;
	sub_8813FF90(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r9,27
	ctx.r9.s64 = 1769472;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addis r5,r28,16
	ctx.r5.s64 = ctx.r28.s64 + 1048576;
	// li r3,9436
	ctx.r3.s64 = 9436;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880731A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880731B4;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x880731CC;
	sub_8813FF90(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// addis r5,r28,28
	ctx.r5.s64 = ctx.r28.s64 + 1835008;
	// li r3,9437
	ctx.r3.s64 = 9437;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880731EC;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880731F8;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88073210;
	sub_8813FF90(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r11,69
	ctx.r11.s64 = 4521984;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addis r5,r28,-106
	ctx.r5.s64 = ctx.r28.s64 + -6946816;
	// li r3,9438
	ctx.r3.s64 = 9438;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073230;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8807323C;
	sub_8813FF08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88073254;
	sub_8813FF90(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r9,77
	ctx.r9.s64 = 5046272;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addis r5,r28,5
	ctx.r5.s64 = ctx.r28.s64 + 327680;
	// li r3,9438
	ctx.r3.s64 = 9438;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073274;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073280;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88073298;
	sub_8813FF90(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r4,62
	ctx.r4.s64 = 4063232;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addis r5,r28,39
	ctx.r5.s64 = ctx.r28.s64 + 2555904;
	// li r3,9438
	ctx.r3.s64 = 9438;
	// subf r4,r10,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880732B8;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880732C4;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x880732DC;
	sub_8813FF90(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r5,r28,80
	ctx.r5.s64 = ctx.r28.s64 + 5242880;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,9438
	ctx.r3.s64 = 9438;
	// rlwinm r8,r9,18,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFFFC0000;
	// subf r4,r8,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r8.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073300;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8807330C;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff90
	ctx.lr = 0x88073324;
	sub_8813FF90(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// addis r5,r28,96
	ctx.r5.s64 = ctx.r28.s64 + 6291456;
	// li r3,9438
	ctx.r3.s64 = 9438;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073344;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073350;
	sub_8813FF08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88073368;
	sub_8813FF90(ctx, base);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,-16536
	ctx.r28.s64 = ctx.r11.s64 + -16536;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mulli r11,r3,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(60));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880733A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880733B4;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x880733C0;
	sub_8813FF08(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880733EC;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880733F8;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073404;
	sub_8813FF08(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073430;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8807343C;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073448;
	sub_8813FF08(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073474;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073480;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x8807348C;
	sub_8813FF08(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880734B8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880734C4;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x880734D0;
	sub_8813FF08(ctx, base);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88073680
	if (ctx.cr6.eq) goto loc_88073680;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073508;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073514;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073530;
	sub_8813FF90(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8807355C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073568;
	sub_8813FF08(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073584;
	sub_8813FF90(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880735B0;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880735BC;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880735D8;
	sub_8813FF90(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073604;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073610;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8807362C;
	sub_8813FF90(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073658;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073664;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073680;
	sub_8813FF90(ctx, base);
loc_88073680:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r9,-30694
	ctx.r9.s64 = -2011561984;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r28,1920
	ctx.r30.s64 = ctx.r28.s64 + 1920;
	// addi r5,r9,-11712
	ctx.r5.s64 = ctx.r9.s64 + -11712;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r28,2048
	ctx.r8.s64 = ctx.r28.s64 + 2048;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwzx r28,r7,r30
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mulli r9,r5,84
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880736E0;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880736EC;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x880736F8;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073728;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073734;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073740;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073770;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8807377C;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073788;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880737B8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880737C4;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x880737D0;
	sub_8813FF08(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073800;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8807380C;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073818;
	sub_8813FF08(ctx, base);
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880739dc
	if (ctx.cr6.eq) goto loc_880739DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073854;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073860;
	sub_8813FF08(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8807387C;
	sub_8813FF90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880738AC;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880738B8;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880738D4;
	sub_8813FF90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073904;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073910;
	sub_8813FF08(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x8807392C;
	sub_8813FF90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8807395C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073968;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073984;
	sub_8813FF90(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880739B4;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880739C0;
	sub_8813FF08(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880739DC;
	sub_8813FF90(ctx, base);
loc_880739DC:
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88073b44
	if (ctx.cr6.eq) goto loc_88073B44;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,68(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073A14;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073A20;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073A2C;
	sub_8813FF08(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88073a90
	if (ctx.cr6.eq) goto loc_88073A90;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,64(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,68(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073A68;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073A74;
	sub_8813FF08(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
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
	ctx.lr = 0x88073A90;
	sub_8813FF90(ctx, base);
loc_88073A90:
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88073b44
	if (ctx.cr6.eq) goto loc_88073B44;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073AC8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073AD4;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073AE0;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88073b44
	if (ctx.cr6.eq) goto loc_88073B44;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073B1C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073B28;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073B44;
	sub_8813FF90(ctx, base);
loc_88073B44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r3,9818
	ctx.r3.s64 = 9818;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r8,r24
	ctx.r5.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073B6C;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073B78;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073B84;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r25,35
	ctx.r25.s64 = 2293760;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r4,r25
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// lis r26,37
	ctx.r26.s64 = 2424832;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,9819
	ctx.r3.s64 = 9819;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073BB4;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073BC0;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073BCC;
	sub_8813FF08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r30,53
	ctx.r30.s64 = 3473408;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r27,67
	ctx.r27.s64 = 4390912;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,9820
	ctx.r3.s64 = 9820;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073BFC;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88073C08;
	sub_8813FF48(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8813ff08
	ctx.lr = 0x88073C14;
	sub_8813FF08(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88073d10
	if (ctx.cr6.eq) goto loc_88073D10;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r3,9818
	ctx.r3.s64 = 9818;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r8,r24
	ctx.r5.u64 = ctx.r8.u64 + ctx.r24.u64;
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073C48;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073C54;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073C70;
	sub_8813FF90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r4,r25
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// li r3,9819
	ctx.r3.s64 = 9819;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073C98;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073CA4;
	sub_8813FF08(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073CC0;
	sub_8813FF90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r27
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// li r3,9820
	ctx.r3.s64 = 9820;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88073CE8;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88073CF4;
	sub_8813FF08(ctx, base);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x88073D10;
	sub_8813FF90(ctx, base);
loc_88073D10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88087278) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88087280;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808728C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88024030
	ctx.lr = 0x88087298;
	sub_88024030(ctx, base);
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,21860(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808730c
	if (!ctx.cr6.eq) goto loc_8808730C;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a860
	ctx.lr = 0x880872C0;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x880872EC;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x8808730c
	if (ctx.cr6.eq) goto loc_8808730C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_8808730C:
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88024758
	ctx.lr = 0x88087324;
	sub_88024758(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88087354
	if (!ctx.cr6.eq) goto loc_88087354;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88087358
	if (ctx.cr6.eq) goto loc_88087358;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88087344;
	sub_88022BE0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808734C;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88087354:
	// stw r28,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
loc_88087358:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r26,r31,104
	ctx.r26.s64 = ctx.r31.s64 + 104;
	// ori r9,r11,32896
	ctx.r9.u64 = ctx.r11.u64 | 32896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// lhz r11,106(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 106);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808738c
	if (ctx.cr6.eq) goto loc_8808738C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r9.u16);
loc_8808738C:
	// lhz r11,82(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880873ac
	if (ctx.cr6.eq) goto loc_880873AC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r26)
	REX_STORE_U16(ctx.r26.u32 + 82, ctx.r10.u16);
	// b 0x880873b4
	goto loc_880873B4;
loc_880873AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880873d8
	if (ctx.cr6.eq) goto loc_880873D8;
loc_880873B4:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// beq cr6,0x88087404
	if (ctx.cr6.eq) goto loc_88087404;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,65280
	ctx.r10.u64 = ctx.r11.u64 | 65280;
	// b 0x88087400
	goto loc_88087400;
loc_880873D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 832, ctx.xer);
	// bge cr6,0x88087404
	if (!ctx.cr6.lt) goto loc_88087404;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88087404
	if (!ctx.cr6.eq) goto loc_88087404;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_88087400:
	// stw r10,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
loc_88087404:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880876e0
	if (ctx.cr6.eq) goto loc_880876E0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880878b4
	if (!ctx.cr0.lt) goto loc_880878B4;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_88087430:
	// lwz r9,-8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x880a84f0
	ctx.lr = 0x88087454;
	sub_880A84F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x88087468;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x880a8620
	ctx.lr = 0x88087474;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880a8650
	ctx.lr = 0x88087480;
	sub_880A8650(ctx, base);
	// lwz r10,-8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r7,-4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// li r3,13
	ctx.r3.s64 = 13;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880874AC;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x880874B8;
	sub_8801A448(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x880874C4;
	sub_8801A448(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880874D4;
	sub_880A85C0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x880a8620
	ctx.lr = 0x880874E4;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x880a8668
	ctx.lr = 0x880874F0;
	sub_880A8668(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88087504;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8801a448
	ctx.lr = 0x88087510;
	sub_8801A448(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x8808751C;
	sub_8801A448(ctx, base);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8808752C;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x88087538;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x88087544;
	sub_880A8668(ctx, base);
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8808758c
	if (!ctx.cr6.gt) goto loc_8808758C;
loc_88087554:
	// lwz r8,-8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bl 0x880a99a8
	ctx.lr = 0x8808757C;
	sub_880A99A8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88087554
	if (ctx.cr6.lt) goto loc_88087554;
loc_8808758C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x88087430
	if (!ctx.cr0.eq) goto loc_88087430;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880875d4
	if (!ctx.cr6.eq) goto loc_880875D4;
	// bl 0x88024750
	ctx.lr = 0x880875AC;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,96
	ctx.r8.s64 = 96;
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
	ctx.lr = 0x880875D0;
	sub_88011728(ctx, base);
	// b 0x88087614
	goto loc_88087614;
loc_880875D4:
	// bl 0x88024748
	ctx.lr = 0x880875D8;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88024748
	ctx.lr = 0x880875E8;
	sub_88024748(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x88087614;
	sub_880114D8(ctx, base);
loc_88087614:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880876d0
	if (!ctx.cr6.eq) goto loc_880876D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x88087638;
	sub_880244D0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880876ac
	if (ctx.cr6.lt) goto loc_880876AC;
	// beq cr6,0x8808769c
	if (ctx.cr6.eq) goto loc_8808769C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880876d0
	if (!ctx.cr6.lt) goto loc_880876D0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x8808768C;
	sub_88013CE0(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,-2
	ctx.r6.s64 = -2;
	// b 0x880876b8
	goto loc_880876B8;
loc_8808769C:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x880876b8
	goto loc_880876B8;
loc_880876AC:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r6,12
	ctx.r6.s64 = 12;
loc_880876B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x880876D0;
	sub_88013CE0(ctx, base);
loc_880876D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88023f48
	ctx.lr = 0x880876D8;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880876E0:
	// lwz r11,21860(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880878b4
	if (!ctx.cr6.eq) goto loc_880878B4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x88087890
	if (!ctx.cr0.lt) goto loc_88087890;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,8
	ctx.r27.s64 = 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// ble cr6,0x88087864
	if (!ctx.cr6.gt) goto loc_88087864;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8808781c
	if (!ctx.cr6.gt) goto loc_8808781C;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r28,24
	ctx.r28.s64 = 1572864;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88087770
	if (!ctx.cr6.eq) goto loc_88087770;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x8808774C;
	sub_880244D0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r29,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r29.u64;
	// add r4,r8,r28
	ctx.r4.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88087768;
	sub_880244D0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// b 0x880877d0
	goto loc_880877D0;
loc_88087770:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880877d0
	if (!ctx.cr6.eq) goto loc_880877D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88087790;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8801a808
	ctx.lr = 0x8808779C;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r29,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r29.u64;
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880877BC;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8801a808
	ctx.lr = 0x880877C8;
	sub_8801A808(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r6,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
loc_880877D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,14
	ctx.r4.s64 = 14;
	// subf r6,r29,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// subf r5,r28,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88086f48
	ctx.lr = 0x880877F4;
	sub_88086F48(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r29,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r29.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bl 0x88086f48
	ctx.lr = 0x88087818;
	sub_88086F48(ctx, base);
	// b 0x88087864
	goto loc_88087864;
loc_8808781C:
	// stw r27,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x88087830;
	sub_880244D0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// subf r6,r29,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88087038
	ctx.lr = 0x88087854;
	sub_88087038(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// stw r28,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_88087864:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bge 0x88087890
	if (!ctx.cr0.lt) goto loc_88087890;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_88087890:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_880878B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r3,9850
	ctx.r3.s64 = 9850;
	// bl 0x8801a9c8
	ctx.lr = 0x880878D4;
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
	ctx.lr = 0x880878E8;
	sub_8813FF90(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880878FC;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r28,20
	ctx.r28.s64 = 1310720;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r29,19
	ctx.r29.s64 = 1245184;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7191
	ctx.r3.s64 = 7191;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087940;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087948;
	sub_8813FF48(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x8801a860
	ctx.lr = 0x88087960;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7191
	ctx.r3.s64 = 7191;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r5,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x8808799C;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880879A8;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880879B4;
	sub_8813FF08(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x880879CC;
	sub_8801A860(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,21
	ctx.r29.s64 = 1376256;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,7176
	ctx.r3.s64 = 7176;
	// subf r4,r29,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r29.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 262144;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087A04;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087A0C;
	sub_8813FF48(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x88087A24;
	sub_8801A860(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7176
	ctx.r3.s64 = 7176;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 327680;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087A58;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88087A64;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x88087A70;
	sub_8813FF08(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x8801a860
	ctx.lr = 0x88087A88;
	sub_8801A860(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r27,26
	ctx.r27.s64 = 1703936;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,7178
	ctx.r3.s64 = 7178;
	// subf r4,r29,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r29.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087AC0;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087AC8;
	sub_8813FF48(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x8801a860
	ctx.lr = 0x88087AE0;
	sub_8801A860(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7178
	ctx.r3.s64 = 7178;
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087B14;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88087B20;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x88087B2C;
	sub_8813FF08(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8801a860
	ctx.lr = 0x88087B40;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7180
	ctx.r3.s64 = 7180;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r10,-15
	ctx.r5.s64 = ctx.r10.s64 + -983040;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087B68;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087B70;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8801a860
	ctx.lr = 0x88087B88;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7181
	ctx.r3.s64 = 7181;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r9,-12
	ctx.r5.s64 = ctx.r9.s64 + -786432;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087BB0;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087BB8;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x88087BD0;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7190
	ctx.r3.s64 = 7190;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087BF8;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087C00;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x88087C18;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// li r3,7183
	ctx.r3.s64 = 7183;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r7,22
	ctx.r5.s64 = ctx.r7.s64 + 1441792;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087C44;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88087C50;
	sub_8813FF48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88087C68;
	sub_8813FF90(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x8801a860
	ctx.lr = 0x88087C80;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7184
	ctx.r3.s64 = 7184;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087CA8;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087CB0;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x8801a860
	ctx.lr = 0x88087CC8;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7185
	ctx.r3.s64 = 7185;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 917504;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087CF0;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087CF8;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x8801a860
	ctx.lr = 0x88087D10;
	sub_8801A860(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8801a860
	ctx.lr = 0x88087D3C;
	sub_8801A860(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,10
	ctx.r29.s64 = 655360;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,7186
	ctx.r3.s64 = 7186;
	// subf r4,r29,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r29.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087D64;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88087D78;
	sub_8813FF90(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x8801a860
	ctx.lr = 0x88087D90;
	sub_8801A860(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x8801a860
	ctx.lr = 0x88087DBC;
	sub_8801A860(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,7187
	ctx.r3.s64 = 7187;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087DE0;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88087DF4;
	sub_8813FF90(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x8801a860
	ctx.lr = 0x88087E0C;
	sub_8801A860(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,7182
	ctx.r3.s64 = 7182;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88087E30;
	sub_8801A9C8(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8813ff48
	ctx.lr = 0x88087E38;
	sub_8813FF48(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x88018b98
	ctx.lr = 0x88087E74;
	sub_88018B98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88091DA0) {
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
	ctx.lr = 0x88091DB8;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x88091DBC;
	sub_88068E78(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11972(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11972);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88091df0
	if (!ctx.cr6.eq) goto loc_88091DF0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88091df0
	if (!ctx.cr6.eq) goto loc_88091DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88023f48
	ctx.lr = 0x88091DDC;
	sub_88023F48(ctx, base);
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
loc_88091DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88091bf0
	ctx.lr = 0x88091DF8;
	sub_88091BF0(ctx, base);
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

DEFINE_REX_FUNC(sub_88092008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88092010;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,316
	ctx.r4.s64 = 316;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88092020;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88092028;
	sub_88023F40(ctx, base);
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88092038;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88092040;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88092044;
	sub_88068E60(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88092054;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x88024028
	ctx.lr = 0x88092060;
	sub_88024028(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880240b8
	ctx.lr = 0x88092078;
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
	ctx.lr = 0x8809208C;
	sub_88024DD0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x880920A0;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880920ac
	if (!ctx.cr6.lt) goto loc_880920AC;
	// li r3,256
	ctx.r3.s64 = 256;
loc_880920AC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// bl 0x880750b8
	ctx.lr = 0x880920EC;
	sub_880750B8(ctx, base);
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// lis r5,-30711
	ctx.r5.s64 = -2012676096;
	// sth r29,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r29.u16);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lis r6,-30711
	ctx.r6.s64 = -2012676096;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// addi r7,r5,-2200
	ctx.r7.s64 = ctx.r5.s64 + -2200;
	// stw r11,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r8,r6,-2200
	ctx.r8.s64 = ctx.r6.s64 + -2200;
	// sth r29,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r29.u16);
	// sth r9,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r9.u16);
	// lis r6,-30711
	ctx.r6.s64 = -2012676096;
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// addi r4,r6,7696
	ctx.r4.s64 = ctx.r6.s64 + 7696;
	// stw r10,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r9,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// sth r9,220(r31)
	REX_STORE_U16(ctx.r31.u32 + 220, ctx.r9.u16);
	// stw r9,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r5,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r5,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// stw r11,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r8,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r7,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// stw r30,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// bl 0x88023e90
	ctx.lr = 0x88092178;
	sub_88023E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88094020) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88094028;
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
	ctx.lr = 0x88094040;
	sub_88023F40(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88094110
	if (!ctx.cr6.gt) goto loc_88094110;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880236a8
	ctx.lr = 0x88094060;
	sub_880236A8(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88094110
	if (!ctx.cr6.eq) goto loc_88094110;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x88094110
	if (ctx.cr0.gt) goto loc_88094110;
	// bl 0x880b1c90
	ctx.lr = 0x88094084;
	sub_880B1C90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88094090;
	sub_88022A88(ctx, base);
	// li r5,410
	ctx.r5.s64 = 410;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x880940A0;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,156(r31)
	REX_STORE_U16(ctx.r31.u32 + 156, ctx.r11.u16);
	// li r8,120
	ctx.r8.s64 = 120;
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x880940CC;
	sub_880247E8(ctx, base);
	// lis r7,-30711
	ctx.r7.s64 = -2012676096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r7,16256
	ctx.r4.s64 = ctx.r7.s64 + 16256;
	// bl 0x88068f18
	ctx.lr = 0x880940DC;
	sub_88068F18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024110
	ctx.lr = 0x880940E4;
	sub_88024110(ctx, base);
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// bne cr6,0x88094104
	if (!ctx.cr6.eq) goto loc_88094104;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x880a2e10
	ctx.lr = 0x88094104;
	sub_880A2E10(ctx, base);
loc_88094104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88094110:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88095C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88095C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,588(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 588);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88095d00
	if (ctx.cr6.lt) goto loc_88095D00;
	// beq cr6,0x88095cc4
	if (ctx.cr6.eq) goto loc_88095CC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88095d24
	if (!ctx.cr6.lt) goto loc_88095D24;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,17
	ctx.r8.s64 = 17;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,-2
	ctx.r6.s64 = ctx.r29.s64 + -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013ce0
	ctx.lr = 0x88095C8C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,17
	ctx.r8.s64 = 17;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,3
	ctx.r6.s64 = ctx.r29.s64 + 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x88013ce0
	ctx.lr = 0x88095CB0;
	sub_88013CE0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,17
	ctx.r8.s64 = 17;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x88095d10
	goto loc_88095D10;
loc_88095CC4:
	// li r8,6
	ctx.r8.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x88014578
	ctx.lr = 0x88095CF8;
	sub_88014578(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88095D00:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_88095D10:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88013ce0
	ctx.lr = 0x88095D24;
	sub_88013CE0(ctx, base);
loc_88095D24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88097240) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88097248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880972e4
	if (!ctx.cr6.gt) goto loc_880972E4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88097270;
	sub_880236A8(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880972e4
	if (!ctx.cr6.eq) goto loc_880972E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x880972e4
	if (ctx.cr0.gt) goto loc_880972E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x8809729C;
	sub_88022A88(ctx, base);
	// li r5,3170
	ctx.r5.s64 = 3170;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x880972AC;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r11,436(r31)
	REX_STORE_U16(ctx.r31.u32 + 436, ctx.r11.u16);
	// li r8,121
	ctx.r8.s64 = 121;
	// sth r11,516(r31)
	REX_STORE_U16(ctx.r31.u32 + 516, ctx.r11.u16);
	// stw r10,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// bl 0x880b1e10
	ctx.lr = 0x880972D4;
	sub_880B1E10(ctx, base);
	// bl 0x880b3ce0
	ctx.lr = 0x880972D8;
	sub_880B3CE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880972E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88098C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88098CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88098CB8;
	sub_88023F40(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// bne cr6,0x88098cf8
	if (!ctx.cr6.eq) goto loc_88098CF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88098CF8:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x88098d08
	if (!ctx.cr6.eq) goto loc_88098D08;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
loc_88098D08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88099558) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88099560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880995f8
	if (!ctx.cr6.gt) goto loc_880995F8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88099588;
	sub_880236A8(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880995f8
	if (!ctx.cr6.eq) goto loc_880995F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x880995f8
	if (ctx.cr0.gt) goto loc_880995F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880995B4;
	sub_88022A88(ctx, base);
	// li r5,680
	ctx.r5.s64 = 680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x880995C4;
	sub_88024DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,372(r31)
	REX_STORE_U16(ctx.r31.u32 + 372, ctx.r11.u16);
	// sth r11,452(r31)
	REX_STORE_U16(ctx.r31.u32 + 452, ctx.r11.u16);
	// bl 0x880b1c90
	ctx.lr = 0x880995D4;
	sub_880B1C90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,121
	ctx.r9.s64 = 121;
	// stw r11,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880995F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809A260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f54
	ctx.lr = 0x8809A268;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,548
	ctx.r4.s64 = 548;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x8809A278;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x8809A280;
	sub_88023F40(ctx, base);
	// li r5,548
	ctx.r5.s64 = 548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8809A290;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x8809A298;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8809A29C;
	sub_88068E60(ctx, base);
	// stw r3,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x8809A2BC;
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
	ctx.lr = 0x8809A2D0;
	sub_88024DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880240e0
	ctx.lr = 0x8809A2D8;
	sub_880240E0(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// stw r3,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r10,544(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 544);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,21852(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r9,r9,30,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFFFFFFF;
	// subfic r7,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	ctx.r7.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r28,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// beq cr6,0x8809a33c
	if (ctx.cr6.eq) goto loc_8809A33C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8809a344
	if (!ctx.cr6.eq) goto loc_8809A344;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r6,r7,64
	ctx.xer.ca = ctx.r7.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r7.u64;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// b 0x8809a344
	goto loc_8809A344;
loc_8809A33C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8809A344:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,416
	ctx.r9.s64 = 416;
	// li r8,396
	ctx.r8.s64 = 396;
	// stw r10,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// li r7,376
	ctx.r7.s64 = 376;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// li r6,336
	ctx.r6.s64 = 336;
	// stw r8,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// li r5,296
	ctx.r5.s64 = 296;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r6,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// stw r5,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r4,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
loc_8809A38C:
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
	// bne 0x8809a38c
	if (!ctx.cr0.eq) goto loc_8809A38C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r11,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r10,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
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
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// stw r11,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stw r10,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r10,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// stw r10,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// stw r10,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// bl 0x8813fa58
	ctx.lr = 0x8809A444;
	sub_8813FA58(ctx, base);
	// lis r5,-30
	ctx.r5.s64 = -1966080;
	// li r4,119
	ctx.r4.s64 = 119;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lis r27,12
	ctx.r27.s64 = 786432;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// li r25,448
	ctx.r25.s64 = 448;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880221d0
	ctx.lr = 0x8809A47C;
	sub_880221D0(ctx, base);
	// lis r3,30
	ctx.r3.s64 = 1966080;
	// li r26,64
	ctx.r26.s64 = 64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880221d0
	ctx.lr = 0x8809A4A0;
	sub_880221D0(ctx, base);
	// lis r11,-21
	ctx.r11.s64 = -1376256;
	// lis r27,-15
	ctx.r27.s64 = -983040;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880221d0
	ctx.lr = 0x8809A4C4;
	sub_880221D0(ctx, base);
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880221d0
	ctx.lr = 0x8809A4E4;
	sub_880221D0(ctx, base);
	// lis r7,-30710
	ctx.r7.s64 = -2012610560;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r28.u32);
	// lis r10,36
	ctx.r10.s64 = 2359296;
	// stw r28,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r28.u32);
	// sth r11,372(r31)
	REX_STORE_U16(ctx.r31.u32 + 372, ctx.r11.u16);
	// lis r6,-30710
	ctx.r6.s64 = -2012610560;
	// sth r11,376(r31)
	REX_STORE_U16(ctx.r31.u32 + 376, ctx.r11.u16);
	// lis r8,28
	ctx.r8.s64 = 1835008;
	// sth r11,452(r31)
	REX_STORE_U16(ctx.r31.u32 + 452, ctx.r11.u16);
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// sth r11,456(r31)
	REX_STORE_U16(ctx.r31.u32 + 456, ctx.r11.u16);
	// addi r5,r7,-27304
	ctx.r5.s64 = ctx.r7.s64 + -27304;
	// stw r10,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// addi r7,r6,-27304
	ctx.r7.s64 = ctx.r6.s64 + -27304;
	// stw r10,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// li r6,640
	ctx.r6.s64 = 640;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-30710
	ctx.r4.s64 = -2012610560;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// addi r4,r4,-27128
	ctx.r4.s64 = ctx.r4.s64 + -27128;
	// stw r8,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r8.u32);
	// stw r8,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r9,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// stw r9,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// stw r28,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r28.u32);
	// stw r11,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r11,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r10,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// stw r5,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r5.u32);
	// stw r31,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r31.u32);
	// stw r7,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r7.u32);
	// stw r31,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r31.u32);
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// bl 0x88023e90
	ctx.lr = 0x8809A57C;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x8809A58C;
	sub_8813FA58(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88022730
	ctx.lr = 0x8809A59C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809CBC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31760
	ctx.r11.s64 = ctx.r11.s64 + 31760;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// stwx r4,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r5,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8809D508) {
	REX_FUNC_PROLOGUE();
	// b 0x8806cd18
	sub_8806CD18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809D510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f58
	ctx.lr = 0x8809D518;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x88024110
	ctx.lr = 0x8809D528;
	sub_88024110(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806b850
	ctx.lr = 0x8809D534;
	sub_8806B850(ctx, base);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// mulli r10,r18,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(152));
	// addi r31,r11,30672
	ctx.r31.s64 = ctx.r11.s64 + 30672;
	// rlwinm r30,r18,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// add r11,r10,r21
	ctx.r11.u64 = ctx.r10.u64 + ctx.r21.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r26,r11,48
	ctx.r26.s64 = ctx.r11.s64 + 48;
	// lwzx r22,r30,r9
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x880692c0
	ctx.lr = 0x8809D55C;
	sub_880692C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8809dc48
	if (!ctx.cr6.eq) goto loc_8809DC48;
	// bl 0x880692d0
	ctx.lr = 0x8809D568;
	sub_880692D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809dc48
	if (ctx.cr6.eq) goto loc_8809DC48;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// ori r3,r3,32896
	ctx.r3.u64 = ctx.r3.u64 | 32896;
	// bl 0x88140570
	ctx.lr = 0x8809D57C;
	sub_88140570(ctx, base);
	// ld r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// li r17,1
	ctx.r17.s64 = 1;
	// cmpld cr6,r23,r11
	ctx.cr6.compare<uint64_t>(ctx.r23.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x8809d594
	if (!ctx.cr6.gt) goto loc_8809D594;
	// std r23,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r23.u64);
	// stw r17,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r17.u32);
loc_8809D594:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806c050
	ctx.lr = 0x8809D5A4;
	sub_8806C050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809d674
	if (ctx.cr6.eq) goto loc_8809D674;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88140710
	ctx.lr = 0x8809D5BC;
	sub_88140710(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8809d5d8
	if (ctx.cr6.eq) goto loc_8809D5D8;
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806c000
	ctx.lr = 0x8809D5D8;
	sub_8806C000(ctx, base);
loc_8809D5D8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809d660
	if (!ctx.cr6.eq) goto loc_8809D660;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88027210
	ctx.lr = 0x8809D5EC;
	sub_88027210(ctx, base);
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// ori r3,r3,20480
	ctx.r3.u64 = ctx.r3.u64 | 20480;
	// bl 0x88140570
	ctx.lr = 0x8809D5F8;
	sub_88140570(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r5,240
	ctx.r5.s64 = 240;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r4,34
	ctx.r4.s64 = 34;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r11,16752
	ctx.r6.s64 = ctx.r11.s64 + 16752;
	// beq cr6,0x8809d634
	if (ctx.cr6.eq) goto loc_8809D634;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x88140588
	ctx.lr = 0x8809D62C;
	sub_88140588(ctx, base);
	// li r3,232
	ctx.r3.s64 = 232;
	// b 0x8809d640
	goto loc_8809D640;
loc_8809D634:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88140588
	ctx.lr = 0x8809D63C;
	sub_88140588(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
loc_8809D640:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x881405d8
	ctx.lr = 0x8809D654;
	sub_881405D8(ctx, base);
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// ori r3,r3,32896
	ctx.r3.u64 = ctx.r3.u64 | 32896;
	// bl 0x88140570
	ctx.lr = 0x8809D660;
	sub_88140570(ctx, base);
loc_8809D660:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8809cbe8
	ctx.lr = 0x8809D66C;
	sub_8809CBE8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
loc_8809D674:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806b8a8
	ctx.lr = 0x8809D67C;
	sub_8806B8A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8809d6cc
	if (!ctx.cr6.eq) goto loc_8809D6CC;
	// lis r10,-19946
	ctx.r10.s64 = -1307181056;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r6,240
	ctx.r6.s64 = 240;
	// ori r8,r10,17097
	ctx.r8.u64 = ctx.r10.u64 | 17097;
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// lwz r5,20(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r4,16(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r3,23
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(23));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,831
	ctx.r3.s64 = ctx.r11.s64 + 831;
	// bl 0x8801a9c8
	ctx.lr = 0x8809D6C4;
	sub_8801A9C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
loc_8809D6CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r16,0
	ctx.r16.s64 = 0;
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809d794
	if (!ctx.cr6.eq) goto loc_8809D794;
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// stw r16,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r16.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// bl 0x8806baf0
	ctx.lr = 0x8809D6F4;
	sub_8806BAF0(ctx, base);
	// lis r10,20
	ctx.r10.s64 = 1310720;
	// stw r3,140(r26)
	REX_STORE_U32(ctx.r26.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r10,144(r26)
	REX_STORE_U32(ctx.r26.u32 + 144, ctx.r10.u32);
	// stw r19,148(r26)
	REX_STORE_U32(ctx.r26.u32 + 148, ctx.r19.u32);
	// beq cr6,0x8809d71c
	if (ctx.cr6.eq) goto loc_8809D71C;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// stw r11,144(r26)
	REX_STORE_U32(ctx.r26.u32 + 144, ctx.r11.u32);
	// stw r10,148(r26)
	REX_STORE_U32(ctx.r26.u32 + 148, ctx.r10.u32);
loc_8809D71C:
	// addi r31,r26,68
	ctx.r31.s64 = ctx.r26.s64 + 68;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8809D730;
	sub_8813FA58(ctx, base);
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8809d760
	if (!ctx.cr6.gt) goto loc_8809D760;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
loc_8809D744:
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r16,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r16.u32);
	// stwu r17,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r17.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809d744
	if (ctx.cr6.lt) goto loc_8809D744;
loc_8809D760:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,44(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 44);
	// bl 0x8806a1b8
	ctx.lr = 0x8809D76C;
	sub_8806A1B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8809d790
	if (ctx.cr6.eq) goto loc_8809D790;
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8809d784
	if (ctx.cr6.eq) goto loc_8809D784;
	// lis r4,180
	ctx.r4.s64 = 11796480;
loc_8809D784:
	// lis r5,50
	ctx.r5.s64 = 3276800;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806b5d8
	ctx.lr = 0x8809D790;
	sub_8806B5D8(ctx, base);
loc_8809D790:
	// stw r17,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_8809D794:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r26)
	REX_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
	// bge 0x8809d7e0
	if (!ctx.cr0.lt) goto loc_8809D7E0;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// lis r10,14563
	ctx.r10.s64 = 954400768;
	// lwz r9,32(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// ori r8,r10,36409
	ctx.r8.u64 = ctx.r10.u64 | 36409;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r7,r11,r8
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// stw r9,28(r26)
	REX_STORE_U32(ctx.r26.u32 + 28, ctx.r9.u32);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stw r4,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r4.u32);
loc_8809D7E0:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r5,4(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r3,r11,795
	ctx.r3.s64 = ctx.r11.s64 + 795;
	// bne cr6,0x8809d800
	if (!ctx.cr6.eq) goto loc_8809D800;
	// addi r3,r11,777
	ctx.r3.s64 = ctx.r11.s64 + 777;
loc_8809D800:
	// bl 0x8801a9c8
	ctx.lr = 0x8809D804;
	sub_8801A9C8(ctx, base);
	// lis r31,745
	ctx.r31.s64 = 48824320;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// ori r31,r31,3805
	ctx.r31.u64 = ctx.r31.u64 | 3805;
	// li r27,10
	ctx.r27.s64 = 10;
	// rldicr r31,r31,11,52
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 11) & 0xFFFFFFFFFFFFF800;
	// lis r28,6
	ctx.r28.s64 = 393216;
	// lwz r29,8(r22)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r25,12(r22)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
loc_8809D824:
	// divdu r30,r23,r31
	ctx.r30.u64 = ctx.r31.u64 ? ctx.r23.u64 / ctx.r31.u64 : 0;
	// tdllei r31,0
	if (ctx.r31.s64 == 0ll || ctx.r31.u64 < 0ull) ppc_trap(ctx, base, 0);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x8809d83c
	if (ctx.cr6.eq) goto loc_8809D83C;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// b 0x8809d84c
	goto loc_8809D84C;
loc_8809D83C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8809d84c
	if (!ctx.cr6.eq) goto loc_8809D84C;
	// cmpldi cr6,r31,1
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 1, ctx.xer);
	// bne cr6,0x8809d864
	if (!ctx.cr6.eq) goto loc_8809D864;
loc_8809D84C:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,394
	ctx.r3.s64 = ctx.r11.s64 + 394;
	// bl 0x8801a9c8
	ctx.lr = 0x8809D864;
	sub_8801A9C8(ctx, base);
loc_8809D864:
	// mulld r11,r30,r31
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * ctx.r31.u64);
	// divdu r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 ? ctx.r31.u64 / ctx.r27.u64 : 0;
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// bne cr6,0x8809d824
	if (!ctx.cr6.eq) goto loc_8809D824;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806c658
	ctx.lr = 0x8809D884;
	sub_8806C658(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// bl 0x88069760
	ctx.lr = 0x8809D89C;
	sub_88069760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809d928
	if (ctx.cr6.eq) goto loc_8809D928;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806c7a0
	ctx.lr = 0x8809D8AC;
	sub_8806C7A0(ctx, base);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809d8c0
	if (!ctx.cr6.lt) goto loc_8809D8C0;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
loc_8809D8C0:
	// stw r28,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// bl 0x8806b5f0
	ctx.lr = 0x8809D8D8;
	sub_8806B5F0(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lfd f13,88(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8809d904
	if (!ctx.cr6.lt) goto loc_8809D904;
	// stfd f0,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.f0.u64);
loc_8809D904:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,44(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 44);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x88069908
	ctx.lr = 0x8809D914;
	sub_88069908(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8809d928
	if (ctx.cr6.gt) goto loc_8809D928;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_8809D928:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8809d96c
	if (ctx.cr6.eq) goto loc_8809D96C;
	// lwz r3,44(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 44);
	// bl 0x880695f8
	ctx.lr = 0x8809D938;
	sub_880695F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8809d96c
	if (!ctx.cr6.eq) goto loc_8809D96C;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809d960
	if (ctx.cr6.eq) goto loc_8809D960;
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// stw r11,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8809d960
	if (!ctx.cr0.lt) goto loc_8809D960;
	// stw r16,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r16.u32);
loc_8809D960:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// b 0x8809d9a0
	goto loc_8809D9A0;
loc_8809D96C:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809d984
	if (ctx.cr6.eq) goto loc_8809D984;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// b 0x8809d9a0
	goto loc_8809D9A0;
loc_8809D984:
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// stw r9,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8809d9a0
	if (ctx.cr6.lt) goto loc_8809D9A0;
	// stw r11,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
loc_8809D9A0:
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r8,16(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// bne cr6,0x8809d9e4
	if (!ctx.cr6.eq) goto loc_8809D9E4;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,28(r21)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// lwz r5,24(r21)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r30,r9,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r29,r19,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r19.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x8809D9D8;
	sub_8801A3E0(ctx, base);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8809da10
	goto loc_8809DA10;
loc_8809D9E4:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,28(r21)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,24(r21)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + 24);
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// lis r3,240
	ctx.r3.s64 = 15728640;
	// addis r30,r9,-108
	ctx.r30.s64 = ctx.r9.s64 + -7077888;
	// subf r29,r19,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r19.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x8809DA08;
	sub_8801A3E0(ctx, base);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lis r3,240
	ctx.r3.s64 = 15728640;
loc_8809DA10:
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// lwz r6,36(r21)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 36);
	// lwz r5,32(r21)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + 32);
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// bl 0x8801a3e0
	ctx.lr = 0x8809DA24;
	sub_8801A3E0(ctx, base);
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8809da38
	if (!ctx.cr6.lt) goto loc_8809DA38;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8809DA38:
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// blt cr6,0x8809da44
	if (ctx.cr6.lt) goto loc_8809DA44;
	// li r31,128
	ctx.r31.s64 = 128;
loc_8809DA44:
	// subfic r11,r31,128
	ctx.xer.ca = ctx.r31.u32 <= 128;
	ctx.r11.u64 = static_cast<uint64_t>(128) - ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// blt cr6,0x8809da58
	if (ctx.cr6.lt) goto loc_8809DA58;
	// li r31,255
	ctx.r31.s64 = 255;
loc_8809DA58:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8809d170
	ctx.lr = 0x8809DA7C;
	sub_8809D170(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806b8a8
	ctx.lr = 0x8809DA84;
	sub_8806B8A8(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blt cr6,0x8809da90
	if (ctx.cr6.lt) goto loc_8809DA90;
	// li r3,7
	ctx.r3.s64 = 7;
loc_8809DA90:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// subfic r9,r31,255
	ctx.xer.ca = ctx.r31.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r31.u64;
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// addic. r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,16(r22)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble 0x8809db00
	if (!ctx.cr0.gt) goto loc_8809DB00;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
loc_8809DAB4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x8809dad0
	if (ctx.cr6.eq) goto loc_8809DAD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1208
	ctx.r3.s64 = 1208;
	// b 0x8809dad8
	goto loc_8809DAD8;
loc_8809DAD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1207
	ctx.r3.s64 = 1207;
loc_8809DAD8:
	// bl 0x8801a9c8
	ctx.lr = 0x8809DADC;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809DAF0;
	sub_8813FF90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r30,r19,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r19.u64;
	// add r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 + ctx.r19.u64;
	// bne 0x8809dab4
	if (!ctx.cr0.eq) goto loc_8809DAB4;
loc_8809DB00:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r30,144(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 144);
	// addi r31,r26,68
	ctx.r31.s64 = ctx.r26.s64 + 68;
	// bl 0x8806baf0
	ctx.lr = 0x8809DB10;
	sub_8806BAF0(ctx, base);
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8809db7c
	if (ctx.cr6.eq) goto loc_8809DB7C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806baf0
	ctx.lr = 0x8809DB24;
	sub_8806BAF0(ctx, base);
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8809db70
	if (!ctx.cr6.gt) goto loc_8809DB70;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806baf0
	ctx.lr = 0x8809DB38;
	sub_8806BAF0(ctx, base);
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809db70
	if (!ctx.cr6.lt) goto loc_8809DB70;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_8809DB5C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809db5c
	if (ctx.cr6.lt) goto loc_8809DB5C;
loc_8809DB70:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8806baf0
	ctx.lr = 0x8809DB78;
	sub_8806BAF0(ctx, base);
	// stw r3,140(r26)
	REX_STORE_U32(ctx.r26.u32 + 140, ctx.r3.u32);
loc_8809DB7C:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// lis r29,8
	ctx.r29.s64 = 524288;
loc_8809DB88:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8809dc28
	if (ctx.cr6.lt) goto loc_8809DC28;
	// beq cr6,0x8809dbd4
	if (ctx.cr6.eq) goto loc_8809DBD4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809dc00
	if (!ctx.cr6.lt) goto loc_8809DC00;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8809dc00
	if (!ctx.cr0.lt) goto loc_8809DC00;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r17,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bge 0x8809dc00
	if (!ctx.cr0.lt) goto loc_8809DC00;
	// stw r16,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// b 0x8809dc38
	goto loc_8809DC38;
loc_8809DBD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8809dc00
	if (!ctx.cr0.lt) goto loc_8809DC00;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r17,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x8809dc00
	if (ctx.cr6.lt) goto loc_8809DC00;
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8809DC00:
	// bl 0x8809c148
	ctx.lr = 0x8809DC04;
	sub_8809C148(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1564
	ctx.r3.s64 = ctx.r11.s64 + 1564;
	// bl 0x8801a9c8
	ctx.lr = 0x8809DC1C;
	sub_8801A9C8(ctx, base);
	// lwz r11,148(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8809dc38
	goto loc_8809DC38;
loc_8809DC28:
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809dc38
	if (!ctx.cr6.lt) goto loc_8809DC38;
	// stw r17,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
loc_8809DC38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x8809db88
	if (ctx.cr6.lt) goto loc_8809DB88;
loc_8809DC48:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A2540) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x880A2548;
	__savegprlr_21(ctx, base);
	// lwz r11,21840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21840);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,31368
	ctx.r9.s64 = ctx.r10.s64 + 31368;
	// lis r31,264
	ctx.r31.s64 = 17301504;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwzx r22,r8,r9
	ctx.r22.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r6,21844(r3)
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r6.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r24,30
	ctx.r24.s64 = 1966080;
	// lis r25,15
	ctx.r25.s64 = 983040;
	// li r26,400
	ctx.r26.s64 = 400;
	// lis r27,8
	ctx.r27.s64 = 524288;
	// lis r21,18
	ctx.r21.s64 = 1179648;
loc_880A2594:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r7,r28,10
	ctx.r7.s64 = ctx.r28.s64 + 10;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880a2620
	if (ctx.cr6.eq) goto loc_880A2620;
loc_880A25B0:
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r5,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r6,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r6.u8);
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r29,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// beq cr6,0x880a2604
	if (ctx.cr6.eq) goto loc_880A2604;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 + 10;
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r5,21844(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 21844);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,21844(r3)
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r5.u32);
loc_880A2604:
	// stw r24,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r24.u32);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stwu r26,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880a25b0
	if (!ctx.cr6.eq) goto loc_880A25B0;
loc_880A2620:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// subf r31,r21,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r21.u64;
	// addi r23,r23,5
	ctx.r23.s64 = ctx.r23.s64 + 5;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 14, ctx.xer);
	// blt cr6,0x880a2594
	if (ctx.cr6.lt) goto loc_880A2594;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A3338) {
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
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r11,156(r3)
	REX_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lis r5,120
	ctx.r5.s64 = 7864320;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r8,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// stw r7,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r6,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// blt cr6,0x880a33a0
	if (ctx.cr6.lt) goto loc_880A33A0;
	// li r11,384
	ctx.r11.s64 = 384;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_880A33A0:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8801a448
	ctx.lr = 0x880A33A8;
	sub_8801A448(ctx, base);
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// lis r10,-30710
	ctx.r10.s64 = -2012610560;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r8,r10,12720
	ctx.r8.s64 = ctx.r10.s64 + 12720;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_880A3AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880A3AC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a3adc
	if (ctx.cr6.eq) goto loc_880A3ADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
loc_880A3ADC:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880a3c40
	if (!ctx.cr6.eq) goto loc_880A3C40;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// beq cr6,0x880a3c40
	if (ctx.cr6.eq) goto loc_880A3C40;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bge cr6,0x880a3b58
	if (!ctx.cr6.lt) goto loc_880A3B58;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x880a3bb8
	if (ctx.cr6.lt) goto loc_880A3BB8;
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880a3b88
	if (ctx.cr6.lt) goto loc_880A3B88;
	// li r11,320
	ctx.r11.s64 = 320;
	// b 0x880a3b84
	goto loc_880A3B84;
loc_880A3B58:
	// lis r10,224
	ctx.r10.s64 = 14680064;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880a3bb8
	if (!ctx.cr6.gt) goto loc_880A3BB8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x880a3bb8
	if (ctx.cr6.gt) goto loc_880A3BB8;
	// lis r11,176
	ctx.r11.s64 = 11534336;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880a3b88
	if (ctx.cr6.lt) goto loc_880A3B88;
	// li r11,192
	ctx.r11.s64 = 192;
loc_880A3B84:
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880A3B88:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8801a448
	ctx.lr = 0x880A3B90;
	sub_8801A448(ctx, base);
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// clrlwi r4,r8,23
	ctx.r4.u64 = ctx.r8.u32 & 0x1FF;
	// stw r4,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880A3BB8;
	sub_8801A860(ctx, base);
loc_880A3BB8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,312
	ctx.r10.s64 = 20447232;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a3be4
	if (ctx.cr6.lt) goto loc_880A3BE4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x880a3c08
	if (!ctx.cr6.gt) goto loc_880A3C08;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// blt cr6,0x880a3c2c
	if (ctx.cr6.lt) goto loc_880A3C2C;
	// b 0x880a3c08
	goto loc_880A3C08;
loc_880A3BE4:
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a3c40
	if (!ctx.cr6.lt) goto loc_880A3C40;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x880a3c08
	if (!ctx.cr6.lt) goto loc_880A3C08;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bgt cr6,0x880a3c2c
	if (ctx.cr6.gt) goto loc_880A3C2C;
loc_880A3C08:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8801a448
	ctx.lr = 0x880A3C10;
	sub_8801A448(ctx, base);
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// clrlwi r7,r8,23
	ctx.r7.u64 = ctx.r8.u32 & 0x1FF;
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
loc_880A3C2C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8801a860
	ctx.lr = 0x880A3C40;
	sub_8801A860(ctx, base);
loc_880A3C40:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,139
	ctx.r6.s64 = 139;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1661
	ctx.r3.s64 = 1661;
	// addis r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -3145728;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A3C5C;
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
	ctx.lr = 0x880A3C70;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880a3678
	ctx.lr = 0x880A3C78;
	sub_880A3678(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A5010) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,36(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x8806b8a8
	ctx.lr = 0x880A503C;
	sub_8806B8A8(ctx, base);
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x880a5058
	if (!ctx.cr6.lt) goto loc_880A5058;
	// li r4,1355
	ctx.r4.s64 = 1355;
	// bl 0x880a35d0
	ctx.lr = 0x880A5050;
	sub_880A35D0(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// b 0x880a506c
	goto loc_880A506C;
loc_880A5058:
	// lis r4,15
	ctx.r4.s64 = 983040;
	// ori r4,r4,16960
	ctx.r4.u64 = ctx.r4.u64 | 16960;
	// bl 0x880a3338
	ctx.lr = 0x880A5064;
	sub_880A3338(ctx, base);
	// lis r4,15
	ctx.r4.s64 = 983040;
	// ori r4,r4,16960
	ctx.r4.u64 = ctx.r4.u64 | 16960;
loc_880A506C:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8806cea8
	ctx.lr = 0x880A5074;
	sub_8806CEA8(ctx, base);
	// bl 0x880b2a50
	ctx.lr = 0x880A5078;
	sub_880B2A50(ctx, base);
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

DEFINE_REX_FUNC(sub_880A6220) {
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
	// lis r10,-30607
	ctx.r10.s64 = -2005860352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24816(r10)
	REX_STORE_U32(ctx.r10.u32 + -24816, ctx.r11.u32);
	// bl 0x880b1918
	ctx.lr = 0x880A6240;
	sub_880B1918(ctx, base);
	// bl 0x880661c8
	ctx.lr = 0x880A6244;
	sub_880661C8(ctx, base);
	// bl 0x88027210
	ctx.lr = 0x880A6248;
	sub_88027210(ctx, base);
	// bl 0x881402e0
	ctx.lr = 0x880A624C;
	sub_881402E0(ctx, base);
	// lis r31,-30607
	ctx.r31.s64 = -2005860352;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-24764(r31)
	REX_STORE_U32(ctx.r31.u32 + -24764, ctx.r11.u32);
	// bl 0x88067bd8
	ctx.lr = 0x880A625C;
	sub_88067BD8(ctx, base);
	// bl 0x88027210
	ctx.lr = 0x880A6260;
	sub_88027210(ctx, base);
	// bl 0x88027210
	ctx.lr = 0x880A6264;
	sub_88027210(ctx, base);
	// bl 0x880a51c0
	ctx.lr = 0x880A6268;
	sub_880A51C0(ctx, base);
	// lis r9,-30607
	ctx.r9.s64 = -2005860352;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,-24764(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -24764);
	// stw r11,-24768(r9)
	REX_STORE_U32(ctx.r9.u32 + -24768, ctx.r11.u32);
	// bl 0x8813fa68
	ctx.lr = 0x880A627C;
	sub_8813FA68(ctx, base);
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

DEFINE_REX_FUNC(sub_880A6E38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880A6E40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,15258
	ctx.r31.s64 = 999948288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r31,r31,51712
	ctx.r31.u64 = ctx.r31.u64 | 51712;
	// li r26,10
	ctx.r26.s64 = 10;
loc_880A6E68:
	// divwu. r30,r28,r31
	ctx.r30.u64 = uint32_t(ctx.r31.u32 ? ctx.r28.u32 / ctx.r31.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x880a6e7c
	if (ctx.cr0.eq) goto loc_880A6E7C;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x880a6e8c
	goto loc_880A6E8C;
loc_880A6E7C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880a6e8c
	if (!ctx.cr6.eq) goto loc_880A6E8C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x880a6ea0
	if (!ctx.cr6.eq) goto loc_880A6EA0;
loc_880A6E8C:
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r30,r25
	ctx.r3.u64 = ctx.r30.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6EA0;
	sub_8801A9C8(ctx, base);
loc_880A6EA0:
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// divwu. r31,r31,r26
	ctx.r31.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bne 0x880a6e68
	if (!ctx.cr0.eq) goto loc_880A6E68;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A84A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lwz r11,-24176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,128
	ctx.r11.s64 = 128;
	// lis r8,-30607
	ctx.r8.s64 = -2005860352;
	// lis r10,-30607
	ctx.r10.s64 = -2005860352;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-24160
	ctx.r10.s64 = ctx.r10.s64 + -24160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,-24172(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -24172);
loc_880A84CC:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a84e0
	if (ctx.cr6.eq) goto loc_880A84E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_880A84E0:
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// bdnz 0x880a84cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A84CC;
	// stw r11,-24172(r8)
	REX_STORE_U32(ctx.r8.u32 + -24172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A88A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A8A28) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-32120(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -32120);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A8A48) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-32120(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -32120);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A8A68) {
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
	ctx.lr = 0x880A8A80;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a8b14
	if (!ctx.cr6.eq) goto loc_880A8B14;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r11,-31976
	ctx.r10.s64 = ctx.r11.s64 + -31976;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x880a8af4
	if (!ctx.cr0.lt) goto loc_880A8AF4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x880a8ab8
	if (!ctx.cr0.lt) goto loc_880A8AB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880A8AB8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x880a8ae4
	if (ctx.cr6.lt) goto loc_880A8AE4;
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
loc_880A8AE4:
	// addi r9,r10,-144
	ctx.r9.s64 = ctx.r10.s64 + -144;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_880A8AF4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,2109
	ctx.r4.s64 = ctx.r11.s64 + 2109;
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x880a8680
	ctx.lr = 0x880A8B14;
	sub_880A8680(ctx, base);
loc_880A8B14:
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

DEFINE_REX_FUNC(sub_880A92F8) {
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
	ctx.lr = 0x880A9310;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a93a4
	if (!ctx.cr6.eq) goto loc_880A93A4;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r11,-30344
	ctx.r10.s64 = ctx.r11.s64 + -30344;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x880a9384
	if (!ctx.cr0.lt) goto loc_880A9384;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x880a9348
	if (!ctx.cr0.lt) goto loc_880A9348;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880A9348:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// blt cr6,0x880a9374
	if (ctx.cr6.lt) goto loc_880A9374;
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
loc_880A9374:
	// addi r9,r10,-144
	ctx.r9.s64 = ctx.r10.s64 + -144;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_880A9384:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,1952
	ctx.r4.s64 = ctx.r11.s64 + 1952;
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x880a8680
	ctx.lr = 0x880A93A4;
	sub_880A8680(ctx, base);
loc_880A93A4:
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

DEFINE_REX_FUNC(sub_880A9E78) {
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
	ctx.lr = 0x880A9E98;
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
	ctx.lr = 0x880A9EB8;
	sub_8801A448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x880A9EC4;
	sub_8801A448(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r6,-30693
	ctx.r6.s64 = -2011496448;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r5,r6,-26976
	ctx.r5.s64 = ctx.r6.s64 + -26976;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rlwinm r10,r7,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9F00;
	sub_8801A448(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// blt cr6,0x880a9f20
	if (ctx.cr6.lt) goto loc_880A9F20;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880A9F20:
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

DEFINE_REX_FUNC(sub_880AA908) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,4019
	ctx.r9.s64 = 4019;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stw r9,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AAA38) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4111
	ctx.r10.s64 = 4111;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x880AAA70;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880aaa88
	if (ctx.cr6.eq) goto loc_880AAA88;
	// li r11,4095
	ctx.r11.s64 = 4095;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_880AAA88:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x880AAA90;
	sub_8801A448(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a448
	ctx.lr = 0x880AAA9C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880aaaac
	if (!ctx.cr6.eq) goto loc_880AAAAC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x880aaac8
	goto loc_880AAAC8;
loc_880AAAAC:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880aaabc
	if (!ctx.cr6.eq) goto loc_880AAABC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x880aaac8
	goto loc_880AAAC8;
loc_880AAABC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880aaacc
	if (!ctx.cr6.eq) goto loc_880AAACC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_880AAAC8:
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_880AAACC:
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

DEFINE_REX_FUNC(sub_880AB198) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// bge 0x880ab210
	if (!ctx.cr0.lt) goto loc_880AB210;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// bge 0x880ab204
	if (!ctx.cr0.lt) goto loc_880AB204;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// bge 0x880ab210
	if (!ctx.cr0.lt) goto loc_880AB210;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880ab280
	goto loc_880AB280;
loc_880AB204:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880AB210:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AB22C;
	sub_8801A9C8(ctx, base);
	// lis r4,112
	ctx.r4.s64 = 7340032;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,28784
	ctx.r4.u64 = ctx.r4.u64 | 28784;
	// bl 0x8813ff48
	ctx.lr = 0x880AB23C;
	sub_8813FF48(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880ab268
	if (ctx.cr6.lt) goto loc_880AB268;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8813ff48
	ctx.lr = 0x880AB268;
	sub_8813FF48(ctx, base);
loc_880AB268:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880ab27c
	if (ctx.cr6.eq) goto loc_880AB27C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880AB27C;
	sub_8813FF08(ctx, base);
loc_880AB27C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AB280:
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

DEFINE_REX_FUNC(sub_880ABEC8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,8448
	ctx.r9.s64 = ctx.r10.s64 + 8448;
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

DEFINE_REX_FUNC(sub_880ABFE0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,8448
	ctx.r10.s64 = ctx.r10.s64 + 8448;
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

DEFINE_REX_FUNC(sub_880AC188) {
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
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r5,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AC8B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x880AC8B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88068e68
	ctx.lr = 0x880AC8D0;
	sub_88068E68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88068e68
	ctx.lr = 0x880AC8E0;
	sub_88068E68(ctx, base);
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r31,r11,9888
	ctx.r31.s64 = ctx.r11.s64 + 9888;
	// lis r30,-30606
	ctx.r30.s64 = -2005794816;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ac938
	if (ctx.cr6.eq) goto loc_880AC938;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bge 0x880ac938
	if (!ctx.cr0.lt) goto loc_880AC938;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bgt 0x880ac938
	if (ctx.cr0.gt) goto loc_880AC938;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r17,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r17.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r8,13180(r30)
	REX_STORE_U32(ctx.r30.u32 + 13180, ctx.r8.u32);
	// b 0x880ac93c
	goto loc_880AC93C;
loc_880AC938:
	// lwz r8,13180(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 13180);
loc_880AC93C:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x880ac978
	if (!ctx.cr6.eq) goto loc_880AC978;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880ac978
	if (ctx.cr6.eq) goto loc_880AC978;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x880ac978
	if (ctx.cr6.eq) goto loc_880AC978;
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,99
	ctx.r9.s64 = 99;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
loc_880AC978:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r27,-30608
	ctx.r27.s64 = -2005925888;
	// li r16,255
	ctx.r16.s64 = 255;
	// li r15,10
	ctx.r15.s64 = 10;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x880aca64
	if (ctx.cr6.gt) goto loc_880ACA64;
	// lis r12,-30709
	ctx.r12.s64 = -2012545024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13912
	ctx.r12.s64 = ctx.r12.s64 + -13912;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880AC9D8;
	case 1:
		goto loc_880ACAC8;
	case 2:
		goto loc_880ACB60;
	case 3:
		goto loc_880ACBD0;
	case 4:
		goto loc_880ACBF0;
	case 5:
		goto loc_880ACC14;
	case 6:
		goto loc_880ACC40;
	case 7:
		goto loc_880ACF48;
	case 8:
		goto loc_880ACFD0;
	case 9:
		goto loc_880AD0B4;
	case 10:
		goto loc_880AD1EC;
	case 11:
		goto loc_880ACBA4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880AC9D8:
	// lwz r11,21876(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880acaac
	if (ctx.cr6.eq) goto loc_880ACAAC;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_880AC9E8:
	// li r6,239
	ctx.r6.s64 = 239;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880AC9FC;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ACA14;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x880ACA20;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880ACA2C;
	sub_8813FF28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x880ac9e8
	if (ctx.cr6.lt) goto loc_880AC9E8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x880aca64
	if (ctx.cr6.lt) goto loc_880ACA64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_880ACA54:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_880ACA60:
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880ACA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ac338
	ctx.lr = 0x880ACA6C;
	sub_880AC338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ac4c0
	ctx.lr = 0x880ACA74;
	sub_880AC4C0(ctx, base);
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r30,r31,696
	ctx.r30.s64 = ctx.r31.s64 + 696;
loc_880ACA7C:
	// lwz r3,-8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ad28c
	if (ctx.cr6.eq) goto loc_880AD28C;
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ad214
	if (ctx.cr6.eq) goto loc_880AD214;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x880ad28c
	if (ctx.cr6.lt) goto loc_880AD28C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-16(r30)
	REX_STORE_U32(ctx.r30.u32 + -16, ctx.r11.u32);
	// b 0x880ad28c
	goto loc_880AD28C;
loc_880ACAAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r11.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x880aca64
	if (ctx.cr0.gt) goto loc_880ACA64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x880aca54
	goto loc_880ACA54;
loc_880ACAC8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8813dba0
	ctx.lr = 0x880ACAD0;
	sub_8813DBA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88068e68
	ctx.lr = 0x880ACAE4;
	sub_88068E68(ctx, base);
	// lwz r11,21876(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21876);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r27,60(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// clrlwi r4,r27,30
	ctx.r4.u64 = ctx.r27.u32 & 0x3;
	// bl 0x8806b908
	ctx.lr = 0x880ACAFC;
	sub_8806B908(ctx, base);
	// srawi r11,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8806b8d8
	ctx.lr = 0x880ACB0C;
	sub_8806B8D8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x88068e58
	ctx.lr = 0x880ACB18;
	sub_88068E58(ctx, base);
	// lwz r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880acb30
	if (ctx.cr6.eq) goto loc_880ACB30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880698f0
	ctx.lr = 0x880ACB30;
	sub_880698F0(ctx, base);
loc_880ACB30:
	// bl 0x880b2d08
	ctx.lr = 0x880ACB34;
	sub_880B2D08(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88024018
	ctx.lr = 0x880ACB40;
	sub_88024018(ctx, base);
	// lis r8,-30606
	ctx.r8.s64 = -2005794816;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,13184(r8)
	REX_STORE_U32(ctx.r8.u32 + 13184, ctx.r9.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACB60:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880acb78
	if (ctx.cr6.eq) goto loc_880ACB78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACB78:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,21876(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 21876);
	// bl 0x8813dba0
	ctx.lr = 0x880ACB84;
	sub_8813DBA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8806a588
	ctx.lr = 0x880ACB90;
	sub_8806A588(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r17,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACBA4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880aca64
	if (!ctx.cr6.gt) goto loc_880ACA64;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8801b368
	ctx.lr = 0x880ACBC8;
	sub_8801B368(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880ACBD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x880aca64
	if (ctx.cr0.gt) goto loc_880ACA64;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x880aca60
	goto loc_880ACA60;
loc_880ACBF0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x880aca64
	if (ctx.cr0.gt) goto loc_880ACA64;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,752(r31)
	REX_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACC14:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x880aca64
	if (ctx.cr6.lt) goto loc_880ACA64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r16,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r16.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x880aca60
	goto loc_880ACA60;
loc_880ACC40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// bl 0x8806b5c8
	ctx.lr = 0x880ACC58;
	sub_8806B5C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880accb0
	if (ctx.cr6.eq) goto loc_880ACCB0;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8806bc38
	ctx.lr = 0x880ACC80;
	sub_8806BC38(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880ACCB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8806b5c8
	ctx.lr = 0x880ACCB8;
	sub_8806B5C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880acd0c
	if (ctx.cr6.eq) goto loc_880ACD0C;
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8806bc38
	ctx.lr = 0x880ACCE0;
	sub_8806BC38(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880acd0c
	if (ctx.cr6.eq) goto loc_880ACD0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880ACD0C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// or r9,r27,r29
	ctx.r9.u64 = ctx.r27.u64 | ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880acee4
	if (!ctx.cr6.eq) goto loc_880ACEE4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r10,r31,752
	ctx.r10.s64 = ctx.r31.s64 + 752;
loc_880ACD28:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880acee4
	if (!ctx.cr6.eq) goto loc_880ACEE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880acd28
	if (ctx.cr6.lt) goto loc_880ACD28;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880acd64
	if (ctx.cr6.eq) goto loc_880ACD64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880ACD64:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880acd90
	if (ctx.cr6.eq) goto loc_880ACD90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880acd90
	if (!ctx.cr6.eq) goto loc_880ACD90;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r9,0,28,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r30,r30,0,28,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r8,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
loc_880ACD90:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880ace20
	if (ctx.cr6.eq) goto loc_880ACE20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ace20
	if (!ctx.cr6.eq) goto loc_880ACE20;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r17,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r17.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bge 0x880acde4
	if (!ctx.cr0.lt) goto loc_880ACDE4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r17.u32);
	// stw r17,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// b 0x880acee4
	goto loc_880ACEE4;
loc_880ACDE4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x880b2588
	ctx.lr = 0x880ACDF0;
	sub_880B2588(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ace10
	if (!ctx.cr6.eq) goto loc_880ACE10;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,752(r31)
	REX_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// stw r10,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// b 0x880acee4
	goto loc_880ACEE4;
loc_880ACE10:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880acee4
	if (!ctx.cr6.eq) goto loc_880ACEE4;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x880acedc
	goto loc_880ACEDC;
loc_880ACE20:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880acee4
	if (ctx.cr6.eq) goto loc_880ACEE4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880acee4
	if (!ctx.cr6.eq) goto loc_880ACEE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r17.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r17,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r17.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x880ace84
	if (ctx.cr6.eq) goto loc_880ACE84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880acea0
	if (!ctx.cr6.gt) goto loc_880ACEA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r17,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x880acee4
	goto loc_880ACEE4;
loc_880ACE84:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880acea0
	if (!ctx.cr6.gt) goto loc_880ACEA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r17,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x880acee4
	goto loc_880ACEE4;
loc_880ACEA0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x880b2588
	ctx.lr = 0x880ACEAC;
	sub_880B2588(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880acecc
	if (!ctx.cr6.eq) goto loc_880ACECC;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,752(r31)
	REX_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// stw r10,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// b 0x880acee4
	goto loc_880ACEE4;
loc_880ACECC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880acee4
	if (!ctx.cr6.eq) goto loc_880ACEE4;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
loc_880ACEDC:
	// stw r10,832(r31)
	REX_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// stw r11,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
loc_880ACEE4:
	// rlwinm r11,r30,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880acf10
	if (ctx.cr6.eq) goto loc_880ACF10;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x88068e68
	ctx.lr = 0x880ACF04;
	sub_88068E68(ctx, base);
	// stw r3,3276(r31)
	REX_STORE_U32(ctx.r31.u32 + 3276, ctx.r3.u32);
	// bl 0x880b2630
	ctx.lr = 0x880ACF0C;
	sub_880B2630(ctx, base);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACF10:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88068e68
	ctx.lr = 0x880ACF34;
	sub_88068E68(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,3276(r31)
	REX_STORE_U32(ctx.r31.u32 + 3276, ctx.r3.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x880b2630
	ctx.lr = 0x880ACF44;
	sub_880B2630(ctx, base);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACF48:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801b558
	ctx.lr = 0x880ACF50;
	sub_8801B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88069190
	ctx.lr = 0x880ACF64;
	sub_88069190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ad014
	if (ctx.cr6.eq) goto loc_880AD014;
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x88024018
	ctx.lr = 0x880ACF80;
	sub_88024018(ctx, base);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// bl 0x8801b2f0
	ctx.lr = 0x880ACF94;
	sub_8801B2F0(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r9,99
	ctx.r9.s64 = 99;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88068e58
	ctx.lr = 0x880ACFBC;
	sub_88068E58(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x880660f8
	ctx.lr = 0x880ACFC4;
	sub_880660F8(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,13180(r30)
	REX_STORE_U32(ctx.r30.u32 + 13180, ctx.r17.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880ACFD0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// addi r10,r31,752
	ctx.r10.s64 = ctx.r31.s64 + 752;
loc_880ACFE4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880acfe4
	if (ctx.cr6.lt) goto loc_880ACFE4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880ad054
	if (!ctx.cr6.eq) goto loc_880AD054;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880ad028
	if (ctx.cr6.eq) goto loc_880AD028;
loc_880AD014:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880AD028:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r9,-30709
	ctx.r9.s64 = -2012545024;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r31,3276
	ctx.r5.s64 = ctx.r31.s64 + 3276;
	// addi r3,r9,6032
	ctx.r3.s64 = ctx.r9.s64 + 6032;
	// stw r10,3280(r31)
	REX_STORE_U32(ctx.r31.u32 + 3280, ctx.r10.u32);
	// bl 0x8801b2f0
	ctx.lr = 0x880AD04C;
	sub_8801B2F0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880AD054:
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x88024018
	ctx.lr = 0x880AD064;
	sub_88024018(ctx, base);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// bl 0x8801b2f0
	ctx.lr = 0x880AD078;
	sub_8801B2F0(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r9,99
	ctx.r9.s64 = 99;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88068e58
	ctx.lr = 0x880AD0A0;
	sub_88068E58(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x880660f8
	ctx.lr = 0x880AD0A8;
	sub_880660F8(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,13180(r30)
	REX_STORE_U32(ctx.r30.u32 + 13180, ctx.r17.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880AD0B4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r8,3272(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3272);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addme r6,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// stw r9,3272(r31)
	REX_STORE_U32(ctx.r31.u32 + 3272, ctx.r9.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// and r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
loc_880AD0F8:
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addic. r9,r9,-8
	ctx.xer.ca = ctx.r9.u32 > 7;
	ctx.r9.s64 = ctx.r9.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// bgt 0x880ad110
	if (ctx.cr0.gt) goto loc_880AD110;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r17,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r17.u32);
loc_880AD110:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-8
	ctx.xer.ca = ctx.r9.u32 > 7;
	ctx.r9.s64 = ctx.r9.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bgt 0x880ad128
	if (ctx.cr0.gt) goto loc_880AD128;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r17,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r17.u32);
loc_880AD128:
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bdnz 0x880ad0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880AD0F8;
	// lwz r10,684(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 684);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,684(r31)
	REX_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// bgt 0x880ad14c
	if (ctx.cr0.gt) goto loc_880AD14C;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,684(r31)
	REX_STORE_U32(ctx.r31.u32 + 684, ctx.r17.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_880AD14C:
	// lwz r10,708(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,708(r31)
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
	// bgt 0x880ad168
	if (ctx.cr0.gt) goto loc_880AD168;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,708(r31)
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r17.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_880AD168:
	// lwz r10,732(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 732);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,732(r31)
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r10.u32);
	// bgt 0x880ad184
	if (ctx.cr0.gt) goto loc_880AD184;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,732(r31)
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r17.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_880AD184:
	// lwz r10,756(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 756);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,756(r31)
	REX_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
	// bgt 0x880ad1a0
	if (ctx.cr0.gt) goto loc_880AD1A0;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,756(r31)
	REX_STORE_U32(ctx.r31.u32 + 756, ctx.r17.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_880AD1A0:
	// lwz r10,796(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,796(r31)
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// bgt 0x880ad1bc
	if (ctx.cr0.gt) goto loc_880AD1BC;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,796(r31)
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r17.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_880AD1BC:
	// lwz r10,836(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 836);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,836(r31)
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r10.u32);
	// bgt 0x880ad1d8
	if (ctx.cr0.gt) goto loc_880AD1D8;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r17,836(r31)
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r17.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_880AD1D8:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// stw r15,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r15.u32);
	// b 0x880aca64
	goto loc_880ACA64;
loc_880AD1EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8801b558
	ctx.lr = 0x880AD1F4;
	sub_8801B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880aca64
	if (!ctx.cr6.eq) goto loc_880ACA64;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8801b368
	ctx.lr = 0x880AD20C;
	sub_8801B368(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880AD214:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x880AD224;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,-8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r9,-12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// subf r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r6,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,-12(r30)
	REX_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// subf. r4,r11,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,-8(r30)
	REX_STORE_U32(ctx.r30.u32 + -8, ctx.r4.u32);
	// bgt 0x880ad28c
	if (ctx.cr0.gt) goto loc_880AD28C;
	// stw r17,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r17.u32);
	// stw r17,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r17.u32);
	// stw r16,-12(r30)
	REX_STORE_U32(ctx.r30.u32 + -12, ctx.r16.u32);
	// stw r17,-8(r30)
	REX_STORE_U32(ctx.r30.u32 + -8, ctx.r17.u32);
loc_880AD28C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x880aca7c
	if (!ctx.cr0.eq) goto loc_880ACA7C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lis r18,120
	ctx.r18.s64 = 7864320;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ad390
	if (ctx.cr6.eq) goto loc_880AD390;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r4,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880AD2C4;
	sub_8801A860(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880ad2dc
	if (ctx.cr6.eq) goto loc_880AD2DC;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x880ad2e8
	goto loc_880AD2E8;
loc_880AD2DC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_880AD2E8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// blt cr6,0x880ad340
	if (ctx.cr6.lt) goto loc_880AD340;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r17,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// beq cr6,0x880ad324
	if (ctx.cr6.eq) goto loc_880AD324;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r11,r11,21,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// b 0x880ad334
	goto loc_880AD334;
loc_880AD324:
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_880AD334:
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r17.u32);
loc_880AD340:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
loc_880AD348:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ad368
	if (ctx.cr6.eq) goto loc_880AD368;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x880ad348
	if (ctx.cr6.lt) goto loc_880AD348;
	// b 0x880ad390
	goto loc_880AD390;
loc_880AD368:
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r18,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_880AD390:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,14563
	ctx.r10.s64 = 954400768;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r11,3284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3284);
	// ori r25,r10,36409
	ctx.r25.u64 = ctx.r10.u64 | 36409;
	// beq cr6,0x880ad834
	if (ctx.cr6.eq) goto loc_880AD834;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x880ad3c8
	if (ctx.cr6.eq) goto loc_880AD3C8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,3284(r31)
	REX_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bge cr6,0x880ad3c8
	if (!ctx.cr6.lt) goto loc_880AD3C8;
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r11,3284(r31)
	REX_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
loc_880AD3C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880ad414
	if (ctx.cr6.lt) goto loc_880AD414;
loc_880AD3D4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x880ad414
	if (!ctx.cr0.lt) goto loc_880AD414;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r9,r11,r25
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32)) >> 32;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_880AD414:
	// li r6,139
	ctx.r6.s64 = 139;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14567
	ctx.r3.s64 = 14567;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD428;
	sub_8801A9C8(ctx, base);
	// lwz r11,3284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD444;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff28
	ctx.lr = 0x880AD450;
	sub_8813FF28(ctx, base);
	// li r6,139
	ctx.r6.s64 = 139;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14568
	ctx.r3.s64 = 14568;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD464;
	sub_8801A9C8(ctx, base);
	// lwz r11,3284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD480;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880AD48C;
	sub_8813FF28(ctx, base);
	// lwz r11,3288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ad50c
	if (ctx.cr6.eq) goto loc_880AD50C;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_880AD49C:
	// li r6,139
	ctx.r6.s64 = 139;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD4B0;
	sub_8801A9C8(ctx, base);
	// lwz r11,3288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3288);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AD4CC;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff28
	ctx.lr = 0x880AD4D8;
	sub_8813FF28(ctx, base);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8813ff48
	ctx.lr = 0x880AD4E8;
	sub_8813FF48(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x880ad49c
	if (ctx.cr6.lt) goto loc_880AD49C;
	// lwz r11,3288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3288);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,3288(r31)
	REX_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
loc_880AD50C:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
loc_880AD514:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ad560
	if (ctx.cr6.eq) goto loc_880AD560;
	// addic. r11,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x880ad530
	if (ctx.cr0.gt) goto loc_880AD530;
	// stw r17,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r17.u32);
loc_880AD530:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,14577
	ctx.r3.s64 = ctx.r11.s64 + 14577;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8801a9c8
	ctx.lr = 0x880AD548;
	sub_8801A9C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AD560;
	sub_8813FF90(ctx, base);
loc_880AD560:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x880ad514
	if (!ctx.cr0.eq) goto loc_880AD514;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,14577
	ctx.r3.s64 = ctx.r11.s64 + 14577;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD598;
	sub_8801A9C8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AD5B0;
	sub_8813FF90(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// lwz r10,700(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// li r6,236
	ctx.r6.s64 = 236;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,14572
	ctx.r3.s64 = 14572;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r5,r26,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD5E4;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD5F0;
	sub_8813FF48(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 684);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880AD614;
	sub_8813FF90(ctx, base);
	// li r6,236
	ctx.r6.s64 = 236;
	// li r3,14572
	ctx.r3.s64 = 14572;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880AD628;
	sub_8801A9C8(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 684);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AD644;
	sub_8813FF90(ctx, base);
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 772);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD660;
	sub_8813FF48(ctx, base);
	// lwz r11,3272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3272);
	// lis r6,144
	ctx.r6.s64 = 9437184;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r28,r6,37008
	ctx.r28.u64 = ctx.r6.u64 | 37008;
	// bne cr6,0x880ad68c
	if (!ctx.cr6.eq) goto loc_880AD68C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ad68c
	if (!ctx.cr6.eq) goto loc_880AD68C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD68C;
	sub_8813FF48(ctx, base);
loc_880AD68C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,14573
	ctx.r3.s64 = 14573;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r18
	ctx.r11.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x880ad858
	if (ctx.cr6.eq) goto loc_880AD858;
	// addis r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -2097152;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r26,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD6CC;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD6D8;
	sub_8813FF48(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880AD6FC;
	sub_8813FF90(ctx, base);
	// li r6,236
	ctx.r6.s64 = 236;
	// li r3,14573
	ctx.r3.s64 = 14573;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880AD710;
	sub_8801A9C8(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AD72C;
	sub_8813FF90(ctx, base);
	// lwz r11,812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 812);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD748;
	sub_8813FF48(ctx, base);
	// lwz r11,3272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ad76c
	if (!ctx.cr6.eq) goto loc_880AD76C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880ad76c
	if (!ctx.cr6.eq) goto loc_880AD76C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD76C;
	sub_8813FF48(ctx, base);
loc_880AD76C:
	// lwz r11,748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 748);
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,14574
	ctx.r3.s64 = 14574;
	// lwz r9,744(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 744);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r18
	ctx.r11.u64 = ctx.r9.u64 + ctx.r18.u64;
	// addis r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -4194304;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r26,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD7A0;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD7AC;
	sub_8813FF48(ctx, base);
	// lwz r11,732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 732);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880AD7D0;
	sub_8813FF90(ctx, base);
	// li r6,236
	ctx.r6.s64 = 236;
	// li r3,14574
	ctx.r3.s64 = 14574;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880AD7E4;
	sub_8801A9C8(ctx, base);
	// lwz r11,732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 732);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AD800;
	sub_8813FF90(ctx, base);
	// lwz r11,852(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 852);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD81C;
	sub_8813FF48(ctx, base);
	// lwz r11,3272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ad908
	if (!ctx.cr6.eq) goto loc_880AD908;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// b 0x880ad8f8
	goto loc_880AD8F8;
loc_880AD834:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x880ad3d4
	if (ctx.cr6.eq) goto loc_880AD3D4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,3284(r31)
	REX_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bge cr6,0x880ad3d4
	if (!ctx.cr6.lt) goto loc_880AD3D4;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,3284(r31)
	REX_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// b 0x880ad3d4
	goto loc_880AD3D4;
loc_880AD858:
	// addis r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -3145728;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r26,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r26.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD868;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD874;
	sub_8813FF48(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880AD898;
	sub_8813FF90(ctx, base);
	// li r6,236
	ctx.r6.s64 = 236;
	// li r3,14573
	ctx.r3.s64 = 14573;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880AD8AC;
	sub_8801A9C8(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AD8C8;
	sub_8813FF90(ctx, base);
	// lwz r11,812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 812);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD8E4;
	sub_8813FF48(ctx, base);
	// lwz r11,3272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ad908
	if (!ctx.cr6.eq) goto loc_880AD908;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_880AD8F8:
	// bne cr6,0x880ad908
	if (!ctx.cr6.eq) goto loc_880AD908;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880AD908;
	sub_8813FF48(ctx, base);
loc_880AD908:
	// li r6,236
	ctx.r6.s64 = 236;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// li r3,14576
	ctx.r3.s64 = 14576;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD91C;
	sub_8801A9C8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AD934;
	sub_8813FF90(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// li r27,150
	ctx.r27.s64 = 150;
	// addi r30,r31,872
	ctx.r30.s64 = ctx.r31.s64 + 872;
	// lis r28,208
	ctx.r28.s64 = 13631488;
	// addi r29,r11,-26448
	ctx.r29.s64 = ctx.r11.s64 + -26448;
loc_880AD948:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ad9d8
	if (ctx.cr6.eq) goto loc_880AD9D8;
	// addic. r11,r11,-12
	ctx.xer.ca = ctx.r11.u32 > 11;
	ctx.r11.s64 = ctx.r11.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x880ad964
	if (ctx.cr0.gt) goto loc_880AD964;
	// stw r17,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r17.u32);
loc_880AD964:
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,236
	ctx.r6.s64 = 236;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mulhw r3,r7,r25
	ctx.r3.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32)) >> 32;
	// lwzx r10,r4,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwzx r8,r4,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addi r3,r11,14596
	ctx.r3.s64 = ctx.r11.s64 + 14596;
	// bl 0x8801a9c8
	ctx.lr = 0x880AD9C0;
	sub_8801A9C8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AD9D8;
	sub_8813FF90(ctx, base);
loc_880AD9D8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x880ad948
	if (!ctx.cr0.eq) goto loc_880AD948;
	// li r28,14586
	ctx.r28.s64 = 14586;
	// addi r30,r31,248
	ctx.r30.s64 = ctx.r31.s64 + 248;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lis r25,206
	ctx.r25.s64 = 13500416;
loc_880AD9F8:
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + ctx.r25.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// beq cr6,0x880ada68
	if (ctx.cr6.eq) goto loc_880ADA68;
	// li r6,236
	ctx.r6.s64 = 236;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADA38;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880ADA44;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880ADA60;
	sub_8813FF90(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880ADA68:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADA84;
	sub_8801A9C8(ctx, base);
	// lwzu r11,40(r30)
	ea = 40 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880ADA9C;
	sub_8813FF90(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x880ad9f8
	if (!ctx.cr0.eq) goto loc_880AD9F8;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// addi r30,r31,780
	ctx.r30.s64 = ctx.r31.s64 + 780;
	// lis r22,40
	ctx.r22.s64 = 2621440;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lis r19,15
	ctx.r19.s64 = 983040;
	// lis r20,9
	ctx.r20.s64 = 589824;
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// lis r23,8
	ctx.r23.s64 = 524288;
loc_880ADACC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,14570
	ctx.r3.s64 = 14570;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r4,r11,r18
	ctx.r4.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r10,r22
	ctx.r5.u64 = ctx.r10.u64 + ctx.r22.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x880ADAF4;
	sub_8801A9C8(ctx, base);
	// lwz r9,-24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADB18;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8813ff48
	ctx.lr = 0x880ADB24;
	sub_8813FF48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,14571
	ctx.r3.s64 = 14571;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880ADB3C;
	sub_8801A9C8(ctx, base);
	// lwz r5,-24(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADB60;
	sub_8813FF90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880ADB6C;
	sub_8813FF48(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r29,-4
	ctx.r29.s64 = -262144;
	// lis r28,4
	ctx.r28.s64 = 262144;
	// li r26,4
	ctx.r26.s64 = 4;
loc_880ADB7C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,14569
	ctx.r3.s64 = 14569;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r9,236
	ctx.r6.s64 = ctx.r9.s64 + 236;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADB9C;
	sub_8801A9C8(ctx, base);
	// lwz r11,-24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,3
	ctx.r5.s64 = 3;
	// divw r8,r9,r16
	ctx.r8.u64 = uint32_t((ctx.r16.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r16.s32 == -1)) ? ctx.r9.s32 / ctx.r16.s32 : 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADBC4;
	sub_8813FF90(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x880ADBD0;
	sub_8813FF48(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,14569
	ctx.r3.s64 = 14569;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r6,r9,236
	ctx.r6.s64 = ctx.r9.s64 + 236;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADBF0;
	sub_8801A9C8(ctx, base);
	// lwz r7,-24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mullw r6,r7,r27
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// divw r4,r5,r16
	ctx.r4.u64 = uint32_t((ctx.r16.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r16.s32 == -1)) ? ctx.r5.s32 / ctx.r16.s32 : 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880ADC18;
	sub_8813FF90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880ADC24;
	sub_8813FF48(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// subf r28,r25,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r25.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x880adb7c
	if (!ctx.cr0.eq) goto loc_880ADB7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,14569
	ctx.r3.s64 = 14569;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a9c8
	ctx.lr = 0x880ADC50;
	sub_8801A9C8(ctx, base);
	// lwz r11,-24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880ADC68;
	sub_8813FF90(ctx, base);
	// li r29,1344
	ctx.r29.s64 = 1344;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x880adc7c
	if (!ctx.cr6.eq) goto loc_880ADC7C;
	// li r29,1346
	ctx.r29.s64 = 1346;
	// b 0x880adc88
	goto loc_880ADC88;
loc_880ADC7C:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x880adc88
	if (!ctx.cr6.eq) goto loc_880ADC88;
	// li r29,1348
	ctx.r29.s64 = 1348;
loc_880ADC88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// add r5,r10,r19
	ctx.r5.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADCAC;
	sub_8801A9C8(ctx, base);
	// lwz r8,-24(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r5,3
	ctx.r5.s64 = 3;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADCD0;
	sub_8813FF90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x880ADCDC;
	sub_8813FF48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// subf r5,r20,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r20.u64;
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADCFC;
	sub_8801A9C8(ctx, base);
	// lwz r11,-24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADD20;
	sub_8813FF90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x880ADD2C;
	sub_8813FF48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r8,r21
	ctx.r5.u64 = ctx.r8.u64 + ctx.r21.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADD48;
	sub_8801A9C8(ctx, base);
	// lwz r6,-24(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880ADD60;
	sub_8813FF90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r23,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r23.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADD7C;
	sub_8801A9C8(ctx, base);
	// lwz r4,-24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -24);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880ADD94;
	sub_8813FF90(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// blt cr6,0x880adacc
	if (ctx.cr6.lt) goto loc_880ADACC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ade30
	if (!ctx.cr6.eq) goto loc_880ADE30;
	// lis r10,205
	ctx.r10.s64 = 13434880;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r9,276
	ctx.r9.s64 = 18087936;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subfic r6,r11,239
	ctx.xer.ca = ctx.r11.u32 <= 239;
	ctx.r6.u64 = static_cast<uint64_t>(239) - ctx.r11.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r5,276
	ctx.r5.s64 = 18087936;
	// lis r4,205
	ctx.r4.s64 = 13434880;
	// li r3,1252
	ctx.r3.s64 = 1252;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADDDC;
	sub_8801A9C8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// lis r26,6
	ctx.r26.s64 = 393216;
	// lis r27,13
	ctx.r27.s64 = 851968;
	// lwz r29,48(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_880ADDF0:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// divwu r28,r29,r30
	ctx.r28.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r26,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r26.u64;
	// subfic r6,r11,239
	ctx.xer.ca = ctx.r11.u32 <= 239;
	ctx.r6.u64 = static_cast<uint64_t>(239) - ctx.r11.u64;
	// subf r5,r23,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r23.u64;
	// addi r3,r28,1277
	ctx.r3.s64 = ctx.r28.s64 + 1277;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8801a9c8
	ctx.lr = 0x880ADE14;
	sub_8801A9C8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r8,r28,r30
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// add r10,r7,r27
	ctx.r10.u64 = ctx.r7.u64 + ctx.r27.u64;
	// divwu. r30,r30,r15
	ctx.r30.u64 = uint32_t(ctx.r15.u32 ? ctx.r30.u32 / ctx.r15.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r29,r8,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r8.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x880addf0
	if (!ctx.cr0.eq) goto loc_880ADDF0;
loc_880ADE30:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ade94
	if (ctx.cr6.eq) goto loc_880ADE94;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_880ADE40:
	// li r6,236
	ctx.r6.s64 = 236;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880ADE54;
	sub_8801A9C8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ADE70;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff28
	ctx.lr = 0x880ADE7C;
	sub_8813FF28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880ADE88;
	sub_8813FF48(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x880ade40
	if (ctx.cr6.lt) goto loc_880ADE40;
loc_880ADE94:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880C5550;
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
	ctx.lr = 0x880C5564;
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
	ctx.lr = 0x880C5578;
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
	// bge 0x880c57fc
	if (!ctx.cr0.lt) goto loc_880C57FC;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,96(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// addis r30,r8,-65
	ctx.r30.s64 = ctx.r8.s64 + -4259840;
	// lwz r29,92(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880c55d4
	if (!ctx.cr6.eq) goto loc_880C55D4;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x880C55C8;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x880c5608
	goto loc_880C5608;
loc_880C55D4:
	// bl 0x880244d0
	ctx.lr = 0x880C55D8;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8801a808
	ctx.lr = 0x880C55E8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8801a808
	ctx.lr = 0x880C5600;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_880C5608:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,-55
	ctx.r6.s64 = ctx.r11.s64 + -55;
	// bl 0x88013940
	ctx.lr = 0x880C5628;
	sub_88013940(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,-50
	ctx.r6.s64 = ctx.r11.s64 + -50;
	// bl 0x88013ce0
	ctx.lr = 0x880C5650;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,-35
	ctx.r6.s64 = ctx.r11.s64 + -35;
	// bl 0x88013ce0
	ctx.lr = 0x880C5678;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,144
	ctx.r9.s64 = 144;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,-20
	ctx.r6.s64 = ctx.r11.s64 + -20;
	// bl 0x88013ce0
	ctx.lr = 0x880C56A0;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// bl 0x88013ce0
	ctx.lr = 0x880C56C8;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,240
	ctx.r9.s64 = 240;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// bl 0x88013ce0
	ctx.lr = 0x880C56F0;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r6,r11,-56
	ctx.r6.s64 = ctx.r11.s64 + -56;
	// bl 0x88013ce0
	ctx.lr = 0x880C5718;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,72
	ctx.r9.s64 = 72;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r6,r11,-41
	ctx.r6.s64 = ctx.r11.s64 + -41;
	// bl 0x88013ce0
	ctx.lr = 0x880C5740;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,120
	ctx.r9.s64 = 120;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x88013ce0
	ctx.lr = 0x880C5768;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,168
	ctx.r9.s64 = 168;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r6,r11,-11
	ctx.r6.s64 = ctx.r11.s64 + -11;
	// bl 0x88013ce0
	ctx.lr = 0x880C5790;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,216
	ctx.r9.s64 = 216;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 9;
	// bl 0x88013ce0
	ctx.lr = 0x880C57B8;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x880c57d4
	if (ctx.cr6.lt) goto loc_880C57D4;
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880C57D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c57fc
	if (!ctx.cr0.lt) goto loc_880C57FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880C57F0;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880C57FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C9808) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2432
	ctx.r11.s64 = ctx.r4.s64 + 2432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-31112
	ctx.r5.s64 = ctx.r9.s64 + -31112;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x880C9844;
	sub_88021E88(ctx, base);
	// lis r8,-30606
	ctx.r8.s64 = -2005794816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r8,17592
	ctx.r30.s64 = ctx.r8.s64 + 17592;
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,-29360
	ctx.r5.s64 = ctx.r7.s64 + -29360;
	// stw r11,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x88021e88
	ctx.lr = 0x880C986C;
	sub_88021E88(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r5,-30707
	ctx.r5.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,-27616
	ctx.r5.s64 = ctx.r5.s64 + -27616;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x880C9888;
	sub_88021E88(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lis r4,-30707
	ctx.r4.s64 = -2012413952;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r4,-27360
	ctx.r5.s64 = ctx.r4.s64 + -27360;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e88
	ctx.lr = 0x880C98A4;
	sub_88021E88(ctx, base);
	// stw r3,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_880C9CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f5c
	ctx.lr = 0x880C9CC0;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C9CD4;
	sub_88023F40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88021be0
	ctx.lr = 0x880C9CE8;
	sub_88021BE0(ctx, base);
	// lwz r11,96(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r30,92(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r29,r11,-50
	ctx.r29.s64 = ctx.r11.s64 + -3276800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x88024030
	ctx.lr = 0x880C9D08;
	sub_88024030(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880c9f40
	if (ctx.cr6.lt) goto loc_880C9F40;
	// bne cr6,0x880ca0b0
	if (!ctx.cr6.eq) goto loc_880CA0B0;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// bge 0x880c9d50
	if (!ctx.cr0.lt) goto loc_880C9D50;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880C9D3C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c9d4c
	if (ctx.cr6.eq) goto loc_880C9D4C;
	// bl 0x880b1c90
	ctx.lr = 0x880C9D48;
	sub_880B1C90(ctx, base);
	// b 0x880c9d50
	goto loc_880C9D50;
loc_880C9D4C:
	// bl 0x880b1a90
	ctx.lr = 0x880C9D50;
	sub_880B1A90(ctx, base);
loc_880C9D50:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bge 0x880ca0b0
	if (!ctx.cr0.lt) goto loc_880CA0B0;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,-11832
	ctx.r11.s64 = ctx.r11.s64 + -11832;
	// lwz r7,12(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r8,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,960
	ctx.r9.s64 = ctx.r11.s64 + 960;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addis r29,r8,80
	ctx.r29.s64 = ctx.r8.s64 + 5242880;
	// lwzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880C9DB8;
	sub_880A84F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880C9DC4;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x880C9DD4;
	sub_880A85C0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x880a84f0
	ctx.lr = 0x880C9DE8;
	sub_880A84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880C9DF4;
	sub_8801A448(ctx, base);
	// addi r5,r3,192
	ctx.r5.s64 = ctx.r3.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x880a85c0
	ctx.lr = 0x880C9E04;
	sub_880A85C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a448
	ctx.lr = 0x880C9E0C;
	sub_8801A448(ctx, base);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x880a8620
	ctx.lr = 0x880C9E24;
	sub_880A8620(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x880C9E30;
	sub_880A8668(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r5,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r5.u32);
	// blt cr6,0x880c9e5c
	if (ctx.cr6.lt) goto loc_880C9E5C;
	// stw r21,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r21.u32);
loc_880C9E5C:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bgt 0x880ca0b0
	if (ctx.cr0.gt) goto loc_880CA0B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,2408(r26)
	REX_STORE_U32(ctx.r26.u32 + 2408, ctx.r21.u32);
	// stw r10,2424(r26)
	REX_STORE_U32(ctx.r26.u32 + 2424, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c9eb4
	if (!ctx.cr6.eq) goto loc_880C9EB4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88024750
	ctx.lr = 0x880C9E8C;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,144
	ctx.r8.s64 = 144;
	// lwz r4,96(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 96);
	// li r7,144
	ctx.r7.s64 = 144;
	// lwz r3,92(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,3
	ctx.r10.s64 = 3;
	// bl 0x88011728
	ctx.lr = 0x880C9EB0;
	sub_88011728(ctx, base);
	// b 0x880c9ee4
	goto loc_880C9EE4;
loc_880C9EB4:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,96(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 96);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,144
	ctx.r8.s64 = 144;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,92(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x880C9EE4;
	sub_880114D8(ctx, base);
loc_880C9EE4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880c9f14
	if (ctx.cr6.lt) goto loc_880C9F14;
	// beq cr6,0x880c9f08
	if (ctx.cr6.eq) goto loc_880C9F08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880c9f28
	if (!ctx.cr6.lt) goto loc_880C9F28;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-10568
	ctx.r4.s64 = ctx.r11.s64 + -10568;
	// b 0x880c9f1c
	goto loc_880C9F1C;
loc_880C9F08:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-11680
	ctx.r4.s64 = ctx.r11.s64 + -11680;
	// b 0x880c9f1c
	goto loc_880C9F1C;
loc_880C9F14:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-12768
	ctx.r4.s64 = ctx.r11.s64 + -12768;
loc_880C9F1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880C9F28;
	sub_88021AD0(ctx, base);
loc_880C9F28:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88021c70
	ctx.lr = 0x880C9F34;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
loc_880C9F40:
	// bl 0x880b1e10
	ctx.lr = 0x880C9F44;
	sub_880B1E10(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x880c9b98
	ctx.lr = 0x880C9F5C;
	sub_880C9B98(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r20,2
	ctx.r20.s64 = 2;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r22,29
	ctx.r22.s64 = 1900544;
	// lis r23,85
	ctx.r23.s64 = 5570560;
	// lis r25,16
	ctx.r25.s64 = 1048576;
loc_880C9F78:
	// lwz r11,92(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// mullw r10,r24,r22
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// lwz r9,96(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 96);
	// subf r31,r10,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r29,r23,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r23.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_880C9F90:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x880C9F98;
	sub_8801A448(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r3,8
	ctx.r3.s64 = 8;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8801a448
	ctx.lr = 0x880C9FAC;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r10,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880a99a8
	ctx.lr = 0x880C9FCC;
	sub_880A99A8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880C9FD8;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880C9FE4;
	sub_880A9A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880a84f0
	ctx.lr = 0x880C9FF8;
	sub_880A84F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x880CA004;
	sub_880A8620(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880CA00C;
	sub_8801A448(ctx, base);
	// addi r5,r3,224
	ctx.r5.s64 = ctx.r3.s64 + 224;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880a85c0
	ctx.lr = 0x880CA01C;
	sub_880A85C0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880a84f0
	ctx.lr = 0x880CA030;
	sub_880A84F0(ctx, base);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x880CA03C;
	sub_880A8620(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x880CA044;
	sub_8801A448(ctx, base);
	// addi r5,r3,224
	ctx.r5.s64 = ctx.r3.s64 + 224;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880CA054;
	sub_880A85C0(ctx, base);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 24, ctx.xer);
	// blt cr6,0x880c9f90
	if (ctx.cr6.lt) goto loc_880C9F90;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// neg r24,r24
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// bne 0x880c9f78
	if (!ctx.cr0.eq) goto loc_880C9F78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880c9618
	ctx.lr = 0x880CA080;
	sub_880C9618(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r11.u32);
	// stw r11,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// stw r21,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r21.u32);
	// stw r19,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r19.u32);
	// bl 0x8801a448
	ctx.lr = 0x880CA09C;
	sub_8801A448(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r3,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// stw r21,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r21.u32);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stw r19,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
loc_880CA0B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880CD268;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CD27C;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021be0
	ctx.lr = 0x880CD290;
	sub_88021BE0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,296
	ctx.r9.s64 = 19398656;
	// stw r11,100(r27)
	REX_STORE_U32(ctx.r27.u32 + 100, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-8552
	ctx.r4.s64 = ctx.r8.s64 + -8552;
	// bl 0x88021d68
	ctx.lr = 0x880CD2C8;
	sub_88021D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,32(r27)
	REX_STORE_U32(ctx.r27.u32 + 32, ctx.r31.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// stw r7,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r7.u32);
	// stw r11,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// stw r10,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// stw r11,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// stw r11,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// stw r10,40(r27)
	REX_STORE_U32(ctx.r27.u32 + 40, ctx.r10.u32);
	// stw r6,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r6.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CD310;
	sub_880244A8(ctx, base);
	// lis r5,-30707
	ctx.r5.s64 = -2012413952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r5,-12208
	ctx.r5.s64 = ctx.r5.s64 + -12208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CD324;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CD908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cd964
	if (ctx.cr6.eq) goto loc_880CD964;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x880CD92C;
	sub_8801A860(ctx, base);
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r11.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bgt 0x880cd964
	if (ctx.cr0.gt) goto loc_880CD964;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_880CD964:
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88024438
	ctx.lr = 0x880CD970;
	sub_88024438(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r31,1868
	ctx.r29.s64 = ctx.r31.s64 + 1868;
	// addi r11,r31,1860
	ctx.r11.s64 = ctx.r31.s64 + 1860;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r9,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// subf r28,r29,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_880CD98C:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880CD99C;
	sub_8813FA60(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88024438
	ctx.lr = 0x880CD9A8;
	sub_88024438(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bne 0x880cd98c
	if (!ctx.cr0.eq) goto loc_880CD98C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,1752
	ctx.r30.s64 = ctx.r31.s64 + 1752;
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r10,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,1828(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1828);
	// stw r9,1876(r31)
	REX_STORE_U32(ctx.r31.u32 + 1876, ctx.r9.u32);
	// lwz r8,1832(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r8,1880(r31)
	REX_STORE_U32(ctx.r31.u32 + 1880, ctx.r8.u32);
	// lwz r7,1836(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r7,1884(r31)
	REX_STORE_U32(ctx.r31.u32 + 1884, ctx.r7.u32);
	// lwz r6,1840(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1840);
	// stw r6,1888(r31)
	REX_STORE_U32(ctx.r31.u32 + 1888, ctx.r6.u32);
	// lwz r5,1844(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1844);
	// stw r5,1892(r31)
	REX_STORE_U32(ctx.r31.u32 + 1892, ctx.r5.u32);
	// lwz r4,1848(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1848);
	// stw r4,1896(r31)
	REX_STORE_U32(ctx.r31.u32 + 1896, ctx.r4.u32);
	// lwz r3,1852(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1852);
	// stw r3,1900(r31)
	REX_STORE_U32(ctx.r31.u32 + 1900, ctx.r3.u32);
	// lwz r11,1856(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// stw r11,1904(r31)
	REX_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// lwz r10,1860(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// stw r10,1908(r31)
	REX_STORE_U32(ctx.r31.u32 + 1908, ctx.r10.u32);
	// lwz r9,1864(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// stw r9,1912(r31)
	REX_STORE_U32(ctx.r31.u32 + 1912, ctx.r9.u32);
	// lwz r8,1868(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1868);
	// stw r8,1916(r31)
	REX_STORE_U32(ctx.r31.u32 + 1916, ctx.r8.u32);
	// lwz r7,1872(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1872);
	// stw r7,1920(r31)
	REX_STORE_U32(ctx.r31.u32 + 1920, ctx.r7.u32);
loc_880CDA38:
	// addi r29,r30,-20
	ctx.r29.s64 = ctx.r30.s64 + -20;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880CDA4C;
	sub_8813FA60(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88024438
	ctx.lr = 0x880CDA58;
	sub_88024438(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne 0x880cda38
	if (!ctx.cr0.eq) goto loc_880CDA38;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// stw r9,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r31,1520
	ctx.r11.s64 = ctx.r31.s64 + 1520;
	// stw r8,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// lwz r6,144(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// stw r6,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r5,1524(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1524);
	// stw r5,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lwz r4,1544(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// stw r4,1772(r31)
	REX_STORE_U32(ctx.r31.u32 + 1772, ctx.r4.u32);
	// lwz r3,1548(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// stw r3,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r3.u32);
	// lwz r9,1584(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r9,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r9.u32);
	// lwz r8,1588(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1588);
	// stw r8,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r8.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// stw r7,1788(r31)
	REX_STORE_U32(ctx.r31.u32 + 1788, ctx.r7.u32);
	// lwz r6,1628(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1628);
	// stw r6,1792(r31)
	REX_STORE_U32(ctx.r31.u32 + 1792, ctx.r6.u32);
	// lwz r5,1664(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1664);
	// stw r5,1796(r31)
	REX_STORE_U32(ctx.r31.u32 + 1796, ctx.r5.u32);
	// lwz r4,1668(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1668);
	// stw r4,1800(r31)
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r4.u32);
	// lwz r3,1704(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1704);
	// stw r3,1804(r31)
	REX_STORE_U32(ctx.r31.u32 + 1804, ctx.r3.u32);
	// lwz r9,1708(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1708);
	// stw r9,1808(r31)
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r9.u32);
	// lwz r8,1744(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1744);
	// stw r8,1812(r31)
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// lwz r7,1748(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1748);
	// stw r7,1816(r31)
	REX_STORE_U32(ctx.r31.u32 + 1816, ctx.r7.u32);
loc_880CDB08:
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,204(r10)
	REX_STORE_U32(ctx.r10.u32 + 204, ctx.r9.u32);
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,208(r10)
	REX_STORE_U32(ctx.r10.u32 + 208, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r7.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r6,216(r10)
	REX_STORE_U32(ctx.r10.u32 + 216, ctx.r6.u32);
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r5,220(r10)
	REX_STORE_U32(ctx.r10.u32 + 220, ctx.r5.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,424(r10)
	REX_STORE_U32(ctx.r10.u32 + 424, ctx.r4.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,428(r10)
	REX_STORE_U32(ctx.r10.u32 + 428, ctx.r3.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,432(r10)
	REX_STORE_U32(ctx.r10.u32 + 432, ctx.r9.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,436(r10)
	REX_STORE_U32(ctx.r10.u32 + 436, ctx.r8.u32);
	// lwzu r9,40(r11)
	ea = 40 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,440(r10)
	ea = 440 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880cdb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CDB08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0D30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D0D38;
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
	ctx.lr = 0x880D0D4C;
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
	ctx.lr = 0x880D0D60;
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
	// bge 0x880d1024
	if (!ctx.cr0.lt) goto loc_880D1024;
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
	// bne cr6,0x880d0db4
	if (!ctx.cr6.eq) goto loc_880D0DB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// lwz r4,868(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 868);
	// bl 0x880244d0
	ctx.lr = 0x880D0D9C;
	sub_880244D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,880(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 880);
	// lwz r4,876(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 876);
	// bl 0x880244d0
	ctx.lr = 0x880D0DB0;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_880D0DB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x880244d0
	ctx.lr = 0x880D0DC4;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8801a808
	ctx.lr = 0x880D0DD4;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8801a808
	ctx.lr = 0x880D0DEC;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// lwz r4,868(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 868);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88013940
	ctx.lr = 0x880D0E10;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,880(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 880);
	// lwz r4,876(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 876);
	// bl 0x88013940
	ctx.lr = 0x880D0E2C;
	sub_88013940(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lis r29,32
	ctx.r29.s64 = 2097152;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,256
	ctx.r7.s64 = 256;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,22
	ctx.r3.s64 = 22;
	// subf r5,r29,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r29.u64;
	// bl 0x88013940
	ctx.lr = 0x880D0E50;
	sub_88013940(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,868(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 868);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88013ce0
	ctx.lr = 0x880D0E74;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,176
	ctx.r9.s64 = 176;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// lwz r4,868(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 868);
	// bl 0x88013ce0
	ctx.lr = 0x880D0E98;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,352
	ctx.r9.s64 = 352;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r5,872(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 872);
	// lwz r4,868(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 868);
	// bl 0x88013ce0
	ctx.lr = 0x880D0EBC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r5,880(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 880);
	// lwz r4,876(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 876);
	// bl 0x88013ce0
	ctx.lr = 0x880D0EE0;
	sub_88013CE0(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,176
	ctx.r9.s64 = 176;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r5,880(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 880);
	// lwz r4,876(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 876);
	// bl 0x88013ce0
	ctx.lr = 0x880D0F04;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,352
	ctx.r9.s64 = 352;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,880(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 880);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,876(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 876);
	// bl 0x88013ce0
	ctx.lr = 0x880D0F28;
	sub_88013CE0(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,88
	ctx.r9.s64 = 88;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r3,8
	ctx.r3.s64 = 8;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880D0F50;
	sub_88013CE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,176
	ctx.r9.s64 = 176;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r3,22
	ctx.r3.s64 = 22;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880D0F78;
	sub_88013CE0(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,352
	ctx.r9.s64 = 352;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r3,8
	ctx.r3.s64 = 8;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880D0FA0;
	sub_88013CE0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880d1024
	if (!ctx.cr0.lt) goto loc_880D1024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244a8
	ctx.lr = 0x880D0FD0;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880d0fec
	if (!ctx.cr0.lt) goto loc_880D0FEC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880D0FEC;
	sub_88021598(ctx, base);
loc_880D0FEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_880D1024:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D45E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880D45F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D4600;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880D4614;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880d46a8
	if (ctx.cr6.gt) goto loc_880D46A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880d4648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D4648;
	// bdzf 4*cr6+eq,0x880d46b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D46B4;
	// bdzf 4*cr6+eq,0x880d473c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D473C;
	// bdzf 4*cr6+eq,0x880d4778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D4778;
	// bne cr6,0x880d47e0
	if (!ctx.cr6.eq) goto loc_880D47E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880D4648:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880d46a8
	if (!ctx.cr0.lt) goto loc_880D46A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x88021780
	ctx.lr = 0x880D467C;
	sub_88021780(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,26
	ctx.r8.s64 = ctx.r11.s64 + 26;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r7,r27
	REX_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x880d46a8
	if (!ctx.cr6.gt) goto loc_880D46A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880D46A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880D46B4:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
loc_880D46BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x880D46C8;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d46a8
	if (!ctx.cr6.eq) goto loc_880D46A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x880d46bc
	if (ctx.cr6.lt) goto loc_880D46BC;
	// lwz r11,1640(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1640);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880d4710
	if (ctx.cr6.lt) goto loc_880D4710;
	// beq cr6,0x880d4704
	if (ctx.cr6.eq) goto loc_880D4704;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880d4728
	if (!ctx.cr6.lt) goto loc_880D4728;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,5728
	ctx.r4.s64 = ctx.r11.s64 + 5728;
	// b 0x880d4718
	goto loc_880D4718;
loc_880D4704:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,2544
	ctx.r4.s64 = ctx.r11.s64 + 2544;
	// b 0x880d4718
	goto loc_880D4718;
loc_880D4710:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-360
	ctx.r4.s64 = ctx.r11.s64 + -360;
loc_880D4718:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880D4724;
	sub_880213F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_880D4728:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880D473C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x880D4748;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d46a8
	if (!ctx.cr6.eq) goto loc_880D46A8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880D4778:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880d46a8
	if (!ctx.cr0.lt) goto loc_880D46A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-2984
	ctx.r4.s64 = ctx.r10.s64 + -2984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x88021780
	ctx.lr = 0x880D47AC;
	sub_88021780(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,30
	ctx.r8.s64 = ctx.r11.s64 + 30;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r7,r27
	REX_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bge 0x880d46a8
	if (!ctx.cr0.lt) goto loc_880D46A8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880D47E0:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r27,120
	ctx.r31.s64 = ctx.r27.s64 + 120;
loc_880D47E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x880D47F4;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d46a8
	if (!ctx.cr6.eq) goto loc_880D46A8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x880d47e8
	if (ctx.cr6.lt) goto loc_880D47E8;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17776
	ctx.r4.s64 = ctx.r11.s64 + 17776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880D4820;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880D482C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7010) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x880D7018;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D7024;
	sub_88023F40(ctx, base);
	// lis r30,-30608
	ctx.r30.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d70bc
	if (!ctx.cr6.eq) goto loc_880D70BC;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r4,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880D7054;
	sub_8801A860(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// bl 0x880d6820
	ctx.lr = 0x880D7070;
	sub_880D6820(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x8801a860
	ctx.lr = 0x880D7084;
	sub_8801A860(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// bl 0x88024438
	ctx.lr = 0x880D70B0;
	sub_88024438(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
loc_880D70BC:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r28,r31,340
	ctx.r28.s64 = ctx.r31.s64 + 340;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D70D0:
	// stwu r23,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880d70d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D70D0;
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d7174
	if (!ctx.cr6.eq) goto loc_880D7174;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bne cr6,0x880d7108
	if (!ctx.cr6.eq) goto loc_880D7108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d6a60
	ctx.lr = 0x880D7104;
	sub_880D6A60(ctx, base);
	// b 0x880d715c
	goto loc_880D715C;
loc_880D7108:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d711c
	if (!ctx.cr6.eq) goto loc_880D711C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d6c88
	ctx.lr = 0x880D7118;
	sub_880D6C88(ctx, base);
	// b 0x880d715c
	goto loc_880D715C;
loc_880D711C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d7130
	if (!ctx.cr6.eq) goto loc_880D7130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d6958
	ctx.lr = 0x880D712C;
	sub_880D6958(ctx, base);
	// b 0x880d715c
	goto loc_880D715C;
loc_880D7130:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880d715c
	if (!ctx.cr6.eq) goto loc_880D715C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bgt 0x880d715c
	if (ctx.cr0.gt) goto loc_880D715C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r23,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
loc_880D715C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880d7174
	if (ctx.cr6.eq) goto loc_880D7174;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880D7174:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a860
	ctx.lr = 0x880D7188;
	sub_8801A860(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x88024030
	ctx.lr = 0x880D7198;
	sub_88024030(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lis r21,80
	ctx.r21.s64 = 5242880;
	// lis r22,-80
	ctx.r22.s64 = -5242880;
	// li r25,-2
	ctx.r25.s64 = -2;
loc_880D71AC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srawi r9,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 12;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a860
	ctx.lr = 0x880D71D4;
	sub_8801A860(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x880d71fc
	if (ctx.cr6.lt) goto loc_880D71FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r21.u32);
	// stw r8,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// b 0x880d721c
	goto loc_880D721C;
loc_880D71FC:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r22.u32);
	// stw r6,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
loc_880D721C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8801ac60
	ctx.lr = 0x880D722C;
	sub_8801AC60(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801ab78
	ctx.lr = 0x880D723C;
	sub_8801AB78(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801aa90
	ctx.lr = 0x880D724C;
	sub_8801AA90(ctx, base);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8801ad48
	ctx.lr = 0x880D725C;
	sub_8801AD48(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x880d72ac
	if (!ctx.cr6.lt) goto loc_880D72AC;
	// li r11,-8
	ctx.r11.s64 = -8;
	// b 0x880d72b8
	goto loc_880D72B8;
loc_880D72AC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x880d72b8
	if (ctx.cr6.lt) goto loc_880D72B8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_880D72B8:
	// subf r6,r11,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r11.u64;
	// addi r3,r11,10345
	ctx.r3.s64 = ctx.r11.s64 + 10345;
	// bl 0x8801a9c8
	ctx.lr = 0x880D72C4;
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
	ctx.lr = 0x880D72D8;
	sub_8813FF90(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d74b4
	if (ctx.cr6.eq) goto loc_880D74B4;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880d7388
	if (!ctx.cr6.eq) goto loc_880D7388;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x880244d0
	ctx.lr = 0x880D7300;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88014578
	ctx.lr = 0x880D7330;
	sub_88014578(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r6,-8
	ctx.r6.s64 = -8;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88014578
	ctx.lr = 0x880D735C;
	sub_88014578(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,23
	ctx.r9.s64 = 23;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r6,-26
	ctx.r6.s64 = -26;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88014578
	ctx.lr = 0x880D7388;
	sub_88014578(ctx, base);
loc_880D7388:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d73ec
	if (!ctx.cr6.eq) goto loc_880D73EC;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,-23
	ctx.r6.s64 = ctx.r11.s64 + -23;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88013ce0
	ctx.lr = 0x880D73C0;
	sub_88013CE0(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,37
	ctx.r3.s64 = 37;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// addi r6,r11,-31
	ctx.r6.s64 = ctx.r11.s64 + -31;
	// bl 0x88013ce0
	ctx.lr = 0x880D73EC;
	sub_88013CE0(ctx, base);
loc_880D73EC:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d7460
	if (!ctx.cr6.eq) goto loc_880D7460;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x880244d0
	ctx.lr = 0x880D7408;
	sub_880244D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,31
	ctx.r30.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x880D7418;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d7424
	if (ctx.cr6.eq) goto loc_880D7424;
	// li r30,52
	ctx.r30.s64 = 52;
loc_880D7424:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x880d7444
	if (ctx.cr6.lt) goto loc_880D7444;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8801a808
	ctx.lr = 0x880D743C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
loc_880D7444:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,12(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x88013940
	ctx.lr = 0x880D7460;
	sub_88013940(ctx, base);
loc_880D7460:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d74b4
	if (!ctx.cr6.eq) goto loc_880D74B4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// li r3,5
	ctx.r3.s64 = 5;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x88013940
	ctx.lr = 0x880D7490;
	sub_88013940(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,-24
	ctx.r6.s64 = ctx.r11.s64 + -24;
	// bl 0x88013940
	ctx.lr = 0x880D74B4;
	sub_88013940(ctx, base);
loc_880D74B4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// blt cr6,0x880d71ac
	if (ctx.cr6.lt) goto loc_880D71AC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d74e4
	if (!ctx.cr6.eq) goto loc_880D74E4;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d74f4
	if (ctx.cr6.eq) goto loc_880D74F4;
loc_880D74E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r23,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r23.u32);
	// bl 0x88023f48
	ctx.lr = 0x880D74F4;
	sub_88023F48(ctx, base);
loc_880D74F4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC340) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880DC348;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DC35C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x880DC370;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stw r4,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880DC390;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 12;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880dc50c
	if (!ctx.cr0.lt) goto loc_880DC50C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r8,1576(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1576);
	// lwz r11,1444(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1444);
	// lwz r29,656(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r27,1312(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// lwz r7,660(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 660);
	// addis r28,r7,-32
	ctx.r28.s64 = ctx.r7.s64 + -2097152;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,1180(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1180);
	// stw r29,948(r30)
	REX_STORE_U32(ctx.r30.u32 + 948, ctx.r29.u32);
	// addis r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -1048576;
	// stw r28,952(r30)
	REX_STORE_U32(ctx.r30.u32 + 952, ctx.r28.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880DC408;
	sub_88013CE0(ctx, base);
	// lwz r6,1312(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// lis r24,8
	ctx.r24.s64 = 524288;
	// lis r25,34
	ctx.r25.s64 = 2228224;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880dc43c
	if (!ctx.cr6.eq) goto loc_880DC43C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// addi r7,r11,336
	ctx.r7.s64 = ctx.r11.s64 + 336;
	// subf r5,r24,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r24.u64;
	// subf r4,r25,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r25.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x880DC43C;
	sub_88013940(ctx, base);
loc_880DC43C:
	// lwz r11,1180(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1180);
	// lis r26,20
	ctx.r26.s64 = 1310720;
	// lis r27,18
	ctx.r27.s64 = 1179648;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880dc470
	if (!ctx.cr6.eq) goto loc_880DC470;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// addi r7,r11,288
	ctx.r7.s64 = ctx.r11.s64 + 288;
	// subf r5,r26,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subf r4,r27,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r27.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x880DC470;
	sub_88013940(ctx, base);
loc_880DC470:
	// lwz r11,1576(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880dc49c
	if (!ctx.cr6.eq) goto loc_880DC49C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// subf r5,r24,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r24.u64;
	// add r4,r29,r25
	ctx.r4.u64 = ctx.r29.u64 + ctx.r25.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x880DC49C;
	sub_88013940(ctx, base);
loc_880DC49C:
	// lwz r11,1444(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880dc4c8
	if (!ctx.cr6.eq) goto loc_880DC4C8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// addi r7,r11,224
	ctx.r7.s64 = ctx.r11.s64 + 224;
	// subf r5,r26,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r26.u64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x880DC4C8;
	sub_88013940(ctx, base);
loc_880DC4C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880dc50c
	if (!ctx.cr0.lt) goto loc_880DC50C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880244a8
	ctx.lr = 0x880DC4E0;
	sub_880244A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x880dc4fc
	if (ctx.cr6.lt) goto loc_880DC4FC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880DC4FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880DC50C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DED00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17700
	ctx.r9.s64 = ctx.r11.s64 + 17700;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x88022050
	sub_88022050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DEDA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DEDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x880DEDCC;
	sub_88021E88(ctx, base);
	// lis r30,-30606
	ctx.r30.s64 = -2005794816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r30,17700
	ctx.r29.s64 = ctx.r30.s64 + 17700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
	// bl 0x88022050
	ctx.lr = 0x880DEDE8;
	sub_88022050(ctx, base);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-8360
	ctx.r5.s64 = ctx.r10.s64 + -8360;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x88021e88
	ctx.lr = 0x880DEE00;
	sub_88021E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,17700(r30)
	REX_STORE_U32(ctx.r30.u32 + 17700, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88022050
	ctx.lr = 0x880DEE14;
	sub_88022050(ctx, base);
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-5856
	ctx.r5.s64 = ctx.r9.s64 + -5856;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x88021e88
	ctx.lr = 0x880DEE2C;
	sub_88021E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88022050
	ctx.lr = 0x880DEE40;
	sub_88022050(ctx, base);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-4840
	ctx.r5.s64 = ctx.r8.s64 + -4840;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e88
	ctx.lr = 0x880DEE58;
	sub_88021E88(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DFF10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DFF18;
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
	ctx.lr = 0x880DFF2C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x88021be0
	ctx.lr = 0x880DFF3C;
	sub_88021BE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// stw r8,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r8.u32);
	// stw r7,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DFF7C;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-624
	ctx.r5.s64 = ctx.r6.s64 + -624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880DFF90;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0660) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880E0668;
	__savegprlr_27(ctx, base);
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
	ctx.lr = 0x880E067C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021be0
	ctx.lr = 0x880E0690;
	sub_88021BE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,6232
	ctx.r4.s64 = ctx.r8.s64 + 6232;
	// bl 0x88021d68
	ctx.lr = 0x880E06C0;
	sub_88021D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// stw r7,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// stw r11,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// stw r11,136(r28)
	REX_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880E06EC;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,1144
	ctx.r5.s64 = ctx.r6.s64 + 1144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0700;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0BC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880E0BE4;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e0c44
	if (ctx.cr6.lt) goto loc_880E0C44;
	// bne cr6,0x880e0c8c
	if (!ctx.cr6.eq) goto loc_880E0C8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88021698
	ctx.lr = 0x880E0C04;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e0c8c
	if (!ctx.cr6.eq) goto loc_880E0C8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021598
	ctx.lr = 0x880E0C18;
	sub_88021598(ctx, base);
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3544
	ctx.r4.s64 = ctx.r11.s64 + 3544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880E0C2C;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880E0C38;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E0C44:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880e0c8c
	if (!ctx.cr0.lt) goto loc_880E0C8C;
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10104
	ctx.r4.s64 = ctx.r11.s64 + -10104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E0C68;
	sub_880213F0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9480
	ctx.r4.s64 = ctx.r10.s64 + -9480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E0C80;
	sub_880213F0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_880E0C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E1498) {
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
	ctx.lr = 0x880E14B4;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x88021de0
	ctx.lr = 0x880E14C4;
	sub_88021DE0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,66
	ctx.r6.s64 = 66;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lis r5,-30706
	ctx.r5.s64 = -2012348416;
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// addi r4,r5,4696
	ctx.r4.s64 = ctx.r5.s64 + 4696;
	// stw r6,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r6.u32);
	// stw r11,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// bl 0x88021e18
	ctx.lr = 0x880E150C;
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

DEFINE_REX_FUNC(sub_880E1CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x880E1CC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E1CD4;
	sub_88023F40(ctx, base);
	// lis r16,-30608
	ctx.r16.s64 = -2005925888;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r14,1
	ctx.r14.s64 = 1;
	// lwz r11,21860(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880e1df8
	if (!ctx.cr6.eq) goto loc_880E1DF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x8801a860
	ctx.lr = 0x880E1D00;
	sub_8801A860(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x880E1D2C;
	sub_88024438(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,24(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// beq cr6,0x880e1dc0
	if (ctx.cr6.eq) goto loc_880E1DC0;
	// addi r31,r28,660
	ctx.r31.s64 = ctx.r28.s64 + 660;
	// li r29,74
	ctx.r29.s64 = 74;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_880E1D50:
	// lwz r11,-20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,-16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// stwu r10,-8(r30)
	ea = -8 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// bl 0x88024438
	ctx.lr = 0x880E1D6C;
	sub_88024438(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// bne 0x880e1d50
	if (!ctx.cr0.eq) goto loc_880E1D50;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r4,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880E1DA0;
	sub_8801A860(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_880E1DC0:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880e1df8
	if (ctx.cr6.eq) goto loc_880E1DF8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// bne 0x880e1df8
	if (!ctx.cr0.eq) goto loc_880E1DF8;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r28,668
	ctx.r11.s64 = ctx.r28.s64 + 668;
	// li r9,120
	ctx.r9.s64 = 120;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// stw r9,52(r28)
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880E1DF0:
	// sthu r14,144(r11)
	ea = 144 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r14.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x880e1df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1DF0;
loc_880E1DF8:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r19,r28,668
	ctx.r19.s64 = ctx.r28.s64 + 668;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// addi r27,r28,68
	ctx.r27.s64 = ctx.r28.s64 + 68;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// li r23,8
	ctx.r23.s64 = 8;
	// ori r26,r11,52429
	ctx.r26.u64 = ctx.r11.u64 | 52429;
	// lis r21,-30683
	ctx.r21.s64 = -2010841088;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r15,3
	ctx.r15.s64 = 3;
	// li r20,5
	ctx.r20.s64 = 5;
loc_880E1E38:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mulhwu r11,r29,r26
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r26.u32)) >> 32;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r30,r8,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x880e1fbc
	if (!ctx.cr0.eq) goto loc_880E1FBC;
	// lwz r11,21860(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880e1fbc
	if (!ctx.cr6.eq) goto loc_880E1FBC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r14,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880e1f74
	if (ctx.cr6.gt) goto loc_880E1F74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880e1eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E1EB0;
	// bdzf 4*cr6+eq,0x880e1f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E1F0C;
	// bne cr6,0x880e1f44
	if (!ctx.cr6.eq) goto loc_880E1F44;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e1f74
	if (!ctx.cr6.eq) goto loc_880E1F74;
	// lwz r11,-11912(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -11912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e1f74
	if (ctx.cr6.eq) goto loc_880E1F74;
	// stw r14,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r14.u32);
	// b 0x880e1f74
	goto loc_880E1F74;
loc_880E1EB0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x880e1f74
	if (!ctx.cr0.lt) goto loc_880E1F74;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// blt cr6,0x880e1f74
	if (ctx.cr6.lt) goto loc_880E1F74;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r23,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r24,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// stw r18,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r18.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880244d0
	ctx.lr = 0x880E1F00;
	sub_880244D0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// b 0x880e1f74
	goto loc_880E1F74;
loc_880E1F0C:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e1f34
	if (ctx.cr6.eq) goto loc_880E1F34;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,64(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880e1b40
	ctx.lr = 0x880E1F34;
	sub_880E1B40(ctx, base);
loc_880E1F34:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x880244a8
	ctx.lr = 0x880E1F3C;
	sub_880244A8(ctx, base);
	// stw r15,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r15.u32);
	// b 0x880e1f74
	goto loc_880E1F74;
loc_880E1F44:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x880e1f74
	if (!ctx.cr0.lt) goto loc_880E1F74;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bgt 0x880e1f74
	if (ctx.cr0.gt) goto loc_880E1F74;
	// stw r18,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r18.u32);
	// stw r18,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r18.u32);
loc_880E1F74:
	// lhz r11,66(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 66);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e1f8c
	if (ctx.cr6.eq) goto loc_880E1F8C;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// sth r18,66(r31)
	REX_STORE_U16(ctx.r31.u32 + 66, ctx.r18.u16);
loc_880E1F8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x880e1fbc
	if (!ctx.cr6.lt) goto loc_880E1FBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r9,36(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bl 0x88018b98
	ctx.lr = 0x880E1FBC;
	sub_88018B98(ctx, base);
loc_880E1FBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880e209c
	if (!ctx.cr6.eq) goto loc_880E209C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x880e209c
	if (!ctx.cr0.lt) goto loc_880E209C;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,90
	ctx.r6.s64 = 90;
	// li r3,22
	ctx.r3.s64 = 22;
	// beq cr6,0x880e1ff4
	if (ctx.cr6.eq) goto loc_880E1FF4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_880E1FF4:
	// bl 0x880a84f0
	ctx.lr = 0x880E1FF8;
	sub_880A84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E2004;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880E2014;
	sub_880A85C0(ctx, base);
	// bl 0x880b1a10
	ctx.lr = 0x880E2018;
	sub_880B1A10(ctx, base);
	// lwz r11,2828(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880e2058
	if (!ctx.cr6.eq) goto loc_880E2058;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880E203C;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,-8
	ctx.r6.s64 = -8;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013940
	ctx.lr = 0x880E2058;
	sub_88013940(ctx, base);
loc_880E2058:
	// lwz r11,2828(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2828);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e2098
	if (!ctx.cr6.eq) goto loc_880E2098;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880E207C;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013940
	ctx.lr = 0x880E2098;
	sub_88013940(ctx, base);
loc_880E2098:
	// stw r20,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
loc_880E209C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x880e1e38
	if (ctx.cr6.lt) goto loc_880E1E38;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r10,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r10.u32);
	// beq cr6,0x880e20e8
	if (ctx.cr6.eq) goto loc_880E20E8;
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r9.u32);
	// beq cr6,0x880e2114
	if (ctx.cr6.eq) goto loc_880E2114;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880e2110
	goto loc_880E2110;
loc_880E20E8:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bge cr6,0x880e2114
	if (!ctx.cr6.lt) goto loc_880E2114;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880e2114
	if (!ctx.cr6.eq) goto loc_880E2114;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880E2110:
	// stw r10,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r10.u32);
loc_880E2114:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e2294
	if (ctx.cr6.eq) goto loc_880E2294;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88024498
	ctx.lr = 0x880E2138;
	sub_88024498(ctx, base);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r30,20(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// subf r31,r3,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e2180
	if (!ctx.cr6.eq) goto loc_880E2180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8801a4a0
	ctx.lr = 0x880E2164;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x880E2174;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// b 0x880e2188
	goto loc_880E2188;
loc_880E2180:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_880E2188:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8801a3e0
	ctx.lr = 0x880E219C;
	sub_8801A3E0(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880e21d0
	if (ctx.cr6.gt) goto loc_880E21D0;
	// li r3,191
	ctx.r3.s64 = 191;
	// bl 0x8801a448
	ctx.lr = 0x880E21B0;
	sub_8801A448(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,127
	ctx.r3.s64 = 127;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E21C4;
	sub_8801A448(ctx, base);
	// addi r9,r3,160
	ctx.r9.s64 = ctx.r3.s64 + 160;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r8,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
loc_880E21D0:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r28)
	REX_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
loc_880E21DC:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// addi r9,r19,156
	ctx.r9.s64 = ctx.r19.s64 + 156;
loc_880E21EC:
	// lwz r10,-144(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -144);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x880e21fc
	if (ctx.cr6.eq) goto loc_880E21FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880E21FC:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x880e220c
	if (ctx.cr6.eq) goto loc_880E220C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880E220C:
	// lwz r10,144(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x880e221c
	if (ctx.cr6.eq) goto loc_880E221C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880E221C:
	// lwz r10,288(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x880e222c
	if (ctx.cr6.eq) goto loc_880E222C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880E222C:
	// lwz r10,432(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 432);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x880e223c
	if (ctx.cr6.eq) goto loc_880E223C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880E223C:
	// addi r9,r9,720
	ctx.r9.s64 = ctx.r9.s64 + 720;
	// bdnz 0x880e21ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E21EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bne cr6,0x880e2350
	if (!ctx.cr6.eq) goto loc_880E2350;
	// lwz r11,2828(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e2304
	if (!ctx.cr6.eq) goto loc_880E2304;
	// bl 0x88024750
	ctx.lr = 0x880E2260;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88011728
	ctx.lr = 0x880E2284;
	sub_88011728(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88023f48
	ctx.lr = 0x880E228C;
	sub_88023F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880E2294:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// addi r31,r19,60
	ctx.r31.s64 = ctx.r19.s64 + 60;
	// li r30,15
	ctx.r30.s64 = 15;
loc_880E22A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e22d8
	if (!ctx.cr6.eq) goto loc_880E22D8;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwz r5,-52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -52);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r4,-56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + -56);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88024758
	ctx.lr = 0x880E22C4;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e22d4
	if (!ctx.cr6.eq) goto loc_880E22D4;
	// stw r14,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
	// b 0x880e22d8
	goto loc_880E22D8;
loc_880E22D4:
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_880E22D8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x880e22a0
	if (!ctx.cr0.eq) goto loc_880E22A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880e21dc
	if (!ctx.cr6.eq) goto loc_880E21DC;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x880E22F4;
	sub_88022BE0(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88023f48
	ctx.lr = 0x880E22FC;
	sub_88023F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880E2304:
	// bl 0x88024748
	ctx.lr = 0x880E2308;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r31,r3,r11
	ctx.r31.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88024748
	ctx.lr = 0x880E2318;
	sub_88024748(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x880114d8
	ctx.lr = 0x880E2340;
	sub_880114D8(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88023f48
	ctx.lr = 0x880E2348;
	sub_88023F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880E2350:
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x880E235C;
	sub_880244D0(ctx, base);
	// lwz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r28,2828
	ctx.r31.s64 = ctx.r28.s64 + 2828;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_880E236C:
	// addi r31,r31,-144
	ctx.r31.s64 = ctx.r31.s64 + -144;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x880e23cc
	if (!ctx.cr6.lt) goto loc_880E23CC;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// bne cr6,0x880e2398
	if (!ctx.cr6.eq) goto loc_880E2398;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// addi r3,r11,13906
	ctx.r3.s64 = ctx.r11.s64 + 13906;
	// b 0x880e23b4
	goto loc_880E23B4;
loc_880E2398:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e23b0
	if (ctx.cr6.eq) goto loc_880E23B0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// b 0x880e23b4
	goto loc_880E23B4;
loc_880E23B0:
	// li r3,13922
	ctx.r3.s64 = 13922;
loc_880E23B4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801a9c8
	ctx.lr = 0x880E23C4;
	sub_8801A9C8(ctx, base);
	// lwz r4,40(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x8813ff48
	ctx.lr = 0x880E23CC;
	sub_8813FF48(ctx, base);
loc_880E23CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x880e236c
	if (ctx.cr6.lt) goto loc_880E236C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x880240d0
	ctx.lr = 0x880E23E8;
	sub_880240D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EA528) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880EA530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r11,-11920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ea56c
	if (ctx.cr6.eq) goto loc_880EA56C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021598
	ctx.lr = 0x880EA560;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880EA56C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EA574;
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
	ctx.lr = 0x880EA594;
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
	// bge 0x880ea6c0
	if (!ctx.cr0.lt) goto loc_880EA6C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r27,8
	ctx.r27.s64 = 524288;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r28,4
	ctx.r28.s64 = 262144;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880ea624
	if (!ctx.cr6.eq) goto loc_880EA624;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880ea5dc
	if (!ctx.cr6.eq) goto loc_880EA5DC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880EA5DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244c0
	ctx.lr = 0x880EA5E4;
	sub_880244C0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EA600;
	sub_880244D0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r28,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EA620;
	sub_880244D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_880EA624:
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + ctx.r27.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x880EA658;
	sub_88013CE0(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r8,9
	ctx.r8.s64 = 9;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EA68C;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880ea6c0
	if (!ctx.cr0.lt) goto loc_880EA6C0;
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
loc_880EA6C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EC0A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880EC0A8;
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
	// lwz r11,-11932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ec0e4
	if (ctx.cr6.eq) goto loc_880EC0E4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021598
	ctx.lr = 0x880EC0D8;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880EC0E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EC0EC;
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
	ctx.lr = 0x880EC10C;
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
	// bge 0x880ec290
	if (!ctx.cr0.lt) goto loc_880EC290;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r26,36
	ctx.r26.s64 = 2359296;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r27,20
	ctx.r27.s64 = 1310720;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880ec1c0
	if (!ctx.cr6.eq) goto loc_880EC1C0;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880ec158
	if (!ctx.cr6.eq) goto loc_880EC158;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880EC158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244c0
	ctx.lr = 0x880EC160;
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
	ctx.lr = 0x880EC17C;
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
	ctx.lr = 0x880EC19C;
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
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EC1BC;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_880EC1C0:
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r7,r26
	ctx.r5.u64 = ctx.r7.u64 + ctx.r26.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x880EC1F4;
	sub_88013CE0(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,-22
	ctx.r6.s64 = ctx.r6.s64 + -22;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EC228;
	sub_88013CE0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,36
	ctx.r9.s64 = 36;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r6,r6,-28
	ctx.r6.s64 = ctx.r6.s64 + -28;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EC25C;
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
	// bge 0x880ec290
	if (!ctx.cr0.lt) goto loc_880EC290;
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
loc_880EC290:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EE5B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880EE5B8;
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
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880EE5D8;
	sub_88021508(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r10,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r10,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stw r8,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r7.u32);
	// stw r11,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880EE618;
	sub_8801A448(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// lis r6,-30705
	ctx.r6.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-7224
	ctx.r5.s64 = ctx.r6.s64 + -7224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EE630;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2BA8) {
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
	// bl 0x88023f40
	ctx.lr = 0x880F2BC4;
	sub_88023F40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x88069270
	ctx.lr = 0x880F2BD8;
	sub_88069270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 280, ctx.xer);
	// bgt cr6,0x880f2bec
	if (ctx.cr6.gt) goto loc_880F2BEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880f2cb8
	goto loc_880F2CB8;
loc_880F2BEC:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r30,r11,22280
	ctx.r30.s64 = ctx.r11.s64 + 22280;
	// lis r5,-80
	ctx.r5.s64 = -5242880;
	// addi r6,r30,1728
	ctx.r6.s64 = ctx.r30.s64 + 1728;
	// lis r4,135
	ctx.r4.s64 = 8847360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C0C;
	sub_880F0098(ctx, base);
	// addi r6,r30,1728
	ctx.r6.s64 = ctx.r30.s64 + 1728;
	// li r7,7
	ctx.r7.s64 = 7;
	// lis r5,-80
	ctx.r5.s64 = -5242880;
	// lis r4,-135
	ctx.r4.s64 = -8847360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C24;
	sub_880F0098(ctx, base);
	// addi r6,r30,1152
	ctx.r6.s64 = ctx.r30.s64 + 1152;
	// li r7,5
	ctx.r7.s64 = 5;
	// lis r5,-205
	ctx.r5.s64 = -13434880;
	// lis r4,185
	ctx.r4.s64 = 12124160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C3C;
	sub_880F0098(ctx, base);
	// addi r6,r30,1152
	ctx.r6.s64 = ctx.r30.s64 + 1152;
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r5,-205
	ctx.r5.s64 = -13434880;
	// lis r4,-185
	ctx.r4.s64 = -12124160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C54;
	sub_880F0098(ctx, base);
	// addi r6,r30,576
	ctx.r6.s64 = ctx.r30.s64 + 576;
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r5,-325
	ctx.r5.s64 = -21299200;
	// lis r4,136
	ctx.r4.s64 = 8912896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C6C;
	sub_880F0098(ctx, base);
	// addi r6,r30,576
	ctx.r6.s64 = ctx.r30.s64 + 576;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r5,-325
	ctx.r5.s64 = -21299200;
	// lis r4,-136
	ctx.r4.s64 = -8912896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C84;
	sub_880F0098(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r5,-455
	ctx.r5.s64 = -29818880;
	// lis r4,98
	ctx.r4.s64 = 6422528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2C9C;
	sub_880F0098(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,-455
	ctx.r5.s64 = -29818880;
	// lis r4,-98
	ctx.r4.s64 = -6422528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f0098
	ctx.lr = 0x880F2CB4;
	sub_880F0098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880F2CB8:
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

DEFINE_REX_FUNC(sub_880FADA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880FADA8;
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
	// ble cr6,0x880fadd0
	if (!ctx.cr6.gt) goto loc_880FADD0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880FADD0;
	sub_880236A8(ctx, base);
loc_880FADD0:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fae3c
	if (!ctx.cr6.eq) goto loc_880FAE3C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt 0x880fae3c
	if (ctx.cr0.gt) goto loc_880FAE3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880FADFC;
	sub_88022A88(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,1540
	ctx.r5.s64 = 1540;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88024de8
	ctx.lr = 0x880FAE10;
	sub_88024DE8(ctx, base);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,32896
	ctx.r9.u64 = ctx.r10.u64 | 32896;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880FAE3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FB7F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880FB7F8;
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
	ctx.lr = 0x880FB810;
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
	ctx.lr = 0x880FB824;
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
	// addi r31,r11,6008
	ctx.r31.s64 = ctx.r11.s64 + 6008;
	// lwz r7,6008(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 6008);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880fb8c8
	if (ctx.cr6.eq) goto loc_880FB8C8;
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
	// beq cr6,0x880fb89c
	if (ctx.cr6.eq) goto loc_880FB89C;
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
	// beq cr6,0x880fb8c8
	if (ctx.cr6.eq) goto loc_880FB8C8;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880fb8c4
	goto loc_880FB8C4;
loc_880FB89C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4160, ctx.xer);
	// bge cr6,0x880fb8c8
	if (!ctx.cr6.lt) goto loc_880FB8C8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fb8c8
	if (!ctx.cr6.eq) goto loc_880FB8C8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880FB8C4:
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_880FB8C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880fb9e8
	if (ctx.cr6.gt) goto loc_880FB9E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880fb92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB92C;
	// bdzf 4*cr6+eq,0x880fb96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB96C;
	// bdzf 4*cr6+eq,0x880fb988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FB988;
	// bne cr6,0x880fb9b8
	if (!ctx.cr6.eq) goto loc_880FB9B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,20(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880FB8F8;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x880FB908;
	sub_88069270(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880fb9e8
	if (ctx.cr6.gt) goto loc_880FB9E8;
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
loc_880FB92C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,20(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880FB938;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88069270
	ctx.lr = 0x880FB948;
	sub_88069270(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880fb9e8
	if (ctx.cr6.gt) goto loc_880FB9E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x880fb9dc
	goto loc_880FB9DC;
loc_880FB96C:
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
loc_880FB988:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fb538
	ctx.lr = 0x880FB998;
	sub_880FB538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fb9e8
	if (!ctx.cr6.eq) goto loc_880FB9E8;
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
loc_880FB9B8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bge 0x880fb9e8
	if (!ctx.cr0.lt) goto loc_880FB9E8;
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
loc_880FB9DC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021928
	ctx.lr = 0x880FB9E8;
	sub_88021928(ctx, base);
loc_880FB9E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FD190) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880FD198;
	__savegprlr_25(ctx, base);
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
	ctx.lr = 0x880FD1AC;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021898
	ctx.lr = 0x880FD1C0;
	sub_88021898(ctx, base);
	// lwz r11,5576(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 5576);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// addi r31,r29,5576
	ctx.r31.s64 = ctx.r29.s64 + 5576;
	// ori r28,r10,32896
	ctx.r28.u64 = ctx.r10.u64 | 32896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fd250
	if (ctx.cr6.eq) goto loc_880FD250;
	// stw r28,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
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
	// beq cr6,0x880fd224
	if (ctx.cr6.eq) goto loc_880FD224;
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
	// beq cr6,0x880fd250
	if (ctx.cr6.eq) goto loc_880FD250;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880fd24c
	goto loc_880FD24C;
loc_880FD224:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4352, ctx.xer);
	// bge cr6,0x880fd250
	if (!ctx.cr6.lt) goto loc_880FD250;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fd250
	if (!ctx.cr6.eq) goto loc_880FD250;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880FD24C:
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_880FD250:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880fd404
	if (ctx.cr6.gt) goto loc_880FD404;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880fd2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FD2B8;
	// bdzf 4*cr6+eq,0x880fd2f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FD2F8;
	// bdzf 4*cr6+eq,0x880fd330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FD330;
	// bdzf 4*cr6+eq,0x880fd39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880FD39C;
	// bne cr6,0x880fd3d4
	if (!ctx.cr6.eq) goto loc_880FD3D4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,20(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880FD284;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x880FD294;
	sub_88069270(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880fd404
	if (ctx.cr6.gt) goto loc_880FD404;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// b 0x880fd3f8
	goto loc_880FD3F8;
loc_880FD2B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x880FD2D0;
	sub_8801A448(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r3,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stw r29,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r10,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// bl 0x880b1e10
	ctx.lr = 0x880FD2E4;
	sub_880B1E10(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FD2F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880fcde8
	ctx.lr = 0x880FD304;
	sub_880FCDE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fd404
	if (!ctx.cr6.eq) goto loc_880FD404;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FD330:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bgt 0x880fd36c
	if (ctx.cr0.gt) goto loc_880FD36C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x880fd36c
	if (ctx.cr6.lt) goto loc_880FD36C;
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_880FD36C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
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
	// stw r6,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FD39C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880fcf58
	ctx.lr = 0x880FD3AC;
	sub_880FCF58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880fd404
	if (!ctx.cr6.eq) goto loc_880FD404;
	// bl 0x880b1e10
	ctx.lr = 0x880FD3B8;
	sub_880B1E10(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880FD3D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x880fd404
	if (!ctx.cr0.lt) goto loc_880FD404;
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
loc_880FD3F8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021928
	ctx.lr = 0x880FD404;
	sub_88021928(ctx, base);
loc_880FD404:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FFFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880FFFF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2960
	ctx.r4.s64 = 2960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88100008;
	sub_88023E98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f40
	ctx.lr = 0x88100010;
	sub_88023F40(ctx, base);
	// li r5,2960
	ctx.r5.s64 = 2960;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88100020;
	sub_8813FA58(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880247e8
	ctx.lr = 0x88100028;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8810002C;
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
	ctx.lr = 0x88100040;
	sub_8813FA58(ctx, base);
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1616
	ctx.r4.s64 = ctx.r11.s64 + -1616;
	// bl 0x880211b0
	ctx.lr = 0x88100054;
	sub_880211B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88108d50
	ctx.lr = 0x88100060;
	sub_88108D50(ctx, base);
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-28792
	ctx.r4.s64 = ctx.r10.s64 + -28792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88100074;
	sub_88021AD0(ctx, base);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// ori r28,r9,5120
	ctx.r28.u64 = ctx.r9.u64 | 5120;
	// stw r27,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// bl 0x88024498
	ctx.lr = 0x8810009C;
	sub_88024498(ctx, base);
	// lis r8,120
	ctx.r8.s64 = 7864320;
	// lis r7,500
	ctx.r7.s64 = 32768000;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x881000C4;
	sub_88024028(ctx, base);
	// lis r4,-30704
	ctx.r4.s64 = -2012217344;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r4,-256
	ctx.r4.s64 = ctx.r4.s64 + -256;
	// bl 0x88023e90
	ctx.lr = 0x881000D4;
	sub_88023E90(ctx, base);
	// lis r3,-30608
	ctx.r3.s64 = -2005925888;
	// lis r6,-30683
	ctx.r6.s64 = -2010841088;
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// li r10,14
	ctx.r10.s64 = 14;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,21868(r3)
	REX_STORE_U32(ctx.r3.u32 + 21868, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r27,-11960(r6)
	REX_STORE_U32(ctx.r6.u32 + -11960, ctx.r27.u32);
	// stw r27,-11964(r7)
	REX_STORE_U32(ctx.r7.u32 + -11964, ctx.r27.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r5,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r5.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// sth r30,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r30.u16);
	// lis r6,-30704
	ctx.r6.s64 = -2012217344;
	// sth r27,220(r31)
	REX_STORE_U16(ctx.r31.u32 + 220, ctx.r27.u16);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// stw r10,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// lis r25,-30704
	ctx.r25.s64 = -2012217344;
	// lis r4,-30704
	ctx.r4.s64 = -2012217344;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r3,-30704
	ctx.r3.s64 = -2012217344;
	// stw r10,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r10,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// stw r5,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// li r8,10800
	ctx.r8.s64 = 10800;
	// stw r26,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
	// addi r24,r4,-744
	ctx.r24.s64 = ctx.r4.s64 + -744;
	// stw r31,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r31.u32);
	// addi r3,r3,-744
	ctx.r3.s64 = ctx.r3.s64 + -744;
	// stw r5,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// addi r6,r6,-744
	ctx.r6.s64 = ctx.r6.s64 + -744;
	// stw r26,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// addi r25,r25,-744
	ctx.r25.s64 = ctx.r25.s64 + -744;
	// stw r3,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r3.u32);
	// lis r23,-32
	ctx.r23.s64 = -2097152;
	// stw r31,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r31.u32);
	// stw r5,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// sth r30,296(r31)
	REX_STORE_U16(ctx.r31.u32 + 296, ctx.r30.u16);
	// sth r27,300(r31)
	REX_STORE_U16(ctx.r31.u32 + 300, ctx.r27.u16);
	// stw r9,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// stw r9,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r25,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r25.u32);
	// sth r30,376(r31)
	REX_STORE_U16(ctx.r31.u32 + 376, ctx.r30.u16);
	// sth r27,380(r31)
	REX_STORE_U16(ctx.r31.u32 + 380, ctx.r27.u16);
	// stw r26,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r26.u32);
	// stw r10,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stw r10,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r11,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r24,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r24.u32);
	// stw r31,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r31.u32);
	// sth r30,456(r31)
	REX_STORE_U16(ctx.r31.u32 + 456, ctx.r30.u16);
	// sth r27,460(r31)
	REX_STORE_U16(ctx.r31.u32 + 460, ctx.r27.u16);
	// stw r5,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r5.u32);
	// stw r26,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r26.u32);
	// stw r7,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r7.u32);
	// stw r7,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r7.u32);
	// stw r10,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// stw r9,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r31,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r31.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88022730
	ctx.lr = 0x88100210;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88100218;
	sub_88022980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r29,r10,13696
	ctx.r29.u64 = ctx.r10.u64 | 13696;
	// ori r30,r9,56960
	ctx.r30.u64 = ctx.r9.u64 | 56960;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88100278
	if (ctx.cr6.lt) goto loc_88100278;
	// beq cr6,0x88100240
	if (ctx.cr6.eq) goto loc_88100240;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881002b8
	if (!ctx.cr6.lt) goto loc_881002B8;
loc_88100240:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r30,r11,38400
	ctx.r30.u64 = ctx.r11.u64 | 38400;
	// ori r28,r10,33536
	ctx.r28.u64 = ctx.r10.u64 | 33536;
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ori r29,r8,60672
	ctx.r29.u64 = ctx.r8.u64 | 60672;
	// bl 0x88069640
	ctx.lr = 0x88100268;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881002b8
	if (ctx.cr6.eq) goto loc_881002B8;
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x881002b4
	goto loc_881002B4;
loc_88100278:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880694c8
	ctx.lr = 0x88100280;
	sub_880694C8(ctx, base);
	// stw r28,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x88069640
	ctx.lr = 0x88100290;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881002b8
	if (ctx.cr6.eq) goto loc_881002B8;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r10,19968
	ctx.r9.u64 = ctx.r10.u64 | 19968;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r30,r11,2560
	ctx.r30.u64 = ctx.r11.u64 | 2560;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// ori r29,r29,17408
	ctx.r29.u64 = ctx.r29.u64 | 17408;
loc_881002B4:
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_881002B8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r29,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// stw r30,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// bl 0x8809cb88
	ctx.lr = 0x881002D8;
	sub_8809CB88(ctx, base);
	// stw r27,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r27.u32);
	// stw r27,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88101940) {
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
	ctx.lr = 0x88101960;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021508
	ctx.lr = 0x88101970;
	sub_88021508(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// addi r5,r5,6056
	ctx.r5.s64 = ctx.r5.s64 + 6056;
	// stw r6,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x881019C4;
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

DEFINE_REX_FUNC(sub_88101E38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88101E40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88101E54;
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
	ctx.lr = 0x88101E68;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88101f34
	if (ctx.cr6.eq) goto loc_88101F34;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88101fac
	if (!ctx.cr0.lt) goto loc_88101FAC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r5,r7,-54
	ctx.r5.s64 = ctx.r7.s64 + -3538944;
	// beq cr6,0x88101eb8
	if (ctx.cr6.eq) goto loc_88101EB8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88101EB8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88013940
	ctx.lr = 0x88101ECC;
	sub_88013940(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x88101fac
	if (ctx.cr0.gt) goto loc_88101FAC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x88101fac
	if (ctx.cr0.gt) goto loc_88101FAC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88101F28;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88101F34:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88101fac
	if (!ctx.cr0.lt) goto loc_88101FAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-23
	ctx.r10.s64 = -23;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r7,-8
	ctx.r5.s64 = ctx.r7.s64 + -524288;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x880244d0
	ctx.lr = 0x88101F78;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88101f84
	if (ctx.cr6.lt) goto loc_88101F84;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88101F84:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// bl 0x880244a8
	ctx.lr = 0x88101FAC;
	sub_880244A8(ctx, base);
loc_88101FAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88102C08) {
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
	ctx.lr = 0x88102C28;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021508
	ctx.lr = 0x88102C38;
	sub_88021508(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
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
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r5,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// stw r3,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// addi r5,r9,10648
	ctx.r5.s64 = ctx.r9.s64 + 10648;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x88102C94;
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

DEFINE_REX_FUNC(sub_881032B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x881032C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881032D0;
	sub_88023F40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x881032E4;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881033bc
	if (ctx.cr6.eq) goto loc_881033BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881033b0
	if (!ctx.cr0.lt) goto loc_881033B0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r25,114
	ctx.r25.s64 = 7471104;
	// lwz r29,28(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r9,48(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r10,52(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// addis r28,r10,-92
	ctx.r28.s64 = ctx.r10.s64 + -6029312;
	// add r27,r9,r25
	ctx.r27.u64 = ctx.r9.u64 + ctx.r25.u64;
loc_88103328:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88014188
	ctx.lr = 0x8810334C;
	sub_88014188(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// bne 0x88103328
	if (!ctx.cr0.eq) goto loc_88103328;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r29,24(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// subf r27,r25,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r25.u64;
loc_88103374:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88014188
	ctx.lr = 0x88103398;
	sub_88014188(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// bne 0x88103374
	if (!ctx.cr0.eq) goto loc_88103374;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_881033B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881033B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_881033BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x881033b4
	if (!ctx.cr0.lt) goto loc_881033B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-14
	ctx.r10.s64 = -14;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881044E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x881044F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88104504;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x88104518;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881045ec
	if (ctx.cr6.eq) goto loc_881045EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88104658
	if (!ctx.cr0.lt) goto loc_88104658;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r27,54
	ctx.r27.s64 = 3538944;
	// lis r28,68
	ctx.r28.s64 = 4456448;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// bl 0x88013940
	ctx.lr = 0x8810456C;
	sub_88013940(ctx, base);
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r5,r27,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r27.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// bl 0x88013940
	ctx.lr = 0x88104590;
	sub_88013940(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addis r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -524288;
	// bl 0x880244d0
	ctx.lr = 0x881045A4;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88104658
	if (ctx.cr6.lt) goto loc_88104658;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r3,10
	ctx.r3.s64 = ctx.r3.s64 + 10;
	// bl 0x8801a808
	ctx.lr = 0x881045C0;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r30,-10
	ctx.r3.s64 = ctx.r30.s64 + -10;
	// bl 0x8801a808
	ctx.lr = 0x881045D8;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881045EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88104658
	if (!ctx.cr0.lt) goto loc_88104658;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-4
	ctx.r10.s64 = -4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r8,-8
	ctx.r5.s64 = ctx.r8.s64 + -524288;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x880244d0
	ctx.lr = 0x88104628;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88104634
	if (ctx.cr6.lt) goto loc_88104634;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88104634:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x88104658;
	sub_880244A8(ctx, base);
loc_88104658:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88105A60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88105A68;
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
	ctx.lr = 0x88105A7C;
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
	ctx.lr = 0x88105A90;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88105be0
	if (ctx.cr6.eq) goto loc_88105BE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88105c40
	if (!ctx.cr0.lt) goto loc_88105C40;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x88105ACC;
	sub_8801A860(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// srawi r6,r7,12
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r5,-20
	ctx.r5.s64 = ctx.r5.s64 + -1310720;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88013ce0
	ctx.lr = 0x88105B10;
	sub_88013CE0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013ce0
	ctx.lr = 0x88105B38;
	sub_88013CE0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x88105c40
	if (ctx.cr0.gt) goto loc_88105C40;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bge cr6,0x88105b98
	if (!ctx.cr6.lt) goto loc_88105B98;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_88105B98:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x88105bac
	if (!ctx.cr6.lt) goto loc_88105BAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_88105BAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bgt 0x88105bd4
	if (ctx.cr0.gt) goto loc_88105BD4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88105BD4;
	sub_88021598(ctx, base);
loc_88105BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88105BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88105c40
	if (!ctx.cr0.lt) goto loc_88105C40;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-16
	ctx.r10.s64 = -16;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r8,-20
	ctx.r5.s64 = ctx.r8.s64 + -1310720;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x88105C24;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88105c30
	if (ctx.cr6.lt) goto loc_88105C30;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88105C30:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x88105C40;
	sub_880244A8(ctx, base);
loc_88105C40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881075B0) {
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
	ctx.lr = 0x881075D0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x881075E0;
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
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,6
	ctx.r6.s64 = 6;
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
	// addi r5,r5,29664
	ctx.r5.s64 = ctx.r5.s64 + 29664;
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
	// bl 0x880214b8
	ctx.lr = 0x8810763C;
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

DEFINE_REX_FUNC(sub_88108D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88108D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,188
	ctx.r11.s64 = ctx.r4.s64 + 188;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-29688
	ctx.r5.s64 = ctx.r9.s64 + -29688;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x88108D84;
	sub_88021E88(ctx, base);
	// lis r30,-30606
	ctx.r30.s64 = -2005794816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r30,17736
	ctx.r29.s64 = ctx.r30.s64 + 17736;
	// lis r8,-30704
	ctx.r8.s64 = -2012217344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,30296
	ctx.r5.s64 = ctx.r8.s64 + 30296;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x88021e88
	ctx.lr = 0x88108DAC;
	sub_88021E88(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,-31424
	ctx.r5.s64 = ctx.r7.s64 + -31424;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e88
	ctx.lr = 0x88108DC8;
	sub_88021E88(ctx, base);
	// stw r3,17736(r30)
	REX_STORE_U32(ctx.r30.u32 + 17736, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881090B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881090C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881090D0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x88021be0
	ctx.lr = 0x881090E4;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r4,r9,-24736
	ctx.r4.s64 = ctx.r9.s64 + -24736;
	// bl 0x88021ad0
	ctx.lr = 0x88109104;
	sub_88021AD0(ctx, base);
	// stw r3,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r3.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-28696
	ctx.r5.s64 = ctx.r8.s64 + -28696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810911C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88109DE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88109DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88109E00;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88109E14;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88109e54
	if (ctx.cr6.lt) goto loc_88109E54;
	// bne cr6,0x88109f50
	if (!ctx.cr6.eq) goto loc_88109F50;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6528
	ctx.r4.s64 = ctx.r11.s64 + -6528;
	// bl 0x88021e70
	ctx.lr = 0x88109E38;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x88109f54
	if (ctx.cr6.eq) goto loc_88109F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88109E54:
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r10,32104
	ctx.r11.s64 = ctx.r10.s64 + 32104;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r4,r9,-5712
	ctx.r4.s64 = ctx.r9.s64 + -5712;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addis r7,r8,64
	ctx.r7.s64 = ctx.r8.s64 + 4194304;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x88021d68
	ctx.lr = 0x88109EA0;
	sub_88021D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,168(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 168);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88109f24
	if (!ctx.cr6.eq) goto loc_88109F24;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88109ee4
	if (!ctx.cr6.eq) goto loc_88109EE4;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5896
	ctx.r4.s64 = ctx.r11.s64 + 5896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88109EE4;
	sub_880213F0(ctx, base);
loc_88109EE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88109f04
	if (!ctx.cr6.eq) goto loc_88109F04;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88109F04;
	sub_880213F0(ctx, base);
loc_88109F04:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88109f24
	if (!ctx.cr6.eq) goto loc_88109F24;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15928
	ctx.r4.s64 = ctx.r11.s64 + 15928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88109F24;
	sub_880213F0(ctx, base);
loc_88109F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x88021a28
	ctx.lr = 0x88109F30;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88109f50
	if (!ctx.cr6.eq) goto loc_88109F50;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1840
	ctx.r4.s64 = ctx.r11.s64 + 1840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88109F4C;
	sub_88021780(ctx, base);
	// stw r3,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
loc_88109F50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88109F54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810AF00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810AF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810AF18;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8810AF28;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8810afc4
	if (ctx.cr6.gt) goto loc_8810AFC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810afd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810AFD0;
	// bdzf 4*cr6+eq,0x8810b070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B070;
	// bdzf 4*cr6+eq,0x8810b0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B0F0;
	// bdzf 4*cr6+eq,0x8810b15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B15C;
	// bne cr6,0x8810b220
	if (!ctx.cr6.eq) goto loc_8810B220;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8810afc4
	if (!ctx.cr0.lt) goto loc_8810AFC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r8,-30704
	ctx.r8.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,13296
	ctx.r4.s64 = ctx.r8.s64 + 13296;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810AF94;
	sub_880213F0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r3,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r5,304
	ctx.r5.s64 = 19922944;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
loc_8810AFB4:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r4,-5712
	ctx.r4.s64 = ctx.r4.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810AFC4;
	sub_88021D68(ctx, base);
loc_8810AFC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810AFD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x8810afc4
	if (!ctx.cr0.lt) goto loc_8810AFC4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,2152
	ctx.r4.s64 = ctx.r9.s64 + 2152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88021780
	ctx.lr = 0x8810B008;
	sub_88021780(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r6,-30704
	ctx.r6.s64 = -2012217344;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,2152
	ctx.r4.s64 = ctx.r6.s64 + 2152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810B030;
	sub_88021780(ctx, base);
	// lis r5,120
	ctx.r5.s64 = 7864320;
	// lis r4,304
	ctx.r4.s64 = 19922944;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// lis r3,-30703
	ctx.r3.s64 = -2012151808;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r3,-5712
	ctx.r4.s64 = ctx.r3.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810B060;
	sub_88021D68(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810B070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810B07C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810afc4
	if (!ctx.cr6.eq) goto loc_8810AFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88021a28
	ctx.lr = 0x8810B090;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810afc4
	if (!ctx.cr6.eq) goto loc_8810AFC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x8810afc4
	if (!ctx.cr0.lt) goto loc_8810AFC4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12256
	ctx.r4.s64 = ctx.r10.s64 + 12256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810B0C4;
	sub_880213F0(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lis r7,120
	ctx.r7.s64 = 7864320;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r6,304
	ctx.r6.s64 = 19922944;
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r7,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// stw r6,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// b 0x8810afb4
	goto loc_8810AFB4;
loc_8810B0F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8810afc4
	if (!ctx.cr0.lt) goto loc_8810AFC4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,12840
	ctx.r4.s64 = ctx.r10.s64 + 12840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810B12C;
	sub_880213F0(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810B15C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88021698
	ctx.lr = 0x8810B168;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810afc4
	if (!ctx.cr6.eq) goto loc_8810AFC4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,3
	ctx.r10.s64 = 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bgt 0x8810afc4
	if (ctx.cr0.gt) goto loc_8810AFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021598
	ctx.lr = 0x8810B194;
	sub_88021598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88021598
	ctx.lr = 0x8810B1A0;
	sub_88021598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,2448
	ctx.r4.s64 = ctx.r10.s64 + 2448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810B1BC;
	sub_88021780(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r8,-30704
	ctx.r8.s64 = -2012217344;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,2448
	ctx.r4.s64 = ctx.r8.s64 + 2448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810B1DC;
	sub_88021780(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r5,304
	ctx.r5.s64 = 19922944;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r4,-5712
	ctx.r4.s64 = ctx.r4.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810B20C;
	sub_88021D68(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810B220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810B22C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810afc4
	if (!ctx.cr6.eq) goto loc_8810AFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88021a28
	ctx.lr = 0x8810B240;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810afc4
	if (!ctx.cr6.eq) goto loc_8810AFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88021598
	ctx.lr = 0x8810B254;
	sub_88021598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88021598
	ctx.lr = 0x8810B260;
	sub_88021598(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-17888
	ctx.r4.s64 = ctx.r11.s64 + -17888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810B274;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8810B280;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810D790) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810D798;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810D7A8;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8810D7B8;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8810d980
	if (ctx.cr6.gt) goto loc_8810D980;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810d850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810D850;
	// bdzf 4*cr6+eq,0x8810d8c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810D8C0;
	// bdzf 4*cr6+eq,0x8810d930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810D930;
	// bdzf 4*cr6+eq,0x8810d98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810D98C;
	// bdzf 4*cr6+eq,0x8810d9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810D9CC;
	// bne cr6,0x8810da0c
	if (!ctx.cr6.eq) goto loc_8810DA0C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x8810d980
	if (ctx.cr0.gt) goto loc_8810D980;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,224
	ctx.r9.s64 = 14680064;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-5712
	ctx.r4.s64 = ctx.r8.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810D824;
	sub_88021D68(ctx, base);
	// lis r7,-30704
	ctx.r7.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r7,2688
	ctx.r4.s64 = ctx.r7.s64 + 2688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810D838;
	sub_88021780(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810D850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810D85C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810d980
	if (!ctx.cr6.eq) goto loc_8810D980;
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,224
	ctx.r10.s64 = 14680064;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-5712
	ctx.r4.s64 = ctx.r9.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810D890;
	sub_88021D68(ctx, base);
	// lis r8,-30704
	ctx.r8.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r8,25056
	ctx.r4.s64 = ctx.r8.s64 + 25056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8810D8A4;
	sub_880213F0(ctx, base);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810D8C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x8810d980
	if (ctx.cr0.gt) goto loc_8810D980;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,224
	ctx.r9.s64 = 14680064;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-5712
	ctx.r4.s64 = ctx.r8.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810D8FC;
	sub_88021D68(ctx, base);
	// lis r7,-30704
	ctx.r7.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r7,3176
	ctx.r4.s64 = ctx.r7.s64 + 3176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810D910;
	sub_88021780(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810D930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88021a28
	ctx.lr = 0x8810D93C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810d980
	if (!ctx.cr6.eq) goto loc_8810D980;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x8810d980
	if (ctx.cr0.gt) goto loc_8810D980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021598
	ctx.lr = 0x8810D960;
	sub_88021598(ctx, base);
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,25784
	ctx.r4.s64 = ctx.r11.s64 + 25784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8810D974;
	sub_880213F0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8810D980:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810D98C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88021698
	ctx.lr = 0x8810D998;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810d980
	if (!ctx.cr6.eq) goto loc_8810D980;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,3416
	ctx.r4.s64 = ctx.r11.s64 + 3416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810D9B4;
	sub_88021780(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810D9CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88021a28
	ctx.lr = 0x8810D9D8;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810d980
	if (!ctx.cr6.eq) goto loc_8810D980;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810D9F4;
	sub_88021780(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810DA0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810DA18;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810d980
	if (!ctx.cr6.eq) goto loc_8810D980;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-10520
	ctx.r4.s64 = ctx.r11.s64 + -10520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810DA34;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8810DA40;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810F718;
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
	ctx.lr = 0x8810F728;
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
	ctx.lr = 0x8810F73C;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x8810f77c
	if (!ctx.cr0.lt) goto loc_8810F77C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// blt cr6,0x8810f780
	if (ctx.cr6.lt) goto loc_8810F780;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810F77C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810F780:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810FA60) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x8810FA8C;
	sub_88021898(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-1576
	ctx.r5.s64 = ctx.r9.s64 + -1576;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8810FAB0;
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

DEFINE_REX_FUNC(sub_8810FEB8) {
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
	// bl 0x88021898
	ctx.lr = 0x8810FEE4;
	sub_88021898(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-464
	ctx.r5.s64 = ctx.r9.s64 + -464;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8810FF08;
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

DEFINE_REX_FUNC(sub_881105B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x881105C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881105D4;
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
	ctx.lr = 0x881105E8;
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
	// bge 0x88110820
	if (!ctx.cr0.lt) goto loc_88110820;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r25,37
	ctx.r25.s64 = 2424832;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811061C;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,576(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88013ce0
	ctx.lr = 0x8811064C;
	sub_88013CE0(ctx, base);
	// lwz r8,576(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// lis r26,64
	ctx.r26.s64 = 4194304;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r8,r26
	ctx.r4.u64 = ctx.r8.u64 + ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88110664;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88013ce0
	ctx.lr = 0x88110694;
	sub_88013CE0(ctx, base);
	// lwz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r28,88
	ctx.r28.s64 = 5767168;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x881106B4;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,580(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// add r5,r3,r27
	ctx.r5.u64 = ctx.r3.u64 + ctx.r27.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x881106E8;
	sub_88013CE0(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// subf r4,r25,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x881106FC;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,576(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r25,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// bl 0x88013ce0
	ctx.lr = 0x8811072C;
	sub_88013CE0(ctx, base);
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88110740;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,576(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r26,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r26.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88013ce0
	ctx.lr = 0x88110770;
	sub_88013CE0(ctx, base);
	// lwz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88110788;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,580(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// add r5,r3,r27
	ctx.r5.u64 = ctx.r3.u64 + ctx.r27.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x881107BC;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x88110820
	if (!ctx.cr0.lt) goto loc_88110820;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r9,5
	ctx.r7.s64 = ctx.r9.s64 + 5;
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x88110804;
	sub_880244A8(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x88110820
	if (!ctx.cr0.lt) goto loc_88110820;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021598
	ctx.lr = 0x88110820;
	sub_88021598(ctx, base);
loc_88110820:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112DE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88112DF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88112DFC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88112E08;
	sub_88024030(ctx, base);
	// lwz r11,1072(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1072);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88112e98
	if (ctx.cr6.eq) goto loc_88112E98;
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
	// addis r30,r7,19
	ctx.r30.s64 = ctx.r7.s64 + 1245184;
	// addis r29,r5,-10
	ctx.r29.s64 = ctx.r5.s64 + -655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112E4C;
	sub_8801A9C8(ctx, base);
	// lwz r4,808(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 808);
	// bl 0x8813ff48
	ctx.lr = 0x88112E54;
	sub_8813FF48(ctx, base);
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88112f60
	if (ctx.cr6.eq) goto loc_88112F60;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14271
	ctx.r3.s64 = 14271;
	// bl 0x8801a9c8
	ctx.lr = 0x88112E74;
	sub_8801A9C8(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88112E8C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88112E98:
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
loc_88112ECC:
	// lwz r27,-4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88112f54
	if (ctx.cr6.eq) goto loc_88112F54;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,564(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112F14;
	sub_8801A9C8(ctx, base);
	// lwz r4,1056(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1056);
	// bl 0x8813ff48
	ctx.lr = 0x88112F1C;
	sub_8813FF48(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88112f54
	if (ctx.cr6.eq) goto loc_88112F54;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88112F3C;
	sub_8801A9C8(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88112F54;
	sub_8813FF90(ctx, base);
loc_88112F54:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x88112ecc
	if (!ctx.cr0.eq) goto loc_88112ECC;
loc_88112F60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88113E30;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88113E44;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88113E58;
	sub_88021BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88024030
	ctx.lr = 0x88113E64;
	sub_88024030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r3,3
	ctx.r29.s64 = ctx.r3.s64 + 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8811410c
	if (ctx.cr6.gt) goto loc_8811410C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88113efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88113EFC;
	// bdzf 4*cr6+eq,0x88114088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88114088;
	// bne cr6,0x8811409c
	if (!ctx.cr6.eq) goto loc_8811409C;
	// bl 0x880b1e10
	ctx.lr = 0x88113E8C;
	sub_880B1E10(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r30,r27,544
	ctx.r30.s64 = ctx.r27.s64 + 544;
	// lwz r7,280(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 280);
	// addi r28,r11,-26120
	ctx.r28.s64 = ctx.r11.s64 + -26120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x88113cc0
	ctx.lr = 0x88113EB0;
	sub_88113CC0(ctx, base);
	// addi r3,r28,192
	ctx.r3.s64 = ctx.r28.s64 + 192;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,280(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 280);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x88113cc0
	ctx.lr = 0x88113EC8;
	sub_88113CC0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r7,26
	ctx.r7.s64 = 26;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88113EFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88113f58
	if (ctx.cr6.eq) goto loc_88113F58;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x88113f58
	if (!ctx.cr0.eq) goto loc_88113F58;
	// bl 0x880b1c90
	ctx.lr = 0x88113F20;
	sub_880B1C90(ctx, base);
	// lwz r10,948(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 948);
	// addi r11,r27,848
	ctx.r11.s64 = ctx.r27.s64 + 848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88113f58
	if (!ctx.cr6.eq) goto loc_88113F58;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// addi r4,r9,248
	ctx.r4.s64 = ctx.r9.s64 + 248;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x88113F58;
	sub_88021780(ctx, base);
loc_88113F58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88113fac
	if (ctx.cr6.eq) goto loc_88113FAC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x88113fac
	if (!ctx.cr0.eq) goto loc_88113FAC;
	// bl 0x880b1a90
	ctx.lr = 0x88113F74;
	sub_880B1A90(ctx, base);
	// lwz r10,1072(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1072);
	// addi r11,r27,972
	ctx.r11.s64 = ctx.r27.s64 + 972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88113fac
	if (!ctx.cr6.eq) goto loc_88113FAC;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// addi r4,r9,248
	ctx.r4.s64 = ctx.r9.s64 + 248;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x88113FAC;
	sub_88021780(ctx, base);
loc_88113FAC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88114000
	if (ctx.cr6.eq) goto loc_88114000;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x88114000
	if (!ctx.cr0.eq) goto loc_88114000;
	// bl 0x880b1c90
	ctx.lr = 0x88113FC8;
	sub_880B1C90(ctx, base);
	// lwz r10,1196(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1196);
	// addi r11,r27,1096
	ctx.r11.s64 = ctx.r27.s64 + 1096;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88114000
	if (!ctx.cr6.eq) goto loc_88114000;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// addi r4,r9,768
	ctx.r4.s64 = ctx.r9.s64 + 768;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x88114000;
	sub_88021780(ctx, base);
loc_88114000:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88114054
	if (ctx.cr6.eq) goto loc_88114054;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x88114054
	if (!ctx.cr0.eq) goto loc_88114054;
	// bl 0x880b1a90
	ctx.lr = 0x8811401C;
	sub_880B1A90(ctx, base);
	// lwz r10,1320(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1320);
	// addi r11,r27,1220
	ctx.r11.s64 = ctx.r27.s64 + 1220;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88114054
	if (!ctx.cr6.eq) goto loc_88114054;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// addi r4,r9,768
	ctx.r4.s64 = ctx.r9.s64 + 768;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x88114054;
	sub_88021780(ctx, base);
loc_88114054:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8811410c
	if (!ctx.cr0.eq) goto loc_8811410C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88114088:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8811409C:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,21032
	ctx.r4.s64 = ctx.r11.s64 + 21032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x881140B0;
	sub_88021AD0(ctx, base);
	// lwz r10,1380(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,744(r27)
	REX_STORE_U32(ctx.r27.u32 + 744, ctx.r11.u32);
	// stw r11,748(r27)
	REX_STORE_U32(ctx.r27.u32 + 748, ctx.r11.u32);
	// blt cr6,0x881140f8
	if (ctx.cr6.lt) goto loc_881140F8;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,32(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,112
	ctx.r8.s64 = 112;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x881140F8;
	sub_880114D8(ctx, base);
loc_881140F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,1376(r27)
	REX_STORE_U32(ctx.r27.u32 + 1376, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8811410C;
	sub_88021C70(ctx, base);
loc_8811410C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881177B0) {
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
	// li r4,236
	ctx.r4.s64 = 236;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x881177D0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x881177D8;
	sub_88023F40(ctx, base);
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x881177E8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x881177F0;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x881177F4;
	sub_88068E60(ctx, base);
	// stw r3,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// stw r30,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x88117808;
	sub_88024028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x88117818;
	sub_880240B8(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r8,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r7,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x88117848;
	sub_8801A448(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x88117854;
	sub_88023C50(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-30703
	ctx.r5.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,30192
	ctx.r4.s64 = ctx.r5.s64 + 30192;
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// bl 0x88023e90
	ctx.lr = 0x8811787C;
	sub_88023E90(ctx, base);
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

DEFINE_REX_FUNC(sub_88118380) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118388;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88023f40
	ctx.lr = 0x88118390;
	sub_88023F40(ctx, base);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,536(r3)
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r10,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r10.u32);
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r9,696(r3)
	REX_STORE_U32(ctx.r3.u32 + 696, ctx.r9.u32);
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r8,776(r3)
	REX_STORE_U32(ctx.r3.u32 + 776, ctx.r8.u32);
	// lwz r7,112(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r7,856(r3)
	REX_STORE_U32(ctx.r3.u32 + 856, ctx.r7.u32);
	// lwz r6,524(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88118474
	if (ctx.cr6.eq) goto loc_88118474;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r30,40
	ctx.r30.s64 = 2621440;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,528
	ctx.r3.s64 = ctx.r3.s64 + 528;
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r11,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r9,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x881183EC;
	sub_88022110(ctx, base);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r8,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r8.u32);
	// stw r7,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r7.u32);
	// bl 0x88022110
	ctx.lr = 0x88118408;
	sub_88022110(ctx, base);
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r29,50
	ctx.r29.s64 = 3276800;
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r11,r29,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r10,r5,r30
	ctx.r10.u64 = ctx.r5.u64 + ctx.r30.u64;
	// stw r11,700(r31)
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// stw r10,704(r31)
	REX_STORE_U32(ctx.r31.u32 + 704, ctx.r10.u32);
	// bl 0x88022110
	ctx.lr = 0x88118430;
	sub_88022110(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r7,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r7.u32);
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// stw r6,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// bl 0x88022110
	ctx.lr = 0x88118454;
	sub_88022110(ctx, base);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r5,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r5.u32);
	// stw r10,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// bl 0x88022110
	ctx.lr = 0x88118474;
	sub_88022110(ctx, base);
loc_88118474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118B40;
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
	ctx.lr = 0x88118B54;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88021898
	ctx.lr = 0x88118B64;
	sub_88021898(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r7,-30088
	ctx.r5.s64 = ctx.r7.s64 + -30088;
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// bl 0x88021848
	ctx.lr = 0x88118B9C;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118DC0;
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
	ctx.lr = 0x88118DD0;
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
	ctx.lr = 0x88118DE4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88118e4c
	if (!ctx.cr0.lt) goto loc_88118E4C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,89
	ctx.r9.s64 = ctx.r11.s64 + 89;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r11,89
	ctx.r7.s64 = ctx.r11.s64 + 89;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x88118e4c
	if (ctx.cr6.gt) goto loc_88118E4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x88118E40;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88118E4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88119418;
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
	ctx.lr = 0x88119428;
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
	ctx.lr = 0x8811943C;
	sub_88021898(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge 0x8811946c
	if (!ctx.cr0.lt) goto loc_8811946C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// stw r8,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
loc_8811946C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119BB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88119BC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88119BD4;
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
	ctx.lr = 0x88119BE8;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88119cc0
	if (ctx.cr6.eq) goto loc_88119CC0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88119d50
	if (!ctx.cr0.lt) goto loc_88119D50;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,944(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 944);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r30,72(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r29,76(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// bne cr6,0x88119c44
	if (!ctx.cr6.eq) goto loc_88119C44;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013940
	ctx.lr = 0x88119C40;
	sub_88013940(ctx, base);
	// b 0x88119c84
	goto loc_88119C84;
loc_88119C44:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x88119C4C;
	sub_8801A448(ctx, base);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8801a448
	ctx.lr = 0x88119C58;
	sub_8801A448(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88013ce0
	ctx.lr = 0x88119C84;
	sub_88013CE0(ctx, base);
loc_88119C84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x88119d50
	if (ctx.cr0.gt) goto loc_88119D50;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021738
	ctx.lr = 0x88119CA0;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88119d50
	if (!ctx.cr6.eq) goto loc_88119D50;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88119CB4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88119CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88119d50
	if (!ctx.cr0.lt) goto loc_88119D50;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// andc r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x88119d34
	if (!ctx.cr0.eq) goto loc_88119D34;
	// addi r11,r9,-5
	ctx.r11.s64 = ctx.r9.s64 + -5;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bgt cr6,0x88119d34
	if (ctx.cr6.gt) goto loc_88119D34;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_88119D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r5,76(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x88119D44;
	sub_880244D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_88119D50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811B8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8811B8F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811B904;
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
	ctx.lr = 0x8811B918;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b9d8
	if (ctx.cr6.eq) goto loc_8811B9D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811ba70
	if (!ctx.cr0.lt) goto loc_8811BA70;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,48(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addis r5,r8,-16
	ctx.r5.s64 = ctx.r8.s64 + -1048576;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r3,15
	ctx.r3.s64 = 15;
	// beq cr6,0x8811b980
	if (ctx.cr6.eq) goto loc_8811B980;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addis r4,r4,30
	ctx.r4.s64 = ctx.r4.s64 + 1966080;
	// b 0x8811b988
	goto loc_8811B988;
loc_8811B980:
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addis r4,r4,-30
	ctx.r4.s64 = ctx.r4.s64 + -1966080;
loc_8811B988:
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8811B990;
	sub_88013CE0(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bgt 0x8811ba70
	if (ctx.cr0.gt) goto loc_8811BA70;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bgt 0x8811ba70
	if (ctx.cr0.gt) goto loc_8811BA70;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x8811B9CC;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8811B9D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811ba70
	if (!ctx.cr0.lt) goto loc_8811BA70;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r28,30
	ctx.r28.s64 = 1966080;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r6,76(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r5,72(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// add r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r5,r27,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811BA2C;
	sub_880244D0(ctx, base);
	// addi r4,r3,-80
	ctx.r4.s64 = ctx.r3.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r27,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r27.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811BA4C;
	sub_880244D0(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// li r5,-20
	ctx.r5.s64 = -20;
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_8811BA70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E0F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8811E0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811E108;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021508
	ctx.lr = 0x8811E11C;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811e1c0
	if (ctx.cr6.eq) goto loc_8811E1C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811e1e0
	if (!ctx.cr0.lt) goto loc_8811E1E0;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r9,-23776
	ctx.r11.s64 = ctx.r9.s64 + -23776;
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// subfic r4,r8,-5
	ctx.xer.ca = ctx.r8.u32 <= 4294967291;
	ctx.r4.u64 = static_cast<uint64_t>(-5) - ctx.r8.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r6,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8811e188
	if (ctx.cr6.eq) goto loc_8811E188;
	// subf r4,r10,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8811E188:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,242
	ctx.r3.s64 = 242;
	// bl 0x88023b90
	ctx.lr = 0x8811E198;
	sub_88023B90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8811e1e0
	if (ctx.cr0.gt) goto loc_8811E1E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021598
	ctx.lr = 0x8811E1B4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8811E1C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811e1e0
	if (!ctx.cr0.lt) goto loc_8811E1E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8811E1E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811EE40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811EE48;
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
	ctx.lr = 0x8811EE5C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x88021508
	ctx.lr = 0x8811EE6C;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r5,r7,-4880
	ctx.r5.s64 = ctx.r7.s64 + -4880;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811EEB0;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811F790) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811F798;
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
	ctx.lr = 0x8811F7AC;
	sub_88023F40(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x8811F7BC;
	sub_88021508(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// bge cr6,0x8811f818
	if (!ctx.cr6.lt) goto loc_8811F818;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
loc_8811F818:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-2832
	ctx.r5.s64 = ctx.r11.s64 + -2832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8811F82C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811FF28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811FF30;
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
	ctx.lr = 0x8811FF44;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x88021508
	ctx.lr = 0x8811FF54;
	sub_88021508(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// addi r5,r7,-528
	ctx.r5.s64 = ctx.r7.s64 + -528;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8811FF8C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88120710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88120718;
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
	ctx.lr = 0x8812072C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x88021508
	ctx.lr = 0x8812073C;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r5,r7,1464
	ctx.r5.s64 = ctx.r7.s64 + 1464;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x88120780;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88120E98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88120EA0;
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
	ctx.lr = 0x88120EB4;
	sub_88023F40(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x88120EC4;
	sub_88021508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// beq cr6,0x88120f14
	if (ctx.cr6.eq) goto loc_88120F14;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_88120F14:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,3216
	ctx.r5.s64 = ctx.r11.s64 + 3216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x88120F28;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881216B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881216C0;
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
	ctx.lr = 0x881216D4;
	sub_88023F40(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x881216E4;
	sub_88021508(ctx, base);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r7,20(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// bne cr6,0x88121750
	if (!ctx.cr6.eq) goto loc_88121750;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
loc_88121750:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,5024
	ctx.r5.s64 = ctx.r11.s64 + 5024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x88121764;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124E50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x88124E58;
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
	ctx.lr = 0x88124E68;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88124E74;
	sub_88024030(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r22,4(r29)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x88124EA4;
	sub_8801A860(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r3,12121
	ctx.r3.s64 = 12121;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addis r5,r9,41
	ctx.r5.s64 = ctx.r9.s64 + 2686976;
	// bne cr6,0x88124ed0
	if (!ctx.cr6.eq) goto loc_88124ED0;
	// li r3,12122
	ctx.r3.s64 = 12122;
loc_88124ED0:
	// bl 0x8801a9c8
	ctx.lr = 0x88124ED4;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124f0c
	if (ctx.cr6.eq) goto loc_88124F0C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124EE8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88124f0c
	if (ctx.cr6.eq) goto loc_88124F0C;
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
	ctx.lr = 0x88124F0C;
	sub_8813FF90(ctx, base);
loc_88124F0C:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8801a860
	ctx.lr = 0x88124F24;
	sub_8801A860(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88125234
	if (ctx.cr6.eq) goto loc_88125234;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12667
	ctx.r3.s64 = 12667;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88124F4C;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124f84
	if (ctx.cr6.eq) goto loc_88124F84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124F60;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88124f84
	if (ctx.cr6.eq) goto loc_88124F84;
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
	ctx.lr = 0x88124F84;
	sub_8813FF90(ctx, base);
loc_88124F84:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r26,52
	ctx.r26.s64 = 3407872;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r28,26
	ctx.r28.s64 = 1703936;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r26,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r26.u64;
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// li r3,12668
	ctx.r3.s64 = 12668;
	// bl 0x8801a9c8
	ctx.lr = 0x88124FB0;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88124fe8
	if (ctx.cr6.eq) goto loc_88124FE8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88124FC4;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88124fe8
	if (ctx.cr6.eq) goto loc_88124FE8;
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
	ctx.lr = 0x88124FE8;
	sub_8813FF90(ctx, base);
loc_88124FE8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,12669
	ctx.r3.s64 = 12669;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8812500C;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88125044
	if (ctx.cr6.eq) goto loc_88125044;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88125020;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88125044
	if (ctx.cr6.eq) goto loc_88125044;
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
	ctx.lr = 0x88125044;
	sub_8813FF90(ctx, base);
loc_88125044:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r8,20164
	ctx.r8.s64 = 1321467904;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r11,-18080
	ctx.r26.s64 = ctx.r11.s64 + -18080;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// ori r29,r8,60495
	ctx.r29.u64 = ctx.r8.u64 | 60495;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulhw r5,r11,r29
	ctx.r5.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lis r23,11
	ctx.r23.s64 = 720896;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r4,r23,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r23.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r26,896
	ctx.r3.s64 = ctx.r26.s64 + 896;
	// mulli r9,r10,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(13));
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r6,r24
	ctx.r5.u64 = ctx.r6.u64 + ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwzx r28,r7,r3
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r3,r28,12670
	ctx.r3.s64 = ctx.r28.s64 + 12670;
	// bl 0x8801a9c8
	ctx.lr = 0x881250AC;
	sub_8801A9C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881250e4
	if (ctx.cr6.eq) goto loc_881250E4;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881250C0;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881250e4
	if (ctx.cr6.eq) goto loc_881250E4;
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
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881250E4;
	sub_8813FF90(ctx, base);
loc_881250E4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r28,12678
	ctx.r3.s64 = ctx.r28.s64 + 12678;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r5,r8,r24
	ctx.r5.u64 = ctx.r8.u64 + ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88125108;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88125140
	if (ctx.cr6.eq) goto loc_88125140;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x8812511C;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88125140
	if (ctx.cr6.eq) goto loc_88125140;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88125140;
	sub_8813FF90(ctx, base);
loc_88125140:
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// addi r7,r26,896
	ctx.r7.s64 = ctx.r26.s64 + 896;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r24,40
	ctx.r24.s64 = 2621440;
	// mulhw r6,r8,r29
	ctx.r6.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32)) >> 32;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r25,30
	ctx.r25.s64 = 1966080;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r24,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r24.u64;
	// mulli r10,r11,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r5,r25,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r25.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwzx r29,r8,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r3,r29,12686
	ctx.r3.s64 = ctx.r29.s64 + 12686;
	// bl 0x8801a9c8
	ctx.lr = 0x88125194;
	sub_8801A9C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881251cc
	if (ctx.cr6.eq) goto loc_881251CC;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881251A8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881251cc
	if (ctx.cr6.eq) goto loc_881251CC;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x881251CC;
	sub_8813FF90(ctx, base);
loc_881251CC:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,12694
	ctx.r3.s64 = ctx.r29.s64 + 12694;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// subf r5,r25,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x881251F0;
	sub_8801A9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881252d8
	if (ctx.cr6.eq) goto loc_881252D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x88125204;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881252d8
	if (ctx.cr6.eq) goto loc_881252D8;
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
	ctx.lr = 0x88125228;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_88125234:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// li r26,3
	ctx.r26.s64 = 3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-18080
	ctx.r10.s64 = ctx.r10.s64 + -18080;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88125254:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881252cc
	if (!ctx.cr6.gt) goto loc_881252CC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88125288;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88125294;
	sub_8813FF08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881252cc
	if (ctx.cr6.eq) goto loc_881252CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x881252A8;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881252cc
	if (ctx.cr6.eq) goto loc_881252CC;
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
	ctx.lr = 0x881252CC;
	sub_8813FF90(ctx, base);
loc_881252CC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x88125254
	if (!ctx.cr0.eq) goto loc_88125254;
loc_881252D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88129060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88129068;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812907C;
	sub_88023F40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021be0
	ctx.lr = 0x8812908C;
	sub_88021BE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,216
	ctx.r11.s64 = 14155776;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// addi r4,r9,-19064
	ctx.r4.s64 = ctx.r9.s64 + -19064;
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// bl 0x88021d68
	ctx.lr = 0x881290D0;
	sub_88021D68(ctx, base);
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r31,52(r26)
	REX_STORE_U32(ctx.r26.u32 + 52, ctx.r31.u32);
	// stw r8,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r30.u32);
	// stw r7,56(r26)
	REX_STORE_U32(ctx.r26.u32 + 56, ctx.r7.u32);
	// stw r31,60(r26)
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r31.u32);
	// stw r30,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// bl 0x880244a8
	ctx.lr = 0x881290F8;
	sub_880244A8(ctx, base);
	// lis r6,-30701
	ctx.r6.s64 = -2012020736;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r6,-29664
	ctx.r5.s64 = ctx.r6.s64 + -29664;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021b90
	ctx.lr = 0x8812910C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88129A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88129A78;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88129A88;
	sub_88023F40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021be0
	ctx.lr = 0x88129A9C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x88129bdc
	if (ctx.cr6.gt) goto loc_88129BDC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88129b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88129B3C;
	// bdzf 4*cr6+eq,0x88129be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88129BE8;
	// bdzf 4*cr6+eq,0x88129c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88129C4C;
	// bdzf 4*cr6+eq,0x88129d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88129D0C;
	// bdzf 4*cr6+eq,0x88129d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88129D98;
	// bne cr6,0x88129e34
	if (!ctx.cr6.eq) goto loc_88129E34;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r26,416
	ctx.r10.s64 = ctx.r26.s64 + 416;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88129af0
	if (ctx.cr6.eq) goto loc_88129AF0;
loc_88129ADC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129AF0:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
loc_88129AF8:
	// rlwinm r11,r30,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29896
	ctx.r4.s64 = ctx.r10.s64 + -29896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129B18;
	sub_88021780(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,12(r29)
	ea = 12 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x88129af8
	if (ctx.cr6.lt) goto loc_88129AF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129B3C:
	// addi r11,r26,416
	ctx.r11.s64 = ctx.r26.s64 + 416;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r29,6
	ctx.r29.s64 = 6;
loc_88129B4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x88129B58;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88129b64
	if (ctx.cr6.eq) goto loc_88129B64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88129B64:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x88129b4c
	if (!ctx.cr0.eq) goto loc_88129B4C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
loc_88129B84:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880213f0
	ctx.lr = 0x88129BA0;
	sub_880213F0(ctx, base);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,528
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 528, ctx.xer);
	// blt cr6,0x88129b84
	if (ctx.cr6.lt) goto loc_88129B84;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27888
	ctx.r4.s64 = ctx.r11.s64 + -27888;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129BC8;
	sub_88021780(ctx, base);
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,380(r26)
	REX_STORE_U32(ctx.r26.u32 + 380, ctx.r3.u32);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_88129BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129BE8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r8,-19064
	ctx.r4.s64 = ctx.r8.s64 + -19064;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021d68
	ctx.lr = 0x88129C14;
	sub_88021D68(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88129adc
	if (!ctx.cr6.eq) goto loc_88129ADC;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129C34;
	sub_88021780(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,368(r26)
	REX_STORE_U32(ctx.r26.u32 + 368, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129C4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,368(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 368);
	// bl 0x88021a28
	ctx.lr = 0x88129C58;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x88129C6C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x88129bdc
	if (!ctx.cr0.lt) goto loc_88129BDC;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bgt cr6,0x88129ca4
	if (ctx.cr6.gt) goto loc_88129CA4;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_88129CA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-680
	ctx.r4.s64 = ctx.r10.s64 + -680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x88129CC0;
	sub_880213F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88129ce4
	if (!ctx.cr6.eq) goto loc_88129CE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_88129CE4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bgt 0x88129bdc
	if (ctx.cr0.gt) goto loc_88129BDC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129D0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x88129D18;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88129adc
	if (!ctx.cr6.eq) goto loc_88129ADC;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_88129D34:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880216e8
	ctx.lr = 0x88129D44;
	sub_880216E8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x88129d34
	if (!ctx.cr0.eq) goto loc_88129D34;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28128
	ctx.r4.s64 = ctx.r11.s64 + -28128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129D60;
	sub_88021780(ctx, base);
	// stw r3,368(r26)
	REX_STORE_U32(ctx.r26.u32 + 368, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,380(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 380);
	// bl 0x88021928
	ctx.lr = 0x88129D70;
	sub_88021928(ctx, base);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27712
	ctx.r4.s64 = ctx.r10.s64 + -27712;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129D84;
	sub_88021780(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129D98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,368(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 368);
	// bl 0x88021a28
	ctx.lr = 0x88129DA4;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r29,6
	ctx.r29.s64 = 6;
loc_88129DB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88021698
	ctx.lr = 0x88129DC4;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88129dd0
	if (ctx.cr6.eq) goto loc_88129DD0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88129DD0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x88129db8
	if (!ctx.cr0.eq) goto loc_88129DB8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r26,416
	ctx.r11.s64 = ctx.r26.s64 + 416;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_88129DF8:
	// rlwinm r11,r30,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88129E18;
	sub_88021780(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,12(r31)
	ea = 12 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x88129df8
	if (ctx.cr6.lt) goto loc_88129DF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88129E34:
	// addi r11,r26,416
	ctx.r11.s64 = ctx.r26.s64 + 416;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// li r30,6
	ctx.r30.s64 = 6;
loc_88129E44:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x88129E50;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88129e5c
	if (ctx.cr6.eq) goto loc_88129E5C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_88129E5C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x88129e44
	if (!ctx.cr0.eq) goto loc_88129E44;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88129bdc
	if (!ctx.cr6.eq) goto loc_88129BDC;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26184
	ctx.r4.s64 = ctx.r11.s64 + -26184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88129E84;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021c70
	ctx.lr = 0x88129E90;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812D620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x8812D628;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812D63C;
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
	ctx.lr = 0x8812D650;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812d814
	if (ctx.cr6.eq) goto loc_8812D814;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8812d888
	if (!ctx.cr0.lt) goto loc_8812D888;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r29,48
	ctx.r29.s64 = 3145728;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r27,r29,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r29.u64;
	// subf r4,r29,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D698;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d6b4
	if (ctx.cr6.lt) goto loc_8812D6B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x8812D6AC;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8812D6B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r29,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x8812D6D4;
	sub_88013940(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r27,r29,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r29.u64;
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D6F0;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d70c
	if (ctx.cr6.lt) goto loc_8812D70C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x8812D704;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8812D70C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013940
	ctx.lr = 0x8812D72C;
	sub_88013940(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8812d888
	if (ctx.cr0.gt) goto loc_8812D888;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r27,56
	ctx.r27.s64 = 3670016;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r29,24
	ctx.r29.s64 = 1572864;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r23,r27,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r27.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// subf r24,r29,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D76C;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x8812D790;
	sub_88013CE0(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r29,r29,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r30,r8,r27
	ctx.r30.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D7B0;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x8812D7D4;
	sub_88013CE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x8812d888
	if (ctx.cr0.gt) goto loc_8812D888;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x8812D808;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8812D814:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8812d888
	if (!ctx.cr0.lt) goto loc_8812D888;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,-6
	ctx.r10.s64 = -6;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lis r29,48
	ctx.r29.s64 = 3145728;
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r5,r29,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D864;
	sub_880244D0(ctx, base);
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812D880;
	sub_880244D0(ctx, base);
	// addi r10,r3,-56
	ctx.r10.s64 = ctx.r3.s64 + -56;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8812D888:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812FFE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8812FFE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812FFF8;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x8813000C;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88130124
	if (ctx.cr6.eq) goto loc_88130124;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88130118
	if (!ctx.cr0.lt) goto loc_88130118;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x88130048;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// srawi r3,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 11;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88130060
	if (ctx.cr6.eq) goto loc_88130060;
	// srawi r3,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 10;
loc_88130060:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r8,-14640
	ctx.r11.s64 = ctx.r8.s64 + -14640;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881300d8
	if (ctx.cr6.eq) goto loc_881300D8;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,7
	ctx.r8.s64 = 7;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x88013ce0
	ctx.lr = 0x881300CC;
	sub_88013CE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x881300f4
	goto loc_881300F4;
loc_881300D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x881300F4;
	sub_88013CE0(ctx, base);
loc_881300F4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_88130118:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8813011C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88130124:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8813011c
	if (!ctx.cr0.lt) goto loc_8813011C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// divw r7,r11,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132200) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88132208;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x88023f40
	ctx.lr = 0x88132218;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,408(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x880247e8
	ctx.lr = 0x88132228;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x88132238;
	sub_88069270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x881323ac
	if (ctx.cr6.lt) goto loc_881323AC;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88021618
	ctx.lr = 0x8813224C;
	sub_88021618(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88021cf0
	ctx.lr = 0x88132254;
	sub_88021CF0(ctx, base);
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8608
	ctx.r4.s64 = ctx.r11.s64 + 8608;
	// bl 0x88021ad0
	ctx.lr = 0x88132268;
	sub_88021AD0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r29.u32);
	// stw r29,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// stw r29,764(r31)
	REX_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// stw r29,888(r31)
	REX_STORE_U32(ctx.r31.u32 + 888, ctx.r29.u32);
	// stw r29,1012(r31)
	REX_STORE_U32(ctx.r31.u32 + 1012, ctx.r29.u32);
	// stw r29,1136(r31)
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r29.u32);
	// stw r29,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r29.u32);
	// stw r29,1384(r31)
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r29.u32);
	// stw r29,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r29.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88021a28
	ctx.lr = 0x8813229C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881322b0
	if (ctx.cr6.eq) goto loc_881322B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88021928
	ctx.lr = 0x881322B0;
	sub_88021928(ctx, base);
loc_881322B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021a28
	ctx.lr = 0x881322BC;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881322d0
	if (ctx.cr6.eq) goto loc_881322D0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881322e8
	if (ctx.cr6.eq) goto loc_881322E8;
loc_881322D0:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14528
	ctx.r4.s64 = ctx.r11.s64 + -14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x881322E4;
	sub_88021780(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_881322E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88021a28
	ctx.lr = 0x881322F4;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88132308
	if (ctx.cr6.eq) goto loc_88132308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88021928
	ctx.lr = 0x88132308;
	sub_88021928(ctx, base);
loc_88132308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x88021a28
	ctx.lr = 0x88132314;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88132328
	if (ctx.cr6.eq) goto loc_88132328;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88132340
	if (ctx.cr6.eq) goto loc_88132340;
loc_88132328:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14048
	ctx.r4.s64 = ctx.r11.s64 + -14048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8813233C;
	sub_88021780(ctx, base);
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_88132340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88021a28
	ctx.lr = 0x8813234C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88132360
	if (ctx.cr6.eq) goto loc_88132360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88021928
	ctx.lr = 0x88132360;
	sub_88021928(ctx, base);
loc_88132360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x88021a28
	ctx.lr = 0x8813236C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88132380
	if (ctx.cr6.eq) goto loc_88132380;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88132398
	if (ctx.cr6.eq) goto loc_88132398;
loc_88132380:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13568
	ctx.r4.s64 = ctx.r11.s64 + -13568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88132394;
	sub_88021780(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_88132398:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-11972(r10)
	REX_STORE_U32(ctx.r10.u32 + -11972, ctx.r29.u32);
	// bl 0x8809cb78
	ctx.lr = 0x881323AC;
	sub_8809CB78(ctx, base);
loc_881323AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88133FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88133FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88133FD8;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88133FEC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88134208
	if (ctx.cr6.gt) goto loc_88134208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88134020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88134020;
	// bdzf 4*cr6+eq,0x8813405c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813405C;
	// bdzf 4*cr6+eq,0x881340d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881340D0;
	// bdzf 4*cr6+eq,0x8813415c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813415C;
	// bne cr6,0x8813419c
	if (!ctx.cr6.eq) goto loc_8813419C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88134020:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88134208
	if (!ctx.cr0.lt) goto loc_88134208;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14288
	ctx.r4.s64 = ctx.r11.s64 + -14288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88134044;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,72(r28)
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8813405C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x88021a28
	ctx.lr = 0x88134068;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88134208
	if (!ctx.cr6.eq) goto loc_88134208;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// stw r29,1552(r28)
	REX_STORE_U32(ctx.r28.u32 + 1552, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x880213f0
	ctx.lr = 0x88134098;
	sub_880213F0(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,384
	ctx.r4.s64 = ctx.r9.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x881340C0;
	sub_880213F0(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881340D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x881340DC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88134208
	if (!ctx.cr6.eq) goto loc_88134208;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x88134208
	if (!ctx.cr0.lt) goto loc_88134208;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8813411c
	if (ctx.cr6.eq) goto loc_8813411C;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8813411C:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,968
	ctx.r4.s64 = ctx.r11.s64 + 968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88134134;
	sub_880213F0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x88134208
	if (ctx.cr0.gt) goto loc_88134208;
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
loc_8813415C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne cr6,0x88134208
	if (!ctx.cr6.eq) goto loc_88134208;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8813419C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x88134208
	if (!ctx.cr0.lt) goto loc_88134208;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,384
	ctx.r4.s64 = ctx.r9.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x881341D8;
	sub_880213F0(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r6,-30701
	ctx.r6.s64 = -2012020736;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,384
	ctx.r4.s64 = ctx.r6.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88134200;
	sub_880213F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
loc_88134208:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88137228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88137230;
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
	ctx.lr = 0x88137240;
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
	ctx.lr = 0x88137254;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x881372a0
	if (!ctx.cr0.lt) goto loc_881372A0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x881372a0
	if (ctx.cr6.lt) goto loc_881372A0;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x88137294;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_881372A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88137628) {
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
	// bl 0x88023f40
	ctx.lr = 0x88137640;
	sub_88023F40(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r9,70
	ctx.r9.s64 = 4587520;
	// lis r11,40
	ctx.r11.s64 = 2621440;
	// lis r10,100
	ctx.r10.s64 = 6553600;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,72(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r7,76(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// addis r5,r7,30
	ctx.r5.s64 = ctx.r7.s64 + 1966080;
	// stw r4,132(r8)
	REX_STORE_U32(ctx.r8.u32 + 132, ctx.r4.u32);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r31,r11,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addis r7,r5,-60
	ctx.r7.s64 = ctx.r5.s64 + -3932160;
	// stw r4,160(r8)
	REX_STORE_U32(ctx.r8.u32 + 160, ctx.r4.u32);
	// subf r30,r11,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r31,164(r8)
	REX_STORE_U32(ctx.r8.u32 + 164, ctx.r31.u32);
	// addis r5,r5,-20
	ctx.r5.s64 = ctx.r5.s64 + -1310720;
	// stw r7,136(r8)
	REX_STORE_U32(ctx.r8.u32 + 136, ctx.r7.u32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r30,188(r8)
	REX_STORE_U32(ctx.r8.u32 + 188, ctx.r30.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r5,192(r8)
	REX_STORE_U32(ctx.r8.u32 + 192, ctx.r5.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r11,216(r8)
	REX_STORE_U32(ctx.r8.u32 + 216, ctx.r11.u32);
	// stw r5,220(r8)
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r5.u32);
	// stw r10,244(r8)
	REX_STORE_U32(ctx.r8.u32 + 244, ctx.r10.u32);
	// stw r31,248(r8)
	REX_STORE_U32(ctx.r8.u32 + 248, ctx.r31.u32);
	// stw r9,272(r8)
	REX_STORE_U32(ctx.r8.u32 + 272, ctx.r9.u32);
	// stw r7,276(r8)
	REX_STORE_U32(ctx.r8.u32 + 276, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_88137BE0) {
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
	ctx.lr = 0x88137C00;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x88021508
	ctx.lr = 0x88137C10;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lis r5,-30701
	ctx.r5.s64 = -2012020736;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// addi r5,r5,31432
	ctx.r5.s64 = ctx.r5.s64 + 31432;
	// stw r6,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x88137C58;
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

DEFINE_REX_FUNC(sub_88138690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88138698;
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
	ctx.lr = 0x881386AC;
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
	ctx.lr = 0x881386C0;
	sub_88021508(ctx, base);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,-11916(r10)
	REX_STORE_U32(ctx.r10.u32 + -11916, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bge 0x881386f0
	if (!ctx.cr0.lt) goto loc_881386F0;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,-11916(r10)
	REX_STORE_U32(ctx.r10.u32 + -11916, ctx.r11.u32);
loc_881386F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88138798
	if (ctx.cr6.eq) goto loc_88138798;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881387b8
	if (!ctx.cr0.lt) goto loc_881387B8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r30,72(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,76(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x88138738;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r8,33
	ctx.r8.s64 = 33;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x88013ce0
	ctx.lr = 0x88138760;
	sub_88013CE0(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x881387b8
	if (ctx.cr0.gt) goto loc_881387B8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bgt 0x881387b8
	if (ctx.cr0.gt) goto loc_881387B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x8813878C;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88138798:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x881387b8
	if (!ctx.cr0.lt) goto loc_881387B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_881387B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88139258;
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
	ctx.lr = 0x8813926C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x8813927C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r5,r8,-28432
	ctx.r5.s64 = ctx.r8.s64 + -28432;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x881392C0;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881397F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88139800;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88139810;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x88139824;
	sub_88021508(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88139888
	if (!ctx.cr6.eq) goto loc_88139888;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88139894
	if (ctx.cr6.eq) goto loc_88139894;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88139888
	if (!ctx.cr0.lt) goto loc_88139888;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88023b90
	ctx.lr = 0x8813987C;
	sub_88023B90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_88139888:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8813988C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88139894:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8813988c
	if (!ctx.cr0.lt) goto loc_8813988C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813B1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8813B1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813B1E0;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813B1F0;
	sub_88021BE0(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8813b214
	if (!ctx.cr6.eq) goto loc_8813B214;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813b148
	ctx.lr = 0x8813B214;
	sub_8813B148(ctx, base);
loc_8813B214:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8813b294
	if (ctx.cr6.lt) goto loc_8813B294;
	// beq cr6,0x8813b264
	if (ctx.cr6.eq) goto loc_8813B264;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8813b2d4
	if (!ctx.cr6.lt) goto loc_8813B2D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813b2a0
	if (!ctx.cr6.eq) goto loc_8813B2A0;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18080
	ctx.r4.s64 = ctx.r11.s64 + -18080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813B24C;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8813B258;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813B264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88021698
	ctx.lr = 0x8813B270;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813b2d4
	if (!ctx.cr6.eq) goto loc_8813B2D4;
	// li r11,416
	ctx.r11.s64 = 416;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813B294:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813b2b4
	if (ctx.cr6.eq) goto loc_8813B2B4;
loc_8813B2A0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813B2B4:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29648
	ctx.r4.s64 = ctx.r11.s64 + -29648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813B2C8;
	sub_880213F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8813B2D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8813C2E0;
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
	ctx.lr = 0x8813C2F0;
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
	ctx.lr = 0x8813C304;
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
	// bne cr6,0x8813c328
	if (!ctx.cr6.eq) goto loc_8813C328;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813b148
	ctx.lr = 0x8813C328;
	sub_8813B148(ctx, base);
loc_8813C328:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8813c3b4
	if (ctx.cr6.lt) goto loc_8813C3B4;
	// beq cr6,0x8813c378
	if (ctx.cr6.eq) goto loc_8813C378;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8813c44c
	if (!ctx.cr6.lt) goto loc_8813C44C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813c3c0
	if (!ctx.cr6.eq) goto loc_8813C3C0;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14104
	ctx.r4.s64 = ctx.r11.s64 + -14104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813C360;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8813C36C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813C378:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c398
	if (ctx.cr6.eq) goto loc_8813C398;
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
loc_8813C398:
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
loc_8813C3B4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813c3d4
	if (ctx.cr6.eq) goto loc_8813C3D4;
loc_8813C3C0:
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
loc_8813C3D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,288(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x88021928
	ctx.lr = 0x8813C3E0;
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
	ctx.lr = 0x8813C3F4;
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
	// bne cr6,0x8813c440
	if (!ctx.cr6.eq) goto loc_8813C440;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r26,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r26.u32);
loc_8813C41C:
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
	ctx.lr = 0x8813C434;
	sub_88023B90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8813c41c
	if (ctx.cr6.lt) goto loc_8813C41C;
loc_8813C440:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r26,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_8813C44C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8813D658;
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
	ctx.lr = 0x8813D668;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x8813D678;
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
	ctx.lr = 0x8813D690;
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
	// bl 0x8813d270
	ctx.lr = 0x8813D6B8;
	sub_8813D270(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8813d768
	if (!ctx.cr6.eq) goto loc_8813D768;
	// lwz r28,72(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88024498
	ctx.lr = 0x8813D6D4;
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
	ctx.lr = 0x8813D6F4;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8801a808
	ctx.lr = 0x8813D704;
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
	ctx.lr = 0x8813D720;
	sub_8801A3E0(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8813d760
	if (!ctx.cr6.gt) goto loc_8813D760;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8813d754
	if (!ctx.cr0.lt) goto loc_8813D754;
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
loc_8813D754:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8813d768
	if (ctx.cr6.gt) goto loc_8813D768;
loc_8813D760:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8813D768:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813d7a4
	if (ctx.cr6.eq) goto loc_8813D7A4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8813d7a4
	if (!ctx.cr0.lt) goto loc_8813D7A4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// stw r6,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
loc_8813D7A4:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8813d828
	if (ctx.cr6.gt) goto loc_8813D828;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-10872
	ctx.r4.s64 = ctx.r9.s64 + -10872;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x8813D7D4;
	sub_88021D68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x88021a28
	ctx.lr = 0x8813D7E0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813d828
	if (!ctx.cr6.eq) goto loc_8813D828;
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813d818
	if (!ctx.cr6.eq) goto loc_8813D818;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// bl 0x88021780
	ctx.lr = 0x8813D808;
	sub_88021780(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8813D818:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r4,r11,30128
	ctx.r4.s64 = ctx.r11.s64 + 30128;
	// bl 0x88021780
	ctx.lr = 0x8813D824;
	sub_88021780(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
loc_8813D828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FD10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8813FD18;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// lbz r27,295(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 295);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,303(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 303);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r4,311(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 311);
	// lbz r26,287(r1)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 287);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lbz r25,279(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 279);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// stb r3,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r27,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r27.u8);
	// stb r26,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// lwz r11,692(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 692);
	// stb r25,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813FD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x8813fc30
	ctx.lr = 0x8813FD84;
	sub_8813FC30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88140080) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,768(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 768);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88140150) {
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
	// lis r31,-30596
	ctx.r31.s64 = -2005139456;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r11,20876(r31)
	REX_STORE_U32(ctx.r31.u32 + 20876, ctx.r11.u32);
	// lwz r11,18740(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18740);
	// lwz r9,1080(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88140184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20876(r31)
	REX_STORE_U32(ctx.r31.u32 + 20876, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_88140560) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,-9700(r10)
	REX_STORE_U32(ctx.r10.u32 + -9700, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88140588) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lwz r11,18740(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 18740);
	// subfic r3,r10,312
	ctx.xer.ca = ctx.r10.u32 <= 312;
	ctx.r3.u64 = static_cast<uint64_t>(312) - ctx.r10.u64;
	// lwz r8,820(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88140758) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x88140768
	if (ctx.cr6.lt) goto loc_88140768;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88140768:
	// lis r10,-30596
	ctx.r10.s64 = -2005139456;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,21460(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21460);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21460(r10)
	REX_STORE_U32(ctx.r10.u32 + 21460, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88140B50) {
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
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,804(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 804);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88140B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_88140D8C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88140dc0
	if (!ctx.cr6.eq) goto loc_88140DC0;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,-9680(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9680);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x88140dc0
	if (ctx.cr6.eq) goto loc_88140DC0;
	// bl 0x88141c80
	ctx.lr = 0x88140DC0;
	sub_88141C80(ctx, base);
loc_88140DC0:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_17) {
	REX_FUNC_PROLOGUE();
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_24) {
	REX_FUNC_PROLOGUE();
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_29) {
	REX_FUNC_PROLOGUE();
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_21) {
	REX_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_22) {
	REX_FUNC_PROLOGUE();
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_23) {
	REX_FUNC_PROLOGUE();
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_22) {
	REX_FUNC_PROLOGUE();
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_24) {
	REX_FUNC_PROLOGUE();
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88141AC8) {
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
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21124
	ctx.r11.s64 = ctx.r11.s64 + 21124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x881439d8
	ctx.lr = 0x88141AF4;
	sub_881439D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88141b04
	if (ctx.cr0.eq) goto loc_88141B04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88140f40
	ctx.lr = 0x88141B04;
	sub_88140F40(ctx, base);
loc_88141B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_88141EA0) {
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
	// lis r30,-30692
	ctx.r30.s64 = -2011430912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-9680(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -9680);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x88141ef4
	if (ctx.cr6.eq) goto loc_88141EF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88141ee0
	if (!ctx.cr6.eq) goto loc_88141EE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8814a1e0
	ctx.lr = 0x88141ED8;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-9680(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -9680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88141EE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8814a1f0
	ctx.lr = 0x88141EEC;
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88141de0
	ctx.lr = 0x88141EF4;
	sub_88141DE0(ctx, base);
loc_88141EF4:
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

DEFINE_REX_FUNC(sub_881422A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881422B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x88141cc8
	ctx.lr = 0x881422C0;
	sub_88141CC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x881422d0
	if (!ctx.cr0.eq) goto loc_881422D0;
loc_881422C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88142484
	goto loc_88142484;
loc_881422D0:
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_881422D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881422f4
	if (ctx.cr6.eq) goto loc_881422F4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x881422d8
	if (ctx.cr6.lt) goto loc_881422D8;
loc_881422F4:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88142310
	if (!ctx.cr6.lt) goto loc_88142310;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88142314
	if (ctx.cr6.eq) goto loc_88142314;
loc_88142310:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88142314:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881422c8
	if (ctx.cr6.eq) goto loc_881422C8;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881422c8
	if (ctx.cr6.eq) goto loc_881422C8;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x8814233c
	if (!ctx.cr6.eq) goto loc_8814233C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x88142484
	goto loc_88142484;
loc_8814233C:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x88142480
	if (ctx.cr6.eq) goto loc_88142480;
	// lwz r28,96(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x88142470
	if (!ctx.cr6.eq) goto loc_88142470;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,36
	ctx.r10.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88142364:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x88142364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88142364;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,100(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88142398
	if (!ctx.cr6.eq) goto loc_88142398;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x88142454
	goto loc_88142454;
loc_88142398:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881423b0
	if (!ctx.cr6.eq) goto loc_881423B0;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x88142454
	goto loc_88142454;
loc_881423B0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881423c8
	if (!ctx.cr6.eq) goto loc_881423C8;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x88142454
	goto loc_88142454;
loc_881423C8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881423e0
	if (!ctx.cr6.eq) goto loc_881423E0;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x88142454
	goto loc_88142454;
loc_881423E0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881423f8
	if (!ctx.cr6.eq) goto loc_881423F8;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x88142454
	goto loc_88142454;
loc_881423F8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88142410
	if (!ctx.cr6.eq) goto loc_88142410;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x88142454
	goto loc_88142454;
loc_88142410:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88142428
	if (!ctx.cr6.eq) goto loc_88142428;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x88142454
	goto loc_88142454;
loc_88142428:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,693
	ctx.r10.u64 = ctx.r10.u64 | 693;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88142440
	if (!ctx.cr6.eq) goto loc_88142440;
	// li r11,141
	ctx.r11.s64 = 141;
	// b 0x88142454
	goto loc_88142454;
loc_88142440:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,692
	ctx.r10.u64 = ctx.r10.u64 | 692;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88142458
	if (!ctx.cr6.eq) goto loc_88142458;
	// li r11,142
	ctx.r11.s64 = 142;
loc_88142454:
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_88142458:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88142468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x8814247c
	goto loc_8814247C;
loc_88142470:
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8814247C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8814247C:
	// stw r28,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_88142480:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_88142484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143B18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30595
	ctx.r10.s64 = -2005073920;
	// addi r11,r11,15040
	ctx.r11.s64 = ctx.r11.s64 + 15040;
	// stw r11,22000(r10)
	REX_STORE_U32(ctx.r10.u32 + 22000, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143BA8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143F50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88143F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88143e70
	ctx.lr = 0x88143F78;
	sub_88143E70(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x881458b8
	ctx.lr = 0x88143F94;
	sub_881458B8(ctx, base);
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lha r10,96(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 96));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x88141678
	ctx.lr = 0x88143FBC;
	sub_88141678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88143fd4
	if (!ctx.cr0.eq) goto loc_88143FD4;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88143FD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88143400
	ctx.lr = 0x88143FEC;
	sub_88143400(ctx, base);
}

DEFINE_REX_FUNC(sub_881464C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x881464C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// li r27,16462
	ctx.r27.s64 = 16462;
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// beq cr6,0x881466b0
	if (ctx.cr6.eq) goto loc_881466B0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_881464F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x881410a0
	ctx.lr = 0x88146504;
	sub_881410A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88146580
	if (ctx.cr6.lt) goto loc_88146580;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x88146584
	if (!ctx.cr6.lt) goto loc_88146584;
loc_88146580:
	// li r9,1
	ctx.r9.s64 = 1;
loc_88146584:
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881465c0
	if (ctx.cr6.eq) goto loc_881465C0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881465a8
	if (ctx.cr6.lt) goto loc_881465A8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881465ac
	if (!ctx.cr6.lt) goto loc_881465AC;
loc_881465A8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_881465AC:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881465c0
	if (ctx.cr6.eq) goto loc_881465C0;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_881465C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881465e0
	if (ctx.cr6.lt) goto loc_881465E0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x881465e4
	if (!ctx.cr6.lt) goto loc_881465E4;
loc_881465E0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_881465E4:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881465fc
	if (ctx.cr6.eq) goto loc_881465FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_881465FC:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88146658
	if (ctx.cr6.lt) goto loc_88146658;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8814665c
	if (!ctx.cr6.lt) goto loc_8814665C;
loc_88146658:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8814665C:
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88146698
	if (ctx.cr6.eq) goto loc_88146698;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x88146680
	if (ctx.cr6.lt) goto loc_88146680;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88146684
	if (!ctx.cr6.lt) goto loc_88146684;
loc_88146680:
	// li r10,1
	ctx.r10.s64 = 1;
loc_88146684:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88146698
	if (ctx.cr6.eq) goto loc_88146698;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88146698:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x881464f4
	if (!ctx.cr0.eq) goto loc_881464F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8814673c
	if (!ctx.cr6.eq) goto loc_8814673C;
loc_881466B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881466b0
	if (ctx.cr6.eq) goto loc_881466B0;
	// b 0x8814673c
	goto loc_8814673C;
loc_881466F8:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8814673C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881466f8
	if (ctx.cr0.eq) goto loc_881466F8;
	// sth r27,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88149DD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88149dfc
	if (ctx.cr6.eq) goto loc_88149DFC;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x8814a230
	ctx.lr = 0x88149DFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_88149DFC:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149E60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30699
	ctx.r9.s64 = -2011889664;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,-24992
	ctx.r9.s64 = ctx.r9.s64 + -24992;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x88149ec4
	if (ctx.cr6.eq) goto loc_88149EC4;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x88149ea4
	if (!ctx.cr6.gt) goto loc_88149EA4;
	// li r11,15
	ctx.r11.s64 = 15;
loc_88149EA4:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88149ec8
	if (ctx.cr6.eq) goto loc_88149EC8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88141528
	ctx.lr = 0x88149EC0;
	sub_88141528(ctx, base);
	// b 0x88149ec8
	goto loc_88149EC8;
loc_88149EC4:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_88149EC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814a300
	ctx.lr = 0x88149ED0;
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8814A160) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8814A178) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8814a190
	if (!ctx.cr6.eq) goto loc_8814A190;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_8814A190:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

