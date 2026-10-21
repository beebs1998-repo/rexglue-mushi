#include "mushi_funcs.10.h"

DEFINE_REX_FUNC(sub_88010308) {
	REX_FUNC_PROLOGUE();
	// stw r4,5872(r3)
	REX_STORE_U32(ctx.r3.u32 + 5872, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88010BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88010BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-30692
	ctx.r30.s64 = -2011430912;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r29,r30,-6864
	ctx.r29.s64 = ctx.r30.s64 + -6864;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,312
	ctx.r5.s64 = 312;
	// addi r3,r10,-6848
	ctx.r3.s64 = ctx.r10.s64 + -6848;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x88010C0C;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// stw r10,-6864(r30)
	REX_STORE_U32(ctx.r30.u32 + -6864, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,1512
	ctx.r4.s64 = ctx.r9.s64 + 1512;
	// bl 0x8801b478
	ctx.lr = 0x88010C2C;
	sub_8801B478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88011B40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x88011B48;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x88011bcc
	if (!ctx.cr6.lt) goto loc_88011BCC;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r7,40(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r8,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// blt cr6,0x88011b98
	if (ctx.cr6.lt) goto loc_88011B98;
	// stw r6,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
loc_88011B98:
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 18);
	// li r22,10
	ctx.r22.s64 = 10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88011c14
	if (ctx.cr6.lt) goto loc_88011C14;
	// beq cr6,0x88011bd8
	if (ctx.cr6.eq) goto loc_88011BD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88011c1c
	if (!ctx.cr6.lt) goto loc_88011C1C;
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88011c1c
	if (ctx.cr6.gt) goto loc_88011C1C;
loc_88011BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
loc_88011BD8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88011c1c
	if (!ctx.cr6.lt) goto loc_88011C1C;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divwu r9,r9,r22
	ctx.r9.u64 = uint32_t(ctx.r22.u32 ? ctx.r9.u32 / ctx.r22.u32 : 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88011c1c
	if (ctx.cr6.lt) goto loc_88011C1C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r10,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r10.u8);
	// b 0x88011c1c
	goto loc_88011C1C;
loc_88011C14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
loc_88011C1C:
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// lwz r27,40(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r26,44(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// ori r30,r30,34464
	ctx.r30.u64 = ctx.r30.u64 | 34464;
	// lwz r25,60(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88011cc4
	if (ctx.cr6.eq) goto loc_88011CC4;
	// lis r24,10
	ctx.r24.s64 = 655360;
loc_88011C44:
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw. r28,r29,r30
	ctx.r28.u64 = uint32_t((ctx.r30.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r29.s32 / ctx.r30.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq 0x88011c68
	if (ctx.cr0.eq) goto loc_88011C68;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x88011c70
	goto loc_88011C70;
loc_88011C68:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88011cb0
	if (ctx.cr6.eq) goto loc_88011CB0;
loc_88011C70:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,650
	ctx.r3.s64 = ctx.r28.s64 + 650;
	// bl 0x8801a9c8
	ctx.lr = 0x88011C84;
	sub_8801A9C8(ctx, base);
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88011CA0;
	sub_8813FF90(ctx, base);
	// lis r4,224
	ctx.r4.s64 = 14680064;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r4,r4,49344
	ctx.r4.u64 = ctx.r4.u64 | 49344;
	// bl 0x8813ff48
	ctx.lr = 0x88011CB0;
	sub_8813FF48(ctx, base);
loc_88011CB0:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// divw. r30,r30,r22
	ctx.r30.u64 = uint32_t((ctx.r22.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r22.s32 == -1)) ? ctx.r30.s32 / ctx.r22.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// bne 0x88011c44
	if (!ctx.cr0.eq) goto loc_88011C44;
loc_88011CC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88014188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x88014190;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88014570
	if (!ctx.cr6.gt) goto loc_88014570;
	// lis r24,-30692
	ctx.r24.s64 = -2011430912;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r29,-6428(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + -6428);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r18,16
	ctx.r18.s64 = 16;
	// li r17,8
	ctx.r17.s64 = 8;
	// ori r19,r10,50000
	ctx.r19.u64 = ctx.r10.u64 | 50000;
	// ori r22,r8,57352
	ctx.r22.u64 = ctx.r8.u64 | 57352;
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// lis r26,-30692
	ctx.r26.s64 = -2011430912;
	// lis r23,-30692
	ctx.r23.s64 = -2011430912;
loc_88014204:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88014558
	if (ctx.cr6.eq) goto loc_88014558;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88014558
	if (!ctx.cr6.eq) goto loc_88014558;
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// lwz r11,-6152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6152);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88014558
	if (!ctx.cr6.lt) goto loc_88014558;
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
	// bge cr6,0x88014558
	if (!ctx.cr6.lt) goto loc_88014558;
	// bl 0x880103a0
	ctx.lr = 0x88014258;
	sub_880103A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88014554
	if (!ctx.cr6.eq) goto loc_88014554;
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
	// beq cr6,0x880142c0
	if (ctx.cr6.eq) goto loc_880142C0;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8801428C:
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
	// bne cr6,0x8801428c
	if (!ctx.cr6.eq) goto loc_8801428C;
loc_880142C0:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r16,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r9,r11,212
	ctx.r9.s64 = ctx.r11.s64 + 212;
	// stw r15,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// sth r27,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// sth r20,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r20.u16);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x880690e8
	ctx.lr = 0x880142E8;
	sub_880690E8(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r7,r3,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r3.u64;
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r11,-6432(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -6432);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r6,r11,r14
	ctx.r6.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stw r30,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// sth r6,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r6.u16);
	// lwz r4,-6440(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880143d0
	if (!ctx.cr6.eq) goto loc_880143D0;
	// bl 0x88069640
	ctx.lr = 0x88014324;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880143a0
	if (ctx.cr6.eq) goto loc_880143A0;
	// stw r18,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r18.u32);
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
	ctx.lr = 0x88014354;
	sub_880697C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880143b4
	if (ctx.cr6.eq) goto loc_880143B4;
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
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// sth r8,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r8.u16);
	// blt cr6,0x880143b4
	if (ctx.cr6.lt) goto loc_880143B4;
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
	// b 0x880143b4
	goto loc_880143B4;
loc_880143A0:
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
loc_880143B4:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x880143fc
	if (ctx.cr6.gt) goto loc_880143FC;
	// li r11,24
	ctx.r11.s64 = 24;
	// sth r11,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// b 0x880143fc
	goto loc_880143FC;
loc_880143D0:
	// lwz r11,-6440(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880143fc
	if (!ctx.cr6.eq) goto loc_880143FC;
	// bl 0x88069640
	ctx.lr = 0x880143E0;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880143fc
	if (ctx.cr6.eq) goto loc_880143FC;
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
loc_880143FC:
	// lwz r11,-6440(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + -6440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88014468
	if (ctx.cr6.lt) goto loc_88014468;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,-11976(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88014428
	if (ctx.cr6.eq) goto loc_88014428;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88014468
	goto loc_88014468;
loc_88014428:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,-11944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88014448
	if (ctx.cr6.eq) goto loc_88014448;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88014468
	goto loc_88014468;
loc_88014448:
	// bl 0x88069640
	ctx.lr = 0x8801444C;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88014468
	if (ctx.cr6.eq) goto loc_88014468;
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
loc_88014468:
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// clrlwi r10,r4,23
	ctx.r10.u64 = ctx.r4.u32 & 0x1FF;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// sth r10,38(r31)
	REX_STORE_U16(ctx.r31.u32 + 38, ctx.r10.u16);
	// bl 0x8801a860
	ctx.lr = 0x88014488;
	sub_8801A860(ctx, base);
	// stw r30,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stb r30,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stb r30,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r30.u8);
	// stb r27,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r27.u8);
	// sth r30,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r30.u16);
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
	// bne cr6,0x880144e8
	if (!ctx.cr6.eq) goto loc_880144E8;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// blt cr6,0x880144ec
	if (ctx.cr6.lt) goto loc_880144EC;
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// stw r27,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// ble cr6,0x880144d8
	if (!ctx.cr6.gt) goto loc_880144D8;
	// li r11,46
	ctx.r11.s64 = 46;
loc_880144D8:
	// li r10,5
	ctx.r10.s64 = 5;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stb r9,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// b 0x880144ec
	goto loc_880144EC;
loc_880144E8:
	// stb r17,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r17.u8);
loc_880144EC:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_88014500:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88014500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88014500;
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801452c
	if (ctx.cr6.eq) goto loc_8801452C;
	// lwzx r11,r29,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8801453c
	goto loc_8801453C;
loc_8801452C:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,57348
	ctx.r10.u64 = ctx.r11.u64 | 57348;
	// stwx r31,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8801453C:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stwx r31,r29,r22
	REX_STORE_U32(ctx.r29.u32 + ctx.r22.u32, ctx.r31.u32);
	// sth r9,0(r25)
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r9.u16);
loc_88014554:
	// lwz r29,-6428(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + -6428);
loc_88014558:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r21,r21,r10
	ctx.r21.u64 = ctx.r21.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x88014204
	if (!ctx.cr0.eq) goto loc_88014204;
loc_88014570:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88017858) {
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
	ctx.lr = 0x88017870;
	sub_88014D38(ctx, base);
	// li r11,5062
	ctx.r11.s64 = 5062;
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

DEFINE_REX_FUNC(sub_88017A18) {
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
	ctx.lr = 0x88017A30;
	sub_88014D38(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// lhz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// rotlwi r10,r5,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r7,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r7.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// addi r4,r11,448
	ctx.r4.s64 = ctx.r11.s64 + 448;
	// addi r11,r10,4638
	ctx.r11.s64 = ctx.r10.s64 + 4638;
	// stw r4,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lwz r11,-11908(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -11908);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,-11912(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -11912);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,-11912(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -11912);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_88018B68) {
	REX_FUNC_PROLOGUE();
	// lis r7,-30692
	ctx.r7.s64 = -2011430912;
	// lis r6,-30692
	ctx.r6.s64 = -2011430912;
	// addi r9,r6,-2416
	ctx.r9.s64 = ctx.r6.s64 + -2416;
	// lwz r11,1584(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1584);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,1584(r7)
	REX_STORE_U32(ctx.r7.u32 + 1584, ctx.r10.u32);
	// stwx r4,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88019110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x88019118;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30692
	ctx.r31.s64 = -2011430912;
	// lwz r3,-6424(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -6424);
	// bl 0x88068e78
	ctx.lr = 0x8801912C;
	sub_88068E78(ctx, base);
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-6148
	ctx.r30.s64 = ctx.r11.s64 + -6148;
	// lwzx r15,r10,r30
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x88069640
	ctx.lr = 0x88019140;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8801915c
	if (ctx.cr6.eq) goto loc_8801915C;
	// lwz r3,-6424(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -6424);
	// bl 0x88068e78
	ctx.lr = 0x88019150;
	sub_88068E78(ctx, base);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r15,r10,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8801915C:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r3,-6424(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -6424);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29712
	ctx.r4.s64 = ctx.r11.s64 + -29712;
	// bl 0x88069028
	ctx.lr = 0x88019170;
	sub_88069028(ctx, base);
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r14,r10,-2416
	ctx.r14.s64 = ctx.r10.s64 + -2416;
	// li r16,0
	ctx.r16.s64 = 0;
	// lis r9,-30607
	ctx.r9.s64 = -2005860352;
	// addi r11,r11,-6416
	ctx.r11.s64 = ctx.r11.s64 + -6416;
	// lfd f31,1216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 1216);
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r19,r9,-25048
	ctx.r19.s64 = ctx.r9.s64 + -25048;
	// lwz r10,-6420(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -6420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88019808
	if (!ctx.cr6.gt) goto loc_88019808;
loc_880191AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880197f4
	if (!ctx.cr6.gt) goto loc_880197F4;
loc_880191C0:
	// lwz r23,12(r30)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r24,16(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// subf r22,r11,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r11.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r21,r10,r23
	ctx.r21.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r25,r9,r24
	ctx.r25.u64 = ctx.r24.u64 - ctx.r9.u64;
	// add r20,r11,r24
	ctx.r20.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x880192e8
	if (!ctx.cr6.eq) goto loc_880192E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88010388
	ctx.lr = 0x880191FC;
	sub_88010388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880192e8
	if (!ctx.cr6.gt) goto loc_880192E8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_88019208:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x880192e0
	if (ctx.cr6.lt) goto loc_880192E0;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x880192e0
	if (ctx.cr6.gt) goto loc_880192E0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x880192e0
	if (ctx.cr6.gt) goto loc_880192E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x880192e0
	if (ctx.cr6.lt) goto loc_880192E0;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// cmpw cr6,r24,r15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r15.s32, ctx.xer);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// sth r9,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r9.u16);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r7,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// bge cr6,0x88019294
	if (!ctx.cr6.lt) goto loc_88019294;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
	// b 0x88019298
	goto loc_88019298;
loc_88019294:
	// sth r16,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r16.u16);
loc_88019298:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r29,8(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880192e0
	if (ctx.cr6.eq) goto loc_880192E0;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880192b8
	if (!ctx.cr6.eq) goto loc_880192B8;
	// stw r16,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
loc_880192B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880192CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880192dc
	if (!ctx.cr6.eq) goto loc_880192DC;
	// sth r16,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r16.u16);
	// sth r16,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r16.u16);
loc_880192DC:
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_880192E0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x88019208
	if (!ctx.cr0.eq) goto loc_88019208;
loc_880192E8:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// lwz r11,1584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880194a0
	if (!ctx.cr6.gt) goto loc_880194A0;
loc_88019304:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// lwz r31,4(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8801948c
	if (!ctx.cr6.gt) goto loc_8801948C;
loc_88019318:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88019470
	if (!ctx.cr6.eq) goto loc_88019470;
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019470
	if (ctx.cr6.lt) goto loc_88019470;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019470
	if (ctx.cr6.eq) goto loc_88019470;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x88019470
	if (ctx.cr6.gt) goto loc_88019470;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x88019470
	if (ctx.cr6.gt) goto loc_88019470;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88019470
	if (ctx.cr6.lt) goto loc_88019470;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// cmpw cr6,r24,r15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r15.s32, ctx.xer);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lhz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// sth r5,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r5.u16);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// bge cr6,0x880193e8
	if (!ctx.cr6.lt) goto loc_880193E8;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880193e8
	if (!ctx.cr6.gt) goto loc_880193E8;
	// lis r11,234
	ctx.r11.s64 = 15335424;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880193e8
	if (!ctx.cr6.lt) goto loc_880193E8;
	// lhz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r9,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r6,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r6.u16);
	// b 0x880193ec
	goto loc_880193EC;
loc_880193E8:
	// sth r16,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r16.u16);
loc_880193EC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,8(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88019434
	if (ctx.cr6.eq) goto loc_88019434;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88019410
	if (!ctx.cr6.eq) goto loc_88019410;
	// stw r16,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
loc_88019410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88019424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88019434
	if (!ctx.cr6.eq) goto loc_88019434;
	// sth r16,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r16.u16);
	// sth r16,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r16.u16);
loc_88019434:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801946c
	if (ctx.cr6.eq) goto loc_8801946C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8801945C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8801946c
	if (!ctx.cr6.eq) goto loc_8801946C;
	// sth r16,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r16.u16);
	// sth r16,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
loc_8801946C:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019470:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88019318
	if (ctx.cr6.lt) goto loc_88019318;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,1584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1584);
loc_8801948C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// blt cr6,0x88019304
	if (ctx.cr6.lt) goto loc_88019304;
loc_880194A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88027928
	ctx.lr = 0x880194A8;
	sub_88027928(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x88019728
	if (ctx.cr6.lt) goto loc_88019728;
	// addi r5,r3,-3
	ctx.r5.s64 = ctx.r3.s64 + -3;
loc_880194BC:
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8801954c
	if (!ctx.cr6.eq) goto loc_8801954C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8801954c
	if (ctx.cr6.eq) goto loc_8801954C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8801954c
	if (ctx.cr6.lt) goto loc_8801954C;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x8801954c
	if (ctx.cr6.gt) goto loc_8801954C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x8801954c
	if (ctx.cr6.gt) goto loc_8801954C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8801954c
	if (ctx.cr6.lt) goto loc_8801954C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8801954c
	if (ctx.cr6.gt) goto loc_8801954C;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r24,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// stw r23,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8801954C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// bne cr6,0x880195e4
	if (!ctx.cr6.eq) goto loc_880195E4;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880195e4
	if (ctx.cr6.eq) goto loc_880195E4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x880195e4
	if (ctx.cr6.lt) goto loc_880195E4;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x880195e4
	if (ctx.cr6.gt) goto loc_880195E4;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x880195e4
	if (ctx.cr6.gt) goto loc_880195E4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x880195e4
	if (ctx.cr6.lt) goto loc_880195E4;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880195e4
	if (ctx.cr6.gt) goto loc_880195E4;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r24,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// stw r23,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880195E4:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8801967c
	if (!ctx.cr6.eq) goto loc_8801967C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8801967c
	if (ctx.cr6.eq) goto loc_8801967C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8801967c
	if (ctx.cr6.lt) goto loc_8801967C;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x8801967c
	if (ctx.cr6.gt) goto loc_8801967C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x8801967c
	if (ctx.cr6.gt) goto loc_8801967C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8801967c
	if (ctx.cr6.lt) goto loc_8801967C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8801967c
	if (ctx.cr6.gt) goto loc_8801967C;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r24,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// stw r23,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8801967C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019714
	if (!ctx.cr6.eq) goto loc_88019714;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019714
	if (ctx.cr6.eq) goto loc_88019714;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019714
	if (ctx.cr6.lt) goto loc_88019714;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x88019714
	if (ctx.cr6.gt) goto loc_88019714;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x88019714
	if (ctx.cr6.gt) goto loc_88019714;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88019714
	if (ctx.cr6.lt) goto loc_88019714;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019714
	if (ctx.cr6.gt) goto loc_88019714;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r24,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// stw r23,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019714:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x880194bc
	if (ctx.cr6.lt) goto loc_880194BC;
loc_88019728:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x880197d4
	if (!ctx.cr6.lt) goto loc_880197D4;
	// subf r11,r6,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88019738:
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x880197c8
	if (!ctx.cr6.eq) goto loc_880197C8;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880197c8
	if (ctx.cr6.eq) goto loc_880197C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x880197c8
	if (ctx.cr6.lt) goto loc_880197C8;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r6,r20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x880197c8
	if (ctx.cr6.gt) goto loc_880197C8;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x880197c8
	if (ctx.cr6.gt) goto loc_880197C8;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x880197c8
	if (ctx.cr6.lt) goto loc_880197C8;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880197c8
	if (ctx.cr6.gt) goto loc_880197C8;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r24,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// stw r23,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880197C8:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bdnz 0x88019738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88019738;
loc_880197D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880191c0
	if (ctx.cr6.lt) goto loc_880191C0;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lwz r10,-6420(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -6420);
loc_880197F4:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r10.s32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x880191ac
	if (ctx.cr6.lt) goto loc_880191AC;
loc_88019808:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x880220f8
	ctx.lr = 0x88019810;
	sub_880220F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88019e40
	if (!ctx.cr6.gt) goto loc_88019E40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r22,120
	ctx.r22.s64 = 7864320;
loc_88019824:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88019e30
	if (!ctx.cr6.gt) goto loc_88019E30;
loc_88019838:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// subf r25,r9,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,32(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r24,r8,r10
	ctx.r24.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r26,r7,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x88019950
	if (!ctx.cr6.eq) goto loc_88019950;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88010388
	ctx.lr = 0x88019874;
	sub_88010388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88019950
	if (!ctx.cr6.gt) goto loc_88019950;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_88019880:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019948
	if (ctx.cr6.lt) goto loc_88019948;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r23
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019948
	if (ctx.cr6.gt) goto loc_88019948;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019948
	if (ctx.cr6.gt) goto loc_88019948;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019948
	if (ctx.cr6.lt) goto loc_88019948;
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// sth r8,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r8.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r6.u16);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r4,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r4.u32);
	// lwz r29,8(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x88019948
	if (ctx.cr6.eq) goto loc_88019948;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88019920
	if (!ctx.cr6.eq) goto loc_88019920;
	// stw r16,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
loc_88019920:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88019934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88019944
	if (!ctx.cr6.eq) goto loc_88019944;
	// sth r16,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r16.u16);
	// sth r16,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r16.u16);
loc_88019944:
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_88019948:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x88019880
	if (!ctx.cr0.eq) goto loc_88019880;
loc_88019950:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// lwz r11,1584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88019ad0
	if (!ctx.cr6.gt) goto loc_88019AD0;
loc_8801996C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r31,4(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88019abc
	if (!ctx.cr6.gt) goto loc_88019ABC;
loc_88019980:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88019aa0
	if (ctx.cr6.eq) goto loc_88019AA0;
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019aa0
	if (ctx.cr6.lt) goto loc_88019AA0;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019aa0
	if (ctx.cr6.eq) goto loc_88019AA0;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019aa0
	if (ctx.cr6.gt) goto loc_88019AA0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019aa0
	if (ctx.cr6.gt) goto loc_88019AA0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019aa0
	if (ctx.cr6.lt) goto loc_88019AA0;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lhz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// sth r4,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r4.u16);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r9,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r6,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r6.u16);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x88019a60
	if (ctx.cr6.eq) goto loc_88019A60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88019A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88019a60
	if (!ctx.cr6.eq) goto loc_88019A60;
	// sth r16,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r16.u16);
	// sth r16,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r16.u16);
loc_88019A60:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r9,r29,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x88019a9c
	if (ctx.cr6.eq) goto loc_88019A9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88019A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88019a9c
	if (!ctx.cr6.eq) goto loc_88019A9C;
	// sth r16,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
	// sth r16,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r16.u16);
loc_88019A9C:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019AA0:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88019980
	if (ctx.cr6.lt) goto loc_88019980;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r11,1584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1584);
loc_88019ABC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// blt cr6,0x8801996c
	if (ctx.cr6.lt) goto loc_8801996C;
loc_88019AD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88027928
	ctx.lr = 0x88019AD8;
	sub_88027928(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x88019d68
	if (ctx.cr6.lt) goto loc_88019D68;
	// addi r5,r3,-3
	ctx.r5.s64 = ctx.r3.s64 + -3;
loc_88019AEC:
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019b80
	if (!ctx.cr6.eq) goto loc_88019B80;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019b80
	if (ctx.cr6.eq) goto loc_88019B80;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019b80
	if (ctx.cr6.lt) goto loc_88019B80;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019b80
	if (ctx.cr6.gt) goto loc_88019B80;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019b80
	if (ctx.cr6.gt) goto loc_88019B80;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019b80
	if (ctx.cr6.lt) goto loc_88019B80;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019b80
	if (ctx.cr6.gt) goto loc_88019B80;
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019B80:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019c1c
	if (!ctx.cr6.eq) goto loc_88019C1C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019c1c
	if (ctx.cr6.eq) goto loc_88019C1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019c1c
	if (ctx.cr6.lt) goto loc_88019C1C;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019c1c
	if (ctx.cr6.gt) goto loc_88019C1C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019c1c
	if (ctx.cr6.gt) goto loc_88019C1C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019c1c
	if (ctx.cr6.lt) goto loc_88019C1C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019c1c
	if (ctx.cr6.gt) goto loc_88019C1C;
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019C1C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019cb8
	if (!ctx.cr6.eq) goto loc_88019CB8;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019cb8
	if (ctx.cr6.eq) goto loc_88019CB8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019cb8
	if (ctx.cr6.lt) goto loc_88019CB8;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019cb8
	if (ctx.cr6.gt) goto loc_88019CB8;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019cb8
	if (ctx.cr6.gt) goto loc_88019CB8;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019cb8
	if (ctx.cr6.lt) goto loc_88019CB8;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019cb8
	if (ctx.cr6.gt) goto loc_88019CB8;
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019CB8:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019d54
	if (!ctx.cr6.eq) goto loc_88019D54;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019d54
	if (ctx.cr6.eq) goto loc_88019D54;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019d54
	if (ctx.cr6.lt) goto loc_88019D54;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019d54
	if (ctx.cr6.gt) goto loc_88019D54;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019d54
	if (ctx.cr6.gt) goto loc_88019D54;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019d54
	if (ctx.cr6.lt) goto loc_88019D54;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019d54
	if (ctx.cr6.gt) goto loc_88019D54;
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019D54:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// blt cr6,0x88019aec
	if (ctx.cr6.lt) goto loc_88019AEC;
loc_88019D68:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x88019e18
	if (!ctx.cr6.lt) goto loc_88019E18;
	// subf r11,r6,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88019D78:
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88019e0c
	if (!ctx.cr6.eq) goto loc_88019E0C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019e0c
	if (ctx.cr6.eq) goto loc_88019E0C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// fadd f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f13,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f13.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019e0c
	if (ctx.cr6.lt) goto loc_88019E0C;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmpw cr6,r6,r23
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x88019e0c
	if (ctx.cr6.gt) goto loc_88019E0C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x88019e0c
	if (ctx.cr6.gt) goto loc_88019E0C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88019e0c
	if (ctx.cr6.lt) goto loc_88019E0C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88019e0c
	if (ctx.cr6.gt) goto loc_88019E0C;
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r22,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88019E0C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bdnz 0x88019d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88019D78;
loc_88019E18:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88019838
	if (ctx.cr6.lt) goto loc_88019838;
loc_88019E30:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x88019824
	if (!ctx.cr0.eq) goto loc_88019824;
loc_88019E40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88027928
	ctx.lr = 0x88019E48;
	sub_88027928(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88019f44
	if (!ctx.cr6.gt) goto loc_88019F44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r28,32767
	ctx.r28.s64 = 2147418112;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r26,234
	ctx.r26.s64 = 15335424;
	// lis r27,6
	ctx.r27.s64 = 393216;
loc_88019E64:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88019f30
	if (ctx.cr6.eq) goto loc_88019F30;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x88019f30
	if (ctx.cr6.eq) goto loc_88019F30;
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r31,52(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// sth r9,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// beq cr6,0x88019f30
	if (ctx.cr6.eq) goto loc_88019F30;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88019f30
	if (ctx.cr6.eq) goto loc_88019F30;
	// lfd f0,128(r19)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r19.u32 + 128);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// stfd f0,128(r19)
	REX_STORE_U64(ctx.r19.u32 + 128, ctx.f0.u64);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwimi r10,r30,2,29,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x6) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF9);
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r8,r15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x88019ee4
	if (!ctx.cr6.lt) goto loc_88019EE4;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88019ee4
	if (!ctx.cr6.gt) goto loc_88019EE4;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88019ee8
	if (ctx.cr6.lt) goto loc_88019EE8;
loc_88019EE4:
	// sth r16,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r16.u16);
loc_88019EE8:
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,76(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// beq cr6,0x88019f30
	if (ctx.cr6.eq) goto loc_88019F30;
	// lhz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88019f14
	if (!ctx.cr6.eq) goto loc_88019F14;
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
loc_88019F14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88019F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88019f30
	if (!ctx.cr6.eq) goto loc_88019F30;
	// sth r16,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
loc_88019F30:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x88019e64
	if (!ctx.cr0.eq) goto loc_88019E64;
loc_88019F44:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r16,1584(r9)
	REX_STORE_U32(ctx.r9.u32 + 1584, ctx.r16.u32);
	// stw r16,-6420(r11)
	REX_STORE_U32(ctx.r11.u32 + -6420, ctx.r16.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8802ADD8) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,196(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x88026250
	ctx.lr = 0x8802ADFC;
	sub_88026250(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880293b0
	ctx.lr = 0x8802AE40;
	sub_880293B0(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r10,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x8806b630
	ctx.lr = 0x8802AE70;
	sub_8806B630(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add. r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8802ae9c
	if (!ctx.cr0.eq) goto loc_8802AE9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x880690e8
	ctx.lr = 0x8802AE8C;
	sub_880690E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8802AE9C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-30696
	ctx.r10.s64 = -2011693056;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// lwz r8,184(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r8,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// bl 0x8802a018
	ctx.lr = 0x8802AEE8;
	sub_8802A018(ctx, base);
	// lis r3,-30717
	ctx.r3.s64 = -2013069312;
	// addi r11,r3,-24552
	ctx.r11.s64 = ctx.r3.s64 + -24552;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88034BF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88034BF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,5222
	ctx.r31.s64 = 5222;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r28,4
	ctx.r28.s64 = 4;
	// ori r24,r11,65532
	ctx.r24.u64 = ctx.r11.u64 | 65532;
	// ori r25,r10,65408
	ctx.r25.u64 = ctx.r10.u64 | 65408;
	// ori r26,r9,65472
	ctx.r26.u64 = ctx.r9.u64 | 65472;
loc_88034C28:
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034C4C;
	sub_8813FDD8(ctx, base);
	// add r9,r30,r26
	ctx.r9.u64 = ctx.r30.u64 + ctx.r26.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034C6C;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034C8C;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// clrlwi r23,r29,16
	ctx.r23.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034CB0;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034CD4;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034CF4;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// clrlwi r23,r27,16
	ctx.r23.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034D18;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034D38;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034D58;
	sub_8813FDD8(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// bne 0x88034c28
	if (!ctx.cr0.eq) goto loc_88034C28;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,3
	ctx.r26.s64 = 3;
	// ori r30,r11,43691
	ctx.r30.u64 = ctx.r11.u64 | 43691;
loc_88034D80:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r10,r31,r26
	ctx.r10.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r9,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r4,r31,5254
	ctx.r4.s64 = ctx.r31.s64 + 5254;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// rlwinm r4,r3,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFF0;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// li r3,579
	ctx.r3.s64 = 579;
	// bl 0x8813fdd8
	ctx.lr = 0x88034DC8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x88034d80
	if (ctx.cr6.lt) goto loc_88034D80;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r25,r11,65534
	ctx.r25.u64 = ctx.r11.u64 | 65534;
loc_88034DE0:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r28,r31,r26
	ctx.r28.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r29,r31,5260
	ctx.r29.s64 = ctx.r31.s64 + 5260;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r27,r4,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r27,80
	ctx.r11.s64 = ctx.r27.s64 + 80;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// li r3,579
	ctx.r3.s64 = 579;
	// bl 0x8813fdd8
	ctx.lr = 0x88034E38;
	sub_8813FDD8(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,80
	ctx.r7.s64 = 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r5,r10,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFF0;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// li r3,579
	ctx.r3.s64 = 579;
	// bl 0x8813fdd8
	ctx.lr = 0x88034E60;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x88034de0
	if (ctx.cr6.lt) goto loc_88034DE0;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// divw r10,r31,r26
	ctx.r10.u64 = uint32_t((ctx.r26.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r26.s32 == -1)) ? ctx.r31.s32 / ctx.r26.s32 : 0);
	// ori r9,r11,21846
	ctx.r9.u64 = ctx.r11.u64 | 21846;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mulhw r11,r31,r9
	ctx.r11.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,80
	ctx.r7.s64 = 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,5262
	ctx.r8.s64 = 5262;
	// subf r11,r4,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r4.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,579
	ctx.r3.s64 = 579;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0;
	// bl 0x8813fdd8
	ctx.lr = 0x88034EC4;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_88034EC8:
	// divwu r11,r31,r26
	ctx.r11.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	// mulhwu r10,r31,r30
	ctx.r10.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r31,5263
	ctx.r4.s64 = ctx.r31.s64 + 5263;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// addi r5,r9,176
	ctx.r5.s64 = ctx.r9.s64 + 176;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// rlwinm r4,r3,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFF0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r3,337
	ctx.r3.s64 = 337;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88034F18;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x88034ec8
	if (ctx.cr6.lt) goto loc_88034EC8;
	// li r8,5266
	ctx.r8.s64 = 5266;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034F40;
	sub_8813FDD8(ctx, base);
	// li r8,5267
	ctx.r8.s64 = 5267;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034F5C;
	sub_8813FDD8(ctx, base);
	// li r8,5268
	ctx.r8.s64 = 5268;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034F78;
	sub_8813FDD8(ctx, base);
	// li r8,5269
	ctx.r8.s64 = 5269;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,578
	ctx.r3.s64 = 578;
	// bl 0x8813fdd8
	ctx.lr = 0x88034F94;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8803EBF8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803EC0C:
	// addi r11,r31,7418
	ctx.r11.s64 = ctx.r31.s64 + 7418;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r31,2,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFE0;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,275
	ctx.r3.s64 = 275;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EC2C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x8803ec0c
	if (ctx.cr6.lt) goto loc_8803EC0C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803EC3C:
	// addi r11,r31,7482
	ctx.r11.s64 = ctx.r31.s64 + 7482;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r31,2,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFE0;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x8813fdd8
	ctx.lr = 0x8803EC5C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// blt cr6,0x8803ec3c
	if (ctx.cr6.lt) goto loc_8803EC3C;
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

DEFINE_REX_FUNC(sub_8803F078) {
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
	// li r8,7569
	ctx.r8.s64 = 7569;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F0A0;
	sub_8813FDD8(ctx, base);
	// li r8,7570
	ctx.r8.s64 = 7570;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F0BC;
	sub_8813FDD8(ctx, base);
	// li r8,7571
	ctx.r8.s64 = 7571;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F0D8;
	sub_8813FDD8(ctx, base);
	// li r8,7572
	ctx.r8.s64 = 7572;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F0F4;
	sub_8813FDD8(ctx, base);
	// li r8,7573
	ctx.r8.s64 = 7573;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F110;
	sub_8813FDD8(ctx, base);
	// li r8,7574
	ctx.r8.s64 = 7574;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F12C;
	sub_8813FDD8(ctx, base);
	// li r8,7575
	ctx.r8.s64 = 7575;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F148;
	sub_8813FDD8(ctx, base);
	// li r8,7576
	ctx.r8.s64 = 7576;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F164;
	sub_8813FDD8(ctx, base);
	// li r8,7577
	ctx.r8.s64 = 7577;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F180;
	sub_8813FDD8(ctx, base);
	// li r8,7578
	ctx.r8.s64 = 7578;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F19C;
	sub_8813FDD8(ctx, base);
	// li r8,7579
	ctx.r8.s64 = 7579;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F1B8;
	sub_8813FDD8(ctx, base);
	// li r8,7580
	ctx.r8.s64 = 7580;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F1D4;
	sub_8813FDD8(ctx, base);
	// li r8,7581
	ctx.r8.s64 = 7581;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F1F0;
	sub_8813FDD8(ctx, base);
	// li r8,7582
	ctx.r8.s64 = 7582;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F20C;
	sub_8813FDD8(ctx, base);
	// li r8,7583
	ctx.r8.s64 = 7583;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F228;
	sub_8813FDD8(ctx, base);
	// li r8,7584
	ctx.r8.s64 = 7584;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F244;
	sub_8813FDD8(ctx, base);
	// li r8,7585
	ctx.r8.s64 = 7585;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F260;
	sub_8813FDD8(ctx, base);
	// li r8,7586
	ctx.r8.s64 = 7586;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F27C;
	sub_8813FDD8(ctx, base);
	// li r8,7587
	ctx.r8.s64 = 7587;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F298;
	sub_8813FDD8(ctx, base);
	// li r8,7588
	ctx.r8.s64 = 7588;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F2B4;
	sub_8813FDD8(ctx, base);
	// li r8,7589
	ctx.r8.s64 = 7589;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F2D0;
	sub_8813FDD8(ctx, base);
	// li r8,7590
	ctx.r8.s64 = 7590;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F2EC;
	sub_8813FDD8(ctx, base);
	// li r8,7591
	ctx.r8.s64 = 7591;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F308;
	sub_8813FDD8(ctx, base);
	// li r8,7592
	ctx.r8.s64 = 7592;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F324;
	sub_8813FDD8(ctx, base);
	// li r8,7593
	ctx.r8.s64 = 7593;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F340;
	sub_8813FDD8(ctx, base);
	// li r8,7594
	ctx.r8.s64 = 7594;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F35C;
	sub_8813FDD8(ctx, base);
	// li r8,7595
	ctx.r8.s64 = 7595;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F378;
	sub_8813FDD8(ctx, base);
	// li r8,7596
	ctx.r8.s64 = 7596;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F394;
	sub_8813FDD8(ctx, base);
	// li r8,7597
	ctx.r8.s64 = 7597;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F3B0;
	sub_8813FDD8(ctx, base);
	// li r8,7598
	ctx.r8.s64 = 7598;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F3CC;
	sub_8813FDD8(ctx, base);
	// li r8,7599
	ctx.r8.s64 = 7599;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F3E8;
	sub_8813FDD8(ctx, base);
	// li r8,7600
	ctx.r8.s64 = 7600;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F404;
	sub_8813FDD8(ctx, base);
	// li r8,7601
	ctx.r8.s64 = 7601;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F420;
	sub_8813FDD8(ctx, base);
	// li r8,7602
	ctx.r8.s64 = 7602;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F43C;
	sub_8813FDD8(ctx, base);
	// li r8,7603
	ctx.r8.s64 = 7603;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F458;
	sub_8813FDD8(ctx, base);
	// li r8,7604
	ctx.r8.s64 = 7604;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F474;
	sub_8813FDD8(ctx, base);
	// li r8,7605
	ctx.r8.s64 = 7605;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F490;
	sub_8813FDD8(ctx, base);
	// li r8,7606
	ctx.r8.s64 = 7606;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F4AC;
	sub_8813FDD8(ctx, base);
	// li r8,7607
	ctx.r8.s64 = 7607;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F4C8;
	sub_8813FDD8(ctx, base);
	// li r8,7608
	ctx.r8.s64 = 7608;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F4E4;
	sub_8813FDD8(ctx, base);
	// li r8,7609
	ctx.r8.s64 = 7609;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F500;
	sub_8813FDD8(ctx, base);
	// li r8,7610
	ctx.r8.s64 = 7610;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F51C;
	sub_8813FDD8(ctx, base);
	// li r8,7611
	ctx.r8.s64 = 7611;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F538;
	sub_8813FDD8(ctx, base);
	// li r8,7612
	ctx.r8.s64 = 7612;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F554;
	sub_8813FDD8(ctx, base);
	// li r8,7613
	ctx.r8.s64 = 7613;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F570;
	sub_8813FDD8(ctx, base);
	// li r8,7614
	ctx.r8.s64 = 7614;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F58C;
	sub_8813FDD8(ctx, base);
	// li r8,7615
	ctx.r8.s64 = 7615;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F5A8;
	sub_8813FDD8(ctx, base);
	// li r8,7616
	ctx.r8.s64 = 7616;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F5C4;
	sub_8813FDD8(ctx, base);
	// li r8,7617
	ctx.r8.s64 = 7617;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F5E0;
	sub_8813FDD8(ctx, base);
	// li r8,7618
	ctx.r8.s64 = 7618;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F5FC;
	sub_8813FDD8(ctx, base);
	// li r8,7619
	ctx.r8.s64 = 7619;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F618;
	sub_8813FDD8(ctx, base);
	// li r8,7620
	ctx.r8.s64 = 7620;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F634;
	sub_8813FDD8(ctx, base);
	// li r8,7621
	ctx.r8.s64 = 7621;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F650;
	sub_8813FDD8(ctx, base);
	// li r8,7622
	ctx.r8.s64 = 7622;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F66C;
	sub_8813FDD8(ctx, base);
	// li r8,7623
	ctx.r8.s64 = 7623;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F688;
	sub_8813FDD8(ctx, base);
	// li r8,7624
	ctx.r8.s64 = 7624;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F6A4;
	sub_8813FDD8(ctx, base);
	// li r8,7625
	ctx.r8.s64 = 7625;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F6C0;
	sub_8813FDD8(ctx, base);
	// li r8,7626
	ctx.r8.s64 = 7626;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F6DC;
	sub_8813FDD8(ctx, base);
	// li r8,7627
	ctx.r8.s64 = 7627;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F6F8;
	sub_8813FDD8(ctx, base);
	// li r8,7628
	ctx.r8.s64 = 7628;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F714;
	sub_8813FDD8(ctx, base);
	// li r8,7629
	ctx.r8.s64 = 7629;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F730;
	sub_8813FDD8(ctx, base);
	// li r8,7630
	ctx.r8.s64 = 7630;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F74C;
	sub_8813FDD8(ctx, base);
	// li r8,7631
	ctx.r8.s64 = 7631;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F768;
	sub_8813FDD8(ctx, base);
	// li r8,7632
	ctx.r8.s64 = 7632;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F784;
	sub_8813FDD8(ctx, base);
	// li r8,7633
	ctx.r8.s64 = 7633;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,287
	ctx.r3.s64 = 287;
	// bl 0x8813fdd8
	ctx.lr = 0x8803F7A0;
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

DEFINE_REX_FUNC(sub_880448D0) {
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
	// li r8,8684
	ctx.r8.s64 = 8684;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880448F8;
	sub_8813FDD8(ctx, base);
	// li r8,8685
	ctx.r8.s64 = 8685;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044914;
	sub_8813FDD8(ctx, base);
	// li r8,8686
	ctx.r8.s64 = 8686;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044930;
	sub_8813FDD8(ctx, base);
	// li r8,8687
	ctx.r8.s64 = 8687;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x8804494C;
	sub_8813FDD8(ctx, base);
	// li r8,8688
	ctx.r8.s64 = 8688;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044968;
	sub_8813FDD8(ctx, base);
	// li r8,8689
	ctx.r8.s64 = 8689;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044984;
	sub_8813FDD8(ctx, base);
	// li r8,8690
	ctx.r8.s64 = 8690;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880449A0;
	sub_8813FDD8(ctx, base);
	// li r8,8691
	ctx.r8.s64 = 8691;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880449BC;
	sub_8813FDD8(ctx, base);
	// li r8,8692
	ctx.r8.s64 = 8692;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880449D8;
	sub_8813FDD8(ctx, base);
	// li r8,8693
	ctx.r8.s64 = 8693;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880449F4;
	sub_8813FDD8(ctx, base);
	// li r8,8694
	ctx.r8.s64 = 8694;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A10;
	sub_8813FDD8(ctx, base);
	// li r8,8695
	ctx.r8.s64 = 8695;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A2C;
	sub_8813FDD8(ctx, base);
	// li r8,8696
	ctx.r8.s64 = 8696;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A48;
	sub_8813FDD8(ctx, base);
	// li r8,8697
	ctx.r8.s64 = 8697;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A64;
	sub_8813FDD8(ctx, base);
	// li r8,8698
	ctx.r8.s64 = 8698;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A80;
	sub_8813FDD8(ctx, base);
	// li r8,8699
	ctx.r8.s64 = 8699;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044A9C;
	sub_8813FDD8(ctx, base);
	// li r8,8700
	ctx.r8.s64 = 8700;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044AB8;
	sub_8813FDD8(ctx, base);
	// li r8,8701
	ctx.r8.s64 = 8701;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044AD4;
	sub_8813FDD8(ctx, base);
	// li r8,8702
	ctx.r8.s64 = 8702;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044AF0;
	sub_8813FDD8(ctx, base);
	// li r8,8703
	ctx.r8.s64 = 8703;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B0C;
	sub_8813FDD8(ctx, base);
	// li r8,8704
	ctx.r8.s64 = 8704;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B28;
	sub_8813FDD8(ctx, base);
	// li r8,8705
	ctx.r8.s64 = 8705;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B44;
	sub_8813FDD8(ctx, base);
	// li r8,8706
	ctx.r8.s64 = 8706;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B60;
	sub_8813FDD8(ctx, base);
	// li r8,8707
	ctx.r8.s64 = 8707;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B7C;
	sub_8813FDD8(ctx, base);
	// li r8,8708
	ctx.r8.s64 = 8708;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044B98;
	sub_8813FDD8(ctx, base);
	// li r8,8709
	ctx.r8.s64 = 8709;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044BB4;
	sub_8813FDD8(ctx, base);
	// li r8,8710
	ctx.r8.s64 = 8710;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88044BD0;
	sub_8813FDD8(ctx, base);
	// li r8,8711
	ctx.r8.s64 = 8711;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044BEC;
	sub_8813FDD8(ctx, base);
	// li r8,8712
	ctx.r8.s64 = 8712;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C08;
	sub_8813FDD8(ctx, base);
	// li r8,8713
	ctx.r8.s64 = 8713;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C24;
	sub_8813FDD8(ctx, base);
	// li r8,8714
	ctx.r8.s64 = 8714;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C40;
	sub_8813FDD8(ctx, base);
	// li r8,8715
	ctx.r8.s64 = 8715;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C5C;
	sub_8813FDD8(ctx, base);
	// li r8,8716
	ctx.r8.s64 = 8716;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C78;
	sub_8813FDD8(ctx, base);
	// li r8,8717
	ctx.r8.s64 = 8717;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044C94;
	sub_8813FDD8(ctx, base);
	// li r8,8718
	ctx.r8.s64 = 8718;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044CB0;
	sub_8813FDD8(ctx, base);
	// li r8,8719
	ctx.r8.s64 = 8719;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044CCC;
	sub_8813FDD8(ctx, base);
	// li r8,8720
	ctx.r8.s64 = 8720;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044CE8;
	sub_8813FDD8(ctx, base);
	// li r8,8721
	ctx.r8.s64 = 8721;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D04;
	sub_8813FDD8(ctx, base);
	// li r8,8722
	ctx.r8.s64 = 8722;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D20;
	sub_8813FDD8(ctx, base);
	// li r8,8723
	ctx.r8.s64 = 8723;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D3C;
	sub_8813FDD8(ctx, base);
	// li r8,8724
	ctx.r8.s64 = 8724;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D58;
	sub_8813FDD8(ctx, base);
	// li r8,8725
	ctx.r8.s64 = 8725;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D74;
	sub_8813FDD8(ctx, base);
	// li r8,8726
	ctx.r8.s64 = 8726;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044D90;
	sub_8813FDD8(ctx, base);
	// li r8,8727
	ctx.r8.s64 = 8727;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044DAC;
	sub_8813FDD8(ctx, base);
	// li r8,8728
	ctx.r8.s64 = 8728;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044DC8;
	sub_8813FDD8(ctx, base);
	// li r8,8729
	ctx.r8.s64 = 8729;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044DE4;
	sub_8813FDD8(ctx, base);
	// li r8,8730
	ctx.r8.s64 = 8730;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E00;
	sub_8813FDD8(ctx, base);
	// li r8,8731
	ctx.r8.s64 = 8731;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E1C;
	sub_8813FDD8(ctx, base);
	// li r8,8732
	ctx.r8.s64 = 8732;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E38;
	sub_8813FDD8(ctx, base);
	// li r8,8733
	ctx.r8.s64 = 8733;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E54;
	sub_8813FDD8(ctx, base);
	// li r8,8734
	ctx.r8.s64 = 8734;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E70;
	sub_8813FDD8(ctx, base);
	// li r8,8735
	ctx.r8.s64 = 8735;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044E8C;
	sub_8813FDD8(ctx, base);
	// li r8,8736
	ctx.r8.s64 = 8736;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044EA8;
	sub_8813FDD8(ctx, base);
	// li r8,8737
	ctx.r8.s64 = 8737;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044EC4;
	sub_8813FDD8(ctx, base);
	// li r8,8738
	ctx.r8.s64 = 8738;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044EE0;
	sub_8813FDD8(ctx, base);
	// li r8,8739
	ctx.r8.s64 = 8739;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044EFC;
	sub_8813FDD8(ctx, base);
	// li r8,8740
	ctx.r8.s64 = 8740;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044F18;
	sub_8813FDD8(ctx, base);
	// li r8,8741
	ctx.r8.s64 = 8741;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044F34;
	sub_8813FDD8(ctx, base);
	// li r8,8742
	ctx.r8.s64 = 8742;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044F50;
	sub_8813FDD8(ctx, base);
	// li r8,8743
	ctx.r8.s64 = 8743;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044F6C;
	sub_8813FDD8(ctx, base);
	// li r8,8744
	ctx.r8.s64 = 8744;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044F88;
	sub_8813FDD8(ctx, base);
	// li r8,8745
	ctx.r8.s64 = 8745;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,325
	ctx.r3.s64 = 325;
	// bl 0x8813fdd8
	ctx.lr = 0x88044FA4;
	sub_8813FDD8(ctx, base);
	// li r8,8746
	ctx.r8.s64 = 8746;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88044FC0;
	sub_8813FDD8(ctx, base);
	// li r8,8747
	ctx.r8.s64 = 8747;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88044FDC;
	sub_8813FDD8(ctx, base);
	// li r8,8748
	ctx.r8.s64 = 8748;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88044FF8;
	sub_8813FDD8(ctx, base);
	// li r8,8749
	ctx.r8.s64 = 8749;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045014;
	sub_8813FDD8(ctx, base);
	// li r8,8750
	ctx.r8.s64 = 8750;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045030;
	sub_8813FDD8(ctx, base);
	// li r8,8751
	ctx.r8.s64 = 8751;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x8804504C;
	sub_8813FDD8(ctx, base);
	// li r8,8752
	ctx.r8.s64 = 8752;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045068;
	sub_8813FDD8(ctx, base);
	// li r8,8753
	ctx.r8.s64 = 8753;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045084;
	sub_8813FDD8(ctx, base);
	// li r8,8754
	ctx.r8.s64 = 8754;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880450A0;
	sub_8813FDD8(ctx, base);
	// li r8,8755
	ctx.r8.s64 = 8755;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880450BC;
	sub_8813FDD8(ctx, base);
	// li r8,8756
	ctx.r8.s64 = 8756;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880450D8;
	sub_8813FDD8(ctx, base);
	// li r8,8757
	ctx.r8.s64 = 8757;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880450F4;
	sub_8813FDD8(ctx, base);
	// li r8,8758
	ctx.r8.s64 = 8758;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045110;
	sub_8813FDD8(ctx, base);
	// li r8,8759
	ctx.r8.s64 = 8759;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x8804512C;
	sub_8813FDD8(ctx, base);
	// li r8,8760
	ctx.r8.s64 = 8760;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045148;
	sub_8813FDD8(ctx, base);
	// li r8,8761
	ctx.r8.s64 = 8761;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045164;
	sub_8813FDD8(ctx, base);
	// li r8,8762
	ctx.r8.s64 = 8762;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045180;
	sub_8813FDD8(ctx, base);
	// li r8,8763
	ctx.r8.s64 = 8763;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x8804519C;
	sub_8813FDD8(ctx, base);
	// li r8,8764
	ctx.r8.s64 = 8764;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880451B8;
	sub_8813FDD8(ctx, base);
	// li r8,8765
	ctx.r8.s64 = 8765;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880451D4;
	sub_8813FDD8(ctx, base);
	// li r8,8766
	ctx.r8.s64 = 8766;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880451F0;
	sub_8813FDD8(ctx, base);
	// li r8,8767
	ctx.r8.s64 = 8767;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x8804520C;
	sub_8813FDD8(ctx, base);
	// li r8,8768
	ctx.r8.s64 = 8768;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045228;
	sub_8813FDD8(ctx, base);
	// li r8,8769
	ctx.r8.s64 = 8769;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045244;
	sub_8813FDD8(ctx, base);
	// li r8,8770
	ctx.r8.s64 = 8770;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045260;
	sub_8813FDD8(ctx, base);
	// li r8,8771
	ctx.r8.s64 = 8771;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x8804527C;
	sub_8813FDD8(ctx, base);
	// li r8,8772
	ctx.r8.s64 = 8772;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045298;
	sub_8813FDD8(ctx, base);
	// li r8,8773
	ctx.r8.s64 = 8773;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880452B4;
	sub_8813FDD8(ctx, base);
	// li r8,8774
	ctx.r8.s64 = 8774;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880452D0;
	sub_8813FDD8(ctx, base);
	// li r8,8775
	ctx.r8.s64 = 8775;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x880452EC;
	sub_8813FDD8(ctx, base);
	// li r8,8776
	ctx.r8.s64 = 8776;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,326
	ctx.r3.s64 = 326;
	// bl 0x8813fdd8
	ctx.lr = 0x88045308;
	sub_8813FDD8(ctx, base);
	// li r8,8777
	ctx.r8.s64 = 8777;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045324;
	sub_8813FDD8(ctx, base);
	// li r8,8778
	ctx.r8.s64 = 8778;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045340;
	sub_8813FDD8(ctx, base);
	// li r8,8779
	ctx.r8.s64 = 8779;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x8804535C;
	sub_8813FDD8(ctx, base);
	// li r8,8780
	ctx.r8.s64 = 8780;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045378;
	sub_8813FDD8(ctx, base);
	// li r8,8781
	ctx.r8.s64 = 8781;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045394;
	sub_8813FDD8(ctx, base);
	// li r8,8782
	ctx.r8.s64 = 8782;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880453B0;
	sub_8813FDD8(ctx, base);
	// li r8,8783
	ctx.r8.s64 = 8783;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880453CC;
	sub_8813FDD8(ctx, base);
	// li r8,8784
	ctx.r8.s64 = 8784;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x880453E8;
	sub_8813FDD8(ctx, base);
	// li r8,8785
	ctx.r8.s64 = 8785;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88045404;
	sub_8813FDD8(ctx, base);
	// li r8,8786
	ctx.r8.s64 = 8786;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88045420;
	sub_8813FDD8(ctx, base);
	// li r8,8787
	ctx.r8.s64 = 8787;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x8804543C;
	sub_8813FDD8(ctx, base);
	// li r8,8788
	ctx.r8.s64 = 8788;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88045458;
	sub_8813FDD8(ctx, base);
	// li r8,8789
	ctx.r8.s64 = 8789;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x8813fdd8
	ctx.lr = 0x88045474;
	sub_8813FDD8(ctx, base);
	// li r8,8790
	ctx.r8.s64 = 8790;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045490;
	sub_8813FDD8(ctx, base);
	// li r8,8791
	ctx.r8.s64 = 8791;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880454AC;
	sub_8813FDD8(ctx, base);
	// li r8,8792
	ctx.r8.s64 = 8792;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880454C8;
	sub_8813FDD8(ctx, base);
	// li r8,8793
	ctx.r8.s64 = 8793;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880454E4;
	sub_8813FDD8(ctx, base);
	// li r8,8794
	ctx.r8.s64 = 8794;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045500;
	sub_8813FDD8(ctx, base);
	// li r8,8795
	ctx.r8.s64 = 8795;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x8804551C;
	sub_8813FDD8(ctx, base);
	// li r8,14433
	ctx.r8.s64 = 14433;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045538;
	sub_8813FDD8(ctx, base);
	// li r8,14434
	ctx.r8.s64 = 14434;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045554;
	sub_8813FDD8(ctx, base);
	// li r8,14435
	ctx.r8.s64 = 14435;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x88045570;
	sub_8813FDD8(ctx, base);
	// li r8,14436
	ctx.r8.s64 = 14436;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x8804558C;
	sub_8813FDD8(ctx, base);
	// li r8,14437
	ctx.r8.s64 = 14437;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880455A8;
	sub_8813FDD8(ctx, base);
	// li r8,14438
	ctx.r8.s64 = 14438;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880455C4;
	sub_8813FDD8(ctx, base);
	// li r8,14439
	ctx.r8.s64 = 14439;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880455E0;
	sub_8813FDD8(ctx, base);
	// li r8,14440
	ctx.r8.s64 = 14440;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,327
	ctx.r3.s64 = 327;
	// bl 0x8813fdd8
	ctx.lr = 0x880455FC;
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

DEFINE_REX_FUNC(sub_880593D0) {
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
	// li r8,13036
	ctx.r8.s64 = 13036;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x880593F8;
	sub_8813FDD8(ctx, base);
	// li r8,13037
	ctx.r8.s64 = 13037;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059414;
	sub_8813FDD8(ctx, base);
	// li r8,13038
	ctx.r8.s64 = 13038;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059430;
	sub_8813FDD8(ctx, base);
	// li r8,13039
	ctx.r8.s64 = 13039;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x8805944C;
	sub_8813FDD8(ctx, base);
	// li r8,13040
	ctx.r8.s64 = 13040;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x88059468;
	sub_8813FDD8(ctx, base);
	// li r8,13041
	ctx.r8.s64 = 13041;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x88059484;
	sub_8813FDD8(ctx, base);
	// li r8,13042
	ctx.r8.s64 = 13042;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x880594A0;
	sub_8813FDD8(ctx, base);
	// li r8,13043
	ctx.r8.s64 = 13043;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x880594BC;
	sub_8813FDD8(ctx, base);
	// li r8,13044
	ctx.r8.s64 = 13044;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x880594D8;
	sub_8813FDD8(ctx, base);
	// li r8,13045
	ctx.r8.s64 = 13045;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x880594F4;
	sub_8813FDD8(ctx, base);
	// li r8,13046
	ctx.r8.s64 = 13046;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059510;
	sub_8813FDD8(ctx, base);
	// li r8,13047
	ctx.r8.s64 = 13047;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x8805952C;
	sub_8813FDD8(ctx, base);
	// li r8,13048
	ctx.r8.s64 = 13048;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059548;
	sub_8813FDD8(ctx, base);
	// li r8,13049
	ctx.r8.s64 = 13049;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059564;
	sub_8813FDD8(ctx, base);
	// li r8,13050
	ctx.r8.s64 = 13050;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x88059580;
	sub_8813FDD8(ctx, base);
	// li r8,13051
	ctx.r8.s64 = 13051;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x8805959C;
	sub_8813FDD8(ctx, base);
	// li r8,13052
	ctx.r8.s64 = 13052;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x880595B8;
	sub_8813FDD8(ctx, base);
	// li r8,13056
	ctx.r8.s64 = 13056;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x880595D4;
	sub_8813FDD8(ctx, base);
	// li r8,13057
	ctx.r8.s64 = 13057;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x880595F0;
	sub_8813FDD8(ctx, base);
	// li r8,13058
	ctx.r8.s64 = 13058;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x8805960C;
	sub_8813FDD8(ctx, base);
	// li r8,13059
	ctx.r8.s64 = 13059;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059628;
	sub_8813FDD8(ctx, base);
	// li r8,13060
	ctx.r8.s64 = 13060;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059644;
	sub_8813FDD8(ctx, base);
	// li r8,13061
	ctx.r8.s64 = 13061;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059660;
	sub_8813FDD8(ctx, base);
	// li r8,13062
	ctx.r8.s64 = 13062;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x8805967C;
	sub_8813FDD8(ctx, base);
	// li r8,13063
	ctx.r8.s64 = 13063;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x88059698;
	sub_8813FDD8(ctx, base);
	// li r8,13064
	ctx.r8.s64 = 13064;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x880596B4;
	sub_8813FDD8(ctx, base);
	// li r8,13065
	ctx.r8.s64 = 13065;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x880596D0;
	sub_8813FDD8(ctx, base);
	// li r8,13066
	ctx.r8.s64 = 13066;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x880596EC;
	sub_8813FDD8(ctx, base);
	// li r8,13067
	ctx.r8.s64 = 13067;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x88059708;
	sub_8813FDD8(ctx, base);
	// li r8,13068
	ctx.r8.s64 = 13068;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x88059724;
	sub_8813FDD8(ctx, base);
	// li r8,13069
	ctx.r8.s64 = 13069;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x88059740;
	sub_8813FDD8(ctx, base);
	// li r8,13070
	ctx.r8.s64 = 13070;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x8805975C;
	sub_8813FDD8(ctx, base);
	// li r8,13071
	ctx.r8.s64 = 13071;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x88059778;
	sub_8813FDD8(ctx, base);
	// li r8,13072
	ctx.r8.s64 = 13072;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x88059794;
	sub_8813FDD8(ctx, base);
	// li r8,13073
	ctx.r8.s64 = 13073;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x880597B0;
	sub_8813FDD8(ctx, base);
	// li r8,13074
	ctx.r8.s64 = 13074;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x880597CC;
	sub_8813FDD8(ctx, base);
	// li r8,13075
	ctx.r8.s64 = 13075;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x880597E8;
	sub_8813FDD8(ctx, base);
	// li r8,13076
	ctx.r8.s64 = 13076;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x88059804;
	sub_8813FDD8(ctx, base);
	// li r8,13077
	ctx.r8.s64 = 13077;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x88059820;
	sub_8813FDD8(ctx, base);
	// li r8,13078
	ctx.r8.s64 = 13078;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x8805983C;
	sub_8813FDD8(ctx, base);
	// li r8,13079
	ctx.r8.s64 = 13079;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x88059858;
	sub_8813FDD8(ctx, base);
	// li r8,13080
	ctx.r8.s64 = 13080;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x88059874;
	sub_8813FDD8(ctx, base);
	// li r8,13081
	ctx.r8.s64 = 13081;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x88059890;
	sub_8813FDD8(ctx, base);
	// li r8,13082
	ctx.r8.s64 = 13082;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x880598AC;
	sub_8813FDD8(ctx, base);
	// li r8,13083
	ctx.r8.s64 = 13083;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x880598C8;
	sub_8813FDD8(ctx, base);
	// li r8,13084
	ctx.r8.s64 = 13084;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x880598E4;
	sub_8813FDD8(ctx, base);
	// li r8,13085
	ctx.r8.s64 = 13085;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x88059900;
	sub_8813FDD8(ctx, base);
	// li r8,13086
	ctx.r8.s64 = 13086;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x8805991C;
	sub_8813FDD8(ctx, base);
	// li r8,13087
	ctx.r8.s64 = 13087;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x88059938;
	sub_8813FDD8(ctx, base);
	// li r8,13088
	ctx.r8.s64 = 13088;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x88059954;
	sub_8813FDD8(ctx, base);
	// li r8,13091
	ctx.r8.s64 = 13091;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x88059970;
	sub_8813FDD8(ctx, base);
	// li r8,13092
	ctx.r8.s64 = 13092;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x8805998C;
	sub_8813FDD8(ctx, base);
	// li r8,13093
	ctx.r8.s64 = 13093;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x880599A8;
	sub_8813FDD8(ctx, base);
	// li r8,13094
	ctx.r8.s64 = 13094;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,385
	ctx.r3.s64 = 385;
	// bl 0x8813fdd8
	ctx.lr = 0x880599C4;
	sub_8813FDD8(ctx, base);
	// li r8,13095
	ctx.r8.s64 = 13095;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,385
	ctx.r3.s64 = 385;
	// bl 0x8813fdd8
	ctx.lr = 0x880599E0;
	sub_8813FDD8(ctx, base);
	// li r8,13100
	ctx.r8.s64 = 13100;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,388
	ctx.r3.s64 = 388;
	// bl 0x8813fdd8
	ctx.lr = 0x880599FC;
	sub_8813FDD8(ctx, base);
	// li r8,13101
	ctx.r8.s64 = 13101;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059A18;
	sub_8813FDD8(ctx, base);
	// li r8,13102
	ctx.r8.s64 = 13102;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059A34;
	sub_8813FDD8(ctx, base);
	// li r8,13103
	ctx.r8.s64 = 13103;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059A50;
	sub_8813FDD8(ctx, base);
	// li r8,13104
	ctx.r8.s64 = 13104;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,366
	ctx.r3.s64 = 366;
	// bl 0x8813fdd8
	ctx.lr = 0x88059A6C;
	sub_8813FDD8(ctx, base);
	// li r8,13105
	ctx.r8.s64 = 13105;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x88059A88;
	sub_8813FDD8(ctx, base);
	// li r8,13106
	ctx.r8.s64 = 13106;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x88059AA4;
	sub_8813FDD8(ctx, base);
	// li r8,13107
	ctx.r8.s64 = 13107;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,367
	ctx.r3.s64 = 367;
	// bl 0x8813fdd8
	ctx.lr = 0x88059AC0;
	sub_8813FDD8(ctx, base);
	// li r8,13108
	ctx.r8.s64 = 13108;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x88059ADC;
	sub_8813FDD8(ctx, base);
	// li r8,13109
	ctx.r8.s64 = 13109;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x88059AF8;
	sub_8813FDD8(ctx, base);
	// li r8,13110
	ctx.r8.s64 = 13110;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8813fdd8
	ctx.lr = 0x88059B14;
	sub_8813FDD8(ctx, base);
	// li r8,13111
	ctx.r8.s64 = 13111;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059B30;
	sub_8813FDD8(ctx, base);
	// li r8,13112
	ctx.r8.s64 = 13112;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059B4C;
	sub_8813FDD8(ctx, base);
	// li r8,13113
	ctx.r8.s64 = 13113;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059B68;
	sub_8813FDD8(ctx, base);
	// li r8,13114
	ctx.r8.s64 = 13114;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,369
	ctx.r3.s64 = 369;
	// bl 0x8813fdd8
	ctx.lr = 0x88059B84;
	sub_8813FDD8(ctx, base);
	// li r8,13115
	ctx.r8.s64 = 13115;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x88059BA0;
	sub_8813FDD8(ctx, base);
	// li r8,13116
	ctx.r8.s64 = 13116;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x88059BBC;
	sub_8813FDD8(ctx, base);
	// li r8,13117
	ctx.r8.s64 = 13117;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fdd8
	ctx.lr = 0x88059BD8;
	sub_8813FDD8(ctx, base);
	// li r8,13121
	ctx.r8.s64 = 13121;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x88059BF4;
	sub_8813FDD8(ctx, base);
	// li r8,13122
	ctx.r8.s64 = 13122;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C10;
	sub_8813FDD8(ctx, base);
	// li r8,13123
	ctx.r8.s64 = 13123;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C2C;
	sub_8813FDD8(ctx, base);
	// li r8,13124
	ctx.r8.s64 = 13124;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C48;
	sub_8813FDD8(ctx, base);
	// li r8,13125
	ctx.r8.s64 = 13125;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C64;
	sub_8813FDD8(ctx, base);
	// li r8,13126
	ctx.r8.s64 = 13126;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,373
	ctx.r3.s64 = 373;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C80;
	sub_8813FDD8(ctx, base);
	// li r8,13127
	ctx.r8.s64 = 13127;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x88059C9C;
	sub_8813FDD8(ctx, base);
	// li r8,13128
	ctx.r8.s64 = 13128;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x88059CB8;
	sub_8813FDD8(ctx, base);
	// li r8,13129
	ctx.r8.s64 = 13129;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,374
	ctx.r3.s64 = 374;
	// bl 0x8813fdd8
	ctx.lr = 0x88059CD4;
	sub_8813FDD8(ctx, base);
	// li r8,13130
	ctx.r8.s64 = 13130;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x88059CF0;
	sub_8813FDD8(ctx, base);
	// li r8,13131
	ctx.r8.s64 = 13131;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D0C;
	sub_8813FDD8(ctx, base);
	// li r8,13132
	ctx.r8.s64 = 13132;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,375
	ctx.r3.s64 = 375;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D28;
	sub_8813FDD8(ctx, base);
	// li r8,13133
	ctx.r8.s64 = 13133;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D44;
	sub_8813FDD8(ctx, base);
	// li r8,13134
	ctx.r8.s64 = 13134;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D60;
	sub_8813FDD8(ctx, base);
	// li r8,13135
	ctx.r8.s64 = 13135;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D7C;
	sub_8813FDD8(ctx, base);
	// li r8,13136
	ctx.r8.s64 = 13136;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x88059D98;
	sub_8813FDD8(ctx, base);
	// li r8,13137
	ctx.r8.s64 = 13137;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x88059DB4;
	sub_8813FDD8(ctx, base);
	// li r8,13138
	ctx.r8.s64 = 13138;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,377
	ctx.r3.s64 = 377;
	// bl 0x8813fdd8
	ctx.lr = 0x88059DD0;
	sub_8813FDD8(ctx, base);
	// li r8,13139
	ctx.r8.s64 = 13139;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x88059DEC;
	sub_8813FDD8(ctx, base);
	// li r8,13140
	ctx.r8.s64 = 13140;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E08;
	sub_8813FDD8(ctx, base);
	// li r8,13141
	ctx.r8.s64 = 13141;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,378
	ctx.r3.s64 = 378;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E24;
	sub_8813FDD8(ctx, base);
	// li r8,13142
	ctx.r8.s64 = 13142;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E40;
	sub_8813FDD8(ctx, base);
	// li r8,13143
	ctx.r8.s64 = 13143;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E5C;
	sub_8813FDD8(ctx, base);
	// li r8,13144
	ctx.r8.s64 = 13144;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,379
	ctx.r3.s64 = 379;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E78;
	sub_8813FDD8(ctx, base);
	// li r8,13145
	ctx.r8.s64 = 13145;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x88059E94;
	sub_8813FDD8(ctx, base);
	// li r8,13146
	ctx.r8.s64 = 13146;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x88059EB0;
	sub_8813FDD8(ctx, base);
	// li r8,13147
	ctx.r8.s64 = 13147;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x8813fdd8
	ctx.lr = 0x88059ECC;
	sub_8813FDD8(ctx, base);
	// li r8,13148
	ctx.r8.s64 = 13148;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x88059EE8;
	sub_8813FDD8(ctx, base);
	// li r8,13149
	ctx.r8.s64 = 13149;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F04;
	sub_8813FDD8(ctx, base);
	// li r8,13150
	ctx.r8.s64 = 13150;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,381
	ctx.r3.s64 = 381;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F20;
	sub_8813FDD8(ctx, base);
	// li r8,13151
	ctx.r8.s64 = 13151;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F3C;
	sub_8813FDD8(ctx, base);
	// li r8,13152
	ctx.r8.s64 = 13152;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F58;
	sub_8813FDD8(ctx, base);
	// li r8,13153
	ctx.r8.s64 = 13153;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,382
	ctx.r3.s64 = 382;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F74;
	sub_8813FDD8(ctx, base);
	// li r8,13156
	ctx.r8.s64 = 13156;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x88059F90;
	sub_8813FDD8(ctx, base);
	// li r8,13157
	ctx.r8.s64 = 13157;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x88059FAC;
	sub_8813FDD8(ctx, base);
	// li r8,13158
	ctx.r8.s64 = 13158;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x8813fdd8
	ctx.lr = 0x88059FC8;
	sub_8813FDD8(ctx, base);
	// li r8,13159
	ctx.r8.s64 = 13159;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,385
	ctx.r3.s64 = 385;
	// bl 0x8813fdd8
	ctx.lr = 0x88059FE4;
	sub_8813FDD8(ctx, base);
	// li r8,13160
	ctx.r8.s64 = 13160;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,385
	ctx.r3.s64 = 385;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A000;
	sub_8813FDD8(ctx, base);
	// li r8,13165
	ctx.r8.s64 = 13165;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,388
	ctx.r3.s64 = 388;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A01C;
	sub_8813FDD8(ctx, base);
	// li r8,13166
	ctx.r8.s64 = 13166;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A038;
	sub_8813FDD8(ctx, base);
	// li r8,13167
	ctx.r8.s64 = 13167;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A054;
	sub_8813FDD8(ctx, base);
	// li r8,13168
	ctx.r8.s64 = 13168;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A070;
	sub_8813FDD8(ctx, base);
	// li r8,13169
	ctx.r8.s64 = 13169;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A08C;
	sub_8813FDD8(ctx, base);
	// li r8,13170
	ctx.r8.s64 = 13170;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A0A8;
	sub_8813FDD8(ctx, base);
	// li r8,13171
	ctx.r8.s64 = 13171;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,389
	ctx.r3.s64 = 389;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A0C4;
	sub_8813FDD8(ctx, base);
	// li r8,13172
	ctx.r8.s64 = 13172;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A0E0;
	sub_8813FDD8(ctx, base);
	// li r8,13173
	ctx.r8.s64 = 13173;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A0FC;
	sub_8813FDD8(ctx, base);
	// li r8,13174
	ctx.r8.s64 = 13174;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A118;
	sub_8813FDD8(ctx, base);
	// li r8,13175
	ctx.r8.s64 = 13175;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A134;
	sub_8813FDD8(ctx, base);
	// li r8,13176
	ctx.r8.s64 = 13176;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A150;
	sub_8813FDD8(ctx, base);
	// li r8,13177
	ctx.r8.s64 = 13177;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,390
	ctx.r3.s64 = 390;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A16C;
	sub_8813FDD8(ctx, base);
	// li r8,13178
	ctx.r8.s64 = 13178;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A188;
	sub_8813FDD8(ctx, base);
	// li r8,13179
	ctx.r8.s64 = 13179;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A1A4;
	sub_8813FDD8(ctx, base);
	// li r8,13180
	ctx.r8.s64 = 13180;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A1C0;
	sub_8813FDD8(ctx, base);
	// li r8,13181
	ctx.r8.s64 = 13181;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A1DC;
	sub_8813FDD8(ctx, base);
	// li r8,13182
	ctx.r8.s64 = 13182;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A1F8;
	sub_8813FDD8(ctx, base);
	// li r8,13183
	ctx.r8.s64 = 13183;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A214;
	sub_8813FDD8(ctx, base);
	// li r8,13184
	ctx.r8.s64 = 13184;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A230;
	sub_8813FDD8(ctx, base);
	// li r8,13185
	ctx.r8.s64 = 13185;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A24C;
	sub_8813FDD8(ctx, base);
	// li r8,13186
	ctx.r8.s64 = 13186;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A268;
	sub_8813FDD8(ctx, base);
	// li r8,13187
	ctx.r8.s64 = 13187;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A284;
	sub_8813FDD8(ctx, base);
	// li r8,13188
	ctx.r8.s64 = 13188;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A2A0;
	sub_8813FDD8(ctx, base);
	// li r8,13189
	ctx.r8.s64 = 13189;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A2BC;
	sub_8813FDD8(ctx, base);
	// li r8,13190
	ctx.r8.s64 = 13190;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A2D8;
	sub_8813FDD8(ctx, base);
	// li r8,13191
	ctx.r8.s64 = 13191;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A2F4;
	sub_8813FDD8(ctx, base);
	// li r8,13192
	ctx.r8.s64 = 13192;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A310;
	sub_8813FDD8(ctx, base);
	// li r8,13193
	ctx.r8.s64 = 13193;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A32C;
	sub_8813FDD8(ctx, base);
	// li r8,13194
	ctx.r8.s64 = 13194;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A348;
	sub_8813FDD8(ctx, base);
	// li r8,13195
	ctx.r8.s64 = 13195;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A364;
	sub_8813FDD8(ctx, base);
	// li r8,13196
	ctx.r8.s64 = 13196;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A380;
	sub_8813FDD8(ctx, base);
	// li r8,13197
	ctx.r8.s64 = 13197;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A39C;
	sub_8813FDD8(ctx, base);
	// li r8,13198
	ctx.r8.s64 = 13198;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,391
	ctx.r3.s64 = 391;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A3B8;
	sub_8813FDD8(ctx, base);
	// li r8,13199
	ctx.r8.s64 = 13199;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A3D4;
	sub_8813FDD8(ctx, base);
	// li r8,13200
	ctx.r8.s64 = 13200;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A3F0;
	sub_8813FDD8(ctx, base);
	// li r8,13201
	ctx.r8.s64 = 13201;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A40C;
	sub_8813FDD8(ctx, base);
	// li r8,13202
	ctx.r8.s64 = 13202;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,392
	ctx.r3.s64 = 392;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A428;
	sub_8813FDD8(ctx, base);
	// li r8,13203
	ctx.r8.s64 = 13203;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A444;
	sub_8813FDD8(ctx, base);
	// li r8,13204
	ctx.r8.s64 = 13204;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A460;
	sub_8813FDD8(ctx, base);
	// li r8,13205
	ctx.r8.s64 = 13205;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A47C;
	sub_8813FDD8(ctx, base);
	// li r8,13206
	ctx.r8.s64 = 13206;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,393
	ctx.r3.s64 = 393;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A498;
	sub_8813FDD8(ctx, base);
	// li r8,13207
	ctx.r8.s64 = 13207;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A4B4;
	sub_8813FDD8(ctx, base);
	// li r8,13208
	ctx.r8.s64 = 13208;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A4D0;
	sub_8813FDD8(ctx, base);
	// li r8,13209
	ctx.r8.s64 = 13209;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A4EC;
	sub_8813FDD8(ctx, base);
	// li r8,13210
	ctx.r8.s64 = 13210;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,394
	ctx.r3.s64 = 394;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A508;
	sub_8813FDD8(ctx, base);
	// li r8,13211
	ctx.r8.s64 = 13211;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A524;
	sub_8813FDD8(ctx, base);
	// li r8,13212
	ctx.r8.s64 = 13212;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A540;
	sub_8813FDD8(ctx, base);
	// li r8,13213
	ctx.r8.s64 = 13213;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A55C;
	sub_8813FDD8(ctx, base);
	// li r8,13214
	ctx.r8.s64 = 13214;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A578;
	sub_8813FDD8(ctx, base);
	// li r8,13215
	ctx.r8.s64 = 13215;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A594;
	sub_8813FDD8(ctx, base);
	// li r8,13216
	ctx.r8.s64 = 13216;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A5B0;
	sub_8813FDD8(ctx, base);
	// li r8,13217
	ctx.r8.s64 = 13217;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A5CC;
	sub_8813FDD8(ctx, base);
	// li r8,13218
	ctx.r8.s64 = 13218;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A5E8;
	sub_8813FDD8(ctx, base);
	// li r8,13219
	ctx.r8.s64 = 13219;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,395
	ctx.r3.s64 = 395;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A604;
	sub_8813FDD8(ctx, base);
	// li r8,13228
	ctx.r8.s64 = 13228;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A620;
	sub_8813FDD8(ctx, base);
	// li r8,13229
	ctx.r8.s64 = 13229;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A63C;
	sub_8813FDD8(ctx, base);
	// li r8,13230
	ctx.r8.s64 = 13230;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A658;
	sub_8813FDD8(ctx, base);
	// li r8,13231
	ctx.r8.s64 = 13231;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A674;
	sub_8813FDD8(ctx, base);
	// li r8,13232
	ctx.r8.s64 = 13232;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A690;
	sub_8813FDD8(ctx, base);
	// li r8,13233
	ctx.r8.s64 = 13233;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A6AC;
	sub_8813FDD8(ctx, base);
	// li r8,13234
	ctx.r8.s64 = 13234;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A6C8;
	sub_8813FDD8(ctx, base);
	// li r8,13235
	ctx.r8.s64 = 13235;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A6E4;
	sub_8813FDD8(ctx, base);
	// li r8,13236
	ctx.r8.s64 = 13236;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A700;
	sub_8813FDD8(ctx, base);
	// li r8,13237
	ctx.r8.s64 = 13237;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A71C;
	sub_8813FDD8(ctx, base);
	// li r8,13238
	ctx.r8.s64 = 13238;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A738;
	sub_8813FDD8(ctx, base);
	// li r8,13239
	ctx.r8.s64 = 13239;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A754;
	sub_8813FDD8(ctx, base);
	// li r8,13240
	ctx.r8.s64 = 13240;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A770;
	sub_8813FDD8(ctx, base);
	// li r8,13241
	ctx.r8.s64 = 13241;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A78C;
	sub_8813FDD8(ctx, base);
	// li r8,13242
	ctx.r8.s64 = 13242;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A7A8;
	sub_8813FDD8(ctx, base);
	// li r8,13243
	ctx.r8.s64 = 13243;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A7C4;
	sub_8813FDD8(ctx, base);
	// li r8,13244
	ctx.r8.s64 = 13244;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A7E0;
	sub_8813FDD8(ctx, base);
	// li r8,13245
	ctx.r8.s64 = 13245;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A7FC;
	sub_8813FDD8(ctx, base);
	// li r8,13246
	ctx.r8.s64 = 13246;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A818;
	sub_8813FDD8(ctx, base);
	// li r8,13247
	ctx.r8.s64 = 13247;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A834;
	sub_8813FDD8(ctx, base);
	// li r8,13253
	ctx.r8.s64 = 13253;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A850;
	sub_8813FDD8(ctx, base);
	// li r8,13254
	ctx.r8.s64 = 13254;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A86C;
	sub_8813FDD8(ctx, base);
	// li r8,13255
	ctx.r8.s64 = 13255;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A888;
	sub_8813FDD8(ctx, base);
	// li r8,13262
	ctx.r8.s64 = 13262;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A8A4;
	sub_8813FDD8(ctx, base);
	// li r8,13263
	ctx.r8.s64 = 13263;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A8C0;
	sub_8813FDD8(ctx, base);
	// li r8,13264
	ctx.r8.s64 = 13264;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A8DC;
	sub_8813FDD8(ctx, base);
	// li r8,13265
	ctx.r8.s64 = 13265;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A8F8;
	sub_8813FDD8(ctx, base);
	// li r8,13268
	ctx.r8.s64 = 13268;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A914;
	sub_8813FDD8(ctx, base);
	// li r8,13269
	ctx.r8.s64 = 13269;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A930;
	sub_8813FDD8(ctx, base);
	// li r8,13270
	ctx.r8.s64 = 13270;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A94C;
	sub_8813FDD8(ctx, base);
	// li r8,13271
	ctx.r8.s64 = 13271;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A968;
	sub_8813FDD8(ctx, base);
	// li r8,13276
	ctx.r8.s64 = 13276;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A984;
	sub_8813FDD8(ctx, base);
	// li r8,13277
	ctx.r8.s64 = 13277;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A9A0;
	sub_8813FDD8(ctx, base);
	// li r8,13278
	ctx.r8.s64 = 13278;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A9BC;
	sub_8813FDD8(ctx, base);
	// li r8,13279
	ctx.r8.s64 = 13279;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A9D8;
	sub_8813FDD8(ctx, base);
	// li r8,13280
	ctx.r8.s64 = 13280;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805A9F4;
	sub_8813FDD8(ctx, base);
	// li r8,13281
	ctx.r8.s64 = 13281;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,397
	ctx.r3.s64 = 397;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA10;
	sub_8813FDD8(ctx, base);
	// li r8,13282
	ctx.r8.s64 = 13282;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA2C;
	sub_8813FDD8(ctx, base);
	// li r8,13283
	ctx.r8.s64 = 13283;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA48;
	sub_8813FDD8(ctx, base);
	// li r8,13284
	ctx.r8.s64 = 13284;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,398
	ctx.r3.s64 = 398;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA64;
	sub_8813FDD8(ctx, base);
	// li r8,13285
	ctx.r8.s64 = 13285;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA80;
	sub_8813FDD8(ctx, base);
	// li r8,13286
	ctx.r8.s64 = 13286;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AA9C;
	sub_8813FDD8(ctx, base);
	// li r8,13287
	ctx.r8.s64 = 13287;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,399
	ctx.r3.s64 = 399;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AAB8;
	sub_8813FDD8(ctx, base);
	// li r8,13288
	ctx.r8.s64 = 13288;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AAD4;
	sub_8813FDD8(ctx, base);
	// li r8,13289
	ctx.r8.s64 = 13289;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AAF0;
	sub_8813FDD8(ctx, base);
	// li r8,13290
	ctx.r8.s64 = 13290;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB0C;
	sub_8813FDD8(ctx, base);
	// li r8,13291
	ctx.r8.s64 = 13291;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB28;
	sub_8813FDD8(ctx, base);
	// li r8,13292
	ctx.r8.s64 = 13292;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB44;
	sub_8813FDD8(ctx, base);
	// li r8,13293
	ctx.r8.s64 = 13293;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,401
	ctx.r3.s64 = 401;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB60;
	sub_8813FDD8(ctx, base);
	// li r8,13298
	ctx.r8.s64 = 13298;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB7C;
	sub_8813FDD8(ctx, base);
	// li r8,13299
	ctx.r8.s64 = 13299;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AB98;
	sub_8813FDD8(ctx, base);
	// li r8,13300
	ctx.r8.s64 = 13300;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ABB4;
	sub_8813FDD8(ctx, base);
	// li r8,13301
	ctx.r8.s64 = 13301;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ABD0;
	sub_8813FDD8(ctx, base);
	// li r8,13302
	ctx.r8.s64 = 13302;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ABEC;
	sub_8813FDD8(ctx, base);
	// li r8,13303
	ctx.r8.s64 = 13303;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC08;
	sub_8813FDD8(ctx, base);
	// li r8,13309
	ctx.r8.s64 = 13309;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC24;
	sub_8813FDD8(ctx, base);
	// li r8,13310
	ctx.r8.s64 = 13310;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC40;
	sub_8813FDD8(ctx, base);
	// li r8,13311
	ctx.r8.s64 = 13311;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,407
	ctx.r3.s64 = 407;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC5C;
	sub_8813FDD8(ctx, base);
	// li r8,13315
	ctx.r8.s64 = 13315;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC78;
	sub_8813FDD8(ctx, base);
	// li r8,13316
	ctx.r8.s64 = 13316;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AC94;
	sub_8813FDD8(ctx, base);
	// li r8,13317
	ctx.r8.s64 = 13317;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,409
	ctx.r3.s64 = 409;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ACB0;
	sub_8813FDD8(ctx, base);
	// li r8,13327
	ctx.r8.s64 = 13327;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ACCC;
	sub_8813FDD8(ctx, base);
	// li r8,13328
	ctx.r8.s64 = 13328;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ACE8;
	sub_8813FDD8(ctx, base);
	// li r8,13329
	ctx.r8.s64 = 13329;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD04;
	sub_8813FDD8(ctx, base);
	// li r8,13330
	ctx.r8.s64 = 13330;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD20;
	sub_8813FDD8(ctx, base);
	// li r8,13331
	ctx.r8.s64 = 13331;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD3C;
	sub_8813FDD8(ctx, base);
	// li r8,13332
	ctx.r8.s64 = 13332;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD58;
	sub_8813FDD8(ctx, base);
	// li r8,13333
	ctx.r8.s64 = 13333;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD74;
	sub_8813FDD8(ctx, base);
	// li r8,13334
	ctx.r8.s64 = 13334;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AD90;
	sub_8813FDD8(ctx, base);
	// li r8,13335
	ctx.r8.s64 = 13335;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ADAC;
	sub_8813FDD8(ctx, base);
	// li r8,13336
	ctx.r8.s64 = 13336;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ADC8;
	sub_8813FDD8(ctx, base);
	// li r8,13337
	ctx.r8.s64 = 13337;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805ADE4;
	sub_8813FDD8(ctx, base);
	// li r8,13338
	ctx.r8.s64 = 13338;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE00;
	sub_8813FDD8(ctx, base);
	// li r8,13339
	ctx.r8.s64 = 13339;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE1C;
	sub_8813FDD8(ctx, base);
	// li r8,13340
	ctx.r8.s64 = 13340;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE38;
	sub_8813FDD8(ctx, base);
	// li r8,13341
	ctx.r8.s64 = 13341;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE54;
	sub_8813FDD8(ctx, base);
	// li r8,13342
	ctx.r8.s64 = 13342;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE70;
	sub_8813FDD8(ctx, base);
	// li r8,13343
	ctx.r8.s64 = 13343;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AE8C;
	sub_8813FDD8(ctx, base);
	// li r8,13344
	ctx.r8.s64 = 13344;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AEA8;
	sub_8813FDD8(ctx, base);
	// li r8,13345
	ctx.r8.s64 = 13345;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AEC4;
	sub_8813FDD8(ctx, base);
	// li r8,13346
	ctx.r8.s64 = 13346;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AEE0;
	sub_8813FDD8(ctx, base);
	// li r8,13347
	ctx.r8.s64 = 13347;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AEFC;
	sub_8813FDD8(ctx, base);
	// li r8,13348
	ctx.r8.s64 = 13348;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AF18;
	sub_8813FDD8(ctx, base);
	// li r8,13349
	ctx.r8.s64 = 13349;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AF34;
	sub_8813FDD8(ctx, base);
	// li r8,13350
	ctx.r8.s64 = 13350;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AF50;
	sub_8813FDD8(ctx, base);
	// li r8,13351
	ctx.r8.s64 = 13351;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AF6C;
	sub_8813FDD8(ctx, base);
	// li r8,13352
	ctx.r8.s64 = 13352;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AF88;
	sub_8813FDD8(ctx, base);
	// li r8,13353
	ctx.r8.s64 = 13353;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AFA4;
	sub_8813FDD8(ctx, base);
	// li r8,13354
	ctx.r8.s64 = 13354;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AFC0;
	sub_8813FDD8(ctx, base);
	// li r8,13358
	ctx.r8.s64 = 13358;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AFDC;
	sub_8813FDD8(ctx, base);
	// li r8,13359
	ctx.r8.s64 = 13359;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805AFF8;
	sub_8813FDD8(ctx, base);
	// li r8,13360
	ctx.r8.s64 = 13360;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,413
	ctx.r3.s64 = 413;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B014;
	sub_8813FDD8(ctx, base);
	// li r8,13361
	ctx.r8.s64 = 13361;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B030;
	sub_8813FDD8(ctx, base);
	// li r8,13362
	ctx.r8.s64 = 13362;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B04C;
	sub_8813FDD8(ctx, base);
	// li r8,13363
	ctx.r8.s64 = 13363;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,414
	ctx.r3.s64 = 414;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B068;
	sub_8813FDD8(ctx, base);
	// li r8,13364
	ctx.r8.s64 = 13364;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B084;
	sub_8813FDD8(ctx, base);
	// li r8,13365
	ctx.r8.s64 = 13365;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B0A0;
	sub_8813FDD8(ctx, base);
	// li r8,13366
	ctx.r8.s64 = 13366;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B0BC;
	sub_8813FDD8(ctx, base);
	// li r8,13367
	ctx.r8.s64 = 13367;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,415
	ctx.r3.s64 = 415;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B0D8;
	sub_8813FDD8(ctx, base);
	// li r8,13368
	ctx.r8.s64 = 13368;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B0F4;
	sub_8813FDD8(ctx, base);
	// li r8,13369
	ctx.r8.s64 = 13369;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B110;
	sub_8813FDD8(ctx, base);
	// li r8,13370
	ctx.r8.s64 = 13370;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B12C;
	sub_8813FDD8(ctx, base);
	// li r8,13371
	ctx.r8.s64 = 13371;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B148;
	sub_8813FDD8(ctx, base);
	// li r8,13372
	ctx.r8.s64 = 13372;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B164;
	sub_8813FDD8(ctx, base);
	// li r8,13373
	ctx.r8.s64 = 13373;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B180;
	sub_8813FDD8(ctx, base);
	// li r8,13374
	ctx.r8.s64 = 13374;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B19C;
	sub_8813FDD8(ctx, base);
	// li r8,13375
	ctx.r8.s64 = 13375;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,417
	ctx.r3.s64 = 417;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B1B8;
	sub_8813FDD8(ctx, base);
	// li r8,13376
	ctx.r8.s64 = 13376;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B1D4;
	sub_8813FDD8(ctx, base);
	// li r8,13377
	ctx.r8.s64 = 13377;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B1F0;
	sub_8813FDD8(ctx, base);
	// li r8,13378
	ctx.r8.s64 = 13378;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B20C;
	sub_8813FDD8(ctx, base);
	// li r8,13379
	ctx.r8.s64 = 13379;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,418
	ctx.r3.s64 = 418;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B228;
	sub_8813FDD8(ctx, base);
	// li r8,13380
	ctx.r8.s64 = 13380;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B244;
	sub_8813FDD8(ctx, base);
	// li r8,13381
	ctx.r8.s64 = 13381;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B260;
	sub_8813FDD8(ctx, base);
	// li r8,13382
	ctx.r8.s64 = 13382;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,419
	ctx.r3.s64 = 419;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B27C;
	sub_8813FDD8(ctx, base);
	// li r8,13383
	ctx.r8.s64 = 13383;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B298;
	sub_8813FDD8(ctx, base);
	// li r8,13384
	ctx.r8.s64 = 13384;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B2B4;
	sub_8813FDD8(ctx, base);
	// li r8,13385
	ctx.r8.s64 = 13385;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,420
	ctx.r3.s64 = 420;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B2D0;
	sub_8813FDD8(ctx, base);
	// li r8,13386
	ctx.r8.s64 = 13386;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B2EC;
	sub_8813FDD8(ctx, base);
	// li r8,13387
	ctx.r8.s64 = 13387;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B308;
	sub_8813FDD8(ctx, base);
	// li r8,13388
	ctx.r8.s64 = 13388;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B324;
	sub_8813FDD8(ctx, base);
	// li r8,13389
	ctx.r8.s64 = 13389;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B340;
	sub_8813FDD8(ctx, base);
	// li r8,13390
	ctx.r8.s64 = 13390;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B35C;
	sub_8813FDD8(ctx, base);
	// li r8,13391
	ctx.r8.s64 = 13391;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B378;
	sub_8813FDD8(ctx, base);
	// li r8,13392
	ctx.r8.s64 = 13392;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B394;
	sub_8813FDD8(ctx, base);
	// li r8,13393
	ctx.r8.s64 = 13393;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B3B0;
	sub_8813FDD8(ctx, base);
	// li r8,13394
	ctx.r8.s64 = 13394;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B3CC;
	sub_8813FDD8(ctx, base);
	// li r8,13395
	ctx.r8.s64 = 13395;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B3E8;
	sub_8813FDD8(ctx, base);
	// li r8,13396
	ctx.r8.s64 = 13396;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B404;
	sub_8813FDD8(ctx, base);
	// li r8,13397
	ctx.r8.s64 = 13397;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B420;
	sub_8813FDD8(ctx, base);
	// li r8,13398
	ctx.r8.s64 = 13398;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B43C;
	sub_8813FDD8(ctx, base);
	// li r8,13399
	ctx.r8.s64 = 13399;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B458;
	sub_8813FDD8(ctx, base);
	// li r8,13400
	ctx.r8.s64 = 13400;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B474;
	sub_8813FDD8(ctx, base);
	// li r8,13401
	ctx.r8.s64 = 13401;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B490;
	sub_8813FDD8(ctx, base);
	// li r8,13402
	ctx.r8.s64 = 13402;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B4AC;
	sub_8813FDD8(ctx, base);
	// li r8,13403
	ctx.r8.s64 = 13403;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B4C8;
	sub_8813FDD8(ctx, base);
	// li r8,13404
	ctx.r8.s64 = 13404;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B4E4;
	sub_8813FDD8(ctx, base);
	// li r8,13405
	ctx.r8.s64 = 13405;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B500;
	sub_8813FDD8(ctx, base);
	// li r8,13406
	ctx.r8.s64 = 13406;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B51C;
	sub_8813FDD8(ctx, base);
	// li r8,13407
	ctx.r8.s64 = 13407;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B538;
	sub_8813FDD8(ctx, base);
	// li r8,13408
	ctx.r8.s64 = 13408;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B554;
	sub_8813FDD8(ctx, base);
	// li r8,13409
	ctx.r8.s64 = 13409;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B570;
	sub_8813FDD8(ctx, base);
	// li r8,13410
	ctx.r8.s64 = 13410;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B58C;
	sub_8813FDD8(ctx, base);
	// li r8,13411
	ctx.r8.s64 = 13411;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B5A8;
	sub_8813FDD8(ctx, base);
	// li r8,13412
	ctx.r8.s64 = 13412;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B5C4;
	sub_8813FDD8(ctx, base);
	// li r8,13413
	ctx.r8.s64 = 13413;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B5E0;
	sub_8813FDD8(ctx, base);
	// li r8,13414
	ctx.r8.s64 = 13414;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B5FC;
	sub_8813FDD8(ctx, base);
	// li r8,13415
	ctx.r8.s64 = 13415;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B618;
	sub_8813FDD8(ctx, base);
	// li r8,13416
	ctx.r8.s64 = 13416;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B634;
	sub_8813FDD8(ctx, base);
	// li r8,13417
	ctx.r8.s64 = 13417;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B650;
	sub_8813FDD8(ctx, base);
	// li r8,13418
	ctx.r8.s64 = 13418;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B66C;
	sub_8813FDD8(ctx, base);
	// li r8,13419
	ctx.r8.s64 = 13419;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B688;
	sub_8813FDD8(ctx, base);
	// li r8,13420
	ctx.r8.s64 = 13420;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B6A4;
	sub_8813FDD8(ctx, base);
	// li r8,13421
	ctx.r8.s64 = 13421;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B6C0;
	sub_8813FDD8(ctx, base);
	// li r8,13422
	ctx.r8.s64 = 13422;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B6DC;
	sub_8813FDD8(ctx, base);
	// li r8,13423
	ctx.r8.s64 = 13423;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B6F8;
	sub_8813FDD8(ctx, base);
	// li r8,13424
	ctx.r8.s64 = 13424;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B714;
	sub_8813FDD8(ctx, base);
	// li r8,13425
	ctx.r8.s64 = 13425;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B730;
	sub_8813FDD8(ctx, base);
	// li r8,13426
	ctx.r8.s64 = 13426;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B74C;
	sub_8813FDD8(ctx, base);
	// li r8,13427
	ctx.r8.s64 = 13427;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B768;
	sub_8813FDD8(ctx, base);
	// li r8,13428
	ctx.r8.s64 = 13428;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B784;
	sub_8813FDD8(ctx, base);
	// li r8,13429
	ctx.r8.s64 = 13429;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B7A0;
	sub_8813FDD8(ctx, base);
	// li r8,13430
	ctx.r8.s64 = 13430;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B7BC;
	sub_8813FDD8(ctx, base);
	// li r8,13431
	ctx.r8.s64 = 13431;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B7D8;
	sub_8813FDD8(ctx, base);
	// li r8,13432
	ctx.r8.s64 = 13432;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B7F4;
	sub_8813FDD8(ctx, base);
	// li r8,13433
	ctx.r8.s64 = 13433;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B810;
	sub_8813FDD8(ctx, base);
	// li r8,13434
	ctx.r8.s64 = 13434;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B82C;
	sub_8813FDD8(ctx, base);
	// li r8,13435
	ctx.r8.s64 = 13435;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,421
	ctx.r3.s64 = 421;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B848;
	sub_8813FDD8(ctx, base);
	// li r8,13436
	ctx.r8.s64 = 13436;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B864;
	sub_8813FDD8(ctx, base);
	// li r8,13437
	ctx.r8.s64 = 13437;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,422
	ctx.r3.s64 = 422;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B880;
	sub_8813FDD8(ctx, base);
	// li r8,13438
	ctx.r8.s64 = 13438;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B89C;
	sub_8813FDD8(ctx, base);
	// li r8,13439
	ctx.r8.s64 = 13439;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,423
	ctx.r3.s64 = 423;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B8B8;
	sub_8813FDD8(ctx, base);
	// li r8,13440
	ctx.r8.s64 = 13440;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B8D4;
	sub_8813FDD8(ctx, base);
	// li r8,13441
	ctx.r8.s64 = 13441;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B8F0;
	sub_8813FDD8(ctx, base);
	// li r8,13442
	ctx.r8.s64 = 13442;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B90C;
	sub_8813FDD8(ctx, base);
	// li r8,13443
	ctx.r8.s64 = 13443;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,425
	ctx.r3.s64 = 425;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B928;
	sub_8813FDD8(ctx, base);
	// li r8,13444
	ctx.r8.s64 = 13444;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B944;
	sub_8813FDD8(ctx, base);
	// li r8,13445
	ctx.r8.s64 = 13445;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,426
	ctx.r3.s64 = 426;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B960;
	sub_8813FDD8(ctx, base);
	// li r8,13446
	ctx.r8.s64 = 13446;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B97C;
	sub_8813FDD8(ctx, base);
	// li r8,13447
	ctx.r8.s64 = 13447;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B998;
	sub_8813FDD8(ctx, base);
	// li r8,13448
	ctx.r8.s64 = 13448;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B9B4;
	sub_8813FDD8(ctx, base);
	// li r8,13449
	ctx.r8.s64 = 13449;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,427
	ctx.r3.s64 = 427;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B9D0;
	sub_8813FDD8(ctx, base);
	// li r8,13450
	ctx.r8.s64 = 13450;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805B9EC;
	sub_8813FDD8(ctx, base);
	// li r8,13451
	ctx.r8.s64 = 13451;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA08;
	sub_8813FDD8(ctx, base);
	// li r8,13452
	ctx.r8.s64 = 13452;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA24;
	sub_8813FDD8(ctx, base);
	// li r8,13453
	ctx.r8.s64 = 13453;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,428
	ctx.r3.s64 = 428;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA40;
	sub_8813FDD8(ctx, base);
	// li r8,13454
	ctx.r8.s64 = 13454;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA5C;
	sub_8813FDD8(ctx, base);
	// li r8,13455
	ctx.r8.s64 = 13455;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA78;
	sub_8813FDD8(ctx, base);
	// li r8,13456
	ctx.r8.s64 = 13456;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BA94;
	sub_8813FDD8(ctx, base);
	// li r8,13457
	ctx.r8.s64 = 13457;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BAB0;
	sub_8813FDD8(ctx, base);
	// li r8,13458
	ctx.r8.s64 = 13458;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BACC;
	sub_8813FDD8(ctx, base);
	// li r8,13459
	ctx.r8.s64 = 13459;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BAE8;
	sub_8813FDD8(ctx, base);
	// li r8,13460
	ctx.r8.s64 = 13460;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB04;
	sub_8813FDD8(ctx, base);
	// li r8,13461
	ctx.r8.s64 = 13461;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,430
	ctx.r3.s64 = 430;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB20;
	sub_8813FDD8(ctx, base);
	// li r8,13462
	ctx.r8.s64 = 13462;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB3C;
	sub_8813FDD8(ctx, base);
	// li r8,13463
	ctx.r8.s64 = 13463;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB58;
	sub_8813FDD8(ctx, base);
	// li r8,13464
	ctx.r8.s64 = 13464;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB74;
	sub_8813FDD8(ctx, base);
	// li r8,13465
	ctx.r8.s64 = 13465;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,431
	ctx.r3.s64 = 431;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BB90;
	sub_8813FDD8(ctx, base);
	// li r8,13466
	ctx.r8.s64 = 13466;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BBAC;
	sub_8813FDD8(ctx, base);
	// li r8,13467
	ctx.r8.s64 = 13467;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BBC8;
	sub_8813FDD8(ctx, base);
	// li r8,13468
	ctx.r8.s64 = 13468;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BBE4;
	sub_8813FDD8(ctx, base);
	// li r8,13469
	ctx.r8.s64 = 13469;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC00;
	sub_8813FDD8(ctx, base);
	// li r8,13470
	ctx.r8.s64 = 13470;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC1C;
	sub_8813FDD8(ctx, base);
	// li r8,13471
	ctx.r8.s64 = 13471;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC38;
	sub_8813FDD8(ctx, base);
	// li r8,13472
	ctx.r8.s64 = 13472;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC54;
	sub_8813FDD8(ctx, base);
	// li r8,13473
	ctx.r8.s64 = 13473;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC70;
	sub_8813FDD8(ctx, base);
	// li r8,13474
	ctx.r8.s64 = 13474;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BC8C;
	sub_8813FDD8(ctx, base);
	// li r8,13475
	ctx.r8.s64 = 13475;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,433
	ctx.r3.s64 = 433;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BCA8;
	sub_8813FDD8(ctx, base);
	// li r8,13476
	ctx.r8.s64 = 13476;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BCC4;
	sub_8813FDD8(ctx, base);
	// li r8,13477
	ctx.r8.s64 = 13477;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BCE0;
	sub_8813FDD8(ctx, base);
	// li r8,13478
	ctx.r8.s64 = 13478;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BCFC;
	sub_8813FDD8(ctx, base);
	// li r8,13479
	ctx.r8.s64 = 13479;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BD18;
	sub_8813FDD8(ctx, base);
	// li r8,13480
	ctx.r8.s64 = 13480;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BD34;
	sub_8813FDD8(ctx, base);
	// li r8,13481
	ctx.r8.s64 = 13481;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,434
	ctx.r3.s64 = 434;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BD50;
	sub_8813FDD8(ctx, base);
	// li r8,13482
	ctx.r8.s64 = 13482;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BD6C;
	sub_8813FDD8(ctx, base);
	// li r8,13483
	ctx.r8.s64 = 13483;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BD88;
	sub_8813FDD8(ctx, base);
	// li r8,13484
	ctx.r8.s64 = 13484;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BDA4;
	sub_8813FDD8(ctx, base);
	// li r8,13485
	ctx.r8.s64 = 13485;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BDC0;
	sub_8813FDD8(ctx, base);
	// li r8,13486
	ctx.r8.s64 = 13486;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BDDC;
	sub_8813FDD8(ctx, base);
	// li r8,13487
	ctx.r8.s64 = 13487;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BDF8;
	sub_8813FDD8(ctx, base);
	// li r8,13488
	ctx.r8.s64 = 13488;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BE14;
	sub_8813FDD8(ctx, base);
	// li r8,13489
	ctx.r8.s64 = 13489;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BE30;
	sub_8813FDD8(ctx, base);
	// li r8,13490
	ctx.r8.s64 = 13490;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BE4C;
	sub_8813FDD8(ctx, base);
	// li r8,13491
	ctx.r8.s64 = 13491;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BE68;
	sub_8813FDD8(ctx, base);
	// li r8,13492
	ctx.r8.s64 = 13492;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BE84;
	sub_8813FDD8(ctx, base);
	// li r8,13493
	ctx.r8.s64 = 13493;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BEA0;
	sub_8813FDD8(ctx, base);
	// li r8,13494
	ctx.r8.s64 = 13494;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BEBC;
	sub_8813FDD8(ctx, base);
	// li r8,13495
	ctx.r8.s64 = 13495;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BED8;
	sub_8813FDD8(ctx, base);
	// li r8,13496
	ctx.r8.s64 = 13496;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BEF4;
	sub_8813FDD8(ctx, base);
	// li r8,13497
	ctx.r8.s64 = 13497;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF10;
	sub_8813FDD8(ctx, base);
	// li r8,13498
	ctx.r8.s64 = 13498;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF2C;
	sub_8813FDD8(ctx, base);
	// li r8,13499
	ctx.r8.s64 = 13499;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF48;
	sub_8813FDD8(ctx, base);
	// li r8,13500
	ctx.r8.s64 = 13500;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF64;
	sub_8813FDD8(ctx, base);
	// li r8,13501
	ctx.r8.s64 = 13501;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF80;
	sub_8813FDD8(ctx, base);
	// li r8,13502
	ctx.r8.s64 = 13502;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BF9C;
	sub_8813FDD8(ctx, base);
	// li r8,13503
	ctx.r8.s64 = 13503;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BFB8;
	sub_8813FDD8(ctx, base);
	// li r8,13504
	ctx.r8.s64 = 13504;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BFD4;
	sub_8813FDD8(ctx, base);
	// li r8,13505
	ctx.r8.s64 = 13505;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805BFF0;
	sub_8813FDD8(ctx, base);
	// li r8,13506
	ctx.r8.s64 = 13506;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,446
	ctx.r3.s64 = 446;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C00C;
	sub_8813FDD8(ctx, base);
	// li r8,13507
	ctx.r8.s64 = 13507;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,446
	ctx.r3.s64 = 446;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C028;
	sub_8813FDD8(ctx, base);
	// li r8,13513
	ctx.r8.s64 = 13513;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C044;
	sub_8813FDD8(ctx, base);
	// li r8,13514
	ctx.r8.s64 = 13514;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C060;
	sub_8813FDD8(ctx, base);
	// li r8,13515
	ctx.r8.s64 = 13515;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,437
	ctx.r3.s64 = 437;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C07C;
	sub_8813FDD8(ctx, base);
	// li r8,13516
	ctx.r8.s64 = 13516;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C098;
	sub_8813FDD8(ctx, base);
	// li r8,13517
	ctx.r8.s64 = 13517;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C0B4;
	sub_8813FDD8(ctx, base);
	// li r8,13518
	ctx.r8.s64 = 13518;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,438
	ctx.r3.s64 = 438;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C0D0;
	sub_8813FDD8(ctx, base);
	// li r8,13519
	ctx.r8.s64 = 13519;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C0EC;
	sub_8813FDD8(ctx, base);
	// li r8,13520
	ctx.r8.s64 = 13520;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C108;
	sub_8813FDD8(ctx, base);
	// li r8,13521
	ctx.r8.s64 = 13521;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,439
	ctx.r3.s64 = 439;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C124;
	sub_8813FDD8(ctx, base);
	// li r8,13522
	ctx.r8.s64 = 13522;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C140;
	sub_8813FDD8(ctx, base);
	// li r8,13523
	ctx.r8.s64 = 13523;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C15C;
	sub_8813FDD8(ctx, base);
	// li r8,13524
	ctx.r8.s64 = 13524;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C178;
	sub_8813FDD8(ctx, base);
	// li r8,13525
	ctx.r8.s64 = 13525;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C194;
	sub_8813FDD8(ctx, base);
	// li r8,13526
	ctx.r8.s64 = 13526;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C1B0;
	sub_8813FDD8(ctx, base);
	// li r8,13527
	ctx.r8.s64 = 13527;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,441
	ctx.r3.s64 = 441;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C1CC;
	sub_8813FDD8(ctx, base);
	// li r8,13528
	ctx.r8.s64 = 13528;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C1E8;
	sub_8813FDD8(ctx, base);
	// li r8,13529
	ctx.r8.s64 = 13529;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C204;
	sub_8813FDD8(ctx, base);
	// li r8,13530
	ctx.r8.s64 = 13530;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,442
	ctx.r3.s64 = 442;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C220;
	sub_8813FDD8(ctx, base);
	// li r8,13531
	ctx.r8.s64 = 13531;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C23C;
	sub_8813FDD8(ctx, base);
	// li r8,13532
	ctx.r8.s64 = 13532;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C258;
	sub_8813FDD8(ctx, base);
	// li r8,13533
	ctx.r8.s64 = 13533;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,443
	ctx.r3.s64 = 443;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C274;
	sub_8813FDD8(ctx, base);
	// li r8,13534
	ctx.r8.s64 = 13534;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C290;
	sub_8813FDD8(ctx, base);
	// li r8,13535
	ctx.r8.s64 = 13535;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C2AC;
	sub_8813FDD8(ctx, base);
	// li r8,13536
	ctx.r8.s64 = 13536;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C2C8;
	sub_8813FDD8(ctx, base);
	// li r8,13537
	ctx.r8.s64 = 13537;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,445
	ctx.r3.s64 = 445;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C2E4;
	sub_8813FDD8(ctx, base);
	// li r8,13538
	ctx.r8.s64 = 13538;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,445
	ctx.r3.s64 = 445;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C300;
	sub_8813FDD8(ctx, base);
	// li r8,13539
	ctx.r8.s64 = 13539;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,445
	ctx.r3.s64 = 445;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C31C;
	sub_8813FDD8(ctx, base);
	// li r8,13540
	ctx.r8.s64 = 13540;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,445
	ctx.r3.s64 = 445;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C338;
	sub_8813FDD8(ctx, base);
	// li r8,13541
	ctx.r8.s64 = 13541;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,446
	ctx.r3.s64 = 446;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C354;
	sub_8813FDD8(ctx, base);
	// li r8,13542
	ctx.r8.s64 = 13542;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,446
	ctx.r3.s64 = 446;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C370;
	sub_8813FDD8(ctx, base);
	// li r8,13543
	ctx.r8.s64 = 13543;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,446
	ctx.r3.s64 = 446;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C38C;
	sub_8813FDD8(ctx, base);
	// li r8,13544
	ctx.r8.s64 = 13544;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C3A8;
	sub_8813FDD8(ctx, base);
	// li r8,13545
	ctx.r8.s64 = 13545;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C3C4;
	sub_8813FDD8(ctx, base);
	// li r8,13546
	ctx.r8.s64 = 13546;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C3E0;
	sub_8813FDD8(ctx, base);
	// li r8,13547
	ctx.r8.s64 = 13547;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C3FC;
	sub_8813FDD8(ctx, base);
	// li r8,13548
	ctx.r8.s64 = 13548;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C418;
	sub_8813FDD8(ctx, base);
	// li r8,13549
	ctx.r8.s64 = 13549;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C434;
	sub_8813FDD8(ctx, base);
	// li r8,13550
	ctx.r8.s64 = 13550;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C450;
	sub_8813FDD8(ctx, base);
	// li r8,13551
	ctx.r8.s64 = 13551;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C46C;
	sub_8813FDD8(ctx, base);
	// li r8,13552
	ctx.r8.s64 = 13552;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C488;
	sub_8813FDD8(ctx, base);
	// li r8,13553
	ctx.r8.s64 = 13553;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C4A4;
	sub_8813FDD8(ctx, base);
	// li r8,13554
	ctx.r8.s64 = 13554;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C4C0;
	sub_8813FDD8(ctx, base);
	// li r8,13555
	ctx.r8.s64 = 13555;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C4DC;
	sub_8813FDD8(ctx, base);
	// li r8,13556
	ctx.r8.s64 = 13556;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C4F8;
	sub_8813FDD8(ctx, base);
	// li r8,13557
	ctx.r8.s64 = 13557;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C514;
	sub_8813FDD8(ctx, base);
	// li r8,13558
	ctx.r8.s64 = 13558;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C530;
	sub_8813FDD8(ctx, base);
	// li r8,13563
	ctx.r8.s64 = 13563;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C54C;
	sub_8813FDD8(ctx, base);
	// li r8,13564
	ctx.r8.s64 = 13564;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C568;
	sub_8813FDD8(ctx, base);
	// li r8,13565
	ctx.r8.s64 = 13565;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C584;
	sub_8813FDD8(ctx, base);
	// li r8,13566
	ctx.r8.s64 = 13566;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C5A0;
	sub_8813FDD8(ctx, base);
	// li r8,13567
	ctx.r8.s64 = 13567;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,457
	ctx.r3.s64 = 457;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C5BC;
	sub_8813FDD8(ctx, base);
	// li r8,13568
	ctx.r8.s64 = 13568;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,457
	ctx.r3.s64 = 457;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C5D8;
	sub_8813FDD8(ctx, base);
	// li r8,13569
	ctx.r8.s64 = 13569;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,457
	ctx.r3.s64 = 457;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C5F4;
	sub_8813FDD8(ctx, base);
	// li r8,13573
	ctx.r8.s64 = 13573;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C610;
	sub_8813FDD8(ctx, base);
	// li r8,13574
	ctx.r8.s64 = 13574;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C62C;
	sub_8813FDD8(ctx, base);
	// li r8,13575
	ctx.r8.s64 = 13575;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,461
	ctx.r3.s64 = 461;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C648;
	sub_8813FDD8(ctx, base);
	// li r8,13576
	ctx.r8.s64 = 13576;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,461
	ctx.r3.s64 = 461;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C664;
	sub_8813FDD8(ctx, base);
	// li r8,13577
	ctx.r8.s64 = 13577;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C680;
	sub_8813FDD8(ctx, base);
	// li r8,13578
	ctx.r8.s64 = 13578;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C69C;
	sub_8813FDD8(ctx, base);
	// li r8,13579
	ctx.r8.s64 = 13579;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C6B8;
	sub_8813FDD8(ctx, base);
	// li r8,13580
	ctx.r8.s64 = 13580;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C6D4;
	sub_8813FDD8(ctx, base);
	// li r8,13581
	ctx.r8.s64 = 13581;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C6F0;
	sub_8813FDD8(ctx, base);
	// li r8,13582
	ctx.r8.s64 = 13582;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C70C;
	sub_8813FDD8(ctx, base);
	// li r8,13583
	ctx.r8.s64 = 13583;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C728;
	sub_8813FDD8(ctx, base);
	// li r8,13584
	ctx.r8.s64 = 13584;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C744;
	sub_8813FDD8(ctx, base);
	// li r8,13592
	ctx.r8.s64 = 13592;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C760;
	sub_8813FDD8(ctx, base);
	// li r8,13593
	ctx.r8.s64 = 13593;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C77C;
	sub_8813FDD8(ctx, base);
	// li r8,13594
	ctx.r8.s64 = 13594;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C798;
	sub_8813FDD8(ctx, base);
	// li r8,13595
	ctx.r8.s64 = 13595;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C7B4;
	sub_8813FDD8(ctx, base);
	// li r8,13596
	ctx.r8.s64 = 13596;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C7D0;
	sub_8813FDD8(ctx, base);
	// li r8,13597
	ctx.r8.s64 = 13597;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,449
	ctx.r3.s64 = 449;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C7EC;
	sub_8813FDD8(ctx, base);
	// li r8,13598
	ctx.r8.s64 = 13598;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C808;
	sub_8813FDD8(ctx, base);
	// li r8,13599
	ctx.r8.s64 = 13599;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C824;
	sub_8813FDD8(ctx, base);
	// li r8,13600
	ctx.r8.s64 = 13600;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,450
	ctx.r3.s64 = 450;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C840;
	sub_8813FDD8(ctx, base);
	// li r8,13601
	ctx.r8.s64 = 13601;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C85C;
	sub_8813FDD8(ctx, base);
	// li r8,13602
	ctx.r8.s64 = 13602;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C878;
	sub_8813FDD8(ctx, base);
	// li r8,13603
	ctx.r8.s64 = 13603;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,451
	ctx.r3.s64 = 451;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C894;
	sub_8813FDD8(ctx, base);
	// li r8,13604
	ctx.r8.s64 = 13604;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C8B0;
	sub_8813FDD8(ctx, base);
	// li r8,13605
	ctx.r8.s64 = 13605;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C8CC;
	sub_8813FDD8(ctx, base);
	// li r8,13606
	ctx.r8.s64 = 13606;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,452
	ctx.r3.s64 = 452;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C8E8;
	sub_8813FDD8(ctx, base);
	// li r8,13611
	ctx.r8.s64 = 13611;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C904;
	sub_8813FDD8(ctx, base);
	// li r8,13612
	ctx.r8.s64 = 13612;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,455
	ctx.r3.s64 = 455;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C920;
	sub_8813FDD8(ctx, base);
	// li r8,13615
	ctx.r8.s64 = 13615;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,457
	ctx.r3.s64 = 457;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C93C;
	sub_8813FDD8(ctx, base);
	// li r8,13616
	ctx.r8.s64 = 13616;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,457
	ctx.r3.s64 = 457;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C958;
	sub_8813FDD8(ctx, base);
	// li r8,13621
	ctx.r8.s64 = 13621;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C974;
	sub_8813FDD8(ctx, base);
	// li r8,13622
	ctx.r8.s64 = 13622;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C990;
	sub_8813FDD8(ctx, base);
	// li r8,13623
	ctx.r8.s64 = 13623;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,461
	ctx.r3.s64 = 461;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C9AC;
	sub_8813FDD8(ctx, base);
	// li r8,13624
	ctx.r8.s64 = 13624;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,461
	ctx.r3.s64 = 461;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C9C8;
	sub_8813FDD8(ctx, base);
	// li r8,13625
	ctx.r8.s64 = 13625;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805C9E4;
	sub_8813FDD8(ctx, base);
	// li r8,13626
	ctx.r8.s64 = 13626;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA00;
	sub_8813FDD8(ctx, base);
	// li r8,13627
	ctx.r8.s64 = 13627;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,462
	ctx.r3.s64 = 462;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA1C;
	sub_8813FDD8(ctx, base);
	// li r8,13628
	ctx.r8.s64 = 13628;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA38;
	sub_8813FDD8(ctx, base);
	// li r8,13629
	ctx.r8.s64 = 13629;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA54;
	sub_8813FDD8(ctx, base);
	// li r8,13630
	ctx.r8.s64 = 13630;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,463
	ctx.r3.s64 = 463;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA70;
	sub_8813FDD8(ctx, base);
	// li r8,13631
	ctx.r8.s64 = 13631;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CA8C;
	sub_8813FDD8(ctx, base);
	// li r8,13632
	ctx.r8.s64 = 13632;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CAA8;
	sub_8813FDD8(ctx, base);
	// li r8,13640
	ctx.r8.s64 = 13640;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CAC4;
	sub_8813FDD8(ctx, base);
	// li r8,13641
	ctx.r8.s64 = 13641;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CAE0;
	sub_8813FDD8(ctx, base);
	// li r8,13642
	ctx.r8.s64 = 13642;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CAFC;
	sub_8813FDD8(ctx, base);
	// li r8,13643
	ctx.r8.s64 = 13643;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,470
	ctx.r3.s64 = 470;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CB18;
	sub_8813FDD8(ctx, base);
	// li r8,13644
	ctx.r8.s64 = 13644;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,470
	ctx.r3.s64 = 470;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CB34;
	sub_8813FDD8(ctx, base);
	// li r8,13645
	ctx.r8.s64 = 13645;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,471
	ctx.r3.s64 = 471;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CB50;
	sub_8813FDD8(ctx, base);
	// li r8,13646
	ctx.r8.s64 = 13646;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,471
	ctx.r3.s64 = 471;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CB6C;
	sub_8813FDD8(ctx, base);
	// li r8,13647
	ctx.r8.s64 = 13647;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CB88;
	sub_8813FDD8(ctx, base);
	// li r8,13648
	ctx.r8.s64 = 13648;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CBA4;
	sub_8813FDD8(ctx, base);
	// li r8,13649
	ctx.r8.s64 = 13649;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,473
	ctx.r3.s64 = 473;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CBC0;
	sub_8813FDD8(ctx, base);
	// li r8,13650
	ctx.r8.s64 = 13650;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,473
	ctx.r3.s64 = 473;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CBDC;
	sub_8813FDD8(ctx, base);
	// li r8,13651
	ctx.r8.s64 = 13651;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,474
	ctx.r3.s64 = 474;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CBF8;
	sub_8813FDD8(ctx, base);
	// li r8,13652
	ctx.r8.s64 = 13652;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,474
	ctx.r3.s64 = 474;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CC14;
	sub_8813FDD8(ctx, base);
	// li r8,13653
	ctx.r8.s64 = 13653;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,475
	ctx.r3.s64 = 475;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CC30;
	sub_8813FDD8(ctx, base);
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,475
	ctx.r3.s64 = 475;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CC4C;
	sub_8813FDD8(ctx, base);
	// li r8,13655
	ctx.r8.s64 = 13655;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CC68;
	sub_8813FDD8(ctx, base);
	// li r8,13656
	ctx.r8.s64 = 13656;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CC84;
	sub_8813FDD8(ctx, base);
	// li r8,13657
	ctx.r8.s64 = 13657;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CCA0;
	sub_8813FDD8(ctx, base);
	// li r8,13658
	ctx.r8.s64 = 13658;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,477
	ctx.r3.s64 = 477;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CCBC;
	sub_8813FDD8(ctx, base);
	// li r8,13659
	ctx.r8.s64 = 13659;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,477
	ctx.r3.s64 = 477;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CCD8;
	sub_8813FDD8(ctx, base);
	// li r8,13660
	ctx.r8.s64 = 13660;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,478
	ctx.r3.s64 = 478;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CCF4;
	sub_8813FDD8(ctx, base);
	// li r8,13661
	ctx.r8.s64 = 13661;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,478
	ctx.r3.s64 = 478;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD10;
	sub_8813FDD8(ctx, base);
	// li r8,13662
	ctx.r8.s64 = 13662;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,479
	ctx.r3.s64 = 479;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD2C;
	sub_8813FDD8(ctx, base);
	// li r8,13663
	ctx.r8.s64 = 13663;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,479
	ctx.r3.s64 = 479;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD48;
	sub_8813FDD8(ctx, base);
	// li r8,13664
	ctx.r8.s64 = 13664;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD64;
	sub_8813FDD8(ctx, base);
	// li r8,13665
	ctx.r8.s64 = 13665;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD80;
	sub_8813FDD8(ctx, base);
	// li r8,13666
	ctx.r8.s64 = 13666;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CD9C;
	sub_8813FDD8(ctx, base);
	// li r8,13667
	ctx.r8.s64 = 13667;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CDB8;
	sub_8813FDD8(ctx, base);
	// li r8,13668
	ctx.r8.s64 = 13668;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CDD4;
	sub_8813FDD8(ctx, base);
	// li r8,13669
	ctx.r8.s64 = 13669;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CDF0;
	sub_8813FDD8(ctx, base);
	// li r8,13671
	ctx.r8.s64 = 13671;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE0C;
	sub_8813FDD8(ctx, base);
	// li r8,13672
	ctx.r8.s64 = 13672;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE28;
	sub_8813FDD8(ctx, base);
	// li r8,13673
	ctx.r8.s64 = 13673;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,469
	ctx.r3.s64 = 469;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE44;
	sub_8813FDD8(ctx, base);
	// li r8,13674
	ctx.r8.s64 = 13674;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,470
	ctx.r3.s64 = 470;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE60;
	sub_8813FDD8(ctx, base);
	// li r8,13675
	ctx.r8.s64 = 13675;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,470
	ctx.r3.s64 = 470;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE7C;
	sub_8813FDD8(ctx, base);
	// li r8,13676
	ctx.r8.s64 = 13676;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,470
	ctx.r3.s64 = 470;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CE98;
	sub_8813FDD8(ctx, base);
	// li r8,13677
	ctx.r8.s64 = 13677;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,471
	ctx.r3.s64 = 471;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CEB4;
	sub_8813FDD8(ctx, base);
	// li r8,13678
	ctx.r8.s64 = 13678;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CED0;
	sub_8813FDD8(ctx, base);
	// li r8,13679
	ctx.r8.s64 = 13679;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CEEC;
	sub_8813FDD8(ctx, base);
	// li r8,13680
	ctx.r8.s64 = 13680;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,473
	ctx.r3.s64 = 473;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF08;
	sub_8813FDD8(ctx, base);
	// li r8,13681
	ctx.r8.s64 = 13681;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,473
	ctx.r3.s64 = 473;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF24;
	sub_8813FDD8(ctx, base);
	// li r8,13682
	ctx.r8.s64 = 13682;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,474
	ctx.r3.s64 = 474;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF40;
	sub_8813FDD8(ctx, base);
	// li r8,13683
	ctx.r8.s64 = 13683;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,474
	ctx.r3.s64 = 474;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF5C;
	sub_8813FDD8(ctx, base);
	// li r8,13684
	ctx.r8.s64 = 13684;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,475
	ctx.r3.s64 = 475;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF78;
	sub_8813FDD8(ctx, base);
	// li r8,13685
	ctx.r8.s64 = 13685;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,475
	ctx.r3.s64 = 475;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CF94;
	sub_8813FDD8(ctx, base);
	// li r8,13686
	ctx.r8.s64 = 13686;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CFB0;
	sub_8813FDD8(ctx, base);
	// li r8,13687
	ctx.r8.s64 = 13687;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CFCC;
	sub_8813FDD8(ctx, base);
	// li r8,13688
	ctx.r8.s64 = 13688;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,476
	ctx.r3.s64 = 476;
	// bl 0x8813fdd8
	ctx.lr = 0x8805CFE8;
	sub_8813FDD8(ctx, base);
	// li r8,13689
	ctx.r8.s64 = 13689;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,477
	ctx.r3.s64 = 477;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D004;
	sub_8813FDD8(ctx, base);
	// li r8,13690
	ctx.r8.s64 = 13690;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,477
	ctx.r3.s64 = 477;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D020;
	sub_8813FDD8(ctx, base);
	// li r8,13691
	ctx.r8.s64 = 13691;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,478
	ctx.r3.s64 = 478;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D03C;
	sub_8813FDD8(ctx, base);
	// li r8,13692
	ctx.r8.s64 = 13692;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,478
	ctx.r3.s64 = 478;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D058;
	sub_8813FDD8(ctx, base);
	// li r8,13693
	ctx.r8.s64 = 13693;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,479
	ctx.r3.s64 = 479;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D074;
	sub_8813FDD8(ctx, base);
	// li r8,13694
	ctx.r8.s64 = 13694;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,479
	ctx.r3.s64 = 479;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D090;
	sub_8813FDD8(ctx, base);
	// li r8,13695
	ctx.r8.s64 = 13695;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D0AC;
	sub_8813FDD8(ctx, base);
	// li r8,13696
	ctx.r8.s64 = 13696;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D0C8;
	sub_8813FDD8(ctx, base);
	// li r8,13697
	ctx.r8.s64 = 13697;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D0E4;
	sub_8813FDD8(ctx, base);
	// li r8,13698
	ctx.r8.s64 = 13698;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D100;
	sub_8813FDD8(ctx, base);
	// li r8,13699
	ctx.r8.s64 = 13699;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D11C;
	sub_8813FDD8(ctx, base);
	// li r8,13700
	ctx.r8.s64 = 13700;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,481
	ctx.r3.s64 = 481;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D138;
	sub_8813FDD8(ctx, base);
	// li r8,13702
	ctx.r8.s64 = 13702;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D154;
	sub_8813FDD8(ctx, base);
	// li r8,13703
	ctx.r8.s64 = 13703;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D170;
	sub_8813FDD8(ctx, base);
	// li r8,13704
	ctx.r8.s64 = 13704;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D18C;
	sub_8813FDD8(ctx, base);
	// li r8,13705
	ctx.r8.s64 = 13705;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D1A8;
	sub_8813FDD8(ctx, base);
	// li r8,13706
	ctx.r8.s64 = 13706;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D1C4;
	sub_8813FDD8(ctx, base);
	// li r8,13707
	ctx.r8.s64 = 13707;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D1E0;
	sub_8813FDD8(ctx, base);
	// li r8,13708
	ctx.r8.s64 = 13708;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D1FC;
	sub_8813FDD8(ctx, base);
	// li r8,13709
	ctx.r8.s64 = 13709;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D218;
	sub_8813FDD8(ctx, base);
	// li r8,13710
	ctx.r8.s64 = 13710;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D234;
	sub_8813FDD8(ctx, base);
	// li r8,13711
	ctx.r8.s64 = 13711;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D250;
	sub_8813FDD8(ctx, base);
	// li r8,13712
	ctx.r8.s64 = 13712;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D26C;
	sub_8813FDD8(ctx, base);
	// li r8,13713
	ctx.r8.s64 = 13713;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D288;
	sub_8813FDD8(ctx, base);
	// li r8,13732
	ctx.r8.s64 = 13732;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D2A4;
	sub_8813FDD8(ctx, base);
	// li r8,13733
	ctx.r8.s64 = 13733;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D2C0;
	sub_8813FDD8(ctx, base);
	// li r8,13734
	ctx.r8.s64 = 13734;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D2DC;
	sub_8813FDD8(ctx, base);
	// li r8,13735
	ctx.r8.s64 = 13735;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D2F8;
	sub_8813FDD8(ctx, base);
	// li r8,13736
	ctx.r8.s64 = 13736;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D314;
	sub_8813FDD8(ctx, base);
	// li r8,13737
	ctx.r8.s64 = 13737;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D330;
	sub_8813FDD8(ctx, base);
	// li r8,13738
	ctx.r8.s64 = 13738;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D34C;
	sub_8813FDD8(ctx, base);
	// li r8,13739
	ctx.r8.s64 = 13739;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D368;
	sub_8813FDD8(ctx, base);
	// li r8,13740
	ctx.r8.s64 = 13740;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D384;
	sub_8813FDD8(ctx, base);
	// li r8,13741
	ctx.r8.s64 = 13741;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D3A0;
	sub_8813FDD8(ctx, base);
	// li r8,13742
	ctx.r8.s64 = 13742;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D3BC;
	sub_8813FDD8(ctx, base);
	// li r8,13745
	ctx.r8.s64 = 13745;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,501
	ctx.r3.s64 = 501;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D3D8;
	sub_8813FDD8(ctx, base);
	// li r8,13746
	ctx.r8.s64 = 13746;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,501
	ctx.r3.s64 = 501;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D3F4;
	sub_8813FDD8(ctx, base);
	// li r8,13750
	ctx.r8.s64 = 13750;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D410;
	sub_8813FDD8(ctx, base);
	// li r8,13751
	ctx.r8.s64 = 13751;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D42C;
	sub_8813FDD8(ctx, base);
	// li r8,13752
	ctx.r8.s64 = 13752;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,483
	ctx.r3.s64 = 483;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D448;
	sub_8813FDD8(ctx, base);
	// li r8,13753
	ctx.r8.s64 = 13753;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D464;
	sub_8813FDD8(ctx, base);
	// li r8,13754
	ctx.r8.s64 = 13754;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D480;
	sub_8813FDD8(ctx, base);
	// li r8,13755
	ctx.r8.s64 = 13755;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,484
	ctx.r3.s64 = 484;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D49C;
	sub_8813FDD8(ctx, base);
	// li r8,13756
	ctx.r8.s64 = 13756;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D4B8;
	sub_8813FDD8(ctx, base);
	// li r8,13757
	ctx.r8.s64 = 13757;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D4D4;
	sub_8813FDD8(ctx, base);
	// li r8,13758
	ctx.r8.s64 = 13758;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,485
	ctx.r3.s64 = 485;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D4F0;
	sub_8813FDD8(ctx, base);
	// li r8,13759
	ctx.r8.s64 = 13759;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D50C;
	sub_8813FDD8(ctx, base);
	// li r8,13760
	ctx.r8.s64 = 13760;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D528;
	sub_8813FDD8(ctx, base);
	// li r8,13761
	ctx.r8.s64 = 13761;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,486
	ctx.r3.s64 = 486;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D544;
	sub_8813FDD8(ctx, base);
	// li r8,13780
	ctx.r8.s64 = 13780;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D560;
	sub_8813FDD8(ctx, base);
	// li r8,13781
	ctx.r8.s64 = 13781;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D57C;
	sub_8813FDD8(ctx, base);
	// li r8,13782
	ctx.r8.s64 = 13782;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D598;
	sub_8813FDD8(ctx, base);
	// li r8,13783
	ctx.r8.s64 = 13783;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D5B4;
	sub_8813FDD8(ctx, base);
	// li r8,13784
	ctx.r8.s64 = 13784;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,497
	ctx.r3.s64 = 497;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D5D0;
	sub_8813FDD8(ctx, base);
	// li r8,13785
	ctx.r8.s64 = 13785;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D5EC;
	sub_8813FDD8(ctx, base);
	// li r8,13786
	ctx.r8.s64 = 13786;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D608;
	sub_8813FDD8(ctx, base);
	// li r8,13787
	ctx.r8.s64 = 13787;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,498
	ctx.r3.s64 = 498;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D624;
	sub_8813FDD8(ctx, base);
	// li r8,13788
	ctx.r8.s64 = 13788;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D640;
	sub_8813FDD8(ctx, base);
	// li r8,13789
	ctx.r8.s64 = 13789;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D65C;
	sub_8813FDD8(ctx, base);
	// li r8,13790
	ctx.r8.s64 = 13790;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,499
	ctx.r3.s64 = 499;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D678;
	sub_8813FDD8(ctx, base);
	// li r8,13793
	ctx.r8.s64 = 13793;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,501
	ctx.r3.s64 = 501;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D694;
	sub_8813FDD8(ctx, base);
	// li r8,13794
	ctx.r8.s64 = 13794;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,501
	ctx.r3.s64 = 501;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D6B0;
	sub_8813FDD8(ctx, base);
	// li r8,13800
	ctx.r8.s64 = 13800;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D6CC;
	sub_8813FDD8(ctx, base);
	// li r8,13801
	ctx.r8.s64 = 13801;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D6E8;
	sub_8813FDD8(ctx, base);
	// li r8,13802
	ctx.r8.s64 = 13802;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D704;
	sub_8813FDD8(ctx, base);
	// li r8,13803
	ctx.r8.s64 = 13803;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D720;
	sub_8813FDD8(ctx, base);
	// li r8,13804
	ctx.r8.s64 = 13804;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D73C;
	sub_8813FDD8(ctx, base);
	// li r8,13805
	ctx.r8.s64 = 13805;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D758;
	sub_8813FDD8(ctx, base);
	// li r8,13806
	ctx.r8.s64 = 13806;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D774;
	sub_8813FDD8(ctx, base);
	// li r8,13807
	ctx.r8.s64 = 13807;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D790;
	sub_8813FDD8(ctx, base);
	// li r8,13808
	ctx.r8.s64 = 13808;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D7AC;
	sub_8813FDD8(ctx, base);
	// li r8,13809
	ctx.r8.s64 = 13809;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D7C8;
	sub_8813FDD8(ctx, base);
	// li r8,13810
	ctx.r8.s64 = 13810;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D7E4;
	sub_8813FDD8(ctx, base);
	// li r8,13811
	ctx.r8.s64 = 13811;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D800;
	sub_8813FDD8(ctx, base);
	// li r8,13812
	ctx.r8.s64 = 13812;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D81C;
	sub_8813FDD8(ctx, base);
	// li r8,13813
	ctx.r8.s64 = 13813;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D838;
	sub_8813FDD8(ctx, base);
	// li r8,13814
	ctx.r8.s64 = 13814;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D854;
	sub_8813FDD8(ctx, base);
	// li r8,13815
	ctx.r8.s64 = 13815;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D870;
	sub_8813FDD8(ctx, base);
	// li r8,13816
	ctx.r8.s64 = 13816;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D88C;
	sub_8813FDD8(ctx, base);
	// li r8,13817
	ctx.r8.s64 = 13817;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D8A8;
	sub_8813FDD8(ctx, base);
	// li r8,13818
	ctx.r8.s64 = 13818;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D8C4;
	sub_8813FDD8(ctx, base);
	// li r8,13819
	ctx.r8.s64 = 13819;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D8E0;
	sub_8813FDD8(ctx, base);
	// li r8,13820
	ctx.r8.s64 = 13820;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D8FC;
	sub_8813FDD8(ctx, base);
	// li r8,13821
	ctx.r8.s64 = 13821;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D918;
	sub_8813FDD8(ctx, base);
	// li r8,13822
	ctx.r8.s64 = 13822;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D934;
	sub_8813FDD8(ctx, base);
	// li r8,13823
	ctx.r8.s64 = 13823;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D950;
	sub_8813FDD8(ctx, base);
	// li r8,13824
	ctx.r8.s64 = 13824;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D96C;
	sub_8813FDD8(ctx, base);
	// li r8,13825
	ctx.r8.s64 = 13825;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D988;
	sub_8813FDD8(ctx, base);
	// li r8,13826
	ctx.r8.s64 = 13826;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D9A4;
	sub_8813FDD8(ctx, base);
	// li r8,13827
	ctx.r8.s64 = 13827;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D9C0;
	sub_8813FDD8(ctx, base);
	// li r8,13828
	ctx.r8.s64 = 13828;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D9DC;
	sub_8813FDD8(ctx, base);
	// li r8,13831
	ctx.r8.s64 = 13831;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805D9F8;
	sub_8813FDD8(ctx, base);
	// li r8,13832
	ctx.r8.s64 = 13832;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DA14;
	sub_8813FDD8(ctx, base);
	// li r8,13833
	ctx.r8.s64 = 13833;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,505
	ctx.r3.s64 = 505;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DA30;
	sub_8813FDD8(ctx, base);
	// li r8,13834
	ctx.r8.s64 = 13834;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DA4C;
	sub_8813FDD8(ctx, base);
	// li r8,13835
	ctx.r8.s64 = 13835;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DA68;
	sub_8813FDD8(ctx, base);
	// li r8,13836
	ctx.r8.s64 = 13836;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,506
	ctx.r3.s64 = 506;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DA84;
	sub_8813FDD8(ctx, base);
	// li r8,13837
	ctx.r8.s64 = 13837;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DAA0;
	sub_8813FDD8(ctx, base);
	// li r8,13838
	ctx.r8.s64 = 13838;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DABC;
	sub_8813FDD8(ctx, base);
	// li r8,13839
	ctx.r8.s64 = 13839;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,507
	ctx.r3.s64 = 507;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DAD8;
	sub_8813FDD8(ctx, base);
	// li r8,13840
	ctx.r8.s64 = 13840;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DAF4;
	sub_8813FDD8(ctx, base);
	// li r8,13841
	ctx.r8.s64 = 13841;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB10;
	sub_8813FDD8(ctx, base);
	// li r8,13842
	ctx.r8.s64 = 13842;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB2C;
	sub_8813FDD8(ctx, base);
	// li r8,13843
	ctx.r8.s64 = 13843;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB48;
	sub_8813FDD8(ctx, base);
	// li r8,13844
	ctx.r8.s64 = 13844;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB64;
	sub_8813FDD8(ctx, base);
	// li r8,13845
	ctx.r8.s64 = 13845;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,509
	ctx.r3.s64 = 509;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB80;
	sub_8813FDD8(ctx, base);
	// li r8,13846
	ctx.r8.s64 = 13846;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DB9C;
	sub_8813FDD8(ctx, base);
	// li r8,13847
	ctx.r8.s64 = 13847;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DBB8;
	sub_8813FDD8(ctx, base);
	// li r8,13848
	ctx.r8.s64 = 13848;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,510
	ctx.r3.s64 = 510;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DBD4;
	sub_8813FDD8(ctx, base);
	// li r8,13849
	ctx.r8.s64 = 13849;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DBF0;
	sub_8813FDD8(ctx, base);
	// li r8,13850
	ctx.r8.s64 = 13850;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC0C;
	sub_8813FDD8(ctx, base);
	// li r8,13851
	ctx.r8.s64 = 13851;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,511
	ctx.r3.s64 = 511;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC28;
	sub_8813FDD8(ctx, base);
	// li r8,13852
	ctx.r8.s64 = 13852;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC44;
	sub_8813FDD8(ctx, base);
	// li r8,13853
	ctx.r8.s64 = 13853;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC60;
	sub_8813FDD8(ctx, base);
	// li r8,13854
	ctx.r8.s64 = 13854;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC7C;
	sub_8813FDD8(ctx, base);
	// li r8,13855
	ctx.r8.s64 = 13855;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DC98;
	sub_8813FDD8(ctx, base);
	// li r8,13856
	ctx.r8.s64 = 13856;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DCB4;
	sub_8813FDD8(ctx, base);
	// li r8,13857
	ctx.r8.s64 = 13857;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,513
	ctx.r3.s64 = 513;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DCD0;
	sub_8813FDD8(ctx, base);
	// li r8,13858
	ctx.r8.s64 = 13858;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DCEC;
	sub_8813FDD8(ctx, base);
	// li r8,13859
	ctx.r8.s64 = 13859;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x8813fdd8
	ctx.lr = 0x8805DD08;
	sub_8813FDD8(ctx, base);
	// bl 0x8805dd20
	ctx.lr = 0x8805DD0C;
	sub_8805DD20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8808B0E0) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x8808B100;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808B108;
	sub_88023F40(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8808B118;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x8808B128;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x8808B130;
	sub_880240E0(ctx, base);
	// li r11,9841
	ctx.r11.s64 = 9841;
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-21000
	ctx.r4.s64 = ctx.r9.s64 + -21000;
	// bl 0x88023e90
	ctx.lr = 0x8808B154;
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

DEFINE_REX_FUNC(sub_8808C5B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x8808C5C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808C5CC;
	sub_88023F40(ctx, base);
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808c658
	if (!ctx.cr6.eq) goto loc_8808C658;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x8808C5F4;
	sub_8801A860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x8808C620;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x8808C638;
	sub_88024460(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x8808c658
	if (ctx.cr6.eq) goto loc_8808C658;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_8808C658:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8808c680
	if (!ctx.cr6.lt) goto loc_8808C680;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x8808C670;
	sub_88022BE0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808C678;
	sub_88023F48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8808C680:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88024030
	ctx.lr = 0x8808C688;
	sub_88024030(ctx, base);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r23,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r23.u32);
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808c6cc
	if (ctx.cr6.eq) goto loc_8808C6CC;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r11,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r11.u16);
loc_8808C6CC:
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8808c710
	if (ctx.cr6.lt) goto loc_8808C710;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x8808c710
	if (ctx.cr6.gt) goto loc_8808C710;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808c710
	if (ctx.cr6.eq) goto loc_8808C710;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r8.u32);
	// beq cr6,0x8808c73c
	if (ctx.cr6.eq) goto loc_8808C73C;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x8808c738
	goto loc_8808C738;
loc_8808C710:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// bge cr6,0x8808c73c
	if (!ctx.cr6.lt) goto loc_8808C73C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8808c73c
	if (!ctx.cr6.eq) goto loc_8808C73C;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_8808C738:
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
loc_8808C73C:
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// addi r28,r11,24808
	ctx.r28.s64 = ctx.r11.s64 + 24808;
	// addi r27,r10,24320
	ctx.r27.s64 = ctx.r10.s64 + 24320;
	// bne cr6,0x8808cacc
	if (!ctx.cr6.eq) goto loc_8808CACC;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bge 0x8808cdb4
	if (!ctx.cr0.lt) goto loc_8808CDB4;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// li r28,10
	ctx.r28.s64 = 10;
	// addi r11,r11,24808
	ctx.r11.s64 = ctx.r11.s64 + 24808;
	// addi r11,r11,-360
	ctx.r11.s64 = ctx.r11.s64 + -360;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_8808C77C:
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8808c794
	if (ctx.cr6.lt) goto loc_8808C794;
	// addi r29,r6,30
	ctx.r29.s64 = ctx.r6.s64 + 30;
loc_8808C794:
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// li r3,14
	ctx.r3.s64 = 14;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,-16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8808C7B4;
	sub_880A84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x8808C7C0;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x8808C7C8;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x880a85c0
	ctx.lr = 0x8808C7D8;
	sub_880A85C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8808C7E4;
	sub_880A8620(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x880a8668
	ctx.lr = 0x8808C7F0;
	sub_880A8668(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880a8650
	ctx.lr = 0x8808C7FC;
	sub_880A8650(ctx, base);
	// lwz r8,-12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r3,-20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -20);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8808C820;
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
	ctx.lr = 0x8808C834;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x880a8620
	ctx.lr = 0x8808C840;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x880a8638
	ctx.lr = 0x8808C84C;
	sub_880A8638(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x880a8650
	ctx.lr = 0x8808C858;
	sub_880A8650(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x8808C86C;
	sub_880A84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x8808C878;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x8808C880;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x880a85c0
	ctx.lr = 0x8808C890;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8808C89C;
	sub_880A8620(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x8808C8A8;
	sub_880A8668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a448
	ctx.lr = 0x8808C8B0;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8808c8c4
	if (ctx.cr6.eq) goto loc_8808C8C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8650
	ctx.lr = 0x8808C8C4;
	sub_880A8650(ctx, base);
loc_8808C8C4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8808c90c
	if (!ctx.cr6.gt) goto loc_8808C90C;
loc_8808C8D4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,-12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880a99a8
	ctx.lr = 0x8808C8FC;
	sub_880A99A8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8808c8d4
	if (ctx.cr6.lt) goto loc_8808C8D4;
loc_8808C90C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x8808c77c
	if (!ctx.cr0.eq) goto loc_8808C77C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// lis r28,24
	ctx.r28.s64 = 1572864;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8808ca08
	if (!ctx.cr6.eq) goto loc_8808CA08;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x880111c0
	ctx.lr = 0x8808C940;
	sub_880111C0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,29
	ctx.r29.s64 = 1900544;
	// lis r30,6
	ctx.r30.s64 = 393216;
	// li r6,49
	ctx.r6.s64 = 49;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// bl 0x880111c0
	ctx.lr = 0x8808C964;
	sub_880111C0(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r5,r29,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r29.u64;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bl 0x880111c0
	ctx.lr = 0x8808C980;
	sub_880111C0(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,21
	ctx.r29.s64 = 1376256;
	// lis r30,10
	ctx.r30.s64 = 655360;
	// li r6,49
	ctx.r6.s64 = 49;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// bl 0x880111c0
	ctx.lr = 0x8808C9A4;
	sub_880111C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x880111c0
	ctx.lr = 0x8808C9C0;
	sub_880111C0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// addis r5,r9,-13
	ctx.r5.s64 = ctx.r9.s64 + -851968;
	// bl 0x880111c0
	ctx.lr = 0x8808C9D8;
	sub_880111C0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88024750
	ctx.lr = 0x8808C9E0;
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
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88011728
	ctx.lr = 0x8808CA04;
	sub_88011728(ctx, base);
	// b 0x8808caa4
	goto loc_8808CAA4;
loc_8808CA08:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88024748
	ctx.lr = 0x8808CA10;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88024748
	ctx.lr = 0x8808CA20;
	sub_88024748(ctx, base);
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
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x8808CA48;
	sub_880114D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x8808CA50;
	sub_88024748(ctx, base);
	// li r10,200
	ctx.r10.s64 = 200;
	// divwu r29,r3,r10
	ctx.r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// ble cr6,0x8808ca64
	if (!ctx.cr6.gt) goto loc_8808CA64;
	// li r29,20
	ctx.r29.s64 = 20;
loc_8808CA64:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8808caa4
	if (!ctx.cr6.gt) goto loc_8808CAA4;
loc_8808CA70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88024748
	ctx.lr = 0x8808CA78;
	sub_88024748(ctx, base);
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
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,49
	ctx.r5.s64 = 49;
	// bl 0x88011310
	ctx.lr = 0x8808CA98;
	sub_88011310(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8808ca70
	if (ctx.cr6.lt) goto loc_8808CA70;
loc_8808CAA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x880abb48
	ctx.lr = 0x8808CABC;
	sub_880ABB48(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808CAC4;
	sub_88023F48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8808CACC:
	// lwz r11,21860(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808cd5c
	if (!ctx.cr6.eq) goto loc_8808CD5C;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x8808cd5c
	if (ctx.cr6.gt) goto loc_8808CD5C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8808cb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8808CB50;
	// bdzf 4*cr6+eq,0x8808cb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8808CB98;
	// bdzf 4*cr6+eq,0x8808ccc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8808CCC8;
	// bne cr6,0x8808cd0c
	if (!ctx.cr6.eq) goto loc_8808CD0C;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808cb18
	if (!ctx.cr6.eq) goto loc_8808CB18;
	// bl 0x880103a0
	ctx.lr = 0x8808CB08;
	sub_880103A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8808cb18
	if (ctx.cr6.eq) goto loc_8808CB18;
loc_8808CB10:
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x8808cd5c
	goto loc_8808CD5C;
loc_8808CB18:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne 0x8808cd5c
	if (!ctx.cr0.eq) goto loc_8808CD5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r6,76
	ctx.r6.s64 = 4980736;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 1310720;
	// bl 0x88024370
	ctx.lr = 0x8808CB40;
	sub_88024370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8808cb10
	if (!ctx.cr6.eq) goto loc_8808CB10;
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// b 0x8808cd5c
	goto loc_8808CD5C;
loc_8808CB50:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x8808cd5c
	if (!ctx.cr6.eq) goto loc_8808CD5C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r23,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x8808cd5c
	goto loc_8808CD5C;
loc_8808CB98:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x8808cbc8
	if (!ctx.cr0.lt) goto loc_8808CBC8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// blt cr6,0x8808cbc8
	if (ctx.cr6.lt) goto loc_8808CBC8;
	// stw r23,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_8808CBC8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// ble cr6,0x8808cc6c
	if (!ctx.cr6.gt) goto loc_8808CC6C;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r11,24256
	ctx.r30.s64 = ctx.r11.s64 + 24256;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8808cc34
	if (!ctx.cr6.eq) goto loc_8808CC34;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r9,r28,-512
	ctx.r9.s64 = ctx.r28.s64 + -512;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x8808CC30;
	sub_880244D0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_8808CC34:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r9,r28,-512
	ctx.r9.s64 = ctx.r28.s64 + -512;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r6,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8808c3b8
	ctx.lr = 0x8808CC6C;
	sub_8808C3B8(ctx, base);
loc_8808CC6C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// blt cr6,0x8808cca4
	if (ctx.cr6.lt) goto loc_8808CCA4;
	// stw r23,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
loc_8808CCA4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x8808cd5c
	goto loc_8808CD5C;
loc_8808CCC8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// blt cr6,0x8808cd5c
	if (ctx.cr6.lt) goto loc_8808CD5C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r23,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// b 0x8808cd5c
	goto loc_8808CD5C;
loc_8808CD0C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8808cd5c
	if (!ctx.cr0.lt) goto loc_8808CD5C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x8808cd5c
	if (ctx.cr6.lt) goto loc_8808CD5C;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// stw r23,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r8,r9,96
	ctx.xer.ca = ctx.r9.u32 <= 96;
	ctx.r8.u64 = static_cast<uint64_t>(96) - ctx.r9.u64;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_8808CD5C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r8,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r5.u32);
	// stw r9,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r7,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r6,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x8808CDB4;
	sub_88018B98(ctx, base);
loc_8808CDB4:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,24408
	ctx.r30.s64 = ctx.r11.s64 + 24408;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r3,r11,7053
	ctx.r3.s64 = ctx.r11.s64 + 7053;
	// bl 0x8801a9c8
	ctx.lr = 0x8808CDDC;
	sub_8801A9C8(ctx, base);
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x8813ff48
	ctx.lr = 0x8808CDE4;
	sub_8813FF48(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8808ce18
	if (!ctx.cr6.gt) goto loc_8808CE18;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8808ce18
	if (ctx.cr6.eq) goto loc_8808CE18;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 2097152;
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r3,r11,7059
	ctx.r3.s64 = ctx.r11.s64 + 7059;
	// b 0x8808ce50
	goto loc_8808CE50;
loc_8808CE18:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r10,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8808CE50:
	// addi r6,r25,2
	ctx.r6.s64 = ctx.r25.s64 + 2;
	// bl 0x8801a9c8
	ctx.lr = 0x8808CE58;
	sub_8801A9C8(ctx, base);
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x8813ff48
	ctx.lr = 0x8808CE60;
	sub_8813FF48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r25,-1
	ctx.r6.s64 = ctx.r25.s64 + -1;
	// li r3,7065
	ctx.r3.s64 = 7065;
	// addis r5,r11,-53
	ctx.r5.s64 = ctx.r11.s64 + -3473408;
	// addis r4,r10,19
	ctx.r4.s64 = ctx.r10.s64 + 1245184;
	// bl 0x8801a9c8
	ctx.lr = 0x8808CE7C;
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
	ctx.lr = 0x8808CE90;
	sub_8813FF90(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88096F98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88096FA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,608(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 608);
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
	// blt cr6,0x88097098
	if (ctx.cr6.lt) goto loc_88097098;
	// beq cr6,0x8809706c
	if (ctx.cr6.eq) goto loc_8809706C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880970b4
	if (!ctx.cr6.lt) goto loc_880970B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,-2
	ctx.r6.s64 = ctx.r29.s64 + -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x88096FF4;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x88097018;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,6
	ctx.r6.s64 = ctx.r29.s64 + 6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x8809703C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,10
	ctx.r6.s64 = ctx.r29.s64 + 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x88097060;
	sub_88013CE0(ctx, base);
	// addi r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 + 14;
	// li r3,29
	ctx.r3.s64 = 29;
	// b 0x880970a0
	goto loc_880970A0;
loc_8809706C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88013ce0
	ctx.lr = 0x88097090;
	sub_88013CE0(ctx, base);
	// addi r6,r29,6
	ctx.r6.s64 = ctx.r29.s64 + 6;
	// b 0x8809709c
	goto loc_8809709C;
loc_88097098:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8809709C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_880970A0:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88013940
	ctx.lr = 0x880970B4;
	sub_88013940(ctx, base);
loc_880970B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88098770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88098778;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88098790;
	sub_88023F40(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88098968
	if (!ctx.cr6.gt) goto loc_88098968;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880236a8
	ctx.lr = 0x880987B0;
	sub_880236A8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88098968
	if (!ctx.cr6.eq) goto loc_88098968;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x88098968
	if (ctx.cr0.gt) goto loc_88098968;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024040
	ctx.lr = 0x880987D8;
	sub_88024040(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88098974
	if (!ctx.cr6.eq) goto loc_88098974;
	// li r11,384
	ctx.r11.s64 = 384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r5,510
	ctx.r5.s64 = 510;
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88024de8
	ctx.lr = 0x88098808;
	sub_88024DE8(ctx, base);
	// bl 0x880b1c90
	ctx.lr = 0x8809880C;
	sub_880B1C90(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r28,22
	ctx.r28.s64 = 1441792;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// li r3,27
	ctx.r3.s64 = 27;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8809882C;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88098838;
	sub_880A8638(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x880a8668
	ctx.lr = 0x88098844;
	sub_880A8668(ctx, base);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88098858;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88098864;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x8809886C;
	sub_8801A448(ctx, base);
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x880a85c0
	ctx.lr = 0x88098880;
	sub_880A85C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8809888C;
	sub_880A8620(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x880a8668
	ctx.lr = 0x88098898;
	sub_880A8668(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,28
	ctx.r3.s64 = 28;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880988B0;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x880988BC;
	sub_880A8638(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x880988C4;
	sub_8801A448(ctx, base);
	// subfic r7,r3,8
	ctx.xer.ca = ctx.r3.u32 <= 8;
	ctx.r7.u64 = static_cast<uint64_t>(8) - ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880988DC;
	sub_880A85C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880a8620
	ctx.lr = 0x880988E8;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880a8668
	ctx.lr = 0x880988F4;
	sub_880A8668(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bl 0x880a99a8
	ctx.lr = 0x8809890C;
	sub_880A99A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x880a99a8
	ctx.lr = 0x88098924;
	sub_880A99A8(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x88098934;
	sub_8813FA58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r7,31
	ctx.r7.s64 = 2031616;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88022558
	ctx.lr = 0x88098968;
	sub_88022558(ctx, base);
loc_88098968:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88098974:
	// bl 0x880b1b90
	ctx.lr = 0x88098978;
	sub_880B1B90(ctx, base);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88098990;
	sub_880A99A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x880989A4;
	sub_880A99A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x880989B8;
	sub_880A99A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x880989CC;
	sub_880A99A8(ctx, base);
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x880989E4;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x880a8638
	ctx.lr = 0x880989EC;
	sub_880A8638(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88098A00;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88098A0C;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x88098A14;
	sub_8801A448(ctx, base);
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x880a85c0
	ctx.lr = 0x88098A28;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x88098A34;
	sub_880A8620(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x880a8668
	ctx.lr = 0x88098A40;
	sub_880A8668(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88098A54;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88098A60;
	sub_880A8638(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88098A68;
	sub_8801A448(ctx, base);
	// subfic r11,r3,8
	ctx.xer.ca = ctx.r3.u32 <= 8;
	ctx.r11.u64 = static_cast<uint64_t>(8) - ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88098A84;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880a8620
	ctx.lr = 0x88098A90;
	sub_880A8620(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880a8668
	ctx.lr = 0x88098A9C;
	sub_880A8668(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88098AB0;
	sub_880A84F0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88098ABC;
	sub_880A8638(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88098AC4;
	sub_8801A448(ctx, base);
	// subfic r10,r3,8
	ctx.xer.ca = ctx.r3.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88098ADC;
	sub_880A85C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x880a8620
	ctx.lr = 0x88098AE8;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x88098AF4;
	sub_880A8668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88098B00;
	sub_88022A88(ctx, base);
	// li r5,230
	ctx.r5.s64 = 230;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88098B10;
	sub_88024DE8(ctx, base);
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88098bb8
	if (!ctx.cr6.eq) goto loc_88098BB8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024090
	ctx.lr = 0x88098B24;
	sub_88024090(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r30,6
	ctx.r30.s64 = 393216;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88098B40;
	sub_880111C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024090
	ctx.lr = 0x88098B48;
	sub_88024090(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r30.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88098B64;
	sub_880111C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024090
	ctx.lr = 0x88098B6C;
	sub_88024090(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r30.u64;
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x880111c0
	ctx.lr = 0x88098B88;
	sub_880111C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024750
	ctx.lr = 0x88098B90;
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
	ctx.lr = 0x88098BB4;
	sub_88011728(ctx, base);
	// b 0x88098c64
	goto loc_88098C64;
loc_88098BB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88098BC0;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88098BD0;
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
	ctx.lr = 0x88098BFC;
	sub_880114D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88098C04;
	sub_88024748(ctx, base);
	// li r9,200
	ctx.r9.s64 = 200;
	// divwu r29,r3,r9
	ctx.r29.u64 = uint32_t(ctx.r9.u32 ? ctx.r3.u32 / ctx.r9.u32 : 0);
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// ble cr6,0x88098c18
	if (!ctx.cr6.gt) goto loc_88098C18;
	// li r29,20
	ctx.r29.s64 = 20;
loc_88098C18:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88098c64
	if (!ctx.cr6.gt) goto loc_88098C64;
loc_88098C24:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88098C2C;
	sub_88024748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88098C38;
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
	ctx.lr = 0x88098C58;
	sub_88011310(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88098c24
	if (ctx.cr6.lt) goto loc_88098C24;
loc_88098C64:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024068
	ctx.lr = 0x88098C6C;
	sub_88024068(ctx, base);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880abb48
	ctx.lr = 0x88098C80;
	sub_880ABB48(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88023f48
	ctx.lr = 0x88098C88;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809DC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f6c
	ctx.lr = 0x8809DC58;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r22,24
	ctx.r22.s64 = 1572864;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r11,21872(r9)
	REX_STORE_U32(ctx.r9.u32 + 21872, ctx.r11.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r26,r10,30736
	ctx.r26.s64 = ctx.r10.s64 + 30736;
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lis r25,240
	ctx.r25.s64 = 15728640;
loc_8809DC98:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r23,r11
	ctx.r31.u64 = ctx.r23.u64 + ctx.r11.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8801a860
	ctx.lr = 0x8809DCB4;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809DCD4;
	sub_8801A9C8(ctx, base);
	// addi r30,r31,-48
	ctx.r30.s64 = ctx.r31.s64 + -48;
	// li r28,224
	ctx.r28.s64 = 224;
	// li r29,239
	ctx.r29.s64 = 239;
	// li r31,96
	ctx.r31.s64 = 96;
loc_8809DCE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a860
	ctx.lr = 0x8809DCF8;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809DD18;
	sub_8801A9C8(ctx, base);
	// rlwinm r10,r31,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// or r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 | ctx.r31.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 | ctx.r31.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8809DD30;
	sub_8813FF48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809DD48;
	sub_8813FF90(ctx, base);
	// addic. r31,r31,-24
	ctx.xer.ca = ctx.r31.u32 > 23;
	ctx.r31.s64 = ctx.r31.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,200
	ctx.r28.s64 = ctx.r28.s64 + 200;
	// bgt 0x8809dce4
	if (ctx.cr0.gt) goto loc_8809DCE4;
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8809dc98
	if (ctx.cr6.lt) goto loc_8809DC98;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88069538
	ctx.lr = 0x8809DD7C;
	sub_88069538(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,44(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809dd94
	if (!ctx.cr6.eq) goto loc_8809DD94;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8809DD94:
	// bl 0x88068e68
	ctx.lr = 0x8809DD98;
	sub_88068E68(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8806c050
	ctx.lr = 0x8809DDA4;
	sub_8806C050(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,240
	ctx.r6.s64 = 240;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r5,170
	ctx.r5.s64 = 11141120;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x8801a9c8
	ctx.lr = 0x8809DDCC;
	sub_8801A9C8(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// blt cr6,0x8809dde8
	if (ctx.cr6.lt) goto loc_8809DDE8;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r11,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
loc_8809DDE8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fbc
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809E4F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8809E500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// addi r31,r11,31932
	ctx.r31.s64 = ctx.r11.s64 + 31932;
	// lwz r11,31932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31932);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8809e578
	if (ctx.cr6.lt) goto loc_8809E578;
	// beq cr6,0x8809e55c
	if (ctx.cr6.eq) goto loc_8809E55C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809e5b8
	if (!ctx.cr6.lt) goto loc_8809E5B8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8809e5b8
	if (ctx.cr6.lt) goto loc_8809E5B8;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29200
	ctx.r4.s64 = ctx.r11.s64 + 29200;
	// bl 0x8801b3f8
	ctx.lr = 0x8809E558;
	sub_8801B3F8(ctx, base);
	// b 0x8809e5b8
	goto loc_8809E5B8;
loc_8809E55C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8809e5b8
	if (!ctx.cr0.lt) goto loc_8809E5B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8809e5b8
	goto loc_8809E5B8;
loc_8809E578:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809e590
	if (ctx.cr6.eq) goto loc_8809E590;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8809e5b8
	goto loc_8809E5B8;
loc_8809E590:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x8809e5b8
	if (ctx.cr0.gt) goto loc_8809E5B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1800
	ctx.r10.s64 = 1800;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8809E5B8:
	// bl 0x8806ade0
	ctx.lr = 0x8809E5BC;
	sub_8806ADE0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x8809e5e0
	if (!ctx.cr0.lt) goto loc_8809E5E0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8809E5E0:
	// bl 0x880673b8
	ctx.lr = 0x8809E5E4;
	sub_880673B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8809e658
	if (!ctx.cr6.eq) goto loc_8809E658;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lis r29,256
	ctx.r29.s64 = 16777216;
loc_8809E5F8:
	// li r6,240
	ctx.r6.s64 = 240;
	// lis r5,184
	ctx.r5.s64 = 12058624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14575
	ctx.r3.s64 = 14575;
	// bl 0x8801a9c8
	ctx.lr = 0x8809E60C;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8809E618;
	sub_8813FF28(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809E630;
	sub_8813FF90(ctx, base);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8809e5f8
	if (ctx.cr6.lt) goto loc_8809E5F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,240
	ctx.r6.s64 = 240;
	// lis r5,200
	ctx.r5.s64 = 13107200;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// addi r3,r11,1191
	ctx.r3.s64 = ctx.r11.s64 + 1191;
	// bl 0x8801a9c8
	ctx.lr = 0x8809E658;
	sub_8801A9C8(ctx, base);
loc_8809E658:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,248
	ctx.r5.s64 = 248;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8809e67c
	if (ctx.cr6.lt) goto loc_8809E67C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x8809E674;
	sub_88067710(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8809E67C:
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x88067710
	ctx.lr = 0x8809E688;
	sub_88067710(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809FC60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x8809FC68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,360
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(360));
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,768
	ctx.r10.s64 = 768;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,192
	ctx.r25.s64 = 192;
	// li r26,255
	ctx.r26.s64 = 255;
loc_8809FC98:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r10,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// stw r26,-20(r31)
	REX_STORE_U32(ctx.r31.u32 + -20, ctx.r26.u32);
	// stw r27,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// bne cr6,0x8809fd30
	if (!ctx.cr6.eq) goto loc_8809FD30;
	// bl 0x880ac0d0
	ctx.lr = 0x8809FCD8;
	sub_880AC0D0(ctx, base);
	// stw r3,-56(r31)
	REX_STORE_U32(ctx.r31.u32 + -56, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abfe0
	ctx.lr = 0x8809FCE8;
	sub_880ABFE0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,-52(r31)
	REX_STORE_U32(ctx.r31.u32 + -52, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abf20
	ctx.lr = 0x8809FCFC;
	sub_880ABF20(ctx, base);
	// stw r3,-48(r31)
	REX_STORE_U32(ctx.r31.u32 + -48, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abec8
	ctx.lr = 0x8809FD0C;
	sub_880ABEC8(ctx, base);
	// std r3,-40(r31)
	REX_STORE_U64(ctx.r31.u32 + -40, ctx.r3.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abf80
	ctx.lr = 0x8809FD1C;
	sub_880ABF80(ctx, base);
	// sth r3,-32(r31)
	REX_STORE_U16(ctx.r31.u32 + -32, ctx.r3.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880ac070
	ctx.lr = 0x8809FD2C;
	sub_880AC070(ctx, base);
	// b 0x8809fd88
	goto loc_8809FD88;
loc_8809FD30:
	// bl 0x880ac0a0
	ctx.lr = 0x8809FD34;
	sub_880AC0A0(ctx, base);
	// stw r3,-56(r31)
	REX_STORE_U32(ctx.r31.u32 + -56, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abfb0
	ctx.lr = 0x8809FD44;
	sub_880ABFB0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,-52(r31)
	REX_STORE_U32(ctx.r31.u32 + -52, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abef0
	ctx.lr = 0x8809FD58;
	sub_880ABEF0(ctx, base);
	// stw r3,-48(r31)
	REX_STORE_U32(ctx.r31.u32 + -48, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abea0
	ctx.lr = 0x8809FD68;
	sub_880ABEA0(ctx, base);
	// std r3,-40(r31)
	REX_STORE_U64(ctx.r31.u32 + -40, ctx.r3.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880abf50
	ctx.lr = 0x8809FD78;
	sub_880ABF50(ctx, base);
	// sth r3,-32(r31)
	REX_STORE_U16(ctx.r31.u32 + -32, ctx.r3.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880ac040
	ctx.lr = 0x8809FD88;
	sub_880AC040(ctx, base);
loc_8809FD88:
	// sth r3,-30(r31)
	REX_STORE_U16(ctx.r31.u32 + -30, ctx.r3.u16);
	// li r30,32
	ctx.r30.s64 = 32;
loc_8809FD90:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809FDAC;
	sub_8801A860(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bne 0x8809fd90
	if (!ctx.cr0.eq) goto loc_8809FD90;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x8809fc98
	if (ctx.cr6.lt) goto loc_8809FC98;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A0560) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88027210
	ctx.lr = 0x880A0578;
	sub_88027210(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88027210
	ctx.lr = 0x880A0584;
	sub_88027210(ctx, base);
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// addi r3,r11,1184
	ctx.r3.s64 = ctx.r11.s64 + 1184;
	// bl 0x88140700
	ctx.lr = 0x880A0590;
	sub_88140700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A05A0) {
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
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8801b368
	ctx.lr = 0x880A05BC;
	sub_8801B368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813f908
	ctx.lr = 0x880A05C4;
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

DEFINE_REX_FUNC(sub_880A05D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880A05E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8801b520
	ctx.lr = 0x880A05EC;
	sub_8801B520(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r3,128
	ctx.r3.s64 = 8388608;
	// ori r3,r3,32896
	ctx.r3.u64 = ctx.r3.u64 | 32896;
	// bl 0x88140570
	ctx.lr = 0x880A05FC;
	sub_88140570(ctx, base);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a071c
	if (ctx.cr6.eq) goto loc_880A071C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x880a071c
	if (!ctx.cr6.lt) goto loc_880A071C;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// ori r27,r11,4112
	ctx.r27.u64 = ctx.r11.u64 | 4112;
	// ori r28,r10,28784
	ctx.r28.u64 = ctx.r10.u64 | 28784;
loc_880A062C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r31,8
	ctx.r31.s64 = 8;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_880A0638:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// li r6,239
	ctx.r6.s64 = 239;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fe70
	ctx.lr = 0x880A0654;
	sub_8813FE70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A0660;
	sub_8813FF48(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8813ff28
	ctx.lr = 0x880A066C;
	sub_8813FF28(ctx, base);
	// li r6,240
	ctx.r6.s64 = 240;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,370
	ctx.r3.s64 = 370;
	// bl 0x8813fe70
	ctx.lr = 0x880A0680;
	sub_8813FE70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A068C;
	sub_8813FF48(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880A0698;
	sub_8813FF28(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r31,248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 248, ctx.xer);
	// blt cr6,0x880a0638
	if (ctx.cr6.lt) goto loc_880A0638;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r30,320
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 320, ctx.xer);
	// blt cr6,0x880a062c
	if (ctx.cr6.lt) goto loc_880A062C;
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a071c
	if (ctx.cr6.eq) goto loc_880A071C;
	// li r6,240
	ctx.r6.s64 = 240;
	// lis r5,160
	ctx.r5.s64 = 10485760;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880A06D0;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A06DC;
	sub_8813FF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,15360
	ctx.r5.s64 = 15360;
	// li r4,20480
	ctx.r4.s64 = 20480;
	// bl 0x8813fff0
	ctx.lr = 0x880A06EC;
	sub_8813FFF0(ctx, base);
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880A0708;
	sub_8813FF90(ctx, base);
	// lwz r10,60(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// addic. r11,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r11.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r26)
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
	// bgt 0x880a071c
	if (ctx.cr0.gt) goto loc_880A071C;
	// stw r24,60(r26)
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r24.u32);
loc_880A071C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880a08d8
	if (ctx.cr6.gt) goto loc_880A08D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880a08d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880A08D8;
	// bdzf 4*cr6+eq,0x880a08d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880A08D8;
	// bdzf 4*cr6+eq,0x880a0780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880A0780;
	// bdzf 4*cr6+eq,0x880a07f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880A07F0;
	// bne cr6,0x880a089c
	if (!ctx.cr6.eq) goto loc_880A089C;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x880660f8
	ctx.lr = 0x880A074C;
	sub_880660F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880664d8
	ctx.lr = 0x880A0758;
	sub_880664D8(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// bl 0x88140150
	ctx.lr = 0x880A0760;
	sub_88140150(ctx, base);
	// bl 0x8801a2e0
	ctx.lr = 0x880A0764;
	sub_8801A2E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r24,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r24.u32);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880A0780:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A0798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a08d8
	if (!ctx.cr6.eq) goto loc_880A08D8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,32020(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a07bc
	if (!ctx.cr6.eq) goto loc_880A07BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// b 0x880a07c4
	goto loc_880A07C4;
loc_880A07BC:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
loc_880A07C4:
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A07D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a08d8
	if (!ctx.cr6.eq) goto loc_880A08D8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880A07F0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x880a0884
	if (ctx.cr6.lt) goto loc_880A0884;
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r9,908(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 908);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A0828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x880a0884
	if (ctx.cr6.eq) goto loc_880A0884;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 964);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A0840;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a0884
	if (!ctx.cr6.eq) goto loc_880A0884;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A085C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r11,32020(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a0884
	if (!ctx.cr6.eq) goto loc_880A0884;
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r11,11176
	ctx.r3.s64 = ctx.r11.s64 + 11176;
	// bl 0x8801b2f0
	ctx.lr = 0x880A0880;
	sub_8801B2F0(ctx, base);
	// stw r3,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
loc_880A0884:
	// li r5,248
	ctx.r5.s64 = 248;
	// lwz r3,20(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x880A0894;
	sub_88067710(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880A089C:
	// lwz r3,8(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8801b558
	ctx.lr = 0x880A08A4;
	sub_8801B558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a08d8
	if (!ctx.cr6.eq) goto loc_880A08D8;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// lis r8,-30608
	ctx.r8.s64 = -2005925888;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r7,-30710
	ctx.r7.s64 = -2012610560;
	// stw r11,32016(r9)
	REX_STORE_U32(ctx.r9.u32 + 32016, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,32020(r8)
	REX_STORE_U32(ctx.r8.u32 + 32020, ctx.r10.u32);
	// addi r4,r7,1440
	ctx.r4.s64 = ctx.r7.s64 + 1440;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801b3f8
	ctx.lr = 0x880A08D8;
	sub_8801B3F8(ctx, base);
loc_880A08D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A2CC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880A2CC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,32040
	ctx.r30.s64 = ctx.r11.s64 + 32040;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r31,r30,288
	ctx.r31.s64 = ctx.r30.s64 + 288;
	// lwz r11,280(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// stw r27,272(r30)
	REX_STORE_U32(ctx.r30.u32 + 272, ctx.r27.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2e04
	if (ctx.cr6.eq) goto loc_880A2E04;
	// lis r25,240
	ctx.r25.s64 = 15728640;
	// lis r26,320
	ctx.r26.s64 = 20971520;
loc_880A2CFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2df8
	if (ctx.cr6.eq) goto loc_880A2DF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x880690e8
	ctx.lr = 0x880A2D14;
	sub_880690E8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A2D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a2d4c
	if (!ctx.cr6.eq) goto loc_880A2D4C;
	// lwz r11,280(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,280(r30)
	REX_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// b 0x880a2df4
	goto loc_880A2DF4;
loc_880A2D4C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2d94
	if (!ctx.cr6.eq) goto loc_880A2D94;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880a2d80
	if (ctx.cr6.lt) goto loc_880A2D80;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x880a2d80
	if (ctx.cr6.gt) goto loc_880A2D80;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880a2d80
	if (ctx.cr6.lt) goto loc_880A2D80;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x880a2d94
	if (!ctx.cr6.gt) goto loc_880A2D94;
loc_880A2D80:
	// lwz r11,280(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,280(r30)
	REX_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// b 0x880a2df4
	goto loc_880A2DF4;
loc_880A2D94:
	// lhz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 156);
	// addi r29,r31,156
	ctx.r29.s64 = ctx.r31.s64 + 156;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880a2df4
	if (ctx.cr6.eq) goto loc_880A2DF4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x88069620
	ctx.lr = 0x880A2DBC;
	sub_88069620(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// bl 0x88069630
	ctx.lr = 0x880A2DD0;
	sub_88069630(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// stw r11,272(r30)
	REX_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// stwx r29,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r29.u32);
loc_880A2DF4:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_880A2DF8:
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880a2cfc
	if (!ctx.cr6.eq) goto loc_880A2CFC;
loc_880A2E04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A3D38) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,312
	ctx.r10.s64 = 20447232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a3d68
	if (!ctx.cr6.lt) goto loc_880A3D68;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a3d70
	if (!ctx.cr6.lt) goto loc_880A3D70;
loc_880A3D68:
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x880a3d90
	goto loc_880A3D90;
loc_880A3D70:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a3d8c
	if (ctx.cr6.lt) goto loc_880A3D8C;
	// lis r10,224
	ctx.r10.s64 = 14680064;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880a3d90
	if (!ctx.cr6.gt) goto loc_880A3D90;
loc_880A3D8C:
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_880A3D90:
	// li r11,18
	ctx.r11.s64 = 18;
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A3DA0;
	sub_8801A448(ctx, base);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// stw r4,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880A3DBC;
	sub_8801A860(ctx, base);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r10,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// li r6,1800
	ctx.r6.s64 = 1800;
	// stw r10,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r6,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// lis r9,-30694
	ctx.r9.s64 = -2011561984;
	// sth r5,156(r31)
	REX_STORE_U16(ctx.r31.u32 + 156, ctx.r5.u16);
	// sth r4,160(r31)
	REX_STORE_U16(ctx.r31.u32 + 160, ctx.r4.u16);
	// lis r8,-30710
	ctx.r8.s64 = -2012610560;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r7,r9,32504
	ctx.r7.s64 = ctx.r9.s64 + 32504;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r8,15496
	ctx.r3.s64 = ctx.r8.s64 + 15496;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r31.u32);
	// stw r7,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
	// stw r4,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_880A4AB0) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a4adc
	if (ctx.cr6.eq) goto loc_880A4ADC;
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
loc_880A4ADC:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880a4c2c
	if (!ctx.cr6.eq) goto loc_880A4C2C;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8801a860
	ctx.lr = 0x880A4B00;
	sub_8801A860(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// bl 0x880a2f90
	ctx.lr = 0x880A4B24;
	sub_880A2F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880a4cf8
	if (ctx.cr6.eq) goto loc_880A4CF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880a4bec
	if (!ctx.cr6.eq) goto loc_880A4BEC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880a4b6c
	if (ctx.cr6.eq) goto loc_880A4B6C;
	// lis r4,200
	ctx.r4.s64 = 13107200;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r3,120
	ctx.r3.s64 = 7864320;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a4a0
	ctx.lr = 0x880A4B64;
	sub_8801A4A0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880A4B6C:
	// lis r4,200
	ctx.r4.s64 = 13107200;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r3,120
	ctx.r3.s64 = 7864320;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a3e0
	ctx.lr = 0x880A4B80;
	sub_8801A3E0(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a4c2c
	if (!ctx.cr6.lt) goto loc_880A4C2C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,512
	ctx.r8.s64 = 512;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// rlwinm r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880a4bc8
	if (ctx.cr6.eq) goto loc_880A4BC8;
	// li r10,384
	ctx.r10.s64 = 384;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_880A4BC8:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a4be4
	if (ctx.cr6.eq) goto loc_880A4BE4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880a4c2c
	goto loc_880A4C2C;
loc_880A4BE4:
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// b 0x880a4c2c
	goto loc_880A4C2C;
loc_880A4BEC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// blt 0x880a4c2c
	if (ctx.cr0.lt) goto loc_880A4C2C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne 0x880a4c2c
	if (!ctx.cr0.eq) goto loc_880A4C2C;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880A4C2C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x880a4c6c
	if (!ctx.cr0.lt) goto loc_880A4C6C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne cr6,0x880a4c58
	if (!ctx.cr6.eq) goto loc_880A4C58;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_880A4C58:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x880a4c6c
	if (ctx.cr6.lt) goto loc_880A4C6C;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_880A4C6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r4,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880A4C88;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi. r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge 0x880a4ca0
	if (!ctx.cr0.lt) goto loc_880A4CA0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_880A4CA0:
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
	// addis r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 1048576;
	// bl 0x8801a9c8
	ctx.lr = 0x880A4CBC;
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
	ctx.lr = 0x880A4CD0;
	sub_8813FF90(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a9c8
	ctx.lr = 0x880A4CEC;
	sub_8801A9C8(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8813ff08
	ctx.lr = 0x880A4CF4;
	sub_8813FF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880A4CF8:
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

DEFINE_REX_FUNC(sub_880A8B30) {
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
	ctx.lr = 0x880A8B48;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a8bc0
	if (!ctx.cr6.eq) goto loc_880A8BC0;
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
	// bge 0x880a8ba0
	if (!ctx.cr0.lt) goto loc_880A8BA0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x880a8b90
	if (ctx.cr6.lt) goto loc_880A8B90;
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
loc_880A8B90:
	// addi r9,r10,-144
	ctx.r9.s64 = ctx.r10.s64 + -144;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_880A8BA0:
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
	// bl 0x880a87c0
	ctx.lr = 0x880A8BC0;
	sub_880A87C0(ctx, base);
loc_880A8BC0:
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

DEFINE_REX_FUNC(sub_880A9468) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-30136(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -30136);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9488) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-30136(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -30136);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9640) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
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

DEFINE_REX_FUNC(sub_880A97F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-27264
	ctx.r9.s64 = ctx.r11.s64 + -27264;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A9900) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-13120
	ctx.r31.s64 = ctx.r10.s64 + -13120;
	// li r5,9728
	ctx.r5.s64 = 9728;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-13120(r10)
	REX_STORE_U32(ctx.r10.u32 + -13120, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8813fa58
	ctx.lr = 0x880A9930;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_880A9BE0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bge 0x880a9c48
	if (!ctx.cr0.lt) goto loc_880A9C48;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x880a9c48
	if (!ctx.cr6.gt) goto loc_880A9C48;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// ble cr6,0x880a9c30
	if (!ctx.cr6.gt) goto loc_880A9C30;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// bgt cr6,0x880a9c3c
	if (ctx.cr6.gt) goto loc_880A9C3C;
loc_880A9C30:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x880a9c3c
	if (ctx.cr6.lt) goto loc_880A9C3C;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_880A9C3C:
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// blt 0x880a9c64
	if (ctx.cr0.lt) goto loc_880A9C64;
loc_880A9C48:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a9c6c
	if (!ctx.cr6.eq) goto loc_880A9C6C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x880a9c74
	if (!ctx.cr0.lt) goto loc_880A9C74;
loc_880A9C64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880a9d90
	goto loc_880A9D90;
loc_880A9C6C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880A9C74:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a860
	ctx.lr = 0x880A9C88;
	sub_8801A860(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,-88
	ctx.r11.s64 = ctx.r10.s64 + -88;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// blt cr6,0x880a9cec
	if (ctx.cr6.lt) goto loc_880A9CEC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_880A9CEC:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x880a9d0c
	if (ctx.cr6.lt) goto loc_880A9D0C;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bgt cr6,0x880a9d0c
	if (ctx.cr6.gt) goto loc_880A9D0C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_880A9D0C:
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bgt cr6,0x880a9d24
	if (ctx.cr6.gt) goto loc_880A9D24;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_880A9D24:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A9D38;
	sub_8801A9C8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
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
	ctx.lr = 0x880A9D54;
	sub_8813FF90(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880a9d68
	if (ctx.cr6.eq) goto loc_880A9D68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880A9D68;
	sub_8813FF08(ctx, base);
loc_880A9D68:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880A9D74;
	sub_8813FF28(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r4,r9,32768
	ctx.r4.u64 = ctx.r9.u64 | 32768;
	// bl 0x8813ff48
	ctx.lr = 0x880A9D8C;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880A9D90:
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

DEFINE_REX_FUNC(sub_880AB5D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880AB5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,4019
	ctx.r9.s64 = 4019;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// bl 0x8801a448
	ctx.lr = 0x880AB624;
	sub_8801A448(ctx, base);
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8801a860
	ctx.lr = 0x880AB648;
	sub_8801A860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ABB48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880ABB50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x880abbb4
	if (!ctx.cr6.lt) goto loc_880ABBB4;
	// lis r28,-30606
	ctx.r28.s64 = -2005794816;
	// lwz r11,1780(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1780);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x880abbb4
	if (!ctx.cr6.lt) goto loc_880ABBB4;
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r11,1792
	ctx.r8.s64 = ctx.r11.s64 + 1792;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,1784(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1784);
loc_880ABB88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mulli r10,r11,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880abbc0
	if (ctx.cr6.eq) goto loc_880ABBC0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// blt cr6,0x880abb88
	if (ctx.cr6.lt) goto loc_880ABB88;
	// stw r11,1784(r9)
	REX_STORE_U32(ctx.r9.u32 + 1784, ctx.r11.u32);
loc_880ABBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880ABBC0:
	// stw r11,1784(r9)
	REX_STORE_U32(ctx.r9.u32 + 1784, ctx.r11.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r4,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r5,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x880ABBF4;
	sub_8801A448(ctx, base);
	// srawi r8,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 2;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r6,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,5218
	ctx.r3.s64 = ctx.r11.s64 + 5218;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x880abc2c
	if (ctx.cr6.eq) goto loc_880ABC2C;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bne cr6,0x880abc34
	if (!ctx.cr6.eq) goto loc_880ABC34;
loc_880ABC2C:
	// li r11,5266
	ctx.r11.s64 = 5266;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_880ABC34:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880ABC44;
	sub_8801A448(ctx, base);
	// lwz r11,1780(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1780);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1780(r28)
	REX_STORE_U32(ctx.r28.u32 + 1780, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B1988) {
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
	// lis r30,-30606
	ctx.r30.s64 = -2005794816;
loc_880B19A4:
	// lwz r11,18740(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18740);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B19B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,85
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 85, ctx.xer);
	// beq cr6,0x880b19d4
	if (ctx.cr6.eq) goto loc_880B19D4;
	// lwz r11,18740(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 18740);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B19D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B19D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880b19a4
	if (ctx.cr6.lt) goto loc_880B19A4;
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,17488
	ctx.r8.s64 = ctx.r9.s64 + 17488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,17488(r9)
	REX_STORE_U32(ctx.r9.u32 + 17488, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_880B1C90) {
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
	// bne cr6,0x880b1cfc
	if (!ctx.cr6.eq) goto loc_880B1CFC;
	// bl 0x880694f0
	ctx.lr = 0x880B1CB8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1cd8
	if (ctx.cr6.eq) goto loc_880B1CD8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B1CCC;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1cfc
	if (ctx.cr6.eq) goto loc_880B1CFC;
loc_880B1CD8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1CFC:
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

DEFINE_REX_FUNC(sub_880B1F90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B1F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-30608
	ctx.r30.s64 = -2005925888;
	// lis r29,-30606
	ctx.r29.s64 = -2005794816;
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r11,21888(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b1ff8
	if (!ctx.cr6.eq) goto loc_880B1FF8;
	// bl 0x880694f0
	ctx.lr = 0x880B1FB8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1fd8
	if (ctx.cr6.eq) goto loc_880B1FD8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B1FCC;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1ff8
	if (ctx.cr6.eq) goto loc_880B1FF8;
loc_880B1FD8:
	// lwz r11,18740(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 18740);
	// li r6,37
	ctx.r6.s64 = 37;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,69
	ctx.r4.s64 = 69;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,1124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B1FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1FF8:
	// lwz r11,21888(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// li r31,40
	ctx.r31.s64 = 40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b204c
	if (!ctx.cr6.eq) goto loc_880B204C;
	// bl 0x880694f0
	ctx.lr = 0x880B200C;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b202c
	if (ctx.cr6.eq) goto loc_880B202C;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B2020;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b204c
	if (ctx.cr6.eq) goto loc_880B204C;
loc_880B202C:
	// lwz r11,18740(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 18740);
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,73
	ctx.r4.s64 = 73;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r11,1124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B204C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B204C:
	// lwz r11,21888(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21888);
	// li r31,40
	ctx.r31.s64 = 40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b20a0
	if (!ctx.cr6.eq) goto loc_880B20A0;
	// bl 0x880694f0
	ctx.lr = 0x880B2060;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b2080
	if (ctx.cr6.eq) goto loc_880B2080;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B2074;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b20a0
	if (ctx.cr6.eq) goto loc_880B20A0;
loc_880B2080:
	// lwz r11,18740(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 18740);
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r11,1124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B20A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B20A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B29A8) {
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
	// li r30,40
	ctx.r30.s64 = 40;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2a38
	if (!ctx.cr6.eq) goto loc_880B2A38;
	// bl 0x880694f0
	ctx.lr = 0x880B29D4;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b29f4
	if (ctx.cr6.eq) goto loc_880B29F4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,20
	ctx.r30.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B29E8;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2a38
	if (ctx.cr6.eq) goto loc_880B2A38;
loc_880B29F4:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,87
	ctx.r3.s64 = 87;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2a38
	if (ctx.cr6.eq) goto loc_880B2A38;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,87
	ctx.r4.s64 = 87;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2A38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2A38:
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

DEFINE_REX_FUNC(sub_880B3050) {
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
	// li r30,38
	ctx.r30.s64 = 38;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b30e0
	if (!ctx.cr6.eq) goto loc_880B30E0;
	// bl 0x880694f0
	ctx.lr = 0x880B307C;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b309c
	if (ctx.cr6.eq) goto loc_880B309C;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,19
	ctx.r30.s64 = 19;
	// bl 0x8801a138
	ctx.lr = 0x880B3090;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b30e0
	if (ctx.cr6.eq) goto loc_880B30E0;
loc_880B309C:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,133
	ctx.r3.s64 = 133;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B30BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b30e0
	if (ctx.cr6.eq) goto loc_880B30E0;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,254
	ctx.r6.s64 = 254;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,133
	ctx.r4.s64 = 133;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B30E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B30E0:
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

DEFINE_REX_FUNC(sub_880B3638) {
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
	// li r30,68
	ctx.r30.s64 = 68;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b36c8
	if (!ctx.cr6.eq) goto loc_880B36C8;
	// bl 0x880694f0
	ctx.lr = 0x880B3664;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3684
	if (ctx.cr6.eq) goto loc_880B3684;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,34
	ctx.r30.s64 = 34;
	// bl 0x8801a138
	ctx.lr = 0x880B3678;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b36c8
	if (ctx.cr6.eq) goto loc_880B36C8;
loc_880B3684:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,128
	ctx.r3.s64 = 128;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B36A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b36c8
	if (ctx.cr6.eq) goto loc_880B36C8;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,254
	ctx.r6.s64 = 254;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B36C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B36C8:
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

DEFINE_REX_FUNC(sub_880B3C60) {
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
	// bne cr6,0x880b3ccc
	if (!ctx.cr6.eq) goto loc_880B3CCC;
	// bl 0x880694f0
	ctx.lr = 0x880B3C88;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3ca8
	if (ctx.cr6.eq) goto loc_880B3CA8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B3C9C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3ccc
	if (ctx.cr6.eq) goto loc_880B3CCC;
loc_880B3CA8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,166
	ctx.r4.s64 = 166;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B3CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3CCC:
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

DEFINE_REX_FUNC(sub_880B41D8) {
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
	ctx.lr = 0x880B41E8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b4210
	if (!ctx.cr6.eq) goto loc_880B4210;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B4210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4388) {
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
	ctx.lr = 0x880B4398;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b43c0
	if (!ctx.cr6.eq) goto loc_880B43C0;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B43C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B43C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B5248) {
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
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021898
	ctx.lr = 0x880B5274;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30709
	ctx.r9.s64 = -2012545024;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,20888
	ctx.r5.s64 = ctx.r9.s64 + 20888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880B5298;
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

DEFINE_REX_FUNC(sub_880B53D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B53D8;
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
	ctx.lr = 0x880B53E8;
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
	ctx.lr = 0x880B53FC;
	sub_88021898(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5470
	if (ctx.cr6.eq) goto loc_880B5470;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880b54e4
	if (!ctx.cr0.lt) goto loc_880B54E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,1040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1040);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b5444
	if (!ctx.cr6.eq) goto loc_880B5444;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b5444
	if (!ctx.cr6.eq) goto loc_880B5444;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_880B5444:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x880b54e8
	if (ctx.cr6.lt) goto loc_880B54E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880B5470:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x880b54e4
	if (!ctx.cr0.lt) goto loc_880B54E4;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b54e4
	if (ctx.cr6.eq) goto loc_880B54E4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,1040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1040);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b54b8
	if (!ctx.cr6.eq) goto loc_880B54B8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b54b8
	if (!ctx.cr6.eq) goto loc_880B54B8;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_880B54B8:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x880b54e8
	if (ctx.cr6.lt) goto loc_880B54E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880B54E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880B54E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B5D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B5D60;
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
	ctx.lr = 0x880B5D70;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021898
	ctx.lr = 0x880B5D84;
	sub_88021898(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x880b5da0
	if (ctx.cr6.lt) goto loc_880B5DA0;
	// li r11,-16
	ctx.r11.s64 = -16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_880B5DA0:
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,23736
	ctx.r5.s64 = ctx.r11.s64 + 23736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880B5DB4;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B61E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880B61F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880B6214;
	sub_88021508(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,5
	ctx.r31.s64 = 5;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// stw r31,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
	// stw r31,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// bl 0x8801a448
	ctx.lr = 0x880B6244;
	sub_8801A448(ctx, base);
	// li r9,-3
	ctx.r9.s64 = -3;
	// stw r3,24(r25)
	REX_STORE_U32(ctx.r25.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// stw r8,20(r25)
	REX_STORE_U32(ctx.r25.u32 + 20, ctx.r8.u32);
	// stw r30,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r30.u32);
	// stw r31,44(r25)
	REX_STORE_U32(ctx.r25.u32 + 44, ctx.r31.u32);
	// stw r9,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880B6268;
	sub_880244A8(ctx, base);
	// lis r7,-30709
	ctx.r7.s64 = -2012545024;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r7,24672
	ctx.r5.s64 = ctx.r7.s64 + 24672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880214b8
	ctx.lr = 0x880B627C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B6F28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B6F30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B6F48;
	sub_88023F40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021508
	ctx.lr = 0x880B6F5C;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,19
	ctx.r9.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880B6F90;
	sub_880244A8(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r4,52(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r6,56(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 56);
	// addis r5,r6,-70
	ctx.r5.s64 = ctx.r6.s64 + -4587520;
	// bl 0x880244d0
	ctx.lr = 0x880B6FAC;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880b6fb8
	if (ctx.cr6.lt) goto loc_880B6FB8;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880B6FB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// beq cr6,0x880b6fd4
	if (ctx.cr6.eq) goto loc_880B6FD4;
	// li r10,-72
	ctx.r10.s64 = -72;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// b 0x880b6fdc
	goto loc_880B6FDC;
loc_880B6FD4:
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r11,-72
	ctx.r9.s64 = ctx.r11.s64 + -72;
loc_880B6FDC:
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,28208
	ctx.r5.s64 = ctx.r11.s64 + 28208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880214b8
	ctx.lr = 0x880B6FF8;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B8328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880B8330;
	__savegprlr_27(ctx, base);
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
	ctx.lr = 0x880B8344;
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
	ctx.lr = 0x880B8358;
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
	// bge 0x880b8474
	if (!ctx.cr0.lt) goto loc_880B8474;
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
	// bne cr6,0x880b83c8
	if (!ctx.cr6.eq) goto loc_880B83C8;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq cr6,0x880b83a0
	if (ctx.cr6.eq) goto loc_880B83A0;
	// subfic r11,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_880B83A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880b8260
	ctx.lr = 0x880B83B4;
	sub_880B8260(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880244d0
	ctx.lr = 0x880B83C4;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_880B83C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880b8260
	ctx.lr = 0x880B83DC;
	sub_880B8260(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,29
	ctx.r3.s64 = 29;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88013940
	ctx.lr = 0x880B83F8;
	sub_88013940(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b8474
	if (!ctx.cr0.lt) goto loc_880B8474;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x880B8410;
	sub_880244A8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x880b8464
	if (!ctx.cr6.gt) goto loc_880B8464;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bgt 0x880b8464
	if (ctx.cr0.gt) goto loc_880B8464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880B8458;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880B8464:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880B8474:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B99C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B99D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B99DC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880B99E8;
	sub_88024030(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-23816
	ctx.r30.s64 = ctx.r11.s64 + -23816;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,112
	ctx.r9.s64 = ctx.r30.s64 + 112;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwzx r29,r11,r9
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880b9a14
	if (ctx.cr6.eq) goto loc_880B9A14;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_880B9A14:
	// lwz r9,1012(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,9987
	ctx.r3.s64 = ctx.r11.s64 + 9987;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9A34;
	sub_8801A9C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880B9A40;
	sub_8813FF08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9A4C;
	sub_8813FF48(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r27,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addis r5,r7,-68
	ctx.r5.s64 = ctx.r7.s64 + -4456448;
	// lwzx r11,r8,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r3,r11,9995
	ctx.r3.s64 = ctx.r11.s64 + 9995;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9A78;
	sub_8801A9C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880B9A84;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9A90;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BAAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BAAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BAAC4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880BAAD0;
	sub_88024030(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x880bab00
	if (!ctx.cr6.gt) goto loc_880BAB00;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_880BAB00:
	// lwz r9,1020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1020);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// divw r7,r11,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfic r3,r7,10034
	ctx.xer.ca = ctx.r7.u32 <= 10034;
	ctx.r3.u64 = static_cast<uint64_t>(10034) - ctx.r7.u64;
	// addis r5,r5,-90
	ctx.r5.s64 = ctx.r5.s64 + -5898240;
	// bl 0x8801a9c8
	ctx.lr = 0x880BAB20;
	sub_8801A9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880BAB2C;
	sub_8813FF08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880BAB38;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BB3E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17512
	ctx.r9.s64 = ctx.r11.s64 + 17512;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x88022050
	sub_88022050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BB400) {
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
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,17512
	ctx.r30.s64 = ctx.r11.s64 + 17512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x88022050
	ctx.lr = 0x880BB42C;
	sub_88022050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88022050
	ctx.lr = 0x880BB43C;
	sub_88022050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x88022050
	ctx.lr = 0x880BB44C;
	sub_88022050(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88022050
	ctx.lr = 0x880BB45C;
	sub_88022050(ctx, base);
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

DEFINE_REX_FUNC(sub_880BB768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BB770;
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
	ctx.lr = 0x880BB780;
	sub_88023F40(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3488
	ctx.r4.s64 = ctx.r11.s64 + -3488;
	// bl 0x88021d68
	ctx.lr = 0x880BB798;
	sub_88021D68(ctx, base);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20776
	ctx.r4.s64 = ctx.r10.s64 + 20776;
	// bl 0x88021780
	ctx.lr = 0x880BB7AC;
	sub_88021780(ctx, base);
	// lis r9,-30709
	ctx.r9.s64 = -2012545024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,22096
	ctx.r4.s64 = ctx.r9.s64 + 22096;
	// bl 0x88021780
	ctx.lr = 0x880BB7C0;
	sub_88021780(ctx, base);
	// stw r3,892(r29)
	REX_STORE_U32(ctx.r29.u32 + 892, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BB7D0;
	sub_88021C70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BBD78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BBD80;
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
	ctx.lr = 0x880BBD90;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BBDA4;
	sub_88021BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1204(r31)
	REX_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// addi r5,r10,23896
	ctx.r5.s64 = ctx.r10.s64 + 23896;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x88021a78
	ctx.lr = 0x880BBDC4;
	sub_88021A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bbdec
	if (!ctx.cr6.eq) goto loc_880BBDEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x88021928
	ctx.lr = 0x880BBDD8;
	sub_88021928(ctx, base);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23896
	ctx.r4.s64 = ctx.r11.s64 + 23896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BBDEC;
	sub_88021780(ctx, base);
loc_880BBDEC:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,-11960(r10)
	REX_STORE_U32(ctx.r10.u32 + -11960, ctx.r11.u32);
	// lwz r4,1288(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880bbe0c
	if (!ctx.cr6.eq) goto loc_880BBE0C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880BBE0C:
	// bl 0x88012f38
	ctx.lr = 0x880BBE10;
	sub_88012F38(ctx, base);
	// bl 0x880b3e88
	ctx.lr = 0x880BBE14;
	sub_880B3E88(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-18152
	ctx.r5.s64 = ctx.r11.s64 + -18152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880BBE28;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCB18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BCB20;
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
	ctx.lr = 0x880BCB30;
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
	ctx.lr = 0x880BCB44;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880bcbac
	if (ctx.cr6.gt) goto loc_880BCBAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880bcbb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCBB8;
	// bdzf 4*cr6+eq,0x880bcc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCC74;
	// bdzf 4*cr6+eq,0x880bccb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BCCB4;
	// bne cr6,0x880bcd08
	if (!ctx.cr6.eq) goto loc_880BCD08;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lis r10,416
	ctx.r10.s64 = 27262976;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880bcbac
	if (!ctx.cr6.lt) goto loc_880BCBAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BCB88;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bcbac
	if (!ctx.cr6.eq) goto loc_880BCBAC;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4288
	ctx.r4.s64 = ctx.r11.s64 + -4288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BCBA4;
	sub_88021D68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880BCBAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BCBB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bcc60
	if (!ctx.cr6.eq) goto loc_880BCC60;
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// addis r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -5242880;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880bcbac
	if (!ctx.cr6.gt) goto loc_880BCBAC;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BCBEC;
	sub_88021D68(ctx, base);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,23576
	ctx.r4.s64 = ctx.r10.s64 + 23576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BCC00;
	sub_88021780(ctx, base);
	// stw r3,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r9,-8
	ctx.xer.ca = ctx.r9.u32 > 7;
	ctx.r11.s64 = ctx.r9.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bge 0x880bcc20
	if (!ctx.cr0.lt) goto loc_880BCC20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880BCC20:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,26000
	ctx.r4.s64 = ctx.r10.s64 + 26000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BCC3C;
	sub_880213F0(ctx, base);
	// stw r3,1284(r29)
	REX_STORE_U32(ctx.r29.u32 + 1284, ctx.r3.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BCC60:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BCC74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BCC80;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bcbac
	if (!ctx.cr6.eq) goto loc_880BCBAC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BCCB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x880bcbac
	if (!ctx.cr0.lt) goto loc_880BCBAC;
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23896
	ctx.r4.s64 = ctx.r11.s64 + 23896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BCCD8;
	sub_88021780(ctx, base);
	// stw r3,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bge 0x880bcbac
	if (!ctx.cr0.lt) goto loc_880BCBAC;
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
loc_880BCD08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BCD14;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bcbac
	if (!ctx.cr6.eq) goto loc_880BCBAC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x880bcbac
	if (!ctx.cr0.lt) goto loc_880BCBAC;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13832
	ctx.r4.s64 = ctx.r11.s64 + -13832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880BCD40;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BCD4C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BEDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BEDD8;
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
	ctx.lr = 0x880BEDE8;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x88021de0
	ctx.lr = 0x880BEDF8;
	sub_88021DE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1000(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1000);
	// stw r11,68(r29)
	REX_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// bl 0x88021928
	ctx.lr = 0x880BEE0C;
	sub_88021928(ctx, base);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-4368
	ctx.r4.s64 = ctx.r10.s64 + -4368;
	// bl 0x88021e18
	ctx.lr = 0x880BEE1C;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BEEF0) {
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
	ctx.lr = 0x880BEF0C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021de0
	ctx.lr = 0x880BEF1C;
	sub_88021DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880bed40
	ctx.lr = 0x880BEF24;
	sub_880BED40(ctx, base);
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

DEFINE_REX_FUNC(sub_880BF260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880BF268;
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
	ctx.lr = 0x880BF278;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x88021de0
	ctx.lr = 0x880BF288;
	sub_88021DE0(ctx, base);
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,20560
	ctx.r11.u64 = ctx.r11.u64 | 20560;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// lis r8,384
	ctx.r8.s64 = 25165824;
	// stw r11,1216(r29)
	REX_STORE_U32(ctx.r29.u32 + 1216, ctx.r11.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r9,68(r29)
	REX_STORE_U32(ctx.r29.u32 + 68, ctx.r9.u32);
	// stw r8,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r8.u32);
	// lis r6,-30709
	ctx.r6.s64 = -2012545024;
	// stw r7,140(r29)
	REX_STORE_U32(ctx.r29.u32 + 140, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1220(r29)
	REX_STORE_U32(ctx.r29.u32 + 1220, ctx.r11.u32);
	// addi r4,r6,21064
	ctx.r4.s64 = ctx.r6.s64 + 21064;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x880BF2D0;
	sub_88021780(ctx, base);
	// stw r3,1000(r29)
	REX_STORE_U32(ctx.r29.u32 + 1000, ctx.r3.u32);
	// lis r4,-30709
	ctx.r4.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,21744
	ctx.r4.s64 = ctx.r4.s64 + 21744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x880BF2E8;
	sub_88021780(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// bl 0x88021e18
	ctx.lr = 0x880BF2F8;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C0130;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C013C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x88024420
	ctx.lr = 0x880C0150;
	sub_88024420(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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
	ctx.lr = 0x880C017C;
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
	ctx.lr = 0x880C019C;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c01b4
	if (!ctx.cr6.eq) goto loc_880C01B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x880C01AC;
	sub_88023F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C01B4:
	// li r6,210
	ctx.r6.s64 = 210;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,4190
	ctx.r3.s64 = 4190;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8801a9c8
	ctx.lr = 0x880C01C8;
	sub_8801A9C8(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// addi r29,r31,192
	ctx.r29.s64 = ctx.r31.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r11,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
loc_880C01DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,296(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8801aa90
	ctx.lr = 0x880C01EC;
	sub_8801AA90(ctx, base);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8801ad48
	ctx.lr = 0x880C01FC;
	sub_8801AD48(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,210
	ctx.r6.s64 = 210;
	// li r3,4190
	ctx.r3.s64 = 4190;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x880C0230;
	sub_8801A9C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x880c01dc
	if (!ctx.cr0.eq) goto loc_880C01DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0F28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C0F30;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r5,424
	ctx.r31.s64 = ctx.r5.s64 + 424;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880c0f58
	if (!ctx.cr6.gt) goto loc_880C0F58;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880C0F58;
	sub_880236A8(ctx, base);
loc_880C0F58:
	// lwz r11,2408(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c0fd4
	if (!ctx.cr6.eq) goto loc_880C0FD4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bgt 0x880c0fd4
	if (ctx.cr0.gt) goto loc_880C0FD4;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880229d0
	ctx.lr = 0x880C0F80;
	sub_880229D0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x88024de8
	ctx.lr = 0x880C0F94;
	sub_88024DE8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// stw r29,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r29,472(r30)
	REX_STORE_U16(ctx.r30.u32 + 472, ctx.r29.u16);
	// addi r4,r10,9920
	ctx.r4.s64 = ctx.r10.s64 + 9920;
	// sth r29,552(r30)
	REX_STORE_U16(ctx.r30.u32 + 552, ctx.r29.u16);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x88021780
	ctx.lr = 0x880C0FC8;
	sub_88021780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C0FD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C12C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C12C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88023f40
	ctx.lr = 0x880C12D0;
	sub_88023F40(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,2080(r3)
	REX_STORE_U32(ctx.r3.u32 + 2080, ctx.r11.u32);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r10,2160(r3)
	REX_STORE_U32(ctx.r3.u32 + 2160, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,2240(r3)
	REX_STORE_U32(ctx.r3.u32 + 2240, ctx.r9.u32);
	// lwz r8,116(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r8,2320(r3)
	REX_STORE_U32(ctx.r3.u32 + 2320, ctx.r8.u32);
	// lwz r7,2392(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2392);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880c1320
	if (ctx.cr6.eq) goto loc_880C1320;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r3,r3,2072
	ctx.r3.s64 = ctx.r3.s64 + 2072;
	// addis r9,r10,-46
	ctx.r9.s64 = ctx.r10.s64 + -3014656;
	// stw r11,2084(r31)
	REX_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// stw r9,2088(r31)
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x880C1320;
	sub_88022110(ctx, base);
loc_880C1320:
	// lwz r11,2396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c134c
	if (ctx.cr6.eq) goto loc_880C134C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r31,2152
	ctx.r3.s64 = ctx.r31.s64 + 2152;
	// addis r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 1048576;
	// stw r11,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// stw r9,2168(r31)
	REX_STORE_U32(ctx.r31.u32 + 2168, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x880C134C;
	sub_88022110(ctx, base);
loc_880C134C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lis r28,48
	ctx.r28.s64 = 3145728;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,2400(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2400);
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addis r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 2097152;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r8,2244(r31)
	REX_STORE_U32(ctx.r31.u32 + 2244, ctx.r8.u32);
	// stw r7,2248(r31)
	REX_STORE_U32(ctx.r31.u32 + 2248, ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r7,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stw r6,2324(r31)
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r6.u32);
	// stw r7,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r7.u32);
	// stw r6,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r7,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// beq cr6,0x880c13a8
	if (ctx.cr6.eq) goto loc_880C13A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2232
	ctx.r3.s64 = ctx.r31.s64 + 2232;
	// bl 0x88022110
	ctx.lr = 0x880C139C;
	sub_88022110(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2312
	ctx.r3.s64 = ctx.r31.s64 + 2312;
	// bl 0x88022110
	ctx.lr = 0x880C13A8;
	sub_88022110(ctx, base);
loc_880C13A8:
	// lwz r11,1124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1124);
	// lis r27,80
	ctx.r27.s64 = 5242880;
	// lwz r10,904(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 904);
	// lis r29,68
	ctx.r29.s64 = 4456448;
	// lwz r9,1344(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1344);
	// lis r30,96
	ctx.r30.s64 = 6291456;
	// lwz r8,244(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// stw r11,1220(r31)
	REX_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// stw r10,1000(r31)
	REX_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// stw r9,1360(r31)
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r9.u32);
	// stw r9,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r9.u32);
	// stw r8,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// stw r8,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// stw r7,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r7.u32);
	// lwz r6,684(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 684);
	// stw r11,1140(r31)
	REX_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// stw r10,920(r31)
	REX_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// stw r7,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,700(r31)
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// stw r6,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r6.u32);
	// lwz r5,412(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880c1444
	if (ctx.cr6.eq) goto loc_880C1444;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// subf r9,r28,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r28.u64;
	// subf r8,r27,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r29.u64;
	// stw r9,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// subf r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r8,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// stw r7,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r7.u32);
	// stw r6,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// stw r9,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// stw r8,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C1444;
	sub_88022110(ctx, base);
loc_880C1444:
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c148c
	if (ctx.cr6.eq) goto loc_880C148C;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r8,r27,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r9,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// subf r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r8,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r8.u32);
	// stw r7,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r7.u32);
	// stw r6,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r6.u32);
	// stw r9,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r8,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C148C;
	sub_88022110(ctx, base);
loc_880C148C:
	// lwz r11,852(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 852);
	// lis r30,40
	ctx.r30.s64 = 2621440;
	// lis r28,76
	ctx.r28.s64 = 4980736;
	// lis r29,42
	ctx.r29.s64 = 2752512;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c14e0
	if (ctx.cr6.eq) goto loc_880C14E0;
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,668(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 668);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// subf r9,r30,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	// subf r7,r28,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r9,704(r31)
	REX_STORE_U32(ctx.r31.u32 + 704, ctx.r9.u32);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	// stw r8,708(r31)
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r8.u32);
	// stw r7,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r7.u32);
	// stw r6,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r6.u32);
	// stw r9,656(r31)
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r9.u32);
	// stw r8,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C14E0;
	sub_88022110(ctx, base);
loc_880C14E0:
	// lwz r11,1072(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1528
	if (ctx.cr6.eq) goto loc_880C1528;
	// lwz r11,884(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 884);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,888(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 888);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,924(r31)
	REX_STORE_U32(ctx.r31.u32 + 924, ctx.r9.u32);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	// stw r8,928(r31)
	REX_STORE_U32(ctx.r31.u32 + 928, ctx.r8.u32);
	// stw r7,1004(r31)
	REX_STORE_U32(ctx.r31.u32 + 1004, ctx.r7.u32);
	// stw r6,1008(r31)
	REX_STORE_U32(ctx.r31.u32 + 1008, ctx.r6.u32);
	// stw r9,876(r31)
	REX_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// stw r8,880(r31)
	REX_STORE_U32(ctx.r31.u32 + 880, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C1528;
	sub_88022110(ctx, base);
loc_880C1528:
	// lwz r11,1292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1292);
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// lis r29,8
	ctx.r29.s64 = 524288;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1578
	if (ctx.cr6.eq) goto loc_880C1578;
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1104);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,1108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1108);
	// addi r3,r31,1132
	ctx.r3.s64 = ctx.r31.s64 + 1132;
	// subf r9,r30,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// subf r7,r27,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r27.u64;
	// stw r9,1144(r31)
	REX_STORE_U32(ctx.r31.u32 + 1144, ctx.r9.u32);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	// stw r8,1148(r31)
	REX_STORE_U32(ctx.r31.u32 + 1148, ctx.r8.u32);
	// stw r7,1224(r31)
	REX_STORE_U32(ctx.r31.u32 + 1224, ctx.r7.u32);
	// stw r6,1228(r31)
	REX_STORE_U32(ctx.r31.u32 + 1228, ctx.r6.u32);
	// stw r9,1096(r31)
	REX_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// stw r8,1100(r31)
	REX_STORE_U32(ctx.r31.u32 + 1100, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C1578;
	sub_88022110(ctx, base);
loc_880C1578:
	// lwz r11,1512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c15c0
	if (ctx.cr6.eq) goto loc_880C15C0;
	// lwz r11,1324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1324);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,1328(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1328);
	// addi r3,r31,1352
	ctx.r3.s64 = ctx.r31.s64 + 1352;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r9,1364(r31)
	REX_STORE_U32(ctx.r31.u32 + 1364, ctx.r9.u32);
	// subf r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r29.u64;
	// stw r8,1368(r31)
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r8.u32);
	// stw r7,1444(r31)
	REX_STORE_U32(ctx.r31.u32 + 1444, ctx.r7.u32);
	// stw r6,1448(r31)
	REX_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// stw r9,1316(r31)
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r9.u32);
	// stw r8,1320(r31)
	REX_STORE_U32(ctx.r31.u32 + 1320, ctx.r8.u32);
	// bl 0x88022110
	ctx.lr = 0x880C15C0;
	sub_88022110(ctx, base);
loc_880C15C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C4C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C4C3C;
	sub_88021508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,-24
	ctx.r9.s64 = -24;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// ble cr6,0x880c4c70
	if (!ctx.cr6.gt) goto loc_880C4C70;
	// li r11,-18
	ctx.r11.s64 = -18;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_880C4C70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C4C78;
	sub_880244A8(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,19216
	ctx.r5.s64 = ctx.r11.s64 + 19216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C4C8C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C54C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C54C8;
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
	ctx.lr = 0x880C54E8;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,-18
	ctx.r6.s64 = -18;
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
	// addi r5,r5,21288
	ctx.r5.s64 = ctx.r5.s64 + 21288;
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x880C5538;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6210) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C6218;
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
	ctx.lr = 0x880C622C;
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
	ctx.lr = 0x880C6240;
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
	// bge 0x880c635c
	if (!ctx.cr0.lt) goto loc_880C635C;
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
	// bne cr6,0x880c6278
	if (!ctx.cr6.eq) goto loc_880C6278;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_880C6278:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,60
	ctx.r10.s64 = 3932160;
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r30,r7,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addis r29,r8,-8
	ctx.r29.s64 = ctx.r8.s64 + -524288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C62A4;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88013ce0
	ctx.lr = 0x880C62CC;
	sub_88013CE0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r6,-5
	ctx.r6.s64 = ctx.r6.s64 + -5;
	// bl 0x88013ce0
	ctx.lr = 0x880C62F8;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,22
	ctx.r9.s64 = 22;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// bl 0x88013ce0
	ctx.lr = 0x880C6320;
	sub_88013CE0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c635c
	if (!ctx.cr0.lt) goto loc_880C635C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c634c
	if (!ctx.cr0.lt) goto loc_880C634C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880C634C;
	sub_88021598(ctx, base);
loc_880C634C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880C635C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C9420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C9428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C9438;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880C9444;
	sub_88024030(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r28,4(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c94bc
	if (ctx.cr6.eq) goto loc_880C94BC;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addis r5,r9,28
	ctx.r5.s64 = ctx.r9.s64 + 1835008;
	// bne cr6,0x880c94a0
	if (!ctx.cr6.eq) goto loc_880C94A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// addis r4,r10,68
	ctx.r4.s64 = ctx.r10.s64 + 4456448;
	// blt cr6,0x880c9488
	if (ctx.cr6.lt) goto loc_880C9488;
	// addis r4,r10,72
	ctx.r4.s64 = ctx.r10.s64 + 4718592;
	// addis r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 1310720;
loc_880C9488:
	// addi r3,r11,10644
	ctx.r3.s64 = ctx.r11.s64 + 10644;
	// bl 0x8801a9c8
	ctx.lr = 0x880C9490;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880C949C;
	sub_8813FF08(ctx, base);
	// b 0x880c94d8
	goto loc_880C94D8;
loc_880C94A0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// addis r4,r10,-68
	ctx.r4.s64 = ctx.r10.s64 + -4456448;
	// blt cr6,0x880c94b4
	if (ctx.cr6.lt) goto loc_880C94B4;
	// addis r4,r10,-72
	ctx.r4.s64 = ctx.r10.s64 + -4718592;
	// addis r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 1310720;
loc_880C94B4:
	// addi r3,r11,10644
	ctx.r3.s64 = ctx.r11.s64 + 10644;
	// b 0x880c94d0
	goto loc_880C94D0;
loc_880C94BC:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r3,10643
	ctx.r3.s64 = 10643;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addis r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -4456448;
	// addis r5,r10,28
	ctx.r5.s64 = ctx.r10.s64 + 1835008;
loc_880C94D0:
	// bl 0x8801a9c8
	ctx.lr = 0x880C94D4;
	sub_8801A9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880C94D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880c9510
	if (ctx.cr6.eq) goto loc_880C9510;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8813ff48
	ctx.lr = 0x880C94EC;
	sub_8813FF48(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880c9510
	if (ctx.cr6.eq) goto loc_880C9510;
	// lwz r11,2436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880C9510;
	sub_8813FF90(ctx, base);
loc_880C9510:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C9A68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C9A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C9A80;
	sub_88023F40(ctx, base);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e70
	ctx.lr = 0x880C9A94;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c9af8
	if (ctx.cr6.eq) goto loc_880C9AF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880c9acc
	if (ctx.cr6.lt) goto loc_880C9ACC;
	// beq cr6,0x880c9ac0
	if (ctx.cr6.eq) goto loc_880C9AC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880c9ae0
	if (!ctx.cr6.lt) goto loc_880C9AE0;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-16000
	ctx.r4.s64 = ctx.r11.s64 + -16000;
	// b 0x880c9ad4
	goto loc_880C9AD4;
loc_880C9AC0:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-18944
	ctx.r4.s64 = ctx.r11.s64 + -18944;
	// b 0x880c9ad4
	goto loc_880C9AD4;
loc_880C9ACC:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-21880
	ctx.r4.s64 = ctx.r11.s64 + -21880;
loc_880C9AD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880C9AE0;
	sub_88021AD0(ctx, base);
loc_880C9AE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x880C9AEC;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C9AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880CA860;
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
	// bl 0x88023f40
	ctx.lr = 0x880CA874;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021be0
	ctx.lr = 0x880CA888;
	sub_88021BE0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r11,r31,2392
	ctx.r11.s64 = ctx.r31.s64 + 2392;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// stw r29,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r29.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r29,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r29.u32);
	// stw r29,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r29.u32);
	// stw r29,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r29.u32);
loc_880CA8B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x88022508
	ctx.lr = 0x880CA8C0;
	sub_88022508(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x880ca8b4
	if (!ctx.cr0.eq) goto loc_880CA8B4;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-7424
	ctx.r4.s64 = ctx.r11.s64 + -7424;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CA8DC;
	sub_88021D68(ctx, base);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r10,8552
	ctx.r5.s64 = ctx.r10.s64 + 8552;
	// bl 0x88021a78
	ctx.lr = 0x880CA8F0;
	sub_88021A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ca91c
	if (!ctx.cr6.eq) goto loc_880CA91C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x88021928
	ctx.lr = 0x880CA904;
	sub_88021928(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8552
	ctx.r4.s64 = ctx.r11.s64 + 8552;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021780
	ctx.lr = 0x880CA918;
	sub_88021780(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_880CA91C:
	// lwz r4,2452(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r29,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880ca93c
	if (!ctx.cr6.eq) goto loc_880CA93C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880CA93C:
	// bl 0x88012f38
	ctx.lr = 0x880CA940;
	sub_88012F38(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88022098
	ctx.lr = 0x880CA948;
	sub_88022098(ctx, base);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-24088
	ctx.r5.s64 = ctx.r11.s64 + -24088;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CA95C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB5A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CB5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,296
	ctx.r9.s64 = 19398656;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
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
	// addi r4,r8,-8552
	ctx.r4.s64 = ctx.r8.s64 + -8552;
	// bl 0x88021d68
	ctx.lr = 0x880CB5E4;
	sub_88021D68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cb4e0
	ctx.lr = 0x880CB5F4;
	sub_880CB4E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CB658;
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
	ctx.lr = 0x880CB668;
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
	ctx.lr = 0x880CB67C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880cb6b4
	if (ctx.cr6.gt) goto loc_880CB6B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cb714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB714;
	// bdzf 4*cr6+eq,0x880cb798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CB798;
	// bne cr6,0x880cb7f0
	if (!ctx.cr6.eq) goto loc_880CB7F0;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cb6c0
	if (ctx.cr6.eq) goto loc_880CB6C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_880CB6B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB6C0:
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,216
	ctx.r10.s64 = 14155776;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,1928(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1928);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cb6e4
	if (ctx.cr6.eq) goto loc_880CB6E4;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_880CB6E4:
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-7848
	ctx.r4.s64 = ctx.r10.s64 + -7848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB700;
	sub_88021D68(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB714:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CB724;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb6b4
	if (ctx.cr6.eq) goto loc_880CB6B4;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,1928(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1928);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cb750
	if (ctx.cr6.eq) goto loc_880CB750;
	// lis r11,216
	ctx.r11.s64 = 14155776;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_880CB750:
	// lis r11,304
	ctx.r11.s64 = 19922944;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-7848
	ctx.r4.s64 = ctx.r10.s64 + -7848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB76C;
	sub_88021D68(ctx, base);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,18416
	ctx.r4.s64 = ctx.r9.s64 + 18416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CB780;
	sub_880213F0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB798:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CB7A8;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb6b4
	if (ctx.cr6.eq) goto loc_880CB6B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,304
	ctx.r9.s64 = 19922944;
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
	// addi r4,r8,-7848
	ctx.r4.s64 = ctx.r8.s64 + -7848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CB7DC;
	sub_88021D68(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CB7F0:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CB800;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cb6b4
	if (ctx.cr6.eq) goto loc_880CB6B4;
	// lwz r11,1928(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1928);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,1928(r29)
	REX_STORE_U32(ctx.r29.u32 + 1928, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x880CB824;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cb6b4
	if (!ctx.cr6.eq) goto loc_880CB6B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880CB838;
	sub_88021598(ctx, base);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19040
	ctx.r4.s64 = ctx.r11.s64 + -19040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880CB84C;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x880CB858;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CCFB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CCFB8;
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
	ctx.lr = 0x880CCFCC;
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
	ctx.lr = 0x880CCFE0;
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
	ctx.lr = 0x880CD018;
	sub_88021D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CD02C;
	sub_880244A8(ctx, base);
	// lis r6,-30707
	ctx.r6.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-12560
	ctx.r5.s64 = ctx.r6.s64 + -12560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CD040;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CD4B0;
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
	ctx.lr = 0x880CD4C0;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880CD4D0;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880cd678
	if (ctx.cr6.lt) goto loc_880CD678;
	// beq cr6,0x880cd554
	if (ctx.cr6.eq) goto loc_880CD554;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880cd6a8
	if (!ctx.cr6.lt) goto loc_880CD6A8;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CD4FC;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cd6a8
	if (ctx.cr6.eq) goto loc_880CD6A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88021698
	ctx.lr = 0x880CD510;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cd6a8
	if (!ctx.cr6.eq) goto loc_880CD6A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x880CD528;
	sub_880216E8(ctx, base);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-10152
	ctx.r4.s64 = ctx.r11.s64 + -10152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880CD53C;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880CD548;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CD554:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-9368
	ctx.r4.s64 = ctx.r11.s64 + -9368;
	// bl 0x88021e70
	ctx.lr = 0x880CD564;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cd6a8
	if (ctx.cr6.eq) goto loc_880CD6A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880CD57C;
	sub_8801A448(ctx, base);
	// subfic r10,r3,21
	ctx.xer.ca = ctx.r3.u32 <= 21;
	ctx.r10.u64 = static_cast<uint64_t>(21) - ctx.r3.u64;
	// rlwinm r9,r10,19,0,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880cd5a8
	if (ctx.cr6.eq) goto loc_880CD5A8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a448
	ctx.lr = 0x880CD59C;
	sub_8801A448(ctx, base);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r10,r11,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF80000;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_880CD5A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8801a448
	ctx.lr = 0x880CD5B0;
	sub_8801A448(ctx, base);
	// addi r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 35;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// rlwinm r9,r11,19,0,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF80000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r10,-7848
	ctx.r4.s64 = ctx.r10.s64 + -7848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CD5D0;
	sub_88021D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x88021698
	ctx.lr = 0x880CD5EC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cd6a8
	if (!ctx.cr6.eq) goto loc_880CD6A8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,28664
	ctx.r4.s64 = ctx.r10.s64 + 28664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x880CD618;
	sub_880213F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x880cd638
	if (ctx.cr6.gt) goto loc_880CD638;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880CD638:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x880cd654
	if (ctx.cr6.lt) goto loc_880CD654;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_880CD654:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x880cd6a8
	if (ctx.cr0.gt) goto loc_880CD6A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CD678:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bgt 0x880cd6a8
	if (ctx.cr0.gt) goto loc_880CD6A8;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32576
	ctx.r4.s64 = ctx.r11.s64 + -32576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CD69C;
	sub_880213F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880CD6A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF3C8;
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
	ctx.lr = 0x880CF3D8;
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
	ctx.lr = 0x880CF3EC;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880cf44c
	if (!ctx.cr0.lt) goto loc_880CF44C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,22
	ctx.r8.s64 = ctx.r11.s64 + 22;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// bge 0x880cf44c
	if (!ctx.cr0.lt) goto loc_880CF44C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x88021928
	ctx.lr = 0x880CF440;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CF44C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880D0108;
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
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021508
	ctx.lr = 0x880D0128;
	sub_88021508(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,-6
	ctx.r11.s64 = -6;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r5.u32);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r4.u32);
	// stw r11,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r7,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x880D0180;
	sub_880244A8(ctx, base);
	// lis r6,-30707
	ctx.r6.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-192
	ctx.r5.s64 = ctx.r6.s64 + -192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880D0194;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D10C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f54
	ctx.lr = 0x880D10D0;
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
	ctx.lr = 0x880D10E4;
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
	ctx.lr = 0x880D10F8;
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
	// bge 0x880d1654
	if (!ctx.cr0.lt) goto loc_880D1654;
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
	ctx.lr = 0x880D113C;
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
	// bne cr6,0x880d1158
	if (!ctx.cr6.eq) goto loc_880D1158;
	// neg r25,r25
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r25.u64);
loc_880D1158:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d1180
	if (!ctx.cr6.eq) goto loc_880D1180;
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
loc_880D1180:
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014188
	ctx.lr = 0x880D11AC;
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
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x88014188
	ctx.lr = 0x880D11E8;
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
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x88014188
	ctx.lr = 0x880D1220;
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
	// li r8,8
	ctx.r8.s64 = 8;
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
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// bl 0x88014188
	ctx.lr = 0x880D1260;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
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
	// li r10,6
	ctx.r10.s64 = 6;
	// li r8,4
	ctx.r8.s64 = 4;
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
	ctx.lr = 0x880D12A8;
	sub_88014578(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,4
	ctx.r8.s64 = 4;
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
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// bl 0x88014578
	ctx.lr = 0x880D12F4;
	sub_88014578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,4
	ctx.r8.s64 = 4;
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
	ctx.lr = 0x880D1338;
	sub_88014578(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,6
	ctx.r10.s64 = 6;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
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
	ctx.lr = 0x880D1384;
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
	ctx.lr = 0x880D139C;
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
	// bne cr6,0x880d13b8
	if (!ctx.cr6.eq) goto loc_880D13B8;
	// neg r25,r25
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r25.u64);
loc_880D13B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d13e0
	if (!ctx.cr6.eq) goto loc_880D13E0;
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
loc_880D13E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014188
	ctx.lr = 0x880D140C;
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
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r25,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r25.u64;
	// bl 0x88014188
	ctx.lr = 0x880D1444;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r21,r25,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r21,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r21.u64;
	// bl 0x88014188
	ctx.lr = 0x880D1478;
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
	// li r8,8
	ctx.r8.s64 = 8;
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
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// bl 0x88014188
	ctx.lr = 0x880D14B8;
	sub_88014188(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r9,r24
	ctx.r5.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,4
	ctx.r8.s64 = 4;
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
	ctx.lr = 0x880D14F8;
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
	// li r10,6
	ctx.r10.s64 = 6;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014578
	ctx.lr = 0x880D1544;
	sub_88014578(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subf r7,r21,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r21.u64;
	// lwz r25,8(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,4
	ctx.r8.s64 = 4;
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
	ctx.lr = 0x880D1588;
	sub_88014578(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r11,-26
	ctx.r6.s64 = ctx.r11.s64 + -26;
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
	ctx.lr = 0x880D15D4;
	sub_88014578(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880d1654
	if (!ctx.cr0.lt) goto loc_880D1654;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880244a8
	ctx.lr = 0x880D15EC;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880d1608
	if (!ctx.cr0.lt) goto loc_880D1608;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x88021598
	ctx.lr = 0x880D1608;
	sub_88021598(ctx, base);
loc_880D1608:
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
loc_880D1654:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D8490) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880D8498;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,596
	ctx.r4.s64 = 596;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D84A8;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D84B0;
	sub_88023F40(ctx, base);
	// li r5,596
	ctx.r5.s64 = 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D84C0;
	sub_8813FA58(ctx, base);
	// stw r30,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D84DC;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D84E4;
	sub_88023C50(ctx, base);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,-24
	ctx.r6.s64 = -24;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r8,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r7,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// li r25,48
	ctx.r25.s64 = 48;
	// stw r9,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r27,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r25,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r10,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r11,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r24,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r24.u32);
	// stw r6,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// stw r5,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// stw r9,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x880D855C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d857c
	if (ctx.cr6.eq) goto loc_880D857C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r8,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
loc_880D857C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r27,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r27.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r27,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r7,60(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r25,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
	// stw r9,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D85BC;
	sub_880244D0(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,16
	ctx.r10.s64 = 16;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D85D8:
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwu r24,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880d85d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D85D8;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-32704
	ctx.r4.s64 = ctx.r10.s64 + -32704;
	// stw r11,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r9,24(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// stw r9,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// lwz r8,28(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// stw r8,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// bl 0x88023e90
	ctx.lr = 0x880D8610;
	sub_88023E90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D93F0) {
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
	ctx.lr = 0x880D940C;
	sub_88023F40(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8801a860
	ctx.lr = 0x880D9424;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x88024438
	ctx.lr = 0x880D9450;
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
	ctx.lr = 0x880D9470;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d9484
	if (!ctx.cr6.eq) goto loc_880D9484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x880D9480;
	sub_88023F48(ctx, base);
	// b 0x880d9538
	goto loc_880D9538;
loc_880D9484:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bge 0x880d94f8
	if (!ctx.cr0.lt) goto loc_880D94F8;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// blt cr6,0x880d94f8
	if (ctx.cr6.lt) goto loc_880D94F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x88023f48
	ctx.lr = 0x880D94C8;
	sub_88023F48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880244d0
	ctx.lr = 0x880D94D8;
	sub_880244D0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-4
	ctx.r6.s64 = -4;
	// lwz r7,144(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88013940
	ctx.lr = 0x880D94F4;
	sub_88013940(ctx, base);
	// b 0x880d9538
	goto loc_880D9538;
loc_880D94F8:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// li r6,150
	ctx.r6.s64 = 150;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,10337
	ctx.r3.s64 = ctx.r11.s64 + 10337;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a9c8
	ctx.lr = 0x880D9510;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880D9528;
	sub_8813FF90(ctx, base);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,33023
	ctx.r4.u64 = ctx.r4.u64 | 33023;
	// bl 0x8813ff48
	ctx.lr = 0x880D9538;
	sub_8813FF48(ctx, base);
loc_880D9538:
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

DEFINE_REX_FUNC(sub_880DAAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DAAD8;
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
	ctx.lr = 0x880DAAE8;
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
	ctx.lr = 0x880DAAFC;
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
	// bge 0x880dab44
	if (!ctx.cr0.lt) goto loc_880DAB44;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r5,r7,28
	ctx.r5.u64 = ctx.r7.u32 & 0xF;
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r5,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// stw r6,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// stw r4,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
loc_880DAB44:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bge 0x880dab7c
	if (!ctx.cr0.lt) goto loc_880DAB7C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r7,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
loc_880DAB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DB950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DB958;
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
	ctx.lr = 0x880DB96C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880DB97C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,13
	ctx.r8.s64 = 13;
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
	ctx.lr = 0x880DB9B4;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-18568
	ctx.r5.s64 = ctx.r6.s64 + -18568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DB9C8;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DBE68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x880DBE70;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DBE84;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88021508
	ctx.lr = 0x880DBE98;
	sub_88021508(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// bge 0x880dbefc
	if (!ctx.cr0.lt) goto loc_880DBEFC;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r29,656(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 660);
	// addis r28,r10,-48
	ctx.r28.s64 = ctx.r10.s64 + -3145728;
	// stw r29,948(r30)
	REX_STORE_U32(ctx.r30.u32 + 948, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,952(r30)
	REX_STORE_U32(ctx.r30.u32 + 952, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DBED8;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,-20
	ctx.r6.s64 = -20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88013ce0
	ctx.lr = 0x880DBEFC;
	sub_88013CE0(ctx, base);
loc_880DBEFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880dc230
	if (!ctx.cr0.lt) goto loc_880DC230;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r25,45
	ctx.r25.s64 = 2949120;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880dbf90
	if (!ctx.cr6.eq) goto loc_880DBF90;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x880244d0
	ctx.lr = 0x880DBF44;
	sub_880244D0(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DBF60;
	sub_8801A448(ctx, base);
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DBF70;
	sub_8801A448(ctx, base);
	// addi r5,r3,-4
	ctx.r5.s64 = ctx.r3.s64 + -4;
	// li r3,7
	ctx.r3.s64 = 7;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// bl 0x8801a448
	ctx.lr = 0x880DBF84;
	sub_8801A448(ctx, base);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_880DBF90:
	// lwz r10,2368(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2368);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,2236(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2236);
	// lwz r9,2104(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,1972(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1972);
	// lwz r10,1840(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1840);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,1708(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1708);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x880dc04c
	if (!ctx.cr6.eq) goto loc_880DC04C;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r30,56(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DBFE0;
	sub_880244D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88013ce0
	ctx.lr = 0x880DC004;
	sub_88013CE0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880dc038
	if (ctx.cr6.eq) goto loc_880DC038;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x88013ce0
	ctx.lr = 0x880DC038;
	sub_88013CE0(ctx, base);
loc_880DC038:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x880dc1d8
	goto loc_880DC1D8;
loc_880DC04C:
	// lis r24,80
	ctx.r24.s64 = 5242880;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880dc094
	if (ctx.cr6.eq) goto loc_880DC094;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DC074;
	sub_880244D0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,7
	ctx.r8.s64 = 7;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x880dc0f8
	goto loc_880DC0F8;
loc_880DC094:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r29,56(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DC0AC;
	sub_880244D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88013ce0
	ctx.lr = 0x880DC0D4;
	sub_88013CE0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880dc108
	if (ctx.cr6.eq) goto loc_880DC108;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// li r3,5
	ctx.r3.s64 = 5;
loc_880DC0F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880DC108;
	sub_88013CE0(ctx, base);
loc_880DC108:
	// lwz r11,1972(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,1840(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1840);
	// lwz r10,1708(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1708);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880dc164
	if (ctx.cr6.eq) goto loc_880DC164;
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// subf r30,r24,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DC144;
	sub_880244D0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,7
	ctx.r8.s64 = 7;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// li r3,35
	ctx.r3.s64 = 35;
	// b 0x880dc1c8
	goto loc_880DC1C8;
loc_880DC164:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r30,56(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DC17C;
	sub_880244D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88013ce0
	ctx.lr = 0x880DC1A4;
	sub_88013CE0(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880dc1d8
	if (ctx.cr6.eq) goto loc_880DC1D8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,18
	ctx.r9.s64 = 18;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// li r3,5
	ctx.r3.s64 = 5;
loc_880DC1C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880DC1D8;
	sub_88013CE0(ctx, base);
loc_880DC1D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880dc230
	if (!ctx.cr0.lt) goto loc_880DC230;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880244a8
	ctx.lr = 0x880DC1F8;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880dc214
	if (!ctx.cr0.lt) goto loc_880DC214;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88021598
	ctx.lr = 0x880DC214;
	sub_88021598(ctx, base);
loc_880DC214:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_880DC230:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0B58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0B60;
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
	ctx.lr = 0x880E0B74;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021be0
	ctx.lr = 0x880E0B84;
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
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880E0BA0;
	sub_880244A8(ctx, base);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,2712
	ctx.r5.s64 = ctx.r8.s64 + 2712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0BB4;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0DE0;
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
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021be0
	ctx.lr = 0x880E0E00;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880E0E1C;
	sub_880244A8(ctx, base);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,3328
	ctx.r5.s64 = ctx.r8.s64 + 3328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0E30;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E1110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880E1118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880e1174
	if (ctx.cr6.eq) goto loc_880E1174;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x880E113C;
	sub_8801A860(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r11.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x880e1174
	if (ctx.cr0.gt) goto loc_880E1174;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_880E1174:
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88024438
	ctx.lr = 0x880E1180;
	sub_88024438(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r31,584
	ctx.r30.s64 = ctx.r31.s64 + 584;
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r29,55
	ctx.r29.s64 = 55;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880E119C:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880E11AC;
	sub_8813FA60(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88024438
	ctx.lr = 0x880E11B8;
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
	// bne 0x880e119c
	if (!ctx.cr0.eq) goto loc_880E119C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// stw r9,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stw r8,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r8.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r7,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r7.u32);
	// lwz r6,212(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// stw r6,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r6.u32);
	// lwz r5,272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// stw r5,608(r31)
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r5.u32);
	// lwz r4,276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// stw r4,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r4.u32);
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// stw r3,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stw r11,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// stw r10,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// lwz r9,404(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// stw r9,628(r31)
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// lwz r8,464(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// stw r8,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r8.u32);
	// lwz r7,468(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// stw r7,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r7.u32);
	// lwz r6,528(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 528);
	// stw r6,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// lwz r5,532(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 532);
	// stw r5,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E3080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880E3088;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bgt 0x880e3240
	if (ctx.cr0.gt) goto loc_880E3240;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r10,76(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// lwz r30,72(r5)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,4688
	ctx.r11.s64 = ctx.r11.s64 + 4688;
	// addis r29,r10,40
	ctx.r29.s64 = ctx.r10.s64 + 2621440;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_880E30C0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,-12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880E30DC;
	sub_880A84F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x880E30F0;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a8620
	ctx.lr = 0x880E30FC;
	sub_880A8620(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880a8638
	ctx.lr = 0x880E3108;
	sub_880A8638(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x880a8650
	ctx.lr = 0x880E3114;
	sub_880A8650(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// li r6,91
	ctx.r6.s64 = 91;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x880a99a8
	ctx.lr = 0x880E3130;
	sub_880A99A8(ctx, base);
	// lwz r10,8532(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e31b0
	if (!ctx.cr6.eq) goto loc_880E31B0;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e31b0
	if (ctx.cr6.eq) goto loc_880E31B0;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x880E3150;
	sub_8801A448(ctx, base);
	// addi r25,r3,-16
	ctx.r25.s64 = ctx.r3.s64 + -16;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E315C;
	sub_8801A448(ctx, base);
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x880E317C;
	sub_880111C0(ctx, base);
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8801a448
	ctx.lr = 0x880E3184;
	sub_8801A448(ctx, base);
	// addi r25,r3,-16
	ctx.r25.s64 = ctx.r3.s64 + -16;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E3190;
	sub_8801A448(ctx, base);
	// addi r9,r3,-32
	ctx.r9.s64 = ctx.r3.s64 + -32;
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x880E31B0;
	sub_880111C0(ctx, base);
loc_880E31B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x880e30c0
	if (ctx.cr6.lt) goto loc_880E30C0;
	// lwz r11,8532(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3204
	if (!ctx.cr6.eq) goto loc_880E3204;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88024750
	ctx.lr = 0x880E31D4;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,72
	ctx.r8.s64 = 72;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88011728
	ctx.lr = 0x880E31F8;
	sub_88011728(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E3204:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x880E3234;
	sub_880114D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880E3240:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E5328) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880E5330;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E5348;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021898
	ctx.lr = 0x880E535C;
	sub_88021898(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mulli r11,r11,172
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(172));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ori r29,r10,32896
	ctx.r29.u64 = ctx.r10.u64 | 32896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,3316
	ctx.r31.s64 = ctx.r11.s64 + 3316;
	// lwz r9,3316(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3316);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e53f8
	if (ctx.cr6.eq) goto loc_880E53F8;
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lhz r10,82(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880e53cc
	if (ctx.cr6.eq) goto loc_880E53CC;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// beq cr6,0x880e53f8
	if (ctx.cr6.eq) goto loc_880E53F8;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880e53f4
	goto loc_880E53F4;
loc_880E53CC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bge cr6,0x880e53f8
	if (!ctx.cr6.lt) goto loc_880E53F8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880e53f8
	if (!ctx.cr6.eq) goto loc_880E53F8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880E53F4:
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
loc_880E53F8:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e5434
	if (!ctx.cr6.eq) goto loc_880E5434;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e5434
	if (ctx.cr6.eq) goto loc_880E5434;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x880E5434;
	sub_88022BE0(ctx, base);
loc_880E5434:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x880e5894
	if (ctx.cr6.gt) goto loc_880E5894;
	// lis r12,-30706
	ctx.r12.s64 = -2012348416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21592
	ctx.r12.s64 = ctx.r12.s64 + 21592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880E5480;
	case 1:
		goto loc_880E5560;
	case 2:
		goto loc_880E55DC;
	case 3:
		goto loc_880E5660;
	case 4:
		goto loc_880E568C;
	case 5:
		goto loc_880E5740;
	case 6:
		goto loc_880E578C;
	case 7:
		goto loc_880E57C0;
	case 8:
		goto loc_880E582C;
	case 9:
		goto loc_880E5870;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880E5480:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r29,20(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E548C;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x880E549C;
	sub_88069270(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e5894
	if (ctx.cr6.gt) goto loc_880E5894;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e5550
	if (!ctx.cr6.eq) goto loc_880E5550;
	// stw r29,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// sth r29,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r29.u16);
	// li r7,255
	ctx.r7.s64 = 255;
	// sth r28,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r28.u16);
	// li r6,7168
	ctx.r6.s64 = 7168;
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r9,r9,19936
	ctx.r9.s64 = ctx.r9.s64 + 19936;
	// stw r7,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// stw r9,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r31,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r31.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880E553C;
	sub_8813FA58(ctx, base);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880E554C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_880E5550:
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E5560:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e4ea0
	ctx.lr = 0x880E556C;
	sub_880E4EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e5894
	if (!ctx.cr6.eq) goto loc_880E5894;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,8532(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8532);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// blt cr6,0x880e55b0
	if (ctx.cr6.lt) goto loc_880E55B0;
	// beq cr6,0x880e55a4
	if (ctx.cr6.eq) goto loc_880E55A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880e55c8
	if (!ctx.cr6.lt) goto loc_880E55C8;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-15712
	ctx.r4.s64 = ctx.r11.s64 + -15712;
	// b 0x880e55b8
	goto loc_880E55B8;
loc_880E55A4:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-16520
	ctx.r4.s64 = ctx.r11.s64 + -16520;
	// b 0x880e55b8
	goto loc_880E55B8;
loc_880E55B0:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-17288
	ctx.r4.s64 = ctx.r11.s64 + -17288;
loc_880E55B8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E55C4;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880E55C8:
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
loc_880E55DC:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880e5600
	if (!ctx.cr6.eq) goto loc_880E5600;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e5600
	if (ctx.cr6.eq) goto loc_880E5600;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_880E5600:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,20(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E560C;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88069270
	ctx.lr = 0x880E561C;
	sub_88069270(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e5894
	if (ctx.cr6.gt) goto loc_880E5894;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-11932(r10)
	REX_STORE_U32(ctx.r10.u32 + -11932, ctx.r11.u32);
	// stw r9,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E5660:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E568C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x880e5894
	if (!ctx.cr0.lt) goto loc_880E5894;
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
	// bgt 0x880e56b8
	if (ctx.cr0.gt) goto loc_880E56B8;
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_880E56B8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// divw r5,r6,r9
	ctx.r5.u64 = uint32_t((ctx.r9.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r6.s32 / ctx.r9.s32 : 0);
	// stw r5,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// bgt 0x880e56e8
	if (ctx.cr0.gt) goto loc_880E56E8;
	// stw r28,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_880E56E8:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// bgt cr6,0x880e5894
	if (ctx.cr6.gt) goto loc_880E5894;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x880e5894
	if (ctx.cr6.gt) goto loc_880E5894;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e5730
	if (!ctx.cr6.eq) goto loc_880E5730;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E5724;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E5730:
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E5740:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880E574C;
	sub_88021598(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E5760;
	sub_8801A448(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r28,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r10,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E578C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e4fd8
	ctx.lr = 0x880E5798;
	sub_880E4FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e5894
	if (!ctx.cr6.eq) goto loc_880E5894;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E57C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bgt 0x880e57fc
	if (ctx.cr0.gt) goto loc_880E57FC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x880e57fc
	if (ctx.cr6.lt) goto loc_880E57FC;
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_880E57FC:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
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
	// stw r6,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E582C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880e5108
	ctx.lr = 0x880E583C;
	sub_880E5108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e5894
	if (!ctx.cr6.eq) goto loc_880E5894;
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// stw r28,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r9,r11,24672
	ctx.r9.u64 = ctx.r11.u64 | 24672;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r9,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E5870:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x880e5894
	if (!ctx.cr0.lt) goto loc_880E5894;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E5894;
	sub_88021928(ctx, base);
loc_880E5894:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EB000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880EB008;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880EB028;
	sub_88021508(ctx, base);
	// li r8,40
	ctx.r8.s64 = 40;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,104
	ctx.r7.s64 = 104;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r10,r9,40
	ctx.r10.s64 = ctx.r9.s64 + 40;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// stw r7,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stw r28,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r27,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// bne cr6,0x880eb108
	if (!ctx.cr6.eq) goto loc_880EB108;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,384
	ctx.r9.s64 = 384;
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lis r6,-7
	ctx.r6.s64 = -458752;
	// stw r8,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lis r5,-3
	ctx.r5.s64 = -196608;
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// li r4,-8
	ctx.r4.s64 = -8;
	// stw r6,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stw r4,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
loc_880EB108:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-20984
	ctx.r5.s64 = ctx.r11.s64 + -20984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EB11C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EBD78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880EBD80;
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
	// beq cr6,0x880ebdbc
	if (ctx.cr6.eq) goto loc_880EBDBC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021598
	ctx.lr = 0x880EBDB0;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880EBDBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EBDC4;
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
	ctx.lr = 0x880EBDE4;
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
	// bge 0x880ebf68
	if (!ctx.cr0.lt) goto loc_880EBF68;
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
	// bne cr6,0x880ebe98
	if (!ctx.cr6.eq) goto loc_880EBE98;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x880ebe30
	if (!ctx.cr6.eq) goto loc_880EBE30;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880EBE30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244c0
	ctx.lr = 0x880EBE38;
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
	ctx.lr = 0x880EBE54;
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
	ctx.lr = 0x880EBE74;
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
	ctx.lr = 0x880EBE94;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_880EBE98:
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r7,r26
	ctx.r5.u64 = ctx.r7.u64 + ctx.r26.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x880EBECC;
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
	// li r8,11
	ctx.r8.s64 = 11;
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
	ctx.lr = 0x880EBF00;
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
	// li r8,11
	ctx.r8.s64 = 11;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r6,r6,-28
	ctx.r6.s64 = ctx.r6.s64 + -28;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EBF34;
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
	// bge 0x880ebf68
	if (!ctx.cr0.lt) goto loc_880EBF68;
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
loc_880EBF68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EE0D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880EE0E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EE0F4;
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
	ctx.lr = 0x880EE108;
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
	// bge 0x880ee320
	if (!ctx.cr0.lt) goto loc_880EE320;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,8500(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8500);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8504(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8504);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addis r26,r11,-716
	ctx.r26.s64 = ctx.r11.s64 + -46923776;
	// add r28,r29,r5
	ctx.r28.u64 = ctx.r29.u64 + ctx.r5.u64;
	// subf r27,r5,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r5.u64;
	// addis r30,r11,-702
	ctx.r30.s64 = ctx.r11.s64 + -46006272;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880ee1a8
	if (!ctx.cr6.eq) goto loc_880EE1A8;
	// bl 0x880244d0
	ctx.lr = 0x880EE178;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EE18C;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EE1A0;
	sub_880244D0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x880ee208
	goto loc_880EE208;
loc_880EE1A8:
	// bl 0x880244d0
	ctx.lr = 0x880EE1AC;
	sub_880244D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x880EE1B8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EE1D0;
	sub_880244D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8801a808
	ctx.lr = 0x880EE1DC;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880EE1F4;
	sub_880244D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8801a808
	ctx.lr = 0x880EE200;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_880EE208:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x880EE22C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x880EE250;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,19
	ctx.r8.s64 = 19;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-5
	ctx.r6.s64 = -5;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x88013ce0
	ctx.lr = 0x880EE274;
	sub_88013CE0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,-3
	ctx.r29.s64 = -3;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x88014578
	ctx.lr = 0x880EE2A8;
	sub_88014578(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x88014578
	ctx.lr = 0x880EE2D4;
	sub_88014578(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880ee320
	if (!ctx.cr0.lt) goto loc_880EE320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880244a8
	ctx.lr = 0x880EE2EC;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880ee308
	if (!ctx.cr0.lt) goto loc_880EE308;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021598
	ctx.lr = 0x880EE308;
	sub_88021598(ctx, base);
loc_880EE308:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880EE320:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FB370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880FB378;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880FB38C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021898
	ctx.lr = 0x880FB3A0;
	sub_88021898(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,128
	ctx.r9.s64 = 128;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r7,28
	ctx.r7.s64 = 1835008;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// addi r10,r31,5720
	ctx.r10.s64 = ctx.r31.s64 + 5720;
	// stw r11,5740(r31)
	REX_STORE_U32(ctx.r31.u32 + 5740, ctx.r11.u32);
	// addi r24,r5,-21088
	ctx.r24.s64 = ctx.r5.s64 + -21088;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r25,16384
	ctx.r25.s64 = 16384;
	// stw r4,5748(r31)
	REX_STORE_U32(ctx.r31.u32 + 5748, ctx.r4.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r23,0(r29)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r10,44
	ctx.r29.s64 = ctx.r10.s64 + 44;
	// stw r23,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r23.u32);
	// stw r11,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// stw r11,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// stw r9,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r9.u32);
	// lwz r26,5764(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 5764);
	// lwz r9,5768(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 5768);
	// stw r6,5720(r31)
	REX_STORE_U32(ctx.r31.u32 + 5720, ctx.r6.u32);
	// stw r25,5756(r31)
	REX_STORE_U32(ctx.r31.u32 + 5756, ctx.r25.u32);
	// sth r6,5772(r31)
	REX_STORE_U16(ctx.r31.u32 + 5772, ctx.r6.u16);
	// sth r11,5776(r31)
	REX_STORE_U16(ctx.r31.u32 + 5776, ctx.r11.u16);
	// stw r9,5788(r31)
	REX_STORE_U32(ctx.r31.u32 + 5788, ctx.r9.u32);
	// stw r26,5784(r31)
	REX_STORE_U32(ctx.r31.u32 + 5784, ctx.r26.u32);
	// stw r7,5792(r31)
	REX_STORE_U32(ctx.r31.u32 + 5792, ctx.r7.u32);
	// stw r7,5796(r31)
	REX_STORE_U32(ctx.r31.u32 + 5796, ctx.r7.u32);
	// stw r8,5800(r31)
	REX_STORE_U32(ctx.r31.u32 + 5800, ctx.r8.u32);
	// stw r8,5804(r31)
	REX_STORE_U32(ctx.r31.u32 + 5804, ctx.r8.u32);
	// stw r24,5812(r31)
	REX_STORE_U32(ctx.r31.u32 + 5812, ctx.r24.u32);
	// stw r10,5816(r31)
	REX_STORE_U32(ctx.r31.u32 + 5816, ctx.r10.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880FB450;
	sub_8813FA58(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880FB460;
	sub_88022730(ctx, base);
	// stw r3,5724(r31)
	REX_STORE_U32(ctx.r31.u32 + 5724, ctx.r3.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r7,-30704
	ctx.r7.s64 = -2012217344;
	// stw r8,5732(r31)
	REX_STORE_U32(ctx.r31.u32 + 5732, ctx.r8.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r7,-20120
	ctx.r5.s64 = ctx.r7.s64 + -20120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021848
	ctx.lr = 0x880FB480;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880FC610;
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
	// ble cr6,0x880fc638
	if (!ctx.cr6.gt) goto loc_880FC638;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880FC638;
	sub_880236A8(ctx, base);
loc_880FC638:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fc6a4
	if (!ctx.cr6.eq) goto loc_880FC6A4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt 0x880fc6a4
	if (ctx.cr0.gt) goto loc_880FC6A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880FC664;
	sub_88022A88(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,4320
	ctx.r5.s64 = 4320;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88024de8
	ctx.lr = 0x880FC678;
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
loc_880FC6A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FCD30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880FCD38;
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
	// ble cr6,0x880fcd60
	if (!ctx.cr6.gt) goto loc_880FCD60;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880FCD60;
	sub_880236A8(ctx, base);
loc_880FCD60:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fcdd8
	if (!ctx.cr6.eq) goto loc_880FCDD8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt 0x880fcdd8
	if (ctx.cr0.gt) goto loc_880FCDD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880FCD8C;
	sub_88022A88(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,750
	ctx.r5.s64 = 750;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88024de8
	ctx.lr = 0x880FCDA0;
	sub_88024DE8(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x88012f38
	ctx.lr = 0x880FCDAC;
	sub_88012F38(ctx, base);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,32896
	ctx.r9.u64 = ctx.r10.u64 | 32896;
	// li r8,1
	ctx.r8.s64 = 1;
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
loc_880FCDD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FD5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880FD5F0;
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
	ctx.lr = 0x880FD600;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88021be0
	ctx.lr = 0x880FD614;
	sub_88021BE0(ctx, base);
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-8392
	ctx.r4.s64 = ctx.r11.s64 + -8392;
	// bl 0x88021d68
	ctx.lr = 0x880FD62C;
	sub_88021D68(ctx, base);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,11752
	ctx.r4.s64 = ctx.r10.s64 + 11752;
	// bl 0x88021780
	ctx.lr = 0x880FD640;
	sub_88021780(ctx, base);
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r8,32896
	ctx.r11.u64 = ctx.r8.u64 | 32896;
	// addi r6,r9,28840
	ctx.r6.s64 = ctx.r9.s64 + 28840;
	// stw r7,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r6,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,384(r29)
	REX_STORE_U32(ctx.r29.u32 + 384, ctx.r11.u32);
	// addi r5,r5,-10976
	ctx.r5.s64 = ctx.r5.s64 + -10976;
	// stw r11,536(r29)
	REX_STORE_U32(ctx.r29.u32 + 536, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,688(r29)
	REX_STORE_U32(ctx.r29.u32 + 688, ctx.r11.u32);
	// stw r11,840(r29)
	REX_STORE_U32(ctx.r29.u32 + 840, ctx.r11.u32);
	// stw r11,992(r29)
	REX_STORE_U32(ctx.r29.u32 + 992, ctx.r11.u32);
	// stw r11,1144(r29)
	REX_STORE_U32(ctx.r29.u32 + 1144, ctx.r11.u32);
	// stw r11,1296(r29)
	REX_STORE_U32(ctx.r29.u32 + 1296, ctx.r11.u32);
	// stw r11,1448(r29)
	REX_STORE_U32(ctx.r29.u32 + 1448, ctx.r11.u32);
	// stw r11,1600(r29)
	REX_STORE_U32(ctx.r29.u32 + 1600, ctx.r11.u32);
	// stw r11,1912(r29)
	REX_STORE_U32(ctx.r29.u32 + 1912, ctx.r11.u32);
	// stw r11,2224(r29)
	REX_STORE_U32(ctx.r29.u32 + 2224, ctx.r11.u32);
	// stw r11,2536(r29)
	REX_STORE_U32(ctx.r29.u32 + 2536, ctx.r11.u32);
	// stw r11,2848(r29)
	REX_STORE_U32(ctx.r29.u32 + 2848, ctx.r11.u32);
	// stw r11,3000(r29)
	REX_STORE_U32(ctx.r29.u32 + 3000, ctx.r11.u32);
	// stw r11,3152(r29)
	REX_STORE_U32(ctx.r29.u32 + 3152, ctx.r11.u32);
	// stw r11,3304(r29)
	REX_STORE_U32(ctx.r29.u32 + 3304, ctx.r11.u32);
	// stw r11,3476(r29)
	REX_STORE_U32(ctx.r29.u32 + 3476, ctx.r11.u32);
	// stw r11,3648(r29)
	REX_STORE_U32(ctx.r29.u32 + 3648, ctx.r11.u32);
	// stw r11,3820(r29)
	REX_STORE_U32(ctx.r29.u32 + 3820, ctx.r11.u32);
	// stw r11,3992(r29)
	REX_STORE_U32(ctx.r29.u32 + 3992, ctx.r11.u32);
	// stw r11,4164(r29)
	REX_STORE_U32(ctx.r29.u32 + 4164, ctx.r11.u32);
	// stw r11,4336(r29)
	REX_STORE_U32(ctx.r29.u32 + 4336, ctx.r11.u32);
	// stw r11,4508(r29)
	REX_STORE_U32(ctx.r29.u32 + 4508, ctx.r11.u32);
	// stw r11,4680(r29)
	REX_STORE_U32(ctx.r29.u32 + 4680, ctx.r11.u32);
	// stw r11,4844(r29)
	REX_STORE_U32(ctx.r29.u32 + 4844, ctx.r11.u32);
	// stw r11,4988(r29)
	REX_STORE_U32(ctx.r29.u32 + 4988, ctx.r11.u32);
	// stw r11,5132(r29)
	REX_STORE_U32(ctx.r29.u32 + 5132, ctx.r11.u32);
	// stw r11,5276(r29)
	REX_STORE_U32(ctx.r29.u32 + 5276, ctx.r11.u32);
	// stw r11,5420(r29)
	REX_STORE_U32(ctx.r29.u32 + 5420, ctx.r11.u32);
	// stw r11,5564(r29)
	REX_STORE_U32(ctx.r29.u32 + 5564, ctx.r11.u32);
	// stw r11,5708(r29)
	REX_STORE_U32(ctx.r29.u32 + 5708, ctx.r11.u32);
	// stw r11,5852(r29)
	REX_STORE_U32(ctx.r29.u32 + 5852, ctx.r11.u32);
	// stw r11,5996(r29)
	REX_STORE_U32(ctx.r29.u32 + 5996, ctx.r11.u32);
	// stw r11,6140(r29)
	REX_STORE_U32(ctx.r29.u32 + 6140, ctx.r11.u32);
	// stw r11,6284(r29)
	REX_STORE_U32(ctx.r29.u32 + 6284, ctx.r11.u32);
	// stw r11,6504(r29)
	REX_STORE_U32(ctx.r29.u32 + 6504, ctx.r11.u32);
	// stw r11,6724(r29)
	REX_STORE_U32(ctx.r29.u32 + 6724, ctx.r11.u32);
	// stw r11,6868(r29)
	REX_STORE_U32(ctx.r29.u32 + 6868, ctx.r11.u32);
	// bl 0x88021b90
	ctx.lr = 0x880FD708;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FEF50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880FEF58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880FEF68;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880FEF70;
	sub_88023F40(ctx, base);
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880FEF80;
	sub_8813FA58(ctx, base);
	// stw r29,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x88024028
	ctx.lr = 0x880FEF90;
	sub_88024028(ctx, base);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r28,152(r28)
	REX_STORE_U32(ctx.r28.u32 + 152, ctx.r28.u32);
	// addi r9,r10,-6048
	ctx.r9.s64 = ctx.r10.s64 + -6048;
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r11,128(r28)
	REX_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,132(r28)
	REX_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,136(r28)
	REX_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// sth r31,108(r28)
	REX_STORE_U16(ctx.r28.u32 + 108, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r30,112(r28)
	REX_STORE_U16(ctx.r28.u32 + 112, ctx.r30.u16);
	// stw r11,140(r28)
	REX_STORE_U32(ctx.r28.u32 + 140, ctx.r11.u32);
	// stw r9,148(r28)
	REX_STORE_U32(ctx.r28.u32 + 148, ctx.r9.u32);
	// stw r8,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r8.u32);
	// stw r7,120(r28)
	REX_STORE_U32(ctx.r28.u32 + 120, ctx.r7.u32);
	// stw r6,124(r28)
	REX_STORE_U32(ctx.r28.u32 + 124, ctx.r6.u32);
	// bl 0x88023c50
	ctx.lr = 0x880FEFE4;
	sub_88023C50(ctx, base);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r31,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r31,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r31.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,52(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// stw r8,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// stw r30,72(r28)
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r30.u32);
	// stw r30,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r30.u32);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r4,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r4.u32);
	// stw r11,60(r28)
	REX_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// stw r31,64(r28)
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r31.u32);
	// bl 0x880fe8f0
	ctx.lr = 0x880FF030;
	sub_880FE8F0(ctx, base);
	// lis r7,-30704
	ctx.r7.s64 = -2012217344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,-5768
	ctx.r4.s64 = ctx.r7.s64 + -5768;
	// bl 0x88023e90
	ctx.lr = 0x880FF040;
	sub_88023E90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FFF00) {
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
	ctx.lr = 0x880FFF18;
	sub_88023F40(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r9,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r8,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r8.u32);
	// lwz r7,208(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880fffd4
	if (ctx.cr6.eq) goto loc_880FFFD4;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lis r30,40
	ctx.r30.s64 = 2621440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fff78
	if (!ctx.cr6.eq) goto loc_880FFF78;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r9,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// bl 0x88022110
	ctx.lr = 0x880FFF78;
	sub_88022110(ctx, base);
loc_880FFF78:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stw r11,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r10,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// bl 0x88022110
	ctx.lr = 0x880FFF94;
	sub_88022110(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r9,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// stw r7,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r7.u32);
	// bl 0x88022110
	ctx.lr = 0x880FFFB4;
	sub_88022110(ctx, base);
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// addis r11,r5,80
	ctx.r11.s64 = ctx.r5.s64 + 5242880;
	// stw r6,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r6.u32);
	// stw r11,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// bl 0x88022110
	ctx.lr = 0x880FFFD4;
	sub_88022110(ctx, base);
loc_880FFFD4:
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

DEFINE_REX_FUNC(sub_88100448) {
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
	ctx.lr = 0x88100468;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x88100478;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,976
	ctx.r5.s64 = ctx.r9.s64 + 976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8810049C;
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

DEFINE_REX_FUNC(sub_88100688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88100690;
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
	ctx.lr = 0x881006A0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021898
	ctx.lr = 0x881006B4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88100724
	if (!ctx.cr0.lt) goto loc_88100724;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blt cr6,0x881006e8
	if (ctx.cr6.lt) goto loc_881006E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_881006E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// addi r9,r10,30008
	ctx.r9.s64 = ctx.r10.s64 + 30008;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,124(r29)
	REX_STORE_U32(ctx.r29.u32 + 124, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88100724
	if (!ctx.cr6.eq) goto loc_88100724;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021928
	ctx.lr = 0x88100718;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88100724:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88100B70) {
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
	ctx.lr = 0x88100B90;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x88100BA0;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,2800
	ctx.r5.s64 = ctx.r9.s64 + 2800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x88100BC4;
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

DEFINE_REX_FUNC(sub_88100E30) {
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
	ctx.lr = 0x88100E50;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x88100E60;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,3280
	ctx.r5.s64 = ctx.r9.s64 + 3280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x88100E84;
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

DEFINE_REX_FUNC(sub_88101498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881014A0;
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
	ctx.lr = 0x881014B0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x881014C4;
	sub_88021508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r5,120
	ctx.r5.s64 = 7864320;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x88101530
	if (ctx.cr6.gt) goto loc_88101530;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_88101530:
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,4928
	ctx.r5.s64 = ctx.r11.s64 + 4928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x88101544;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88101C38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88101C40;
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
	ctx.lr = 0x88101C54;
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
	ctx.lr = 0x88101C68;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88101d34
	if (ctx.cr6.eq) goto loc_88101D34;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88101d98
	if (!ctx.cr0.lt) goto loc_88101D98;
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
	// li r3,5
	ctx.r3.s64 = 5;
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
	ctx.lr = 0x88101CBC;
	sub_88013940(ctx, base);
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r5,r27,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r27.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// bl 0x88013940
	ctx.lr = 0x88101CE0;
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
	ctx.lr = 0x88101CF4;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8801a808
	ctx.lr = 0x88101D08;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x8801a808
	ctx.lr = 0x88101D20;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88101D34:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88101d98
	if (!ctx.cr0.lt) goto loc_88101D98;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,90
	ctx.r10.s64 = 90;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r8,-8
	ctx.r5.s64 = ctx.r8.s64 + -524288;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x880244d0
	ctx.lr = 0x88101D70;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88101d7c
	if (ctx.cr6.lt) goto loc_88101D7C;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88101D7C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
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
loc_88101D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88102900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88102908;
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
	ctx.lr = 0x8810291C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x88021508
	ctx.lr = 0x8810292C;
	sub_88021508(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// addi r5,r5,10032
	ctx.r5.s64 = ctx.r5.s64 + 10032;
	// stw r9,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r10,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r11,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x8810298C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88103078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88103080;
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
	ctx.lr = 0x88103094;
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
	ctx.lr = 0x881030A8;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881031a8
	if (ctx.cr6.eq) goto loc_881031A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8810321c
	if (!ctx.cr0.lt) goto loc_8810321C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r10,r7,-54
	ctx.r10.s64 = ctx.r7.s64 + -3538944;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// subf r29,r11,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq cr6,0x881030fc
	if (ctx.cr6.eq) goto loc_881030FC;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_881030FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x88103120;
	sub_88013CE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88103130;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8810314c
	if (ctx.cr6.lt) goto loc_8810314C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x88103144;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8810314C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8810321c
	if (ctx.cr0.gt) goto loc_8810321C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x8810321c
	if (ctx.cr0.gt) goto loc_8810321C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x8810319C;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_881031A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8810321c
	if (!ctx.cr0.lt) goto loc_8810321C;
	// li r9,-8
	ctx.r9.s64 = -8;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r7,r10,10
	ctx.r7.s64 = ctx.r10.s64 + 10;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addis r5,r3,-54
	ctx.r5.s64 = ctx.r3.s64 + -3538944;
	// beq cr6,0x88103200
	if (ctx.cr6.eq) goto loc_88103200;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_88103200:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88103208;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88103214
	if (ctx.cr6.lt) goto loc_88103214;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88103214:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244a8
	ctx.lr = 0x8810321C;
	sub_880244A8(ctx, base);
loc_8810321C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88104950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88104958;
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
	ctx.lr = 0x88104968;
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
	ctx.lr = 0x8810497C;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104a44
	if (ctx.cr6.eq) goto loc_88104A44;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88104a38
	if (!ctx.cr0.lt) goto loc_88104A38;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r25,114
	ctx.r25.s64 = 7471104;
	// lwz r29,28(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,16
	ctx.r30.s64 = 16;
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
loc_881049C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x88013940
	ctx.lr = 0x881049DC;
	sub_88013940(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x881049c0
	if (!ctx.cr0.eq) goto loc_881049C0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,16
	ctx.r30.s64 = 16;
	// lwz r29,24(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// subf r27,r25,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r25.u64;
loc_88104A04:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x88013940
	ctx.lr = 0x88104A20;
	sub_88013940(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x88104a04
	if (!ctx.cr0.eq) goto loc_88104A04;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_88104A38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88104A3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88104A44:
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
	// bge 0x88104a3c
	if (!ctx.cr0.lt) goto loc_88104A3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-38
	ctx.r10.s64 = -38;
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

DEFINE_REX_FUNC(sub_881057E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x881057E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881057FC;
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
	ctx.lr = 0x88105810;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881058f0
	if (ctx.cr6.eq) goto loc_881058F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881059a0
	if (!ctx.cr0.lt) goto loc_881059A0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r27,20
	ctx.r27.s64 = 1310720;
	// lis r28,60
	ctx.r28.s64 = 3932160;
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,-6
	ctx.r6.s64 = -6;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88014188
	ctx.lr = 0x8810586C;
	sub_88014188(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r6,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// li r6,-6
	ctx.r6.s64 = -6;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// li r3,15
	ctx.r3.s64 = 15;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88014188
	ctx.lr = 0x881058A8;
	sub_88014188(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bgt 0x881059a0
	if (ctx.cr0.gt) goto loc_881059A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bgt 0x881059a0
	if (ctx.cr0.gt) goto loc_881059A0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x881058E4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_881058F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x881059a0
	if (!ctx.cr0.lt) goto loc_881059A0;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r28,60
	ctx.r28.s64 = 3932160;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r27,20
	ctx.r27.s64 = 1310720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r8,48(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x88105938;
	sub_880244D0(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r6,52(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x88105970;
	sub_880244D0(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-6
	ctx.r3.s64 = -6;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x881059A0;
	sub_880244A8(ctx, base);
loc_881059A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881070D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x881070E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881070F4;
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
	ctx.lr = 0x88107108;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810725c
	if (ctx.cr6.eq) goto loc_8810725C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88107328
	if (!ctx.cr0.lt) goto loc_88107328;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,44(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r7,r10,30168
	ctx.r7.s64 = ctx.r10.s64 + 30168;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,48(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// bge cr6,0x88107164
	if (!ctx.cr6.lt) goto loc_88107164;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_88107164:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_88107170:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x88013940
	ctx.lr = 0x88107194;
	sub_88013940(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// bl 0x88013940
	ctx.lr = 0x881071BC;
	sub_88013940(ctx, base);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 18, ctx.xer);
	// blt cr6,0x88107170
	if (ctx.cr6.lt) goto loc_88107170;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// bgt 0x88107328
	if (ctx.cr0.gt) goto loc_88107328;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x88107328
	if (!ctx.cr6.gt) goto loc_88107328;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bgt 0x88107328
	if (ctx.cr0.gt) goto loc_88107328;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x88107250;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_8810725C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88107328
	if (!ctx.cr0.lt) goto loc_88107328;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r10,30168
	ctx.r7.s64 = ctx.r10.s64 + 30168;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880244d0
	ctx.lr = 0x881072A4;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881072b0
	if (ctx.cr6.lt) goto loc_881072B0;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_881072B0:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x881072f0
	if (ctx.cr6.eq) goto loc_881072F0;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r11,-140
	ctx.r5.s64 = ctx.r11.s64 + -140;
	// addi r4,r9,-171
	ctx.r4.s64 = ctx.r9.s64 + -171;
	// addi r3,r10,-233
	ctx.r3.s64 = ctx.r10.s64 + -233;
	// b 0x88107308
	goto loc_88107308;
loc_881072F0:
	// li r8,-9
	ctx.r8.s64 = -9;
	// li r7,-11
	ctx.r7.s64 = -11;
	// li r6,-15
	ctx.r6.s64 = -15;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// addi r4,r9,176
	ctx.r4.s64 = ctx.r9.s64 + 176;
	// addi r3,r10,240
	ctx.r3.s64 = ctx.r10.s64 + 240;
loc_88107308:
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x88107328;
	sub_880244A8(ctx, base);
loc_88107328:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810A800) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810A808;
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
	ctx.lr = 0x8810A818;
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
	ctx.lr = 0x8810A82C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8810a890
	if (ctx.cr6.gt) goto loc_8810A890;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810a89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A89C;
	// bdzf 4*cr6+eq,0x8810a8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A8DC;
	// bdzf 4*cr6+eq,0x8810a934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A934;
	// bdzf 4*cr6+eq,0x8810a974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810A974;
	// bne cr6,0x8810a9b4
	if (!ctx.cr6.eq) goto loc_8810A9B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8810a890
	if (!ctx.cr0.lt) goto loc_8810A890;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,864
	ctx.r4.s64 = ctx.r10.s64 + 864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x88021780
	ctx.lr = 0x8810A884;
	sub_88021780(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8810A890:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810A89C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021a28
	ctx.lr = 0x8810A8A8;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a890
	if (!ctx.cr6.eq) goto loc_8810A890;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6464
	ctx.r4.s64 = ctx.r11.s64 + 6464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8810A8C4;
	sub_880213F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810A8DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x8810A8E8;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a890
	if (!ctx.cr6.eq) goto loc_8810A890;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810A904;
	sub_88021780(ctx, base);
	// stw r3,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,1096
	ctx.r4.s64 = ctx.r10.s64 + 1096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810A91C;
	sub_88021780(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810A934:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x88021a28
	ctx.lr = 0x8810A940;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a890
	if (!ctx.cr6.eq) goto loc_8810A890;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5272
	ctx.r4.s64 = ctx.r11.s64 + 5272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8810A95C;
	sub_880213F0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810A974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x8810A980;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a890
	if (!ctx.cr6.eq) goto loc_8810A890;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810A99C;
	sub_88021780(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810A9B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x88021a28
	ctx.lr = 0x8810A9C0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a890
	if (!ctx.cr6.eq) goto loc_8810A890;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021cf0
	ctx.lr = 0x8810A9D0;
	sub_88021CF0(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22752
	ctx.r4.s64 = ctx.r11.s64 + -22752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810A9E4;
	sub_88021AD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810BAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810BAA8;
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
	ctx.lr = 0x8810BAB8;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8810BAC8;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8810bb68
	if (ctx.cr6.gt) goto loc_8810BB68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810bb74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810BB74;
	// bdzf 4*cr6+eq,0x8810bc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810BC14;
	// bdzf 4*cr6+eq,0x8810bc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810BC94;
	// bdzf 4*cr6+eq,0x8810bd00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810BD00;
	// bdzf 4*cr6+eq,0x8810bdc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810BDC4;
	// bne cr6,0x8810be20
	if (!ctx.cr6.eq) goto loc_8810BE20;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8810bb68
	if (!ctx.cr0.lt) goto loc_8810BB68;
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
	// addi r4,r8,19064
	ctx.r4.s64 = ctx.r8.s64 + 19064;
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
	ctx.lr = 0x8810BB38;
	sub_880213F0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
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
loc_8810BB58:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r4,-5712
	ctx.r4.s64 = ctx.r4.s64 + -5712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810BB68;
	sub_88021D68(ctx, base);
loc_8810BB68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810BB74:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x8810bb68
	if (!ctx.cr0.lt) goto loc_8810BB68;
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
	ctx.lr = 0x8810BBAC;
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
	ctx.lr = 0x8810BBD4;
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
	ctx.lr = 0x8810BC04;
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
loc_8810BC14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810BC20;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810bb68
	if (!ctx.cr6.eq) goto loc_8810BB68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88021a28
	ctx.lr = 0x8810BC34;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810bb68
	if (!ctx.cr6.eq) goto loc_8810BB68;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x8810bb68
	if (!ctx.cr0.lt) goto loc_8810BB68;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,18024
	ctx.r4.s64 = ctx.r10.s64 + 18024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810BC68;
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
	// b 0x8810bb58
	goto loc_8810BB58;
loc_8810BC94:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8810bb68
	if (!ctx.cr0.lt) goto loc_8810BB68;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,18624
	ctx.r4.s64 = ctx.r10.s64 + 18624;
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
	ctx.lr = 0x8810BCD0;
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
loc_8810BD00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88021698
	ctx.lr = 0x8810BD0C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810bb68
	if (!ctx.cr6.eq) goto loc_8810BB68;
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
	// bgt 0x8810bb68
	if (ctx.cr0.gt) goto loc_8810BB68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021598
	ctx.lr = 0x8810BD38;
	sub_88021598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88021598
	ctx.lr = 0x8810BD44;
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
	ctx.lr = 0x8810BD60;
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
	ctx.lr = 0x8810BD80;
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
	ctx.lr = 0x8810BDB0;
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
loc_8810BDC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021a28
	ctx.lr = 0x8810BDD0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810bb68
	if (!ctx.cr6.eq) goto loc_8810BB68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88021a28
	ctx.lr = 0x8810BDE4;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810bb68
	if (!ctx.cr6.eq) goto loc_8810BB68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x88021598
	ctx.lr = 0x8810BDF8;
	sub_88021598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88021598
	ctx.lr = 0x8810BE04;
	sub_88021598(ctx, base);
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810BE20:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bge 0x8810bb68
	if (!ctx.cr0.lt) goto loc_8810BB68;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14816
	ctx.r4.s64 = ctx.r11.s64 + -14816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810BE44;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8810BE50;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E608) {
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
	ctx.lr = 0x8810E624;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x88021de0
	ctx.lr = 0x8810E634;
	sub_88021DE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r8,226
	ctx.r8.s64 = 226;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r9,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r4,r7,-6896
	ctx.r4.s64 = ctx.r7.s64 + -6896;
	// bl 0x88021e18
	ctx.lr = 0x8810E664;
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

DEFINE_REX_FUNC(sub_8810EAA8) {
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
	// bl 0x88023f40
	ctx.lr = 0x8810EABC;
	sub_88023F40(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8801a860
	ctx.lr = 0x8810EAD4;
	sub_8801A860(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bl 0x8810e478
	ctx.lr = 0x8810EAFC;
	sub_8810E478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8810EEF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810EEF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8810ef2c
	if (!ctx.cr6.gt) goto loc_8810EF2C;
	// lwz r11,1376(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 1376);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x880236a8
	ctx.lr = 0x8810EF2C;
	sub_880236A8(ctx, base);
loc_8810EF2C:
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810eff8
	if (!ctx.cr6.eq) goto loc_8810EFF8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x8810ed78
	ctx.lr = 0x8810EF54;
	sub_8810ED78(ctx, base);
	// lwz r8,1376(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8810efa4
	if (!ctx.cr6.eq) goto loc_8810EFA4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8810efa4
	if (ctx.cr6.gt) goto loc_8810EFA4;
	// lwz r11,1384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810efa4
	if (!ctx.cr6.eq) goto loc_8810EFA4;
	// li r5,30000
	ctx.r5.s64 = 30000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88024de8
	ctx.lr = 0x8810EF94;
	sub_88024DE8(ctx, base);
	// lwz r11,1392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1392);
	// stw r29,1384(r31)
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1392(r31)
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
loc_8810EFA4:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8810efec
	if (!ctx.cr6.eq) goto loc_8810EFEC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8810efec
	if (ctx.cr6.gt) goto loc_8810EFEC;
	// lwz r11,1388(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8810efec
	if (!ctx.cr6.eq) goto loc_8810EFEC;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,24464
	ctx.r5.u64 = ctx.r5.u64 | 24464;
	// bl 0x88024de8
	ctx.lr = 0x8810EFDC;
	sub_88024DE8(ctx, base);
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// stw r29,1388(r31)
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1396(r31)
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_8810EFEC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8810effc
	if (ctx.cr6.eq) goto loc_8810EFFC;
loc_8810EFF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810EFFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810FDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810FDD8;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021898
	ctx.lr = 0x8810FDF8;
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
	// addi r5,r9,-696
	ctx.r5.s64 = ctx.r9.s64 + -696;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// bl 0x88021848
	ctx.lr = 0x8810FE24;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88110300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88110308;
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
	ctx.lr = 0x8811031C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021898
	ctx.lr = 0x88110330;
	sub_88021898(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r5,r6,408
	ctx.r5.s64 = ctx.r6.s64 + 408;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r7,-30692
	ctx.r7.s64 = -2011430912;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r7,r7,-32384
	ctx.r7.s64 = ctx.r7.s64 + -32384;
	// stw r8,64(r28)
	REX_STORE_U32(ctx.r28.u32 + 64, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// stw r9,68(r28)
	REX_STORE_U32(ctx.r28.u32 + 68, ctx.r9.u32);
	// bl 0x88021848
	ctx.lr = 0x88110390;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111140) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8811116C;
	sub_88021508(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,80
	ctx.r8.s64 = 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,18
	ctx.r3.s64 = 18;
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r5,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r3,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r3.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// addi r5,r7,3520
	ctx.r5.s64 = ctx.r7.s64 + 3520;
	// stw r9,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r8.u32);
	// bl 0x880214b8
	ctx.lr = 0x881111D0;
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

DEFINE_REX_FUNC(sub_881117D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x881117D8;
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
	ctx.lr = 0x881117EC;
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
	ctx.lr = 0x88111800;
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
	// bge 0x88111b94
	if (!ctx.cr0.lt) goto loc_88111B94;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r25,37
	ctx.r25.s64 = 2424832;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,576(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// bne cr6,0x881118d8
	if (!ctx.cr6.eq) goto loc_881118D8;
	// bl 0x880244d0
	ctx.lr = 0x88111844;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lis r26,64
	ctx.r26.s64 = 4194304;
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88111860;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r8,580(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r28,88
	ctx.r28.s64 = 5767168;
	// lwz r9,576(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x88111884;
	sub_880244D0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,576(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r25,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811189C;
	sub_880244D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,576(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r26,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x881118B4;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x881118D0;
	sub_880244D0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x881119cc
	goto loc_881119CC;
loc_881118D8:
	// bl 0x880244d0
	ctx.lr = 0x881118DC;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x881118E8;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r26,64
	ctx.r26.s64 = 4194304;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r9,576(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88111908;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8801a808
	ctx.lr = 0x88111914;
	sub_8801A808(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lis r28,88
	ctx.r28.s64 = 5767168;
	// lwz r6,580(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,576(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811193C;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8801a808
	ctx.lr = 0x88111948;
	sub_8801A808(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x88111964;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8801a808
	ctx.lr = 0x88111970;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r26,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811198C;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8801a808
	ctx.lr = 0x88111998;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r7,580(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r8,576(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x881119B8;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8801a808
	ctx.lr = 0x881119C4;
	sub_8801A808(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
loc_881119CC:
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// lis r6,-30683
	ctx.r6.s64 = -2010841088;
	// stw r11,-11904(r10)
	REX_STORE_U32(ctx.r10.u32 + -11904, ctx.r11.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r5,-30683
	ctx.r5.s64 = -2010841088;
	// lis r4,-30683
	ctx.r4.s64 = -2010841088;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-11912(r7)
	REX_STORE_U32(ctx.r7.u32 + -11912, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,-11916(r6)
	REX_STORE_U32(ctx.r6.u32 + -11916, ctx.r9.u32);
	// stw r11,-11908(r8)
	REX_STORE_U32(ctx.r8.u32 + -11908, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r11,r3,2
	ctx.xer.ca = ctx.r3.u32 <= 2;
	ctx.r11.u64 = static_cast<uint64_t>(2) - ctx.r3.u64;
	// stw r11,-11920(r5)
	REX_STORE_U32(ctx.r5.u32 + -11920, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,-11924(r4)
	REX_STORE_U32(ctx.r4.u32 + -11924, ctx.r11.u32);
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,576(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x88013ce0
	ctx.lr = 0x88111A48;
	sub_88013CE0(ctx, base);
	// lwz r7,576(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,2
	ctx.r8.s64 = 2;
	// add r4,r7,r26
	ctx.r4.u64 = ctx.r7.u64 + ctx.r26.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88013ce0
	ctx.lr = 0x88111A74;
	sub_88013CE0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88013ce0
	ctx.lr = 0x88111AA4;
	sub_88013CE0(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r4,r25,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r25.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88013ce0
	ctx.lr = 0x88111ACC;
	sub_88013CE0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88013ce0
	ctx.lr = 0x88111AF8;
	sub_88013CE0(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,580(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lwz r4,576(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x88111B28;
	sub_88013CE0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x88111b94
	if (!ctx.cr0.lt) goto loc_88111B94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244a8
	ctx.lr = 0x88111B40;
	sub_880244A8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// addic. r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bge 0x88111b94
	if (!ctx.cr0.lt) goto loc_88111B94;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021598
	ctx.lr = 0x88111B94;
	sub_88021598(ctx, base);
loc_88111B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88115938) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88115954;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x88115964;
	sub_88021DE0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881159a0
	if (ctx.cr6.eq) goto loc_881159A0;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8801a808
	ctx.lr = 0x88115984;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x881159a0
	if (!ctx.cr6.eq) goto loc_881159A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_881159A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881159c0
	if (!ctx.cr6.lt) goto loc_881159C0;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x881159B8;
	sub_8801A448(ctx, base);
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// b 0x88115a14
	goto loc_88115A14;
loc_881159C0:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881159dc
	if (!ctx.cr6.gt) goto loc_881159DC;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x881159D4;
	sub_8801A448(ctx, base);
	// addi r11,r3,376
	ctx.r11.s64 = ctx.r3.s64 + 376;
	// b 0x88115a14
	goto loc_88115A14;
loc_881159DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881159fc
	if (!ctx.cr6.gt) goto loc_881159FC;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x881159F4;
	sub_8801A448(ctx, base);
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// b 0x88115a14
	goto loc_88115A14;
loc_881159FC:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88115a20
	if (!ctx.cr6.lt) goto loc_88115A20;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88115A10;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
loc_88115A14:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_88115A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881152a0
	ctx.lr = 0x88115A28;
	sub_881152A0(ctx, base);
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

DEFINE_REX_FUNC(sub_88116B10) {
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
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88116B30;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88116B38;
	sub_88023F40(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88116B48;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88116B50;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88116B54;
	sub_88068E60(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,212
	ctx.r4.s64 = 212;
	// bl 0x88024028
	ctx.lr = 0x88116B68;
	sub_88024028(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x88116B78;
	sub_880240B8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,384
	ctx.r11.s64 = 384;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lis r8,120
	ctx.r8.s64 = 7864320;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt cr6,0x88116bbc
	if (ctx.cr6.gt) goto loc_88116BBC;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_88116BBC:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x88023e90
	ctx.lr = 0x88116BCC;
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

DEFINE_REX_FUNC(sub_88117490) {
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
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x881174B0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x881174B8;
	sub_88023F40(ctx, base);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x881174C8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x881174D0;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x881174D4;
	sub_88068E60(ctx, base);
	// stw r3,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x881174E8;
	sub_88024028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x881174F8;
	sub_880240B8(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r7,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x88117528;
	sub_8801A448(ctx, base);
	// stw r3,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x88117534;
	sub_88023C50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// addi r4,r6,29080
	ctx.r4.s64 = ctx.r6.s64 + 29080;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x8811755C;
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

DEFINE_REX_FUNC(sub_88117DF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88117f38
	if (!ctx.cr6.eq) goto loc_88117F38;
	// lwz r10,520(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88117eb0
	if (!ctx.cr6.eq) goto loc_88117EB0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88117eb0
	if (!ctx.cr6.eq) goto loc_88117EB0;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bge 0x88117eb0
	if (!ctx.cr0.lt) goto loc_88117EB0;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x88117E58;
	sub_88022BE0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88117E68;
	sub_8813FA58(ctx, base);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88022730
	ctx.lr = 0x88117E7C;
	sub_88022730(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88117E84;
	sub_88022980(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x88021618
	ctx.lr = 0x88117E9C;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x88117EA4;
	sub_88021CF0(ctx, base);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// addi r4,r9,24320
	ctx.r4.s64 = ctx.r9.s64 + 24320;
	// b 0x88117f2c
	goto loc_88117F2C;
loc_88117EB0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88117f38
	if (!ctx.cr6.eq) goto loc_88117F38;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88117f38
	if (!ctx.cr6.eq) goto loc_88117F38;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x88117f38
	if (!ctx.cr0.lt) goto loc_88117F38;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x88117EE4;
	sub_88022BE0(ctx, base);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-11968(r10)
	REX_STORE_U32(ctx.r10.u32 + -11968, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x88117f08
	if (ctx.cr6.lt) goto loc_88117F08;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x880247e8
	ctx.lr = 0x88117F04;
	sub_880247E8(ctx, base);
	// bl 0x88069600
	ctx.lr = 0x88117F08;
	sub_88069600(ctx, base);
loc_88117F08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x88021618
	ctx.lr = 0x88117F1C;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x88117F24;
	sub_88021CF0(ctx, base);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r4,r10,26096
	ctx.r4.s64 = ctx.r10.s64 + 26096;
loc_88117F2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021ad0
	ctx.lr = 0x88117F38;
	sub_88021AD0(ctx, base);
loc_88117F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_88118BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118BB0;
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
	ctx.lr = 0x88118BC0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021898
	ctx.lr = 0x88118BD4;
	sub_88021898(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// bge 0x88118c3c
	if (!ctx.cr0.lt) goto loc_88118C3C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgt 0x88118c3c
	if (ctx.cr0.gt) goto loc_88118C3C;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021928
	ctx.lr = 0x88118C30;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88118C3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119130) {
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
	ctx.lr = 0x88119150;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x88119160;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-28504
	ctx.r5.s64 = ctx.r9.s64 + -28504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x88119184;
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

DEFINE_REX_FUNC(sub_88119550) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88119558;
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
	ctx.lr = 0x88119568;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x8811957C;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,396(r29)
	REX_STORE_U32(ctx.r29.u32 + 396, ctx.r11.u32);
	// addi r5,r9,-27424
	ctx.r5.s64 = ctx.r9.s64 + -27424;
	// stw r11,400(r29)
	REX_STORE_U32(ctx.r29.u32 + 400, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x881195A8;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119D60) {
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
	ctx.lr = 0x88119D80;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x88119D90;
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
	// addi r5,r5,-25672
	ctx.r5.s64 = ctx.r5.s64 + -25672;
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// bl 0x880214b8
	ctx.lr = 0x88119DDC;
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

DEFINE_REX_FUNC(sub_8811A7F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811A800;
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
	ctx.lr = 0x8811A814;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x88021508
	ctx.lr = 0x8811A824;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// addi r5,r5,-22976
	ctx.r5.s64 = ctx.r5.s64 + -22976;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r6,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811A87C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811AF20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8811AF28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811AF3C;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021508
	ctx.lr = 0x8811AF50;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b08c
	if (ctx.cr6.eq) goto loc_8811B08C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811b0e8
	if (!ctx.cr0.lt) goto loc_8811B0E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8801a808
	ctx.lr = 0x8811AF88;
	sub_8801A808(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addi r27,r11,-23808
	ctx.r27.s64 = ctx.r11.s64 + -23808;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq cr6,0x8811aff8
	if (ctx.cr6.eq) goto loc_8811AFF8;
loc_8811AFB0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// li r3,34
	ctx.r3.s64 = 34;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88013940
	ctx.lr = 0x8811AFE0;
	sub_88013940(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8811afb0
	if (ctx.cr6.lt) goto loc_8811AFB0;
	// b 0x8811b03c
	goto loc_8811B03C;
loc_8811AFF8:
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,34
	ctx.r3.s64 = 34;
	// subf r7,r28,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r28.u64;
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r4,72(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r4,r9,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r9.u64;
	// bl 0x88013940
	ctx.lr = 0x8811B028;
	sub_88013940(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r8,r27,32
	ctx.r8.s64 = ctx.r27.s64 + 32;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8811aff8
	if (ctx.cr6.lt) goto loc_8811AFF8;
loc_8811B03C:
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
	// bgt 0x8811b0e8
	if (ctx.cr0.gt) goto loc_8811B0E8;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bgt 0x8811b0e8
	if (ctx.cr0.gt) goto loc_8811B0E8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x8811B080;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8811B08C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811b0e8
	if (!ctx.cr0.lt) goto loc_8811B0E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r4,72(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r5,76(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x8811B0BC;
	sub_880244D0(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// li r9,256
	ctx.r9.s64 = 256;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// rlwinm r11,r4,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_8811B0E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811DBD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8811DBE0;
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
	ctx.lr = 0x8811DBF4;
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
	ctx.lr = 0x8811DC08;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811de48
	if (ctx.cr6.eq) goto loc_8811DE48;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811de90
	if (!ctx.cr0.lt) goto loc_8811DE90;
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,56(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,2
	ctx.r3.s64 = 2;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r6,r6,-17
	ctx.r6.s64 = ctx.r6.s64 + -17;
	// lwz r29,72(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r30,76(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8811DC6C;
	sub_88013CE0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,-17
	ctx.r6.s64 = ctx.r11.s64 + -17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bl 0x88013ce0
	ctx.lr = 0x8811DCA0;
	sub_88013CE0(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r7,-18
	ctx.r6.s64 = ctx.r7.s64 + -18;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// bl 0x88013ce0
	ctx.lr = 0x8811DCD4;
	sub_88013CE0(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r7,-18
	ctx.r6.s64 = ctx.r7.s64 + -18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x88013ce0
	ctx.lr = 0x8811DD08;
	sub_88013CE0(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r11,-19
	ctx.r6.s64 = ctx.r11.s64 + -19;
	// bl 0x88013ce0
	ctx.lr = 0x8811DD38;
	sub_88013CE0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,-19
	ctx.r6.s64 = ctx.r11.s64 + -19;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// bl 0x88013ce0
	ctx.lr = 0x8811DD68;
	sub_88013CE0(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bl 0x88013940
	ctx.lr = 0x8811DD94;
	sub_88013940(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x88013940
	ctx.lr = 0x8811DDC0;
	sub_88013940(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8811de90
	if (ctx.cr0.gt) goto loc_8811DE90;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// bgt 0x8811de90
	if (ctx.cr0.gt) goto loc_8811DE90;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bgt 0x8811de90
	if (ctx.cr0.gt) goto loc_8811DE90;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x8811DE3C;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8811DE48:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811de90
	if (!ctx.cr0.lt) goto loc_8811DE90;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x880244d0
	ctx.lr = 0x8811DE80;
	sub_880244D0(ctx, base);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r11,-11904(r8)
	REX_STORE_U32(ctx.r8.u32 + -11904, ctx.r11.u32);
loc_8811DE90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881201C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x881201C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881201DC;
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
	ctx.lr = 0x881201F0;
	sub_88021508(ctx, base);
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f0,19144(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19144);
	// stfd f0,136(r9)
	REX_STORE_U64(ctx.r9.u32 + 136, ctx.f0.u64);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881204b4
	if (ctx.cr6.eq) goto loc_881204B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881204f0
	if (!ctx.cr0.lt) goto loc_881204F0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// bne cr6,0x88120338
	if (!ctx.cr6.eq) goto loc_88120338;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r29,r11,-23512
	ctx.r29.s64 = ctx.r11.s64 + -23512;
	// lwz r11,-23512(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23512);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r26,r10,r8
	ctx.r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88120270;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a808
	ctx.lr = 0x8812027C;
	sub_8801A808(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x881202A4;
	sub_88013CE0(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r29,120
	ctx.r10.s64 = ctx.r29.s64 + 120;
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r8,r29,124
	ctx.r8.s64 = ctx.r29.s64 + 124;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x881202E4;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8801a808
	ctx.lr = 0x881202F0;
	sub_8801A808(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x88120318;
	sub_88013CE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x881203f4
	if (ctx.cr6.lt) goto loc_881203F4;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x881203f4
	goto loc_881203F4;
loc_88120338:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-23512
	ctx.r10.s64 = ctx.r11.s64 + -23512;
	// beq cr6,0x8812035c
	if (ctx.cr6.eq) goto loc_8812035C;
	// lwz r11,-23512(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23512);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x88120364
	goto loc_88120364;
loc_8812035C:
	// lwz r11,120(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r10,124(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
loc_88120364:
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88120378;
	sub_880244D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x881203A4;
	sub_88013CE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,24
	ctx.r8.s64 = 24;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88013ce0
	ctx.lr = 0x881203CC;
	sub_88013CE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bgt cr6,0x881203e8
	if (ctx.cr6.gt) goto loc_881203E8;
	// li r11,-16
	ctx.r11.s64 = -16;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_881203E8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_881203F4:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x88120414;
	sub_880244A8(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x881204f0
	if (ctx.cr6.gt) goto loc_881204F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812048c
	if (!ctx.cr6.eq) goto loc_8812048C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r9,-2160
	ctx.r4.s64 = ctx.r9.s64 + -2160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x88120454;
	sub_880213F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x88120470
	if (ctx.cr6.gt) goto loc_88120470;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_88120470:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8812048c
	if (ctx.cr6.lt) goto loc_8812048C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8812048C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bgt 0x881204f0
	if (ctx.cr0.gt) goto loc_881204F0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x881204A8;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_881204B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x881204f0
	if (!ctx.cr0.lt) goto loc_881204F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-12
	ctx.r10.s64 = -12;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x881204f0
	if (ctx.cr6.eq) goto loc_881204F0;
	// li r11,-24
	ctx.r11.s64 = -24;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_881204F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881266F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881266F8;
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
	ctx.lr = 0x88126708;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88126718;
	sub_88021BE0(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812679c
	if (!ctx.cr6.eq) goto loc_8812679C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x88021698
	ctx.lr = 0x88126738;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881267a4
	if (!ctx.cr6.eq) goto loc_881267A4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881267a4
	if (ctx.cr6.eq) goto loc_881267A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x881267a4
	if (!ctx.cr0.lt) goto loc_881267A4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24568
	ctx.r4.s64 = ctx.r10.s64 + -24568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x880213f0
	ctx.lr = 0x88126788;
	sub_880213F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// b 0x881267a4
	goto loc_881267A4;
loc_8812679C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_881267A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8812684c
	if (ctx.cr6.gt) goto loc_8812684C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88126858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88126858;
	// bdzf 4*cr6+eq,0x881268d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881268D8;
	// bne cr6,0x8812691c
	if (!ctx.cr6.eq) goto loc_8812691C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812684c
	if (!ctx.cr6.eq) goto loc_8812684C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021698
	ctx.lr = 0x881267DC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8812684c
	if (!ctx.cr6.eq) goto loc_8812684C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8812684c
	if (!ctx.cr0.lt) goto loc_8812684C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23968
	ctx.r4.s64 = ctx.r10.s64 + -23968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x8812681C;
	sub_880213F0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bgt 0x8812684c
	if (ctx.cr0.gt) goto loc_8812684C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r29,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_8812684C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88126858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021698
	ctx.lr = 0x88126864;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8812684c
	if (!ctx.cr6.eq) goto loc_8812684C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x8812684c
	if (!ctx.cr0.lt) goto loc_8812684C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-21808
	ctx.r4.s64 = ctx.r9.s64 + -21808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x880213f0
	ctx.lr = 0x881268B0;
	sub_880213F0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r5,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881268D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x88021698
	ctx.lr = 0x881268E4;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8812684c
	if (!ctx.cr6.eq) goto loc_8812684C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bgt 0x8812684c
	if (ctx.cr0.gt) goto loc_8812684C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8812691C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x88021698
	ctx.lr = 0x88126928;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8812684c
	if (!ctx.cr6.eq) goto loc_8812684C;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,28568
	ctx.r4.s64 = ctx.r11.s64 + 28568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88126944;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x88126950;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88128418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88128420;
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
	ctx.lr = 0x88128434;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x88021be0
	ctx.lr = 0x88128444;
	sub_88021BE0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r27,120
	ctx.r27.s64 = 7864320;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lis r4,-30701
	ctx.r4.s64 = -2012020736;
	// stw r7,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r4,-19064
	ctx.r4.s64 = ctx.r4.s64 + -19064;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x88021d68
	ctx.lr = 0x881284AC;
	sub_88021D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880244a8
	ctx.lr = 0x881284B4;
	sub_880244A8(ctx, base);
	// lis r3,-30701
	ctx.r3.s64 = -2012020736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-32392
	ctx.r5.s64 = ctx.r3.s64 + -32392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x881284C8;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88128C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88128C28;
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
	ctx.lr = 0x88128C38;
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
	ctx.lr = 0x88128C4C;
	sub_88021BE0(ctx, base);
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f0,19024(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19024);
	// stfd f0,136(r9)
	REX_STORE_U64(ctx.r9.u32 + 136, ctx.f0.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x88128da0
	if (ctx.cr6.gt) goto loc_88128DA0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88128d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88128D18;
	// bdzf 4*cr6+eq,0x88128dac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88128DAC;
	// bdzf 4*cr6+eq,0x88128e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88128E10;
	// bdzf 4*cr6+eq,0x88128ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88128ED0;
	// bdzf 4*cr6+eq,0x88128f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88128F5C;
	// bne cr6,0x88128ff8
	if (!ctx.cr6.eq) goto loc_88128FF8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r26,416
	ctx.r10.s64 = ctx.r26.s64 + 416;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88128cb4
	if (ctx.cr6.eq) goto loc_88128CB4;
loc_88128CA0:
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
loc_88128CB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
loc_88128CBC:
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
	ctx.lr = 0x88128CDC;
	sub_88021780(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,12(r29)
	ea = 12 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x88128cbc
	if (ctx.cr6.lt) goto loc_88128CBC;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27888
	ctx.r4.s64 = ctx.r11.s64 + -27888;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88128D00;
	sub_88021780(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,380(r26)
	REX_STORE_U32(ctx.r26.u32 + 380, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88128D18:
	// addi r11,r26,416
	ctx.r11.s64 = ctx.r26.s64 + 416;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r29,6
	ctx.r29.s64 = 6;
loc_88128D28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x88128D34;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88128d40
	if (ctx.cr6.eq) goto loc_88128D40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88128D40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x88128d28
	if (!ctx.cr0.eq) goto loc_88128D28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
loc_88128D60:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6176
	ctx.r4.s64 = ctx.r11.s64 + -6176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880213f0
	ctx.lr = 0x88128D7C;
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
	// blt cr6,0x88128d60
	if (ctx.cr6.lt) goto loc_88128D60;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88128DA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88128DAC:
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
	ctx.lr = 0x88128DD8;
	sub_88021D68(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88128ca0
	if (!ctx.cr6.eq) goto loc_88128CA0;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88128DF8;
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
loc_88128E10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,368(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 368);
	// bl 0x88021a28
	ctx.lr = 0x88128E1C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x88128E30;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x88128da0
	if (!ctx.cr0.lt) goto loc_88128DA0;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bgt cr6,0x88128e70
	if (ctx.cr6.gt) goto loc_88128E70;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_88128E70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-5440
	ctx.r4.s64 = ctx.r10.s64 + -5440;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x88128E8C;
	sub_880213F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x88128ea8
	if (!ctx.cr6.eq) goto loc_88128EA8;
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_88128EA8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bgt 0x88128da0
	if (ctx.cr0.gt) goto loc_88128DA0;
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
loc_88128ED0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x88128EDC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88128ca0
	if (!ctx.cr6.eq) goto loc_88128CA0;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_88128EF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880216e8
	ctx.lr = 0x88128F08;
	sub_880216E8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x88128ef8
	if (!ctx.cr0.eq) goto loc_88128EF8;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28128
	ctx.r4.s64 = ctx.r11.s64 + -28128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021780
	ctx.lr = 0x88128F24;
	sub_88021780(ctx, base);
	// stw r3,368(r26)
	REX_STORE_U32(ctx.r26.u32 + 368, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,380(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 380);
	// bl 0x88021928
	ctx.lr = 0x88128F34;
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
	ctx.lr = 0x88128F48;
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
loc_88128F5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,368(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 368);
	// bl 0x88021a28
	ctx.lr = 0x88128F68;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r29,6
	ctx.r29.s64 = 6;
loc_88128F7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x88021698
	ctx.lr = 0x88128F88;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88128f94
	if (ctx.cr6.eq) goto loc_88128F94;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_88128F94:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x88128f7c
	if (!ctx.cr0.eq) goto loc_88128F7C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
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
loc_88128FBC:
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
	ctx.lr = 0x88128FDC;
	sub_88021780(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,12(r31)
	ea = 12 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x88128fbc
	if (ctx.cr6.lt) goto loc_88128FBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88128FF8:
	// addi r11,r26,416
	ctx.r11.s64 = ctx.r26.s64 + 416;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// li r30,6
	ctx.r30.s64 = 6;
loc_88129008:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88021a28
	ctx.lr = 0x88129014;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88129020
	if (ctx.cr6.eq) goto loc_88129020;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_88129020:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x88129008
	if (!ctx.cr0.eq) goto loc_88129008;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88128da0
	if (!ctx.cr6.eq) goto loc_88128DA0;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29848
	ctx.r4.s64 = ctx.r11.s64 + -29848;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88129048;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021c70
	ctx.lr = 0x88129054;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812CB00) {
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
	ctx.lr = 0x8812CB2C;
	sub_88021898(ctx, base);
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
	// addi r5,r9,-13696
	ctx.r5.s64 = ctx.r9.s64 + -13696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8812CB50;
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

DEFINE_REX_FUNC(sub_8812D348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8812D350;
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
	ctx.lr = 0x8812D364;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x88021508
	ctx.lr = 0x8812D374;
	sub_88021508(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r8,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r7.u32);
	// stw r10,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812D3B4;
	sub_8801A448(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// lis r6,-30701
	ctx.r6.s64 = -2012020736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-12064
	ctx.r5.s64 = ctx.r6.s64 + -12064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8812D3CC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812DE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8812DE88;
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
	ctx.lr = 0x8812DE9C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x88021508
	ctx.lr = 0x8812DEAC;
	sub_88021508(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r8,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r6.u32);
	// stw r7,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812DEF0;
	sub_8801A448(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// lis r5,-30701
	ctx.r5.s64 = -2012020736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-9392
	ctx.r5.s64 = ctx.r5.s64 + -9392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8812DF08;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812E608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8812E610;
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
	ctx.lr = 0x8812E624;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8812E634;
	sub_88021508(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,-24
	ctx.r7.s64 = -24;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r5.u32);
	// stw r7,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r7.u32);
	// stw r6,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r6.u32);
	// stw r10,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812E684;
	sub_8801A448(ctx, base);
	// stw r3,52(r28)
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r3.u32);
	// lis r3,-30701
	ctx.r3.s64 = -2012020736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r3,-7272
	ctx.r5.s64 = ctx.r3.s64 + -7272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8812E69C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812F3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8812F3D8;
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
	ctx.lr = 0x8812F3EC;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8812F3FC;
	sub_88021508(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,-32
	ctx.r7.s64 = -32;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r8,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r4,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r4.u32);
	// stw r7,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r7.u32);
	// stw r6,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r6.u32);
	// stw r5,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r5.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812F450;
	sub_8801A448(ctx, base);
	// stw r3,52(r28)
	REX_STORE_U32(ctx.r28.u32 + 52, ctx.r3.u32);
	// lis r3,-30701
	ctx.r3.s64 = -2012020736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r3,-3832
	ctx.r5.s64 = ctx.r3.s64 + -3832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8812F468;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812FB60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8812FB68;
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
	ctx.lr = 0x8812FB78;
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
	ctx.lr = 0x8812FB8C;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812fc84
	if (ctx.cr6.eq) goto loc_8812FC84;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8812fc78
	if (!ctx.cr0.lt) goto loc_8812FC78;
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
	ctx.lr = 0x8812FBC8;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// srawi r7,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 11;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812fbe0
	if (ctx.cr6.eq) goto loc_8812FBE0;
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
loc_8812FBE0:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r8,-14688
	ctx.r11.s64 = ctx.r8.s64 + -14688;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8812fc48
	if (ctx.cr6.eq) goto loc_8812FC48;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8812fc50
	goto loc_8812FC50;
loc_8812FC48:
	// li r9,64
	ctx.r9.s64 = 64;
	// li r3,29
	ctx.r3.s64 = 29;
loc_8812FC50:
	// bl 0x88013ce0
	ctx.lr = 0x8812FC54;
	sub_88013CE0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_8812FC78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8812FC7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8812FC84:
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
	// bge 0x8812fc7c
	if (!ctx.cr0.lt) goto loc_8812FC7C;
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

DEFINE_REX_FUNC(sub_88131048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88131050;
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
	ctx.lr = 0x88131064;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021be0
	ctx.lr = 0x88131078;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x8813114c
	if (ctx.cr6.gt) goto loc_8813114C;
	// beq cr6,0x88131108
	if (ctx.cr6.eq) goto loc_88131108;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881310d0
	if (ctx.cr6.eq) goto loc_881310D0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x88131250
	if (!ctx.cr6.eq) goto loc_88131250;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bge 0x88131250
	if (!ctx.cr0.lt) goto loc_88131250;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8809cb78
	ctx.lr = 0x881310B4;
	sub_8809CB78(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881310D0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge 0x88131250
	if (!ctx.cr0.lt) goto loc_88131250;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-11972(r10)
	REX_STORE_U32(ctx.r10.u32 + -11972, ctx.r11.u32);
	// stw r9,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r8,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88131108:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge 0x88131250
	if (!ctx.cr0.lt) goto loc_88131250;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13216
	ctx.r4.s64 = ctx.r11.s64 + -13216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021780
	ctx.lr = 0x8813112C;
	sub_88021780(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// stw r10,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8813114C:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x88131250
	if (!ctx.cr6.eq) goto loc_88131250;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x88021a28
	ctx.lr = 0x88131160;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88131250
	if (!ctx.cr6.eq) goto loc_88131250;
	// lis r6,56
	ctx.r6.s64 = 3670016;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lis r5,-87
	ctx.r5.s64 = -5701632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880224b0
	ctx.lr = 0x8813117C;
	sub_880224B0(ctx, base);
	// lis r6,56
	ctx.r6.s64 = 3670016;
	// lis r5,88
	ctx.r5.s64 = 5767168;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880224b0
	ctx.lr = 0x88131190;
	sub_880224B0(ctx, base);
	// lis r6,46
	ctx.r6.s64 = 3014656;
	// lis r5,-45
	ctx.r5.s64 = -2949120;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880224b0
	ctx.lr = 0x881311A4;
	sub_880224B0(ctx, base);
	// lis r6,46
	ctx.r6.s64 = 3014656;
	// lis r5,46
	ctx.r5.s64 = 3014656;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880224b0
	ctx.lr = 0x881311B8;
	sub_880224B0(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,21868(r10)
	REX_STORE_U32(ctx.r10.u32 + 21868, ctx.r11.u32);
	// bl 0x88130f48
	ctx.lr = 0x881311CC;
	sub_88130F48(ctx, base);
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024028
	ctx.lr = 0x881311D8;
	sub_88024028(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// stw r11,764(r31)
	REX_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// stw r11,888(r31)
	REX_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// stw r11,1012(r31)
	REX_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r9,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r9.u32);
	// stw r8,1552(r31)
	REX_STORE_U32(ctx.r31.u32 + 1552, ctx.r8.u32);
	// lwz r11,1588(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88131230
	if (ctx.cr6.lt) goto loc_88131230;
	// beq cr6,0x88131224
	if (ctx.cr6.eq) goto loc_88131224;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88131244
	if (!ctx.cr6.lt) goto loc_88131244;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r4,r11,14208
	ctx.r4.s64 = ctx.r11.s64 + 14208;
	// b 0x88131238
	goto loc_88131238;
loc_88131224:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r4,r11,12352
	ctx.r4.s64 = ctx.r11.s64 + 12352;
	// b 0x88131238
	goto loc_88131238;
loc_88131230:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
loc_88131238:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88131244;
	sub_88021AD0(ctx, base);
loc_88131244:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021c70
	ctx.lr = 0x88131250;
	sub_88021C70(ctx, base);
loc_88131250:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88133610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88133618;
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
	ctx.lr = 0x88133628;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813363C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88133688
	if (ctx.cr6.gt) goto loc_88133688;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88133688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133688;
	// bdzf 4*cr6+eq,0x88133694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133694;
	// bdzf 4*cr6+eq,0x88133688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133688;
	// bdzf 4*cr6+eq,0x881336ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881336EC;
	// bne cr6,0x88133740
	if (!ctx.cr6.eq) goto loc_88133740;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14768
	ctx.r4.s64 = ctx.r11.s64 + -14768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8813367C;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_88133688:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88133694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88021a28
	ctx.lr = 0x881336A0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133688
	if (!ctx.cr6.eq) goto loc_88133688;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge 0x88133688
	if (!ctx.cr0.lt) goto loc_88133688;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-5232
	ctx.r4.s64 = ctx.r10.s64 + -5232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x881336D4;
	sub_880213F0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r3,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881336EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x881336F8;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133688
	if (!ctx.cr6.eq) goto loc_88133688;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14528
	ctx.r4.s64 = ctx.r11.s64 + -14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88133714;
	sub_88021780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// stw r11,1136(r31)
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stw r11,1384(r31)
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// stw r11,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88133740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021a28
	ctx.lr = 0x8813374C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133688
	if (!ctx.cr6.eq) goto loc_88133688;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,13736
	ctx.r4.s64 = ctx.r11.s64 + 13736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88133768;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x88133774;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88136170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88136178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88136188;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88136190;
	sub_88023F40(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x881361A0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// bl 0x88024028
	ctx.lr = 0x881361AC;
	sub_88024028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x881361BC;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x881361C4;
	sub_88023C50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,511
	ctx.r3.s64 = 511;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x881361D8;
	sub_8801A448(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x881361F4;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88136208
	if (ctx.cr6.eq) goto loc_88136208;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_88136208:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,24520
	ctx.r4.s64 = ctx.r9.s64 + 24520;
	// bl 0x88023e90
	ctx.lr = 0x88136230;
	sub_88023E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88136678) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8813682c
	if (!ctx.cr6.eq) goto loc_8813682C;
	// lwz r10,532(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88136738
	if (!ctx.cr6.eq) goto loc_88136738;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88136738
	if (!ctx.cr6.eq) goto loc_88136738;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// bge 0x88136738
	if (!ctx.cr0.lt) goto loc_88136738;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x881366D8;
	sub_88022BE0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x881366E8;
	sub_8813FA58(ctx, base);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88022730
	ctx.lr = 0x881366FC;
	sub_88022730(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88136704;
	sub_88022980(ctx, base);
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// stw r30,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// bl 0x88021618
	ctx.lr = 0x88136724;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x8813672C;
	sub_88021CF0(ctx, base);
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// addi r4,r9,-23328
	ctx.r4.s64 = ctx.r9.s64 + -23328;
	// b 0x88136820
	goto loc_88136820;
loc_88136738:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881367c8
	if (!ctx.cr6.eq) goto loc_881367C8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881367c8
	if (!ctx.cr6.eq) goto loc_881367C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x881367c8
	if (!ctx.cr0.lt) goto loc_881367C8;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x8813676C;
	sub_88022BE0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x8813677C;
	sub_8813FA58(ctx, base);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88022730
	ctx.lr = 0x88136790;
	sub_88022730(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88136798;
	sub_88022980(ctx, base);
	// lwz r9,376(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// bl 0x88021618
	ctx.lr = 0x881367B4;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x881367BC;
	sub_88021CF0(ctx, base);
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// addi r4,r8,-22280
	ctx.r4.s64 = ctx.r8.s64 + -22280;
	// b 0x88136820
	goto loc_88136820;
loc_881367C8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8813682c
	if (!ctx.cr6.eq) goto loc_8813682C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813682c
	if (!ctx.cr6.eq) goto loc_8813682C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x8813682c
	if (!ctx.cr0.lt) goto loc_8813682C;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x881367FC;
	sub_88022BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r11,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021618
	ctx.lr = 0x88136810;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x88136818;
	sub_88021CF0(ctx, base);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r4,r10,-20352
	ctx.r4.s64 = ctx.r10.s64 + -20352;
loc_88136820:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021ad0
	ctx.lr = 0x8813682C;
	sub_88021AD0(ctx, base);
loc_8813682C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_88137EB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88137EC0;
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
	ctx.lr = 0x88137ED0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021508
	ctx.lr = 0x88137EE0;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r29,-12
	ctx.r29.s64 = -12;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r5,-30701
	ctx.r5.s64 = -2012020736;
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// addi r5,r5,31864
	ctx.r5.s64 = ctx.r5.s64 + 31864;
	// stw r6,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r29,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r29.u32);
	// bl 0x880214b8
	ctx.lr = 0x88137F38;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881387C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881387D0;
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
	ctx.lr = 0x881387E0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x88021508
	ctx.lr = 0x881387F0;
	sub_88021508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// li r3,-12
	ctx.r3.s64 = -12;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r5,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r5.u32);
	// li r28,64
	ctx.r28.s64 = 64;
	// stw r3,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r3.u32);
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// lis r7,-30700
	ctx.r7.s64 = -2011955200;
	// stw r6,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// addi r5,r7,-31088
	ctx.r5.s64 = ctx.r7.s64 + -31088;
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r29.u32);
	// stw r28,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r28.u32);
	// stw r11,-11916(r8)
	REX_STORE_U32(ctx.r8.u32 + -11916, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x88138864;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88138F20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88138F28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88138F38;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021508
	ctx.lr = 0x88138F4C;
	sub_88021508(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88139030
	if (ctx.cr6.eq) goto loc_88139030;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bge 0x88139050
	if (!ctx.cr0.lt) goto loc_88139050;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// ori r6,r9,52429
	ctx.r6.u64 = ctx.r9.u64 | 52429;
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r5,-30692
	ctx.r5.s64 = -2011430912;
	// mulhwu r4,r8,r6
	ctx.r4.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r5,-11768
	ctx.r9.s64 = ctx.r5.s64 + -11768;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,124(r10)
	REX_STORE_U32(ctx.r10.u32 + 124, ctx.r7.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x88139050
	if (ctx.cr6.gt) goto loc_88139050;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021738
	ctx.lr = 0x88138FF8;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88139050
	if (!ctx.cr6.eq) goto loc_88139050;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// bl 0x88021598
	ctx.lr = 0x88139024;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88139030:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88139050
	if (!ctx.cr0.lt) goto loc_88139050;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_88139050:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139F68) {
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
	ctx.lr = 0x88139F88;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88021be0
	ctx.lr = 0x88139F98;
	sub_88021BE0(ctx, base);
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29128
	ctx.r4.s64 = ctx.r11.s64 + 29128;
	// bl 0x88021780
	ctx.lr = 0x88139FAC;
	sub_88021780(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x88139FB8;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8813B080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8813B088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813B09C;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x88021be0
	ctx.lr = 0x8813B0B0;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// addi r4,r9,-9712
	ctx.r4.s64 = ctx.r9.s64 + -9712;
	// stw r31,536(r27)
	REX_STORE_U32(ctx.r27.u32 + 536, ctx.r31.u32);
	// bl 0x88021d68
	ctx.lr = 0x8813B0DC;
	sub_88021D68(ctx, base);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,29128
	ctx.r4.s64 = ctx.r8.s64 + 29128;
	// bl 0x88021780
	ctx.lr = 0x8813B0F0;
	sub_88021780(ctx, base);
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,-11956(r7)
	REX_STORE_U32(ctx.r7.u32 + -11956, ctx.r11.u32);
	// stw r6,384(r27)
	REX_STORE_U32(ctx.r27.u32 + 384, ctx.r6.u32);
	// stw r31,388(r27)
	REX_STORE_U32(ctx.r27.u32 + 388, ctx.r31.u32);
	// bl 0x880b3e88
	ctx.lr = 0x8813B10C;
	sub_880B3E88(ctx, base);
	// bl 0x880b38e0
	ctx.lr = 0x8813B110;
	sub_880B38E0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,720(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// bl 0x88012f38
	ctx.lr = 0x8813B11C;
	sub_88012F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022098
	ctx.lr = 0x8813B124;
	sub_88022098(ctx, base);
	// lis r5,-30700
	ctx.r5.s64 = -2011955200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r5,-22096
	ctx.r5.s64 = ctx.r5.s64 + -22096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021b90
	ctx.lr = 0x8813B138;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813BC08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8813BC10;
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
	ctx.lr = 0x8813BC20;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813BC30;
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
	// bne cr6,0x8813bc54
	if (!ctx.cr6.eq) goto loc_8813BC54;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813b9c8
	ctx.lr = 0x8813BC54;
	sub_8813B9C8(ctx, base);
loc_8813BC54:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8813bcf8
	if (ctx.cr6.gt) goto loc_8813BCF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8813bccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813BCCC;
	// bdzf 4*cr6+eq,0x8813bd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813BD04;
	// bdzf 4*cr6+eq,0x8813bd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813BD3C;
	// bne cr6,0x8813bd6c
	if (!ctx.cr6.eq) goto loc_8813BD6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813bc98
	if (ctx.cr6.eq) goto loc_8813BC98;
loc_8813BC84:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813BC98:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31240
	ctx.r4.s64 = ctx.r11.s64 + -31240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813BCAC;
	sub_880213F0(ctx, base);
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813BCCC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813bc84
	if (!ctx.cr6.eq) goto loc_8813BC84;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-30776
	ctx.r4.s64 = ctx.r11.s64 + -30776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813BCEC;
	sub_880213F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8813BCF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813BD04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x8813BD10;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813bcf8
	if (!ctx.cr6.eq) goto loc_8813BCF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x8813BD28;
	sub_880216E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813BD3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x8813BD48;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813bcf8
	if (!ctx.cr6.eq) goto loc_8813BCF8;
	// li r11,192
	ctx.r11.s64 = 192;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8813BD6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813bc84
	if (!ctx.cr6.eq) goto loc_8813BC84;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-17544
	ctx.r4.s64 = ctx.r11.s64 + -17544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813BD8C;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8813BD98;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8813D210;
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
	ctx.lr = 0x8813D224;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021be0
	ctx.lr = 0x8813D234;
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
	ctx.lr = 0x8813D250;
	sub_880244A8(ctx, base);
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-12032
	ctx.r5.s64 = ctx.r8.s64 + -12032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8813D264;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x8813D840;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813D854;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021de0
	ctx.lr = 0x8813D864;
	sub_88021DE0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,-10016
	ctx.r11.s64 = ctx.r10.s64 + -10016;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813d8bc
	if (!ctx.cr6.eq) goto loc_8813D8BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_8813D8BC:
	// lwz r27,72(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r26,76(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,88(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x88024498
	ctx.lr = 0x8813D8CC;
	sub_88024498(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r25,44(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r24,r3,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x8813D8EC;
	sub_8801A3E0(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x8813D90C;
	sub_8801A4A0(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// stw r8,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r8.u32);
	// bl 0x88021a28
	ctx.lr = 0x8813D920;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813d984
	if (!ctx.cr6.eq) goto loc_8813D984;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// blt cr6,0x8813d95c
	if (ctx.cr6.lt) goto loc_8813D95C;
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// beq cr6,0x8813d984
	if (ctx.cr6.eq) goto loc_8813D984;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29360
	ctx.r4.s64 = ctx.r11.s64 + 29360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x8813D954;
	sub_88021780(ctx, base);
	// li r10,384
	ctx.r10.s64 = 384;
	// b 0x8813d97c
	goto loc_8813D97C;
loc_8813D95C:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x8813d984
	if (ctx.cr6.eq) goto loc_8813D984;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29608
	ctx.r4.s64 = ctx.r11.s64 + 29608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x8813D978;
	sub_88021780(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
loc_8813D97C:
	// stw r10,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
	// stw r3,100(r30)
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
loc_8813D984:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-10672
	ctx.r4.s64 = ctx.r11.s64 + -10672;
	// bl 0x88021e18
	ctx.lr = 0x8813D994;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813F760) {
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
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,21024
	ctx.r10.s64 = ctx.r10.s64 + 21024;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x8813f580
	ctx.lr = 0x8813F790;
	sub_8813F580(ctx, base);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8813FA58) {
	REX_FUNC_PROLOGUE();
	// b 0x88141b20
	sub_88141B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FA80) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813FA98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,696(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 696);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8813FCC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8813FCC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r11,688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813FCF0;
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
	ctx.lr = 0x8813FD04;
	sub_8813FC30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FF28) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,732(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 732);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8813FFF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,748(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88140098) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r3,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,20824
	ctx.r11.s64 = ctx.r9.s64 + 20824;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lis r3,-30606
	ctx.r3.s64 = -2005794816;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subfic r7,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// lhz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r10,18740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18740);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r11,772(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 772);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8814011C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88140840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-30595
	ctx.r10.s64 = -2005073920;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,21544(r10)
	REX_STORE_U32(ctx.r10.u32 + 21544, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30596
	ctx.r10.s64 = -2005139456;
	// rlwinm r9,r11,12,2,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3FFFF000;
	// addi r10,r10,21544
	ctx.r10.s64 = ctx.r10.s64 + 21544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8814087c
	if (ctx.cr6.eq) goto loc_8814087C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88140874:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88140874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88140874;
loc_8814087C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30596
	ctx.r10.s64 = -2005139456;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r10,r10,21480
	ctx.r10.s64 = ctx.r10.s64 + 21480;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881408b0
	if (ctx.cr6.eq) goto loc_881408B0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881408A8:
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881408a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881408A8;
loc_881408B0:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881408d4
	if (ctx.cr6.eq) goto loc_881408D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881408CC:
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x881408cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881408CC;
loc_881408D4:
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881408f8
	if (ctx.cr6.eq) goto loc_881408F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881408F0:
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x881408f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881408F0;
loc_881408F8:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88140914:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88140914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88140914;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_25) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savegprlr_31) {
	REX_FUNC_PROLOGUE();
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_16) {
	REX_FUNC_PROLOGUE();
	// ld r16,-136(r1)
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
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

DEFINE_REX_FUNC(__restgprlr_30) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_88141528) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x8814154c
	goto loc_8814154C;
loc_88141538:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8814154C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88141538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88141538;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x8814157c
	if (ctx.cr0.eq) goto loc_8814157C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x881415a0
	if (!ctx.cr0.eq) goto loc_881415A0;
loc_88141568:
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x88141568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88141568;
loc_8814157C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_88141588:
	// lbz r0,0(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x88141588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88141588;
	// blr 
	return;
loc_881415A0:
	// lbz r7,3(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x881415a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881415A0;
	// b 0x8814157c
	goto loc_8814157C;
}

DEFINE_REX_FUNC(sub_88141678) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88141698
	if (ctx.cr6.eq) goto loc_88141698;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x881416b0
	if (!ctx.cr6.eq) goto loc_881416B0;
loc_88141698:
	// bl 0x88143498
	ctx.lr = 0x8814169C;
	sub_88143498(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x88143328
	ctx.lr = 0x881416A8;
	sub_88143328(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88141718
	goto loc_88141718;
loc_881416B0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881416d8
	if (!ctx.cr6.eq) goto loc_881416D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x88143498
	ctx.lr = 0x881416C4;
	sub_88143498(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_881416C8:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x88143328
	ctx.lr = 0x881416D0;
	sub_88143328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x88141718
	goto loc_88141718;
loc_881416D8:
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_881416DC:
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x881416f8
	if (ctx.cr0.eq) goto loc_881416F8;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x881416dc
	if (!ctx.cr0.eq) goto loc_881416DC;
loc_881416F8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88141714
	if (!ctx.cr6.eq) goto loc_88141714;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x88143498
	ctx.lr = 0x8814170C;
	sub_88143498(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x881416c8
	goto loc_881416C8;
loc_88141714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88141718:
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

DEFINE_REX_FUNC(sub_88142204) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,204(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x8814223c
	goto loc_8814223C;
loc_8814223C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8814224c
	if (ctx.cr6.eq) goto loc_8814224C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x881436f0
	ctx.lr = 0x8814224C;
	sub_881436F0(ctx, base);
loc_8814224C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88142620) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88142658
	if (ctx.cr6.eq) goto loc_88142658;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88143bc0
	ctx.lr = 0x8814264C;
	sub_88143BC0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x88142668
	goto loc_88142668;
loc_88142658:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88143c68
	ctx.lr = 0x88142660;
	sub_88143C68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88142668:
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

DEFINE_REX_FUNC(sub_881431F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x8814323c
	if (ctx.cr6.eq) goto loc_8814323C;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x8814323c
	if (ctx.cr6.eq) goto loc_8814323C;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x8814321c
	if (!ctx.cr6.eq) goto loc_8814321C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x88142fa0
	sub_88142FA0(ctx, base);
	return;
loc_8814321C:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x88143234
	if (ctx.cr6.eq) goto loc_88143234;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x88143234
	if (ctx.cr6.eq) goto loc_88143234;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x88143070
	sub_88143070(ctx, base);
	return;
loc_88143234:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881429d8
	sub_881429D8(ctx, base);
	return;
loc_8814323C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881428e8
	sub_881428E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881432C0) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x88143248
	ctx.lr = 0x881432D4;
	sub_88143248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881432e0
	if (ctx.cr0.eq) goto loc_881432E0;
	// bl 0x88149f68
	ctx.lr = 0x881432E0;
	sub_88149F68(ctx, base);
loc_881432E0:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88143248
	ctx.lr = 0x881432E8;
	sub_88143248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881432f4
	if (ctx.cr0.eq) goto loc_881432F4;
	// bl 0x88149f68
	ctx.lr = 0x881432F4;
	sub_88149F68(ctx, base);
loc_881432F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143428) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-9624
	ctx.r9.s64 = ctx.r10.s64 + -9624;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_88143438:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8814346c
	if (ctx.cr6.eq) goto loc_8814346C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// blt cr6,0x88143438
	if (ctx.cr6.lt) goto loc_88143438;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// blt cr6,0x8814347c
	if (ctx.cr6.lt) goto loc_8814347C;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// bgt cr6,0x8814347c
	if (ctx.cr6.gt) goto loc_8814347C;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8814346C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_8814347C:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// blt cr6,0x88143490
	if (ctx.cr6.lt) goto loc_88143490;
	// cmplwi cr6,r3,202
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 202, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_88143490:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881437A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881437B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lis r11,-30595
	ctx.r11.s64 = -2005073920;
	// addi r30,r10,-9256
	ctx.r30.s64 = ctx.r10.s64 + -9256;
	// addi r28,r11,21600
	ctx.r28.s64 = ctx.r11.s64 + 21600;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_881437CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881437f4
	if (!ctx.cr6.eq) goto loc_881437F4;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x88143710
	ctx.lr = 0x881437EC;
	sub_88143710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88143814
	if (ctx.cr0.eq) goto loc_88143814;
loc_881437F4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881437cc
	if (ctx.cr6.lt) goto loc_881437CC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8814380C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88143814:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x8814380c
	goto loc_8814380C;
}

DEFINE_REX_FUNC(sub_88143C68) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-8376
	ctx.r10.s64 = ctx.r11.s64 + -8376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88144f58
	ctx.lr = 0x88143CA8;
	sub_88144F58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x88144840
	ctx.lr = 0x88143CB8;
	sub_88144840(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88143ce0
	if (!ctx.cr0.eq) goto loc_88143CE0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88143cd0
	if (!ctx.cr6.eq) goto loc_88143CD0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x88143cf8
	goto loc_88143CF8;
loc_88143CD0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x88143cf4
	if (!ctx.cr6.eq) goto loc_88143CF4;
loc_88143CD8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x88143cf8
	goto loc_88143CF8;
loc_88143CE0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88143cd8
	if (!ctx.cr0.eq) goto loc_88143CD8;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x88143cf8
	if (!ctx.cr0.eq) goto loc_88143CF8;
loc_88143CF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88143CF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_881467A8) {
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
	// lwz r10,21088(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881467d8
	if (ctx.cr6.eq) goto loc_881467D8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881467D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881467D8:
	// lis r10,-30699
	ctx.r10.s64 = -2011889664;
	// lis r11,-30699
	ctx.r11.s64 = -2011889664;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x88146828
	if (!ctx.cr6.lt) goto loc_88146828;
loc_881467F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88146870
	if (!ctx.cr6.eq) goto loc_88146870;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88146814
	if (ctx.cr6.eq) goto loc_88146814;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88146814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88146814:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x881467f8
	if (ctx.cr6.lt) goto loc_881467F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88146870
	if (!ctx.cr6.eq) goto loc_88146870;
loc_88146828:
	// lis r10,-30699
	ctx.r10.s64 = -2011889664;
	// lis r11,-30699
	ctx.r11.s64 = -2011889664;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8814686c
	if (!ctx.cr6.lt) goto loc_8814686C;
loc_88146844:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88146860
	if (ctx.cr6.eq) goto loc_88146860;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x88146860
	if (ctx.cr6.eq) goto loc_88146860;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88146860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88146860:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x88146844
	if (ctx.cr6.lt) goto loc_88146844;
loc_8814686C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88146870:
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

DEFINE_REX_FUNC(sub_88147BF0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88147c40
	if (ctx.cr0.eq) goto loc_88147C40;
	// bl 0x8814a2b0
	ctx.lr = 0x88147C1C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88147c40
	if (ctx.cr6.eq) goto loc_88147C40;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5206
	ctx.r6.s64 = 5206;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8814a2a0
	ctx.lr = 0x88147C40;
	__imp__KeBugCheckEx(ctx, base);
loc_88147C40:
	// lbz r11,-11(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x88147c54
	if (!ctx.cr0.eq) goto loc_88147C54;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x88147c80
	goto loc_88147C80;
loc_88147C54:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88147c70
	if (ctx.cr0.eq) goto loc_88147C70;
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x88147c80
	goto loc_88147C80;
loc_88147C70:
	// lhz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_88147C80:
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

DEFINE_REX_FUNC(sub_88148040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x88148048;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88148388
	if (!ctx.cr6.eq) goto loc_88148388;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r3
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x881480b4
	if (!ctx.cr6.eq) goto loc_881480B4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	ctx.r26.s64 = 4097;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x881480d0
	goto loc_881480D0;
loc_881480B4:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881480d0
	if (ctx.cr0.eq) goto loc_881480D0;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x881480d0
	if (!ctx.cr6.eq) goto loc_881480D0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	ctx.r23.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_881480D0:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x88148104
	if (!ctx.cr6.eq) goto loc_88148104;
	// li r27,4097
	ctx.r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x8814811c
	goto loc_8814811C;
loc_88148104:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8814811c
	if (!ctx.cr6.eq) goto loc_8814811C;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8814811c
	if (!ctx.cr0.eq) goto loc_8814811C;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_8814811C:
	// rlwinm r22,r27,4,12,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	ctx.r21.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r28,r22,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bgt cr6,0x88148138
	if (ctx.cr6.gt) goto loc_88148138;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_88148138:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88148388
	if (ctx.cr6.eq) goto loc_88148388;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88146a38
	ctx.lr = 0x8814814C;
	sub_88146A38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x88148388
	if (ctx.cr0.eq) goto loc_88148388;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,1424(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8814a2c0
	ctx.lr = 0x88148168;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r19,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r19,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// blt 0x88148388
	if (ctx.cr0.lt) goto loc_88148388;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88146c10
	ctx.lr = 0x8814819C;
	sub_88146C10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// beq 0x88148270
	if (ctx.cr0.eq) goto loc_88148270;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x8814822c
	if (!ctx.cr6.lt) goto loc_8814822C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88148254
	if (!ctx.cr6.eq) goto loc_88148254;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x88148254
	goto loc_88148254;
loc_8814822C:
	// lwz r10,384(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r9,r29,384
	ctx.r9.s64 = ctx.r29.s64 + 384;
	// b 0x88148248
	goto loc_88148248;
loc_88148238:
	// lhz r7,-8(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x88148250
	if (!ctx.cr6.gt) goto loc_88148250;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_88148248:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88148238
	if (!ctx.cr6.eq) goto loc_88148238;
loc_88148250:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88148254:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x881482b4
	goto loc_881482B4;
loc_88148270:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8814828c
	if (ctx.cr6.eq) goto loc_8814828C;
	// lbz r11,5(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	REX_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r23.u32);
	// b 0x881482b4
	goto loc_881482B4;
loc_8814828C:
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881482b4
	if (ctx.cr6.lt) goto loc_881482B4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x881482b4
	if (!ctx.cr6.lt) goto loc_881482B4;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
loc_881482B4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x88148378
	if (ctx.cr6.eq) goto loc_88148378;
	// add r11,r22,r28
	ctx.r11.u64 = ctx.r22.u64 + ctx.r28.u64;
	// sth r19,2(r28)
	REX_STORE_U16(ctx.r28.u32 + 2, ctx.r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 128, ctx.xer);
	// stb r19,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r19.u8);
	// stb r10,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// sth r27,0(r28)
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r27.u16);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lbz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	REX_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// bge cr6,0x8814832c
	if (!ctx.cr6.lt) goto loc_8814832C;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88148350
	if (!ctx.cr6.eq) goto loc_88148350;
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x88148350
	goto loc_88148350;
loc_8814832C:
	// lwz r11,384(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 384);
	// addi r10,r29,384
	ctx.r10.s64 = ctx.r29.s64 + 384;
	// b 0x88148348
	goto loc_88148348;
loc_88148338:
	// lhz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88148350
	if (!ctx.cr6.gt) goto loc_88148350;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_88148348:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88148338
	if (!ctx.cr6.eq) goto loc_88148338;
loc_88148350:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// b 0x88148398
	goto loc_88148398;
loc_88148378:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x88148398
	if (ctx.cr6.eq) goto loc_88148398;
	// sth r19,2(r20)
	REX_STORE_U16(ctx.r20.u32 + 2, ctx.r19.u16);
	// b 0x88148398
	goto loc_88148398;
loc_88148388:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88147420
	ctx.lr = 0x88148398;
	sub_88147420(ctx, base);
loc_88148398:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

