#include "mushi_funcs.12.h"

DEFINE_REX_FUNC(sub_88010328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88010330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,5876(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 5876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88010354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x88010360
	if (!ctx.cr6.lt) goto loc_88010360;
	// stw r30,5876(r31)
	REX_STORE_U32(ctx.r31.u32 + 5876, ctx.r30.u32);
loc_88010360:
	// lwz r11,5876(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5876);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88010378
	if (ctx.cr6.eq) goto loc_88010378;
	// lwz r11,908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 908);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88010378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88010378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88011CD0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-6488(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -6488);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88011cec
	if (ctx.cr6.eq) goto loc_88011CEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_88011CEC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,-6488(r9)
	REX_STORE_U32(ctx.r9.u32 + -6488, ctx.r8.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,128
	ctx.r3.s64 = 128;
	// sth r10,120(r11)
	REX_STORE_U16(ctx.r11.u32 + 120, ctx.r10.u16);
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// stb r10,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r7,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r7.u8);
	// sth r6,84(r11)
	REX_STORE_U16(ctx.r11.u32 + 84, ctx.r6.u16);
	// sth r10,86(r11)
	REX_STORE_U16(ctx.r11.u32 + 86, ctx.r10.u16);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r5,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// sth r3,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r3.u16);
	// blt cr6,0x88011d50
	if (ctx.cr6.lt) goto loc_88011D50;
	// li r10,384
	ctx.r10.s64 = 384;
	// sth r10,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
loc_88011D50:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// addis r6,r9,-60
	ctx.r6.s64 = ctx.r9.s64 + -3932160;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// addis r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 1048576;
	// li r4,125
	ctx.r4.s64 = 125;
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// addi r10,r7,6976
	ctx.r10.s64 = ctx.r7.s64 + 6976;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88012978) {
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
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x88012998;
	sub_8801A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,800
	ctx.r3.s64 = 800;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stb r4,9(r31)
	REX_STORE_U8(ctx.r31.u32 + 9, ctx.r4.u8);
	// li r30,96
	ctx.r30.s64 = 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,255
	ctx.r3.s64 = 255;
	// sth r30,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// stb r4,90(r31)
	REX_STORE_U8(ctx.r31.u32 + 90, ctx.r4.u8);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r3,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,120(r31)
	REX_STORE_U16(ctx.r31.u32 + 120, ctx.r10.u16);
	// li r30,128
	ctx.r30.s64 = 128;
	// sth r8,88(r31)
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r8.u16);
	// li r4,56
	ctx.r4.s64 = 56;
	// sth r9,124(r31)
	REX_STORE_U16(ctx.r31.u32 + 124, ctx.r9.u16);
	// addi r5,r5,9888
	ctx.r5.s64 = ctx.r5.s64 + 9888;
	// sth r30,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r30.u16);
	// stb r4,91(r31)
	REX_STORE_U8(ctx.r31.u32 + 91, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r6,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r9,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stb r10,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// stb r10,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r5,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
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

DEFINE_REX_FUNC(sub_88013940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x88013948;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r24,-6428(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -6428);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x88013cd4
	if (ctx.cr6.eq) goto loc_88013CD4;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88013cd4
	if (!ctx.cr6.eq) goto loc_88013CD4;
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// lwz r11,-6152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6152);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88013cd4
	if (!ctx.cr6.lt) goto loc_88013CD4;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addis r22,r24,8
	ctx.r22.s64 = ctx.r24.s64 + 524288;
	// ori r10,r11,57360
	ctx.r10.u64 = ctx.r11.u64 | 57360;
	// addi r22,r22,-8178
	ctx.r22.s64 = ctx.r22.s64 + -8178;
	// lhzx r8,r24,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r10.u32);
	// lhz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88013cd4
	if (!ctx.cr6.lt) goto loc_88013CD4;
	// bl 0x880103a0
	ctx.lr = 0x880139C0;
	sub_880103A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88013cd4
	if (!ctx.cr6.eq) goto loc_88013CD4;
	// addis r9,r24,8
	ctx.r9.s64 = ctx.r24.s64 + 524288;
	// addi r9,r9,-8180
	ctx.r9.s64 = ctx.r9.s64 + -8180;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mulli r10,r11,244
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(244));
	// add r31,r10,r24
	ctx.r31.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88013a20
	if (ctx.cr6.eq) goto loc_88013A20;
loc_880139EC:
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
	// add r31,r10,r24
	ctx.r31.u64 = ctx.r10.u64 + ctx.r24.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lhz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880139ec
	if (!ctx.cr6.eq) goto loc_880139EC;
loc_88013A20:
	// addi r10,r26,212
	ctx.r10.s64 = ctx.r26.s64 + 212;
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// sth r30,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r25,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r25.u16);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x880690e8
	ctx.lr = 0x88013A48;
	sub_880690E8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// subf r7,r3,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lis r28,-30692
	ctx.r28.s64 = -2011430912;
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,8
	ctx.r26.s64 = 8;
	// lwz r11,-6432(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -6432);
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r30,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// stw r30,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// sth r6,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r6.u16);
	// lwz r4,-6440(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + -6440);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88013b48
	if (!ctx.cr6.eq) goto loc_88013B48;
	// bl 0x88069640
	ctx.lr = 0x88013A94;
	sub_88069640(ctx, base);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013b1c
	if (ctx.cr6.eq) goto loc_88013B1C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r26,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
	// bl 0x880697c8
	ctx.lr = 0x88013AC8;
	sub_880697C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013b2c
	if (ctx.cr6.eq) goto loc_88013B2C;
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r6,r9,50000
	ctx.r6.u64 = ctx.r9.u64 | 50000;
	// stw r25,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r25.u32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// sth r5,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r5.u16);
	// blt cr6,0x88013b2c
	if (ctx.cr6.lt) goto loc_88013B2C;
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
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
	// b 0x88013b2c
	goto loc_88013B2C;
loc_88013B1C:
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013B2C:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x88013b74
	if (ctx.cr6.gt) goto loc_88013B74;
	// li r11,24
	ctx.r11.s64 = 24;
	// sth r11,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// b 0x88013b74
	goto loc_88013B74;
loc_88013B48:
	// lwz r11,-6440(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88013b74
	if (!ctx.cr6.eq) goto loc_88013B74;
	// bl 0x88069640
	ctx.lr = 0x88013B58;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013b74
	if (ctx.cr6.eq) goto loc_88013B74;
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013B74:
	// lwz r11,-6440(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6440);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88013be0
	if (ctx.cr6.lt) goto loc_88013BE0;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11976(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88013ba0
	if (ctx.cr6.eq) goto loc_88013BA0;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88013be0
	goto loc_88013BE0;
loc_88013BA0:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88013bc0
	if (ctx.cr6.eq) goto loc_88013BC0;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// sth r10,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// b 0x88013be0
	goto loc_88013BE0;
loc_88013BC0:
	// bl 0x88069640
	ctx.lr = 0x88013BC4;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88013be0
	if (ctx.cr6.eq) goto loc_88013BE0;
	// lwz r11,21852(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21852);
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,36(r31)
	REX_STORE_U16(ctx.r31.u32 + 36, ctx.r9.u16);
loc_88013BE0:
	// clrlwi r11,r23,23
	ctx.r11.u64 = ctx.r23.u32 & 0x1FF;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// sth r11,38(r31)
	REX_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bl 0x8801a860
	ctx.lr = 0x88013C00;
	sub_8801A860(ctx, base);
	// stw r30,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stb r30,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stb r30,42(r31)
	REX_STORE_U8(ctx.r31.u32 + 42, ctx.r30.u8);
	// stb r25,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r25.u8);
	// sth r30,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r30.u16);
	// stw r30,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stb r30,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stw r30,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r11,-6440(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -6440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88013c60
	if (!ctx.cr6.eq) goto loc_88013C60;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// blt cr6,0x88013c64
	if (ctx.cr6.lt) goto loc_88013C64;
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// stw r25,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r25.u32);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// ble cr6,0x88013c50
	if (!ctx.cr6.gt) goto loc_88013C50;
	// li r11,46
	ctx.r11.s64 = 46;
loc_88013C50:
	// li r10,5
	ctx.r10.s64 = 5;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stb r9,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// b 0x88013c64
	goto loc_88013C64;
loc_88013C60:
	// stb r26,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
loc_88013C64:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88013C78:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88013c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88013C78;
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// stw r30,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// ori r11,r11,57352
	ctx.r11.u64 = ctx.r11.u64 | 57352;
	// lhz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88013cac
	if (ctx.cr6.eq) goto loc_88013CAC;
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x88013cbc
	goto loc_88013CBC;
loc_88013CAC:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,57348
	ctx.r9.u64 = ctx.r10.u64 | 57348;
	// stwx r31,r24,r9
	REX_STORE_U32(ctx.r24.u32 + ctx.r9.u32, ctx.r31.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_88013CBC:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r31,r24,r10
	REX_STORE_U32(ctx.r24.u32 + ctx.r10.u32, ctx.r31.u32);
	// lhz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r22)
	REX_STORE_U16(ctx.r22.u32 + 0, ctx.r8.u16);
loc_88013CD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88017030) {
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
	ctx.lr = 0x88017048;
	sub_88014D38(ctx, base);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,4248
	ctx.r9.s64 = 4248;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// sth r9,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r8,43(r31)
	REX_STORE_U8(ctx.r31.u32 + 43, ctx.r8.u8);
	// lis r5,-30683
	ctx.r5.s64 = -2010841088;
	// lis r4,-30683
	ctx.r4.s64 = -2010841088;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-11920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11920);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,-11904(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -11904);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,-11908(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + -11908);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,-11912(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -11912);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,-11916(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -11916);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_880176C0) {
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
	// bge cr6,0x88017738
	if (!ctx.cr6.lt) goto loc_88017738;
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
	// ble cr6,0x88017738
	if (!ctx.cr6.gt) goto loc_88017738;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
loc_88017738:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880177a0
	if (!ctx.cr0.lt) goto loc_880177A0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// blt cr6,0x88017780
	if (ctx.cr6.lt) goto loc_88017780;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,-40
	ctx.r6.s64 = -40;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x88013940
	ctx.lr = 0x88017770;
	sub_88013940(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_88017780:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x880177a0
	if (!ctx.cr0.lt) goto loc_880177A0;
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_880177A0:
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
	ctx.lr = 0x880177C0;
	sub_8801A9C8(ctx, base);
	// lhz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880177d4
	if (ctx.cr6.eq) goto loc_880177D4;
	// bl 0x8813ff08
	ctx.lr = 0x880177D4;
	sub_8813FF08(ctx, base);
loc_880177D4:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6444(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -6444);
	// bl 0x8813ff48
	ctx.lr = 0x880177E4;
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
	ctx.lr = 0x880177F8;
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

DEFINE_REX_FUNC(sub_8801A138) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lbzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801A2E0) {
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
	// bl 0x880abcc0
	ctx.lr = 0x8801A2F4;
	sub_880ABCC0(ctx, base);
	// bl 0x88140150
	ctx.lr = 0x8801A2F8;
	sub_88140150(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88140218
	ctx.lr = 0x8801A308;
	sub_88140218(ctx, base);
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-6108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6108);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_8801A320:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8801a348
	if (!ctx.cr6.eq) goto loc_8801A348;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8801a320
	if (ctx.cr6.lt) goto loc_8801A320;
	// b 0x8801a34c
	goto loc_8801A34C;
loc_8801A348:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8801A34C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x88140218
	ctx.lr = 0x8801A35C;
	sub_88140218(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x8801a370
	if (!ctx.cr6.eq) goto loc_8801A370;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8801a388
	if (ctx.cr6.eq) goto loc_8801A388;
loc_8801A370:
	// bl 0x8801a040
	ctx.lr = 0x8801A374;
	sub_8801A040(ctx, base);
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
loc_8801A388:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r11,2624
	ctx.r31.s64 = ctx.r11.s64 + 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88140218
	ctx.lr = 0x8801A3A0;
	sub_88140218(ctx, base);
	// lbz r4,11(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 11);
	// lbz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x88027210
	ctx.lr = 0x8801A3AC;
	sub_88027210(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x880abd78
	ctx.lr = 0x8801A3B4;
	sub_880ABD78(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,50
	ctx.r4.s64 = 50;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x88140218
	ctx.lr = 0x8801A3C4;
	sub_88140218(ctx, base);
	// bl 0x880abc70
	ctx.lr = 0x8801A3C8;
	sub_880ABC70(ctx, base);
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

DEFINE_REX_FUNC(sub_8801B368) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8801b3dc
	if (ctx.cr6.eq) goto loc_8801B3DC;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,3532
	ctx.r10.s64 = ctx.r11.s64 + 3532;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8801b3ac
	if (!ctx.cr6.gt) goto loc_8801B3AC;
loc_8801B390:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8801b3e0
	if (ctx.cr6.eq) goto loc_8801B3E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8801b390
	if (ctx.cr6.lt) goto loc_8801B390;
loc_8801B3AC:
	// lwz r11,-4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addi r8,r10,-404
	ctx.r8.s64 = ctx.r10.s64 + -404;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r6,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8801B3DC:
	// blr 
	return;
loc_8801B3E0:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8801b3ac
	if (ctx.cr6.eq) goto loc_8801B3AC;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801DED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x8801DEE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10728(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10728);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r14,3
	ctx.r14.s64 = 3;
	// li r15,4
	ctx.r15.s64 = 4;
	// li r17,6
	ctx.r17.s64 = 6;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8801e188
	if (ctx.cr6.gt) goto loc_8801E188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8801df44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801DF44;
	// bdzf 4*cr6+eq,0x8801df9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801DF9C;
	// bdzf 4*cr6+eq,0x8801e12c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E12C;
	// bdzf 4*cr6+eq,0x8801e188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E188;
	// bdzf 4*cr6+eq,0x8801e188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E188;
	// bdzf 4*cr6+eq,0x8801e188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E188;
	// bdzf 4*cr6+eq,0x8801e188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E188;
	// bne cr6,0x8801e168
	if (!ctx.cr6.eq) goto loc_8801E168;
	// sth r21,10724(r18)
	REX_STORE_U16(ctx.r18.u32 + 10724, ctx.r21.u16);
	// sth r21,10730(r18)
	REX_STORE_U16(ctx.r18.u32 + 10730, ctx.r21.u16);
	// sth r21,10734(r18)
	REX_STORE_U16(ctx.r18.u32 + 10734, ctx.r21.u16);
	// sth r16,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r16.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801DF44:
	// lhz r11,10730(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10730);
	// lis r10,-30696
	ctx.r10.s64 = -2011693056;
	// li r8,8
	ctx.r8.s64 = 8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r10,-22968
	ctx.r9.s64 = ctx.r10.s64 + -22968;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r8,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r8.u16);
	// sth r6,10734(r18)
	REX_STORE_U16(ctx.r18.u32 + 10734, ctx.r6.u16);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8801df88
	if (!ctx.cr6.eq) goto loc_8801DF88;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r10.u16);
loc_8801DF88:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8801e188
	if (!ctx.cr6.eq) goto loc_8801E188;
	// sth r14,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r14.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801DF9C:
	// lhz r11,10734(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10734);
	// li r24,16
	ctx.r24.s64 = 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801dfb8
	if (ctx.cr6.eq) goto loc_8801DFB8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,10734(r18)
	REX_STORE_U16(ctx.r18.u32 + 10734, ctx.r11.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801DFB8:
	// lhz r10,10730(r18)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 10730);
	// lis r9,-30696
	ctx.r9.s64 = -2011693056;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r8,r9,-22968
	ctx.r8.s64 = ctx.r9.s64 + -22968;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8801dffc
	if (ctx.cr6.eq) goto loc_8801DFFC;
loc_8801DFEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8801dfec
	if (!ctx.cr6.eq) goto loc_8801DFEC;
loc_8801DFFC:
	// lwz r29,8(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8801e118
	if (!ctx.cr6.gt) goto loc_8801E118;
	// addi r22,r18,84
	ctx.r22.s64 = ctx.r18.s64 + 84;
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// lis r25,-16
	ctx.r25.s64 = -1048576;
	// li r26,60
	ctx.r26.s64 = 60;
	// li r27,160
	ctx.r27.s64 = 160;
	// lis r20,11
	ctx.r20.s64 = 720896;
loc_8801E024:
	// lbzu r10,1(r23)
	ea = 1 + ctx.r23.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r23.u32 = ea;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_8801E034:
	// lhz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8801e054
	if (ctx.cr6.eq) goto loc_8801E054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x8801e034
	if (ctx.cr6.lt) goto loc_8801E034;
	// b 0x8801e110
	goto loc_8801E110;
loc_8801E054:
	// addi r11,r10,96
	ctx.r11.s64 = ctx.r10.s64 + 96;
	// sth r16,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r16.u16);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// sth r11,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// lbz r8,1(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// sth r7,26(r31)
	REX_STORE_U16(ctx.r31.u32 + 26, ctx.r7.u16);
	// sth r21,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r21.u16);
	// sth r21,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r21.u16);
	// sth r24,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r24.u16);
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// sth r26,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r26.u16);
	// sth r21,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r21.u16);
	// sth r27,30(r31)
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r27.u16);
	// stw r21,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// stw r21,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// sth r15,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r15.u16);
loc_8801E09C:
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 30);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lhz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bl 0x8801a860
	ctx.lr = 0x8801E0B8;
	sub_8801A860(ctx, base);
	// lhz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 28);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// divw r11,r6,r17
	ctx.r11.u64 = uint32_t((ctx.r17.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r17.s32 == -1)) ? ctx.r6.s32 / ctx.r17.s32 : 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// divw r7,r7,r17
	ctx.r7.u64 = uint32_t((ctx.r17.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r17.s32 == -1)) ? ctx.r7.s32 / ctx.r17.s32 : 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// sth r11,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8801e09c
	if (ctx.cr6.lt) goto loc_8801E09C;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// add r29,r29,r20
	ctx.r29.u64 = ctx.r29.u64 + ctx.r20.u64;
loc_8801E110:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bgt 0x8801e024
	if (ctx.cr0.gt) goto loc_8801E024;
loc_8801E118:
	// lhz r11,10730(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10730);
	// sth r16,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r16.u16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,10730(r18)
	REX_STORE_U16(ctx.r18.u32 + 10730, ctx.r10.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801E12C:
	// lhz r11,10734(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10734);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e144
	if (ctx.cr6.eq) goto loc_8801E144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,10734(r18)
	REX_STORE_U16(ctx.r18.u32 + 10734, ctx.r11.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801E144:
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88140548
	ctx.lr = 0x8801E150;
	sub_88140548(ctx, base);
	// lhz r11,10730(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10730);
	// sth r16,10724(r18)
	REX_STORE_U16(ctx.r18.u32 + 10724, ctx.r16.u16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r16,10728(r18)
	REX_STORE_U16(ctx.r18.u32 + 10728, ctx.r16.u16);
	// sth r10,10730(r18)
	REX_STORE_U16(ctx.r18.u32 + 10730, ctx.r10.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801E168:
	// lhz r11,10734(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10734);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e180
	if (ctx.cr6.eq) goto loc_8801E180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,10734(r18)
	REX_STORE_U16(ctx.r18.u32 + 10734, ctx.r11.u16);
	// b 0x8801e188
	goto loc_8801E188;
loc_8801E180:
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,10726(r18)
	REX_STORE_U16(ctx.r18.u32 + 10726, ctx.r11.u16);
loc_8801E188:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r18,84
	ctx.r31.s64 = ctx.r18.s64 + 84;
	// li r28,240
	ctx.r28.s64 = 240;
	// lis r27,264
	ctx.r27.s64 = 17301504;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// lis r29,328
	ctx.r29.s64 = 21495808;
	// li r30,255
	ctx.r30.s64 = 255;
loc_8801E1A4:
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e3fc
	if (ctx.cr6.eq) goto loc_8801E3FC;
	// lhz r11,10724(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 10724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8801e1d4
	if (!ctx.cr6.eq) goto loc_8801E1D4;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e1d4
	if (ctx.cr6.eq) goto loc_8801E1D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8801E1D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8801e214
	if (ctx.cr6.lt) goto loc_8801E214;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// blt cr6,0x8801e204
	if (ctx.cr6.lt) goto loc_8801E204;
	// sth r30,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
loc_8801E204:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8801e214
	if (ctx.cr6.gt) goto loc_8801E214;
	// sth r21,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r21.u16);
	// sth r21,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r21.u16);
loc_8801E214:
	// lhz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8801e3b0
	if (ctx.cr6.gt) goto loc_8801E3B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8801e254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E254;
	// bdzf 4*cr6+eq,0x8801e2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E2E4;
	// bne cr6,0x8801e31c
	if (!ctx.cr6.eq) goto loc_8801E31C;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8801e3b0
	if (ctx.cr6.gt) goto loc_8801E3B0;
	// sth r16,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r16.u16);
	// b 0x8801e3b0
	goto loc_8801E3B0;
loc_8801E254:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e2bc
	if (ctx.cr6.eq) goto loc_8801E2BC;
	// lhz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 30);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r8.u16);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8801a860
	ctx.lr = 0x8801E288;
	sub_8801A860(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// divw r3,r6,r17
	ctx.r3.u64 = uint32_t((ctx.r17.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r17.s32 == -1)) ? ctx.r6.s32 / ctx.r17.s32 : 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// divw r9,r5,r17
	ctx.r9.u64 = uint32_t((ctx.r17.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r17.s32 == -1)) ? ctx.r5.s32 / ctx.r17.s32 : 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// sth r8,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r8.u16);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
loc_8801E2BC:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// blt cr6,0x8801e3b0
	if (ctx.cr6.lt) goto loc_8801E3B0;
	// sth r15,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r15.u16);
	// sth r30,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// b 0x8801e3b0
	goto loc_8801E3B0;
loc_8801E2E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8801a448
	ctx.lr = 0x8801E2EC;
	sub_8801A448(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// sth r11,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// bl 0x8801a448
	ctx.lr = 0x8801E2FC;
	sub_8801A448(ctx, base);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// sth r21,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r21.u16);
	// li r3,64
	ctx.r3.s64 = 64;
	// sth r9,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// bl 0x8801a448
	ctx.lr = 0x8801E310;
	sub_8801A448(ctx, base);
	// addi r7,r3,-32
	ctx.r7.s64 = ctx.r3.s64 + -32;
	// sth r14,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r14.u16);
	// sth r7,30(r31)
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r7.u16);
loc_8801E31C:
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e334
	if (ctx.cr6.eq) goto loc_8801E334;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// b 0x8801e3b0
	goto loc_8801E3B0;
loc_8801E334:
	// lhz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r8,30(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 30);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sth r3,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r3.u16);
	// bl 0x8801a860
	ctx.lr = 0x8801E35C;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// sth r3,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bgt cr6,0x8801e3b0
	if (ctx.cr6.gt) goto loc_8801E3B0;
	// sth r21,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r21.u16);
	// sth r21,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r21.u16);
loc_8801E3B0:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e3fc
	if (ctx.cr6.eq) goto loc_8801E3FC;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,245
	ctx.r6.s64 = 245;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E3E4;
	sub_8801A9C8(ctx, base);
	// lhz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E3FC;
	sub_8813FF90(ctx, base);
loc_8801E3FC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x8801e1a4
	if (!ctx.cr0.eq) goto loc_8801E1A4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880238B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x88024110
	ctx.lr = 0x880238D0;
	sub_88024110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x880238e0
	if (!ctx.cr6.eq) goto loc_880238E0;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_880238E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88023C50) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88023C58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88023C60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lis r11,-30688
	ctx.r11.s64 = -2011168768;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-22728
	ctx.r31.s64 = ctx.r11.s64 + -22728;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,21888(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21888);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88023d70
	if (ctx.cr6.eq) goto loc_88023D70;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21876(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21876);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88023d70
	if (ctx.cr6.eq) goto loc_88023D70;
	// cmplwi cr6,r3,48
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 48, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
	// cmplwi cr6,r3,52
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 52, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88023ce4
	if (!ctx.cr6.eq) goto loc_88023CE4;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x88023ce4
	if (ctx.cr6.lt) goto loc_88023CE4;
	// cmplwi cr6,r3,51
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 51, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
	// cmplwi cr6,r3,59
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 59, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023CE4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88023d1c
	if (!ctx.cr6.eq) goto loc_88023D1C;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x88023d00
	if (ctx.cr6.lt) goto loc_88023D00;
	// cmplwi cr6,r27,57
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 57, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023D00:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88023d1c
	if (!ctx.cr6.eq) goto loc_88023D1C;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x88023d1c
	if (ctx.cr6.lt) goto loc_88023D1C;
	// cmplwi cr6,r27,55
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 55, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023D1C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88023d38
	if (!ctx.cr6.eq) goto loc_88023D38;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x88023d38
	if (ctx.cr6.lt) goto loc_88023D38;
	// cmplwi cr6,r27,69
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 69, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023D38:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88023d70
	if (!ctx.cr6.eq) goto loc_88023D70;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x88023d54
	if (ctx.cr6.lt) goto loc_88023D54;
	// cmplwi cr6,r27,93
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 93, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023D54:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88023d70
	if (!ctx.cr6.eq) goto loc_88023D70;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88023d70
	if (!ctx.cr6.eq) goto loc_88023D70;
	// cmplwi cr6,r27,240
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 240, ctx.xer);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
loc_88023D70:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r11,-21720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21720);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88023df4
	if (!ctx.cr6.lt) goto loc_88023DF4;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88023d94
	if (ctx.cr6.eq) goto loc_88023D94;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88023D94:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88023da4
	if (ctx.cr6.eq) goto loc_88023DA4;
	// li r28,2
	ctx.r28.s64 = 2;
loc_88023DA4:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88023db4
	if (ctx.cr6.eq) goto loc_88023DB4;
	// li r28,3
	ctx.r28.s64 = 3;
loc_88023DB4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88023dd4
	if (ctx.cr6.eq) goto loc_88023DD4;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// lwz r3,-11896(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -11896);
	// bl 0x880690f8
	ctx.lr = 0x88023DD0;
	sub_880690F8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_88023DD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88023DD8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88023e00
	if (ctx.cr6.eq) goto loc_88023E00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,2644
	ctx.r31.s64 = ctx.r31.s64 + 2644;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x88023dd8
	if (ctx.cr6.lt) goto loc_88023DD8;
loc_88023DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_88023E00:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-22744
	ctx.r8.s64 = ctx.r11.s64 + -22744;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// beq cr6,0x88023df4
	if (ctx.cr6.eq) goto loc_88023DF4;
	// lhz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r7,r30,-40
	ctx.r7.s64 = ctx.r30.s64 + -40;
	// lhzu r6,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r5,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// subf r23,r9,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r9.u64;
	// bl 0x88023a60
	ctx.lr = 0x88023E48;
	sub_88023A60(ctx, base);
	// rlwinm r11,r24,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r23,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r26,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r25.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88025AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88025AE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x8806b630
	ctx.lr = 0x88025B0C;
	sub_8806B630(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88025b58
	if (!ctx.cr0.eq) goto loc_88025B58;
	// lwz r3,68(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x8806b1d8
	ctx.lr = 0x88025B24;
	sub_8806B1D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880690e8
	ctx.lr = 0x88025B2C;
	sub_880690E8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88025B38:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bdnz 0x88025b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88025B38;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_88025B58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,29
	ctx.r31.s64 = 29;
loc_88025B60:
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x88025B70;
	sub_8813FA60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x88025b60
	if (!ctx.cr0.eq) goto loc_88025B60;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,196(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x88025c38
	if (!ctx.cr6.eq) goto loc_88025C38;
	// lwz r30,124(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 124);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// li r27,14
	ctx.r27.s64 = 14;
	// lis r25,4
	ctx.r25.s64 = 262144;
	// lis r26,1
	ctx.r26.s64 = 65536;
loc_88025BBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,157
	ctx.r6.s64 = 157;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88025BD8;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88025BF0;
	sub_8813FF90(ctx, base);
	// lwz r11,152(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 152);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88025c18
	if (ctx.cr6.lt) goto loc_88025C18;
	// beq cr6,0x88025c10
	if (ctx.cr6.eq) goto loc_88025C10;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88025c24
	if (!ctx.cr6.lt) goto loc_88025C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x88025c1c
	goto loc_88025C1C;
loc_88025C10:
	// rlwinm r4,r30,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// b 0x88025c1c
	goto loc_88025C1C;
loc_88025C18:
	// rlwinm r4,r30,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
loc_88025C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88025C24;
	sub_8813FF48(ctx, base);
loc_88025C24:
	// lwz r11,128(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 128);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bne 0x88025bbc
	if (!ctx.cr0.eq) goto loc_88025BBC;
loc_88025C38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880271C8) {
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
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x88028b38
	ctx.lr = 0x880271EC;
	sub_88028B38(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 262144;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_88027600) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// bge 0x88027630
	if (!ctx.cr0.lt) goto loc_88027630;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// bge 0x88027630
	if (!ctx.cr0.lt) goto loc_88027630;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_88027630:
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88028068) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-30718
	ctx.r9.s64 = -2013134848;
	// addi r8,r11,31088
	ctx.r8.s64 = ctx.r11.s64 + 31088;
	// addi r7,r9,29016
	ctx.r7.s64 = ctx.r9.s64 + 29016;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// addi r9,r11,31600
	ctx.r9.s64 = ctx.r11.s64 + 31600;
	// addi r8,r10,29208
	ctx.r8.s64 = ctx.r10.s64 + 29208;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880280A8) {
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
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// li r5,5632
	ctx.r5.s64 = 5632;
	// addi r3,r11,12528
	ctx.r3.s64 = ctx.r11.s64 + 12528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x880280C8;
	sub_8813FA58(ctx, base);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// addi r3,r10,11376
	ctx.r3.s64 = ctx.r10.s64 + 11376;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x880280DC;
	sub_8813FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88028240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88028248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88028280
	if (ctx.cr6.eq) goto loc_88028280;
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88028274
	if (ctx.cr6.eq) goto loc_88028274;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x88028284
	goto loc_88028284;
loc_88028274:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x88028284
	goto loc_88028284;
loc_88028280:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88028284:
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// bne cr6,0x88028390
	if (!ctx.cr6.eq) goto loc_88028390;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x88028348
	if (!ctx.cr6.lt) goto loc_88028348;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// beq cr6,0x88028304
	if (ctx.cr6.eq) goto loc_88028304;
	// lwz r9,308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880282c8
	if (!ctx.cr6.eq) goto loc_880282C8;
loc_880282BC:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x88028348
	goto loc_88028348;
loc_880282C8:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88028348
	if (!ctx.cr6.gt) goto loc_88028348;
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
loc_880282E0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880282bc
	if (ctx.cr6.eq) goto loc_880282BC;
	// lwz r7,320(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x880282e0
	if (ctx.cr6.lt) goto loc_880282E0;
	// b 0x88028348
	goto loc_88028348;
loc_88028304:
	// lwz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88028348
	if (ctx.cr6.eq) goto loc_88028348;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88028348
	if (!ctx.cr6.gt) goto loc_88028348;
	// lwz r10,316(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
loc_88028328:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88028348
	if (ctx.cr6.eq) goto loc_88028348;
	// lwz r7,312(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88028328
	if (ctx.cr6.lt) goto loc_88028328;
loc_88028348:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// li r9,0
	ctx.r9.s64 = 0;
loc_88028370:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x88028370
	if (ctx.cr6.lt) goto loc_88028370;
	// b 0x880284b8
	goto loc_880284B8;
loc_88028390:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880283d0
	if (ctx.cr6.lt) goto loc_880283D0;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88028424
	if (!ctx.cr6.gt) goto loc_88028424;
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
loc_880283AC:
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r8,r10,23
	ctx.r8.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r8.u32);
	// lwz r7,320(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880283ac
	if (ctx.cr6.lt) goto loc_880283AC;
	// b 0x88028424
	goto loc_88028424;
loc_880283D0:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88028424
	if (ctx.cr6.eq) goto loc_88028424;
	// lwz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88028424
	if (!ctx.cr6.gt) goto loc_88028424;
loc_880283F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,316(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r4,288(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x8801a808
	ctx.lr = 0x88028400;
	sub_8801A808(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88028424
	if (ctx.cr6.eq) goto loc_88028424;
	// lwz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880283f0
	if (ctx.cr6.lt) goto loc_880283F0;
loc_88028424:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8802847c
	if (!ctx.cr6.eq) goto loc_8802847C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8802845C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x8802845c
	if (ctx.cr6.lt) goto loc_8802845C;
	// b 0x880284b8
	goto loc_880284B8;
loc_8802847C:
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// bge cr6,0x880284a0
	if (!ctx.cr6.lt) goto loc_880284A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x880284b4
	goto loc_880284B4;
loc_880284A0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880284b8
	if (ctx.cr6.eq) goto loc_880284B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880284B4:
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_880284B8:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88028b38
	ctx.lr = 0x880284D0;
	sub_88028B38(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,288(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8801a860
	ctx.lr = 0x8802850C;
	sub_8801A860(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88028558
	if (!ctx.cr6.eq) goto loc_88028558;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x88028530
	if (ctx.cr6.lt) goto loc_88028530;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_88028530:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88028558:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8802857c
	if (ctx.cr6.lt) goto loc_8802857C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8802857C:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880302D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f54
	ctx.lr = 0x880302E0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,6
	ctx.r30.s64 = 6;
	// ori r31,r11,43691
	ctx.r31.u64 = ctx.r11.u64 | 43691;
loc_880302F4:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r10,r29,r30
	ctx.r10.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,2423
	ctx.r3.s64 = ctx.r29.s64 + 2423;
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
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
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8813fdd8
	ctx.lr = 0x88030340;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x880302f4
	if (ctx.cr6.lt) goto loc_880302F4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030350:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2439
	ctx.r4.s64 = ctx.r29.s64 + 2439;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8813fdd8
	ctx.lr = 0x880303A4;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x88030350
	if (ctx.cr6.lt) goto loc_88030350;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880303B4:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2441
	ctx.r4.s64 = ctx.r29.s64 + 2441;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8813fdd8
	ctx.lr = 0x88030404;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// blt cr6,0x880303b4
	if (ctx.cr6.lt) goto loc_880303B4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030414:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2455
	ctx.r4.s64 = ctx.r29.s64 + 2455;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x88030464;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x88030414
	if (ctx.cr6.lt) goto loc_88030414;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030474:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2471
	ctx.r4.s64 = ctx.r29.s64 + 2471;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x880304C8;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x88030474
	if (ctx.cr6.lt) goto loc_88030474;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880304D8:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2473
	ctx.r4.s64 = ctx.r29.s64 + 2473;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x88030528;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x880304d8
	if (ctx.cr6.lt) goto loc_880304D8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030538:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2475
	ctx.r4.s64 = ctx.r29.s64 + 2475;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8813fdd8
	ctx.lr = 0x8803058C;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x88030538
	if (ctx.cr6.lt) goto loc_88030538;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8803059C:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r10,r29,r30
	ctx.r10.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,2479
	ctx.r3.s64 = ctx.r29.s64 + 2479;
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
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
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x880305E8;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x8803059c
	if (ctx.cr6.lt) goto loc_8803059C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880305F8:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2491
	ctx.r4.s64 = ctx.r29.s64 + 2491;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x8803064C;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x880305f8
	if (ctx.cr6.lt) goto loc_880305F8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8803065C:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r10,r29,r30
	ctx.r10.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,2495
	ctx.r3.s64 = ctx.r29.s64 + 2495;
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
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
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x880306A8;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x8803065c
	if (ctx.cr6.lt) goto loc_8803065C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_880306B8:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2507
	ctx.r4.s64 = ctx.r29.s64 + 2507;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030708;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x880306b8
	if (ctx.cr6.lt) goto loc_880306B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030718:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2511
	ctx.r4.s64 = ctx.r29.s64 + 2511;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x8803076C;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x88030718
	if (ctx.cr6.lt) goto loc_88030718;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8803077C:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2513
	ctx.r4.s64 = ctx.r29.s64 + 2513;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x880307CC;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// blt cr6,0x8803077c
	if (ctx.cr6.lt) goto loc_8803077C;
	// li r8,2527
	ctx.r8.s64 = 2527;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x880307F4;
	sub_8813FDD8(ctx, base);
	// li r8,2528
	ctx.r8.s64 = 2528;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x88030810;
	sub_8813FDD8(ctx, base);
	// li r8,2529
	ctx.r8.s64 = 2529;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x8803082C;
	sub_8813FDD8(ctx, base);
	// li r8,2530
	ctx.r8.s64 = 2530;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x88030848;
	sub_8813FDD8(ctx, base);
	// li r8,2531
	ctx.r8.s64 = 2531;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88030864;
	sub_8813FDD8(ctx, base);
	// li r8,2532
	ctx.r8.s64 = 2532;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88030880;
	sub_8813FDD8(ctx, base);
	// li r8,2533
	ctx.r8.s64 = 2533;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803089C;
	sub_8813FDD8(ctx, base);
	// li r8,2534
	ctx.r8.s64 = 2534;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8813fdd8
	ctx.lr = 0x880308B8;
	sub_8813FDD8(ctx, base);
	// li r8,2535
	ctx.r8.s64 = 2535;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x880308D4;
	sub_8813FDD8(ctx, base);
	// li r8,2536
	ctx.r8.s64 = 2536;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x880308F0;
	sub_8813FDD8(ctx, base);
	// li r8,2537
	ctx.r8.s64 = 2537;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x8803090C;
	sub_8813FDD8(ctx, base);
	// li r8,2538
	ctx.r8.s64 = 2538;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030928;
	sub_8813FDD8(ctx, base);
	// li r8,2539
	ctx.r8.s64 = 2539;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030944;
	sub_8813FDD8(ctx, base);
	// li r8,2540
	ctx.r8.s64 = 2540;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030960;
	sub_8813FDD8(ctx, base);
	// li r8,2541
	ctx.r8.s64 = 2541;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x8803097C;
	sub_8813FDD8(ctx, base);
	// li r8,2542
	ctx.r8.s64 = 2542;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030998;
	sub_8813FDD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8803099C:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r8,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2543
	ctx.r4.s64 = ctx.r29.s64 + 2543;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,40
	ctx.r7.s64 = 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x880309F0;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8803099c
	if (ctx.cr6.lt) goto loc_8803099C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030A00:
	// mulhwu r11,r29,r31
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// addi r4,r29,2545
	ctx.r4.s64 = ctx.r29.s64 + 2545;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// rlwinm r4,r3,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFF8;
	// li r6,40
	ctx.r6.s64 = 40;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8813fdd8
	ctx.lr = 0x88030A50;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// blt cr6,0x88030a00
	if (ctx.cr6.lt) goto loc_88030A00;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// ori r17,r11,52429
	ctx.r17.u64 = ctx.r11.u64 | 52429;
loc_88030A6C:
	// mulhwu r11,r29,r17
	ctx.r11.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r17.u32)) >> 32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r11,r29,r28
	ctx.r11.u64 = uint32_t(ctx.r28.u32 ? ctx.r29.u32 / ctx.r28.u32 : 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r10,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r10.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r29,2559
	ctx.r3.s64 = ctx.r29.s64 + 2559;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,176
	ctx.r5.s64 = ctx.r10.s64 + 176;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r3,23
	ctx.r3.s64 = 23;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88030AC4;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x88030a6c
	if (ctx.cr6.lt) goto loc_88030A6C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030AD8:
	// addi r11,r28,2569
	ctx.r11.s64 = ctx.r28.s64 + 2569;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8813fdd8
	ctx.lr = 0x88030AF8;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,240
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 240, ctx.xer);
	// blt cr6,0x88030ad8
	if (ctx.cr6.lt) goto loc_88030AD8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030B10:
	// addi r11,r28,2575
	ctx.r11.s64 = ctx.r28.s64 + 2575;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8813fdd8
	ctx.lr = 0x88030B30;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,240
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 240, ctx.xer);
	// blt cr6,0x88030b10
	if (ctx.cr6.lt) goto loc_88030B10;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030B44:
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// mulhwu r10,r29,r31
	ctx.r10.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
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
	// addi r3,r29,2581
	ctx.r3.s64 = ctx.r29.s64 + 2581;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,176
	ctx.r5.s64 = ctx.r9.s64 + 176;
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
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
	// li r3,25
	ctx.r3.s64 = 25;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88030B98;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x88030b44
	if (ctx.cr6.lt) goto loc_88030B44;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030BAC:
	// addi r11,r28,2591
	ctx.r11.s64 = ctx.r28.s64 + 2591;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8813fdd8
	ctx.lr = 0x88030BCC;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,160
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 160, ctx.xer);
	// blt cr6,0x88030bac
	if (ctx.cr6.lt) goto loc_88030BAC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,160
	ctx.r29.s64 = 160;
loc_88030BE4:
	// addi r11,r28,2595
	ctx.r11.s64 = ctx.r28.s64 + 2595;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8813fdd8
	ctx.lr = 0x88030C04;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,240
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 240, ctx.xer);
	// blt cr6,0x88030be4
	if (ctx.cr6.lt) goto loc_88030BE4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88030C18:
	// divwu r11,r29,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r29.u32 / ctx.r30.u32 : 0);
	// mulhwu r10,r29,r31
	ctx.r10.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r31.u32)) >> 32;
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
	// addi r3,r29,2597
	ctx.r3.s64 = ctx.r29.s64 + 2597;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,176
	ctx.r5.s64 = ctx.r9.s64 + 176;
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
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
	// li r3,26
	ctx.r3.s64 = 26;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88030C6C;
	sub_8813FDD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x88030c18
	if (ctx.cr6.lt) goto loc_88030C18;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88030C80:
	// addi r11,r29,2609
	ctx.r11.s64 = ctx.r29.s64 + 2609;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8813fdd8
	ctx.lr = 0x88030CA0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x88030c80
	if (ctx.cr6.lt) goto loc_88030C80;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,80
	ctx.r31.s64 = 80;
loc_88030CB8:
	// addi r11,r29,2611
	ctx.r11.s64 = ctx.r29.s64 + 2611;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8813fdd8
	ctx.lr = 0x88030CD8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x88030cb8
	if (ctx.cr6.lt) goto loc_88030CB8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,2621
	ctx.r31.s64 = 2621;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// ori r27,r11,65530
	ctx.r27.u64 = ctx.r11.u64 | 65530;
loc_88030CFC:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r26,r28,16
	ctx.r26.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8813fdd8
	ctx.lr = 0x88030D20;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8813fdd8
	ctx.lr = 0x88030D3C;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// bne 0x88030cfc
	if (!ctx.cr0.eq) goto loc_88030CFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88030D54:
	// addi r11,r29,2627
	ctx.r11.s64 = ctx.r29.s64 + 2627;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8813fdd8
	ctx.lr = 0x88030D74;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x88030d54
	if (ctx.cr6.lt) goto loc_88030D54;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,2637
	ctx.r31.s64 = 2637;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_88030D90:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r26,r28,16
	ctx.r26.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8813fdd8
	ctx.lr = 0x88030DB4;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8813fdd8
	ctx.lr = 0x88030DD0;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// bne 0x88030d90
	if (!ctx.cr0.eq) goto loc_88030D90;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88030DE8:
	// addi r11,r29,2643
	ctx.r11.s64 = ctx.r29.s64 + 2643;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8813fdd8
	ctx.lr = 0x88030E08;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x88030de8
	if (ctx.cr6.lt) goto loc_88030DE8;
	// li r8,2647
	ctx.r8.s64 = 2647;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030E34;
	sub_8813FDD8(ctx, base);
	// li r8,2648
	ctx.r8.s64 = 2648;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030E50;
	sub_8813FDD8(ctx, base);
	// li r8,2649
	ctx.r8.s64 = 2649;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030E6C;
	sub_8813FDD8(ctx, base);
	// li r8,2650
	ctx.r8.s64 = 2650;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8813fdd8
	ctx.lr = 0x88030E88;
	sub_8813FDD8(ctx, base);
	// li r8,2651
	ctx.r8.s64 = 2651;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030EA4;
	sub_8813FDD8(ctx, base);
	// li r8,2652
	ctx.r8.s64 = 2652;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030EC0;
	sub_8813FDD8(ctx, base);
	// li r8,2653
	ctx.r8.s64 = 2653;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030EDC;
	sub_8813FDD8(ctx, base);
	// li r8,2654
	ctx.r8.s64 = 2654;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030EF8;
	sub_8813FDD8(ctx, base);
	// li r8,2655
	ctx.r8.s64 = 2655;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030F14;
	sub_8813FDD8(ctx, base);
	// li r8,2656
	ctx.r8.s64 = 2656;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030F30;
	sub_8813FDD8(ctx, base);
	// li r8,2657
	ctx.r8.s64 = 2657;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030F4C;
	sub_8813FDD8(ctx, base);
	// li r8,2658
	ctx.r8.s64 = 2658;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030F68;
	sub_8813FDD8(ctx, base);
	// li r8,2659
	ctx.r8.s64 = 2659;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030F84;
	sub_8813FDD8(ctx, base);
	// li r8,2660
	ctx.r8.s64 = 2660;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030FA0;
	sub_8813FDD8(ctx, base);
	// li r8,2661
	ctx.r8.s64 = 2661;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030FBC;
	sub_8813FDD8(ctx, base);
	// li r8,2662
	ctx.r8.s64 = 2662;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88030FD8;
	sub_8813FDD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88030FE0:
	// addi r11,r29,2663
	ctx.r11.s64 = ctx.r29.s64 + 2663;
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8813fdd8
	ctx.lr = 0x88031000;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88030fe0
	if (ctx.cr6.lt) goto loc_88030FE0;
	// li r8,2789
	ctx.r8.s64 = 2789;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x8803102C;
	sub_8813FDD8(ctx, base);
	// li r8,2790
	ctx.r8.s64 = 2790;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031048;
	sub_8813FDD8(ctx, base);
	// li r8,2791
	ctx.r8.s64 = 2791;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031064;
	sub_8813FDD8(ctx, base);
	// li r8,2792
	ctx.r8.s64 = 2792;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031080;
	sub_8813FDD8(ctx, base);
	// li r8,2793
	ctx.r8.s64 = 2793;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x8803109C;
	sub_8813FDD8(ctx, base);
	// li r8,2794
	ctx.r8.s64 = 2794;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x880310B8;
	sub_8813FDD8(ctx, base);
	// li r8,2795
	ctx.r8.s64 = 2795;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x880310D4;
	sub_8813FDD8(ctx, base);
	// li r8,2796
	ctx.r8.s64 = 2796;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x880310F0;
	sub_8813FDD8(ctx, base);
	// li r8,2797
	ctx.r8.s64 = 2797;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x8803110C;
	sub_8813FDD8(ctx, base);
	// li r8,2798
	ctx.r8.s64 = 2798;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031128;
	sub_8813FDD8(ctx, base);
	// li r8,2799
	ctx.r8.s64 = 2799;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031144;
	sub_8813FDD8(ctx, base);
	// li r8,2800
	ctx.r8.s64 = 2800;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031160;
	sub_8813FDD8(ctx, base);
	// li r8,2801
	ctx.r8.s64 = 2801;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x8803117C;
	sub_8813FDD8(ctx, base);
	// li r8,2802
	ctx.r8.s64 = 2802;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88031198;
	sub_8813FDD8(ctx, base);
	// li r8,2803
	ctx.r8.s64 = 2803;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x880311B4;
	sub_8813FDD8(ctx, base);
	// li r8,2804
	ctx.r8.s64 = 2804;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x880311D0;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,2707
	ctx.r29.s64 = 2707;
	// li r28,4
	ctx.r28.s64 = 4;
	// ori r31,r11,65508
	ctx.r31.u64 = ctx.r11.u64 | 65508;
loc_880311E4:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// clrlwi r26,r27,16
	ctx.r26.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031208;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031224;
	sub_8813FDD8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// bne 0x880311e4
	if (!ctx.cr0.eq) goto loc_880311E4;
	// li r29,2711
	ctx.r29.s64 = 2711;
	// li r28,96
	ctx.r28.s64 = 96;
loc_8803123C:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// clrlwi r27,r28,16
	ctx.r27.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031260;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803127C;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8803123c
	if (!ctx.cr0.eq) goto loc_8803123C;
	// li r18,10
	ctx.r18.s64 = 10;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,2717
	ctx.r30.s64 = 2717;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_8803129C:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// clrlwi r27,r28,16
	ctx.r27.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880312C0;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880312DC;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x8803129c
	if (!ctx.cr0.eq) goto loc_8803129C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,2703
	ctx.r31.s64 = 2703;
	// li r29,4
	ctx.r29.s64 = 4;
	// ori r20,r11,65532
	ctx.r20.u64 = ctx.r11.u64 | 65532;
loc_88031300:
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// clrlwi r28,r30,16
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031324;
	sub_8813FDD8(ctx, base);
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031348;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031368;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031388;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x88031300
	if (!ctx.cr0.eq) goto loc_88031300;
	// li r8,2751
	ctx.r8.s64 = 2751;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880313B4;
	sub_8813FDD8(ctx, base);
	// li r8,2752
	ctx.r8.s64 = 2752;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880313D0;
	sub_8813FDD8(ctx, base);
	// li r8,2753
	ctx.r8.s64 = 2753;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880313EC;
	sub_8813FDD8(ctx, base);
	// li r8,2754
	ctx.r8.s64 = 2754;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031408;
	sub_8813FDD8(ctx, base);
	// li r8,2755
	ctx.r8.s64 = 2755;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031424;
	sub_8813FDD8(ctx, base);
	// li r8,2756
	ctx.r8.s64 = 2756;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031440;
	sub_8813FDD8(ctx, base);
	// li r8,2757
	ctx.r8.s64 = 2757;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803145C;
	sub_8813FDD8(ctx, base);
	// li r8,2758
	ctx.r8.s64 = 2758;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031478;
	sub_8813FDD8(ctx, base);
	// li r8,2759
	ctx.r8.s64 = 2759;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031494;
	sub_8813FDD8(ctx, base);
	// li r8,2760
	ctx.r8.s64 = 2760;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880314B0;
	sub_8813FDD8(ctx, base);
	// li r8,2761
	ctx.r8.s64 = 2761;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880314CC;
	sub_8813FDD8(ctx, base);
	// li r8,2762
	ctx.r8.s64 = 2762;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880314E8;
	sub_8813FDD8(ctx, base);
	// li r8,2763
	ctx.r8.s64 = 2763;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031504;
	sub_8813FDD8(ctx, base);
	// li r8,2764
	ctx.r8.s64 = 2764;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031520;
	sub_8813FDD8(ctx, base);
	// li r8,2765
	ctx.r8.s64 = 2765;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803153C;
	sub_8813FDD8(ctx, base);
	// li r8,2766
	ctx.r8.s64 = 2766;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031558;
	sub_8813FDD8(ctx, base);
	// li r8,2735
	ctx.r8.s64 = 2735;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031574;
	sub_8813FDD8(ctx, base);
	// li r8,2736
	ctx.r8.s64 = 2736;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031590;
	sub_8813FDD8(ctx, base);
	// li r8,2737
	ctx.r8.s64 = 2737;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880315AC;
	sub_8813FDD8(ctx, base);
	// li r8,2738
	ctx.r8.s64 = 2738;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880315C8;
	sub_8813FDD8(ctx, base);
	// li r8,2739
	ctx.r8.s64 = 2739;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880315E4;
	sub_8813FDD8(ctx, base);
	// li r8,2740
	ctx.r8.s64 = 2740;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031600;
	sub_8813FDD8(ctx, base);
	// li r8,2741
	ctx.r8.s64 = 2741;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803161C;
	sub_8813FDD8(ctx, base);
	// li r8,2742
	ctx.r8.s64 = 2742;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031638;
	sub_8813FDD8(ctx, base);
	// li r8,2743
	ctx.r8.s64 = 2743;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031654;
	sub_8813FDD8(ctx, base);
	// li r8,2744
	ctx.r8.s64 = 2744;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031670;
	sub_8813FDD8(ctx, base);
	// li r8,2745
	ctx.r8.s64 = 2745;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x8803168C;
	sub_8813FDD8(ctx, base);
	// li r8,2746
	ctx.r8.s64 = 2746;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880316A8;
	sub_8813FDD8(ctx, base);
	// li r8,2747
	ctx.r8.s64 = 2747;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880316C4;
	sub_8813FDD8(ctx, base);
	// li r8,2748
	ctx.r8.s64 = 2748;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880316E0;
	sub_8813FDD8(ctx, base);
	// li r8,2749
	ctx.r8.s64 = 2749;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x880316FC;
	sub_8813FDD8(ctx, base);
	// li r8,2750
	ctx.r8.s64 = 2750;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8813fdd8
	ctx.lr = 0x88031718;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803171C:
	// addi r11,r31,2767
	ctx.r11.s64 = ctx.r31.s64 + 2767;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r5,r31,0,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFF0;
	// rlwinm r4,r31,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xF0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8813fdd8
	ctx.lr = 0x8803173C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,21
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 21, ctx.xer);
	// blt cr6,0x8803171c
	if (ctx.cr6.lt) goto loc_8803171C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,2808
	ctx.r31.s64 = 2808;
	// li r28,144
	ctx.r28.s64 = 144;
	// li r29,3
	ctx.r29.s64 = 3;
	// ori r26,r11,65533
	ctx.r26.u64 = ctx.r11.u64 | 65533;
loc_88031764:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// clrlwi r25,r30,16
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031788;
	sub_8813FDD8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880317A4;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880317C4;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// clrlwi r25,r27,16
	ctx.r25.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880317E8;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,9
	ctx.r8.s64 = ctx.r31.s64 + 9;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031808;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031828;
	sub_8813FDD8(ctx, base);
	// addi r6,r30,96
	ctx.r6.s64 = ctx.r30.s64 + 96;
	// addi r5,r31,15
	ctx.r5.s64 = ctx.r31.s64 + 15;
	// clrlwi r24,r6,16
	ctx.r24.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031850;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,18
	ctx.r4.s64 = ctx.r31.s64 + 18;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031870;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,21
	ctx.r3.s64 = ctx.r31.s64 + 21;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031890;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880318B0;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,27
	ctx.r10.s64 = ctx.r31.s64 + 27;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880318D0;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,30
	ctx.r9.s64 = ctx.r31.s64 + 30;
	// clrlwi r25,r28,16
	ctx.r25.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880318F4;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,33
	ctx.r8.s64 = ctx.r31.s64 + 33;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031914;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031934;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// bne 0x88031764
	if (!ctx.cr0.eq) goto loc_88031764;
	// li r31,2851
	ctx.r31.s64 = 2851;
	// li r26,48
	ctx.r26.s64 = 48;
	// li r27,96
	ctx.r27.s64 = 96;
	// li r28,48
	ctx.r28.s64 = 48;
	// li r30,96
	ctx.r30.s64 = 96;
	// li r29,4
	ctx.r29.s64 = 4;
loc_88031964:
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// clrlwi r25,r30,16
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031988;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880319A4;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880319C4;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,48
	ctx.r5.s64 = 48;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x880319E8;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,72
	ctx.r5.s64 = 72;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031A08;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8813fdd8
	ctx.lr = 0x88031A28;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// bne 0x88031964
	if (!ctx.cr0.eq) goto loc_88031964;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,2875
	ctx.r31.s64 = 2875;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r28,192
	ctx.r28.s64 = 192;
	// li r25,4
	ctx.r25.s64 = 4;
	// ori r22,r11,65440
	ctx.r22.u64 = ctx.r11.u64 | 65440;
	// ori r19,r10,65408
	ctx.r19.u64 = ctx.r10.u64 | 65408;
	// ori r27,r9,65504
	ctx.r27.u64 = ctx.r9.u64 | 65504;
	// ori r29,r8,65472
	ctx.r29.u64 = ctx.r8.u64 | 65472;
	// ori r21,r7,65344
	ctx.r21.u64 = ctx.r7.u64 | 65344;
loc_88031A84:
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031AA4;
	sub_8813FDD8(ctx, base);
	// addi r23,r28,-64
	ctx.r23.s64 = ctx.r28.s64 + -64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// add r10,r23,r22
	ctx.r10.u64 = ctx.r23.u64 + ctx.r22.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031AC8;
	sub_8813FDD8(ctx, base);
	// add r9,r30,r19
	ctx.r9.u64 = ctx.r30.u64 + ctx.r19.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// clrlwi r16,r9,16
	ctx.r16.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031AF0;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// clrlwi r15,r28,16
	ctx.r15.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031B14;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031B34;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031B54;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031B74;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// clrlwi r4,r23,16
	ctx.r4.u64 = ctx.r23.u32 & 0xFFFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031B94;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031BB4;
	sub_8813FDD8(ctx, base);
	// clrlwi r23,r24,16
	ctx.r23.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031BD8;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031BF8;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031C18;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031C38;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031C58;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031C78;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,232
	ctx.r5.s64 = 232;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031C98;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// clrlwi r16,r30,16
	ctx.r16.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031CBC;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031CDC;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031CFC;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031D1C;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,76
	ctx.r7.s64 = ctx.r31.s64 + 76;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031D3C;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031D5C;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031D7C;
	sub_8813FDD8(ctx, base);
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// clrlwi r16,r4,16
	ctx.r16.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031DA4;
	sub_8813FDD8(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// clrlwi r15,r11,16
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031DCC;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031DEC;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031E0C;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,88
	ctx.r5.s64 = 88;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88031E30;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,88
	ctx.r5.s64 = 88;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88031E54;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88031E74;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88031E94;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88031EB4;
	sub_8813FDD8(ctx, base);
	// addi r7,r31,136
	ctx.r7.s64 = ctx.r31.s64 + 136;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031ED4;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,140
	ctx.r6.s64 = ctx.r31.s64 + 140;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031EF4;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// add r4,r28,r21
	ctx.r4.u64 = ctx.r28.u64 + ctx.r21.u64;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,248
	ctx.r5.s64 = 248;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031F18;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031F38;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031F58;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,156
	ctx.r10.s64 = ctx.r31.s64 + 156;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031F78;
	sub_8813FDD8(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// bne 0x88031a84
	if (!ctx.cr0.eq) goto loc_88031A84;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,2969
	ctx.r31.s64 = 2969;
	// li r30,192
	ctx.r30.s64 = 192;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r26,r11,65534
	ctx.r26.u64 = ctx.r11.u64 | 65534;
loc_88031FA8:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// clrlwi r25,r30,16
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031FCC;
	sub_8813FDD8(ctx, base);
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8813fdd8
	ctx.lr = 0x88031FF0;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,26
	ctx.r9.s64 = ctx.r31.s64 + 26;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032010;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032030;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,38
	ctx.r6.s64 = ctx.r31.s64 + 38;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032050;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,184
	ctx.r5.s64 = 184;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032074;
	sub_8813FDD8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x88031fa8
	if (!ctx.cr0.eq) goto loc_88031FA8;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,3039
	ctx.r31.s64 = 3039;
	// li r22,64
	ctx.r22.s64 = 64;
	// li r30,64
	ctx.r30.s64 = 64;
	// li r26,4
	ctx.r26.s64 = 4;
loc_880320A4:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r10,r31,r20
	ctx.r10.u64 = ctx.r31.u64 + ctx.r20.u64;
	// clrlwi r21,r11,16
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x880320CC;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x880320E8;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x8803210C;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x8803212C;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032150;
	sub_8813FDD8(ctx, base);
	// addi r21,r28,192
	ctx.r21.s64 = ctx.r28.s64 + 192;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// add r4,r21,r29
	ctx.r4.u64 = ctx.r21.u64 + ctx.r29.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032178;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r21,16
	ctx.r4.u64 = ctx.r21.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032198;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// clrlwi r21,r28,16
	ctx.r21.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x880321BC;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x880321DC;
	sub_8813FDD8(ctx, base);
	// clrlwi r21,r25,16
	ctx.r21.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032200;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032220;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,184
	ctx.r5.s64 = 184;
	// clrlwi r4,r24,16
	ctx.r4.u64 = ctx.r24.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032240;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r23,16
	ctx.r4.u64 = ctx.r23.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032260;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// clrlwi r4,r22,16
	ctx.r4.u64 = ctx.r22.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8813fdd8
	ctx.lr = 0x88032280;
	sub_8813FDD8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// addi r22,r22,48
	ctx.r22.s64 = ctx.r22.s64 + 48;
	// bne 0x880320a4
	if (!ctx.cr0.eq) goto loc_880320A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,3123
	ctx.r31.s64 = 3123;
	// li r28,248
	ctx.r28.s64 = 248;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r30,32
	ctx.r30.s64 = 32;
	// ori r26,r11,65528
	ctx.r26.u64 = ctx.r11.u64 | 65528;
loc_880322BC:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r25,r29,16
	ctx.r25.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r24,r28,16
	ctx.r24.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880322E4;
	sub_8813FDD8(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032300;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032320;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032340;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032360;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032380;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880323A0;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880323C0;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880323E0;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032400;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,288
	ctx.r9.s64 = ctx.r31.s64 + 288;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032420;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,320
	ctx.r8.s64 = ctx.r31.s64 + 320;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032440;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,352
	ctx.r6.s64 = ctx.r31.s64 + 352;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032460;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032480;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880324A0;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880324C0;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,480
	ctx.r10.s64 = ctx.r31.s64 + 480;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880324E0;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,512
	ctx.r9.s64 = ctx.r31.s64 + 512;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032500;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,544
	ctx.r8.s64 = ctx.r31.s64 + 544;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032520;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,576
	ctx.r6.s64 = ctx.r31.s64 + 576;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032540;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,608
	ctx.r4.s64 = ctx.r31.s64 + 608;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032560;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032580;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880325A0;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,704
	ctx.r10.s64 = ctx.r31.s64 + 704;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880325C0;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,736
	ctx.r9.s64 = ctx.r31.s64 + 736;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880325E0;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,768
	ctx.r8.s64 = ctx.r31.s64 + 768;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032600;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,800
	ctx.r6.s64 = ctx.r31.s64 + 800;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032620;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032640;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032660;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,11495
	ctx.r11.s64 = ctx.r31.s64 + 11495;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x88032680;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,11527
	ctx.r10.s64 = ctx.r31.s64 + 11527;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880326A0;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,11559
	ctx.r9.s64 = ctx.r31.s64 + 11559;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,248
	ctx.r4.s64 = 248;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8813fdd8
	ctx.lr = 0x880326C0;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,11591
	ctx.r8.s64 = ctx.r31.s64 + 11591;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880326E0;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,11623
	ctx.r6.s64 = ctx.r31.s64 + 11623;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032700;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,11655
	ctx.r4.s64 = ctx.r31.s64 + 11655;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032720;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,11687
	ctx.r3.s64 = ctx.r31.s64 + 11687;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032740;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,11719
	ctx.r11.s64 = ctx.r31.s64 + 11719;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032760;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,11751
	ctx.r10.s64 = ctx.r31.s64 + 11751;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032780;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,11783
	ctx.r9.s64 = ctx.r31.s64 + 11783;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880327A0;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,11815
	ctx.r8.s64 = ctx.r31.s64 + 11815;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880327C0;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,11847
	ctx.r6.s64 = ctx.r31.s64 + 11847;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880327E0;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,11879
	ctx.r4.s64 = ctx.r31.s64 + 11879;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032800;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,11911
	ctx.r3.s64 = ctx.r31.s64 + 11911;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032820;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,11943
	ctx.r11.s64 = ctx.r31.s64 + 11943;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032840;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,11975
	ctx.r10.s64 = ctx.r31.s64 + 11975;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032860;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,12007
	ctx.r9.s64 = ctx.r31.s64 + 12007;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032880;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,12039
	ctx.r8.s64 = ctx.r31.s64 + 12039;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880328A0;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,12071
	ctx.r6.s64 = ctx.r31.s64 + 12071;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880328C0;
	sub_8813FDD8(ctx, base);
	// addi r4,r31,12103
	ctx.r4.s64 = ctx.r31.s64 + 12103;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880328E0;
	sub_8813FDD8(ctx, base);
	// addi r3,r31,12135
	ctx.r3.s64 = ctx.r31.s64 + 12135;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032900;
	sub_8813FDD8(ctx, base);
	// addi r11,r31,12167
	ctx.r11.s64 = ctx.r31.s64 + 12167;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032920;
	sub_8813FDD8(ctx, base);
	// addi r10,r31,12199
	ctx.r10.s64 = ctx.r31.s64 + 12199;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032940;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,12231
	ctx.r9.s64 = ctx.r31.s64 + 12231;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032960;
	sub_8813FDD8(ctx, base);
	// addi r8,r31,12263
	ctx.r8.s64 = ctx.r31.s64 + 12263;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x88032980;
	sub_8813FDD8(ctx, base);
	// addi r6,r31,12295
	ctx.r6.s64 = ctx.r31.s64 + 12295;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880329A0;
	sub_8813FDD8(ctx, base);
	// addi r5,r31,12327
	ctx.r5.s64 = ctx.r31.s64 + 12327;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,881
	ctx.r3.s64 = 881;
	// bl 0x8813fdd8
	ctx.lr = 0x880329C0;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bne 0x880322bc
	if (!ctx.cr0.eq) goto loc_880322BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,4068
	ctx.r31.s64 = 4068;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_880329EC:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r26,r29,16
	ctx.r26.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8813fdd8
	ctx.lr = 0x88032A10;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8813fdd8
	ctx.lr = 0x88032A2C;
	sub_8813FDD8(ctx, base);
	// addi r10,r30,4075
	ctx.r10.s64 = ctx.r30.s64 + 4075;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8813fdd8
	ctx.lr = 0x88032A4C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpwi cr6,r31,4076
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4076, ctx.xer);
	// blt cr6,0x880329ec
	if (ctx.cr6.lt) goto loc_880329EC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88032A6C:
	// subfic r11,r30,4034
	ctx.xer.ca = ctx.r30.u32 <= 4034;
	ctx.r11.u64 = static_cast<uint64_t>(4034) - ctx.r30.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,176
	ctx.r5.s64 = 176;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8813fdd8
	ctx.lr = 0x88032A8C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88032a6c
	if (ctx.cr6.lt) goto loc_88032A6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88032AA4:
	// subfic r11,r30,4050
	ctx.xer.ca = ctx.r30.u32 <= 4050;
	ctx.r11.u64 = static_cast<uint64_t>(4050) - ctx.r30.u64;
	// clrlwi r29,r31,16
	ctx.r29.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8813fdd8
	ctx.lr = 0x88032AC8;
	sub_8813FDD8(ctx, base);
	// subfic r10,r30,4042
	ctx.xer.ca = ctx.r30.u32 <= 4042;
	ctx.r10.u64 = static_cast<uint64_t>(4042) - ctx.r30.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8813fdd8
	ctx.lr = 0x88032AE8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88032aa4
	if (ctx.cr6.lt) goto loc_88032AA4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_88032B00:
	// subfic r11,r31,4066
	ctx.xer.ca = ctx.r31.u32 <= 4066;
	ctx.r11.u64 = static_cast<uint64_t>(4066) - ctx.r31.u64;
	// clrlwi r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8813fdd8
	ctx.lr = 0x88032B24;
	sub_8813FDD8(ctx, base);
	// subfic r10,r31,4062
	ctx.xer.ca = ctx.r31.u32 <= 4062;
	ctx.r10.u64 = static_cast<uint64_t>(4062) - ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x8813fdd8
	ctx.lr = 0x88032B44;
	sub_8813FDD8(ctx, base);
	// subfic r9,r31,4058
	ctx.xer.ca = ctx.r31.u32 <= 4058;
	ctx.r9.u64 = static_cast<uint64_t>(4058) - ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8813fdd8
	ctx.lr = 0x88032B64;
	sub_8813FDD8(ctx, base);
	// subfic r8,r31,4054
	ctx.xer.ca = ctx.r31.u32 <= 4054;
	ctx.r8.u64 = static_cast<uint64_t>(4054) - ctx.r31.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x8813fdd8
	ctx.lr = 0x88032B84;
	sub_8813FDD8(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x88032b00
	if (ctx.cr6.lt) goto loc_88032B00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88032B98:
	// mulhwu r11,r31,r17
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r17.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r11,r31,r18
	ctx.r11.u64 = uint32_t(ctx.r18.u32 ? ctx.r31.u32 / ctx.r18.u32 : 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r31,4079
	ctx.r7.s64 = ctx.r31.s64 + 4079;
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,24
	ctx.r7.s64 = 24;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r4,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFF8;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8813fdd8
	ctx.lr = 0x88032BE4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x88032b98
	if (ctx.cr6.lt) goto loc_88032B98;
	// li r8,4127
	ctx.r8.s64 = 4127;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C0C;
	sub_8813FDD8(ctx, base);
	// li r8,4128
	ctx.r8.s64 = 4128;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C28;
	sub_8813FDD8(ctx, base);
	// li r8,4129
	ctx.r8.s64 = 4129;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C44;
	sub_8813FDD8(ctx, base);
	// li r8,4130
	ctx.r8.s64 = 4130;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C60;
	sub_8813FDD8(ctx, base);
	// li r8,4131
	ctx.r8.s64 = 4131;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C7C;
	sub_8813FDD8(ctx, base);
	// li r8,4132
	ctx.r8.s64 = 4132;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x88032C98;
	sub_8813FDD8(ctx, base);
	// li r8,4133
	ctx.r8.s64 = 4133;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8813fdd8
	ctx.lr = 0x88032CB4;
	sub_8813FDD8(ctx, base);
	// li r8,4134
	ctx.r8.s64 = 4134;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x88032CD0;
	sub_8813FDD8(ctx, base);
	// li r8,4135
	ctx.r8.s64 = 4135;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x88032CEC;
	sub_8813FDD8(ctx, base);
	// li r8,4136
	ctx.r8.s64 = 4136;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D08;
	sub_8813FDD8(ctx, base);
	// li r8,4137
	ctx.r8.s64 = 4137;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D24;
	sub_8813FDD8(ctx, base);
	// li r8,4138
	ctx.r8.s64 = 4138;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D40;
	sub_8813FDD8(ctx, base);
	// li r8,4139
	ctx.r8.s64 = 4139;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D5C;
	sub_8813FDD8(ctx, base);
	// li r8,4140
	ctx.r8.s64 = 4140;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D78;
	sub_8813FDD8(ctx, base);
	// li r8,4141
	ctx.r8.s64 = 4141;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8813fdd8
	ctx.lr = 0x88032D94;
	sub_8813FDD8(ctx, base);
	// li r8,4142
	ctx.r8.s64 = 4142;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8813fdd8
	ctx.lr = 0x88032DB0;
	sub_8813FDD8(ctx, base);
	// li r8,4143
	ctx.r8.s64 = 4143;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8813fdd8
	ctx.lr = 0x88032DCC;
	sub_8813FDD8(ctx, base);
	// li r8,4144
	ctx.r8.s64 = 4144;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8813fdd8
	ctx.lr = 0x88032DE8;
	sub_8813FDD8(ctx, base);
	// li r8,4145
	ctx.r8.s64 = 4145;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E04;
	sub_8813FDD8(ctx, base);
	// li r8,4146
	ctx.r8.s64 = 4146;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E20;
	sub_8813FDD8(ctx, base);
	// li r8,4147
	ctx.r8.s64 = 4147;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E3C;
	sub_8813FDD8(ctx, base);
	// li r8,4148
	ctx.r8.s64 = 4148;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E58;
	sub_8813FDD8(ctx, base);
	// li r8,4149
	ctx.r8.s64 = 4149;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E74;
	sub_8813FDD8(ctx, base);
	// li r8,4150
	ctx.r8.s64 = 4150;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x8813fdd8
	ctx.lr = 0x88032E90;
	sub_8813FDD8(ctx, base);
	// li r8,4151
	ctx.r8.s64 = 4151;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x8813fdd8
	ctx.lr = 0x88032EAC;
	sub_8813FDD8(ctx, base);
	// li r8,4152
	ctx.r8.s64 = 4152;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x8813fdd8
	ctx.lr = 0x88032EC8;
	sub_8813FDD8(ctx, base);
	// li r8,4153
	ctx.r8.s64 = 4153;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8813fdd8
	ctx.lr = 0x88032EE4;
	sub_8813FDD8(ctx, base);
	// li r8,4154
	ctx.r8.s64 = 4154;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F00;
	sub_8813FDD8(ctx, base);
	// li r8,4155
	ctx.r8.s64 = 4155;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F1C;
	sub_8813FDD8(ctx, base);
	// li r8,4156
	ctx.r8.s64 = 4156;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F38;
	sub_8813FDD8(ctx, base);
	// li r8,4157
	ctx.r8.s64 = 4157;
	// li r7,176
	ctx.r7.s64 = 176;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F54;
	sub_8813FDD8(ctx, base);
	// li r8,10337
	ctx.r8.s64 = 10337;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F70;
	sub_8813FDD8(ctx, base);
	// li r8,10338
	ctx.r8.s64 = 10338;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032F8C;
	sub_8813FDD8(ctx, base);
	// li r8,10339
	ctx.r8.s64 = 10339;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032FA8;
	sub_8813FDD8(ctx, base);
	// li r8,10340
	ctx.r8.s64 = 10340;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032FC4;
	sub_8813FDD8(ctx, base);
	// li r8,10341
	ctx.r8.s64 = 10341;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032FE0;
	sub_8813FDD8(ctx, base);
	// li r8,10342
	ctx.r8.s64 = 10342;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88032FFC;
	sub_8813FDD8(ctx, base);
	// li r8,10343
	ctx.r8.s64 = 10343;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88033018;
	sub_8813FDD8(ctx, base);
	// li r8,10344
	ctx.r8.s64 = 10344;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88033034;
	sub_8813FDD8(ctx, base);
	// li r8,10345
	ctx.r8.s64 = 10345;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88033050;
	sub_8813FDD8(ctx, base);
	// li r8,10346
	ctx.r8.s64 = 10346;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x8803306C;
	sub_8813FDD8(ctx, base);
	// li r8,10347
	ctx.r8.s64 = 10347;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88033088;
	sub_8813FDD8(ctx, base);
	// li r8,10348
	ctx.r8.s64 = 10348;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x880330A4;
	sub_8813FDD8(ctx, base);
	// li r8,10349
	ctx.r8.s64 = 10349;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x880330C0;
	sub_8813FDD8(ctx, base);
	// li r8,10350
	ctx.r8.s64 = 10350;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x880330DC;
	sub_8813FDD8(ctx, base);
	// li r8,10351
	ctx.r8.s64 = 10351;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x880330F8;
	sub_8813FDD8(ctx, base);
	// li r8,10352
	ctx.r8.s64 = 10352;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x88033114;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8803311C:
	// addi r11,r30,10353
	ctx.r11.s64 = ctx.r30.s64 + 10353;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,208
	ctx.r5.s64 = 208;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x8813fdd8
	ctx.lr = 0x8803313C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8803311c
	if (ctx.cr6.lt) goto loc_8803311C;
	// li r8,4158
	ctx.r8.s64 = 4158;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033168;
	sub_8813FDD8(ctx, base);
	// li r8,4159
	ctx.r8.s64 = 4159;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033184;
	sub_8813FDD8(ctx, base);
	// li r8,4160
	ctx.r8.s64 = 4160;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880331A0;
	sub_8813FDD8(ctx, base);
	// li r8,4161
	ctx.r8.s64 = 4161;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880331BC;
	sub_8813FDD8(ctx, base);
	// li r8,4162
	ctx.r8.s64 = 4162;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880331D8;
	sub_8813FDD8(ctx, base);
	// li r8,4163
	ctx.r8.s64 = 4163;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880331F4;
	sub_8813FDD8(ctx, base);
	// li r8,4164
	ctx.r8.s64 = 4164;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033210;
	sub_8813FDD8(ctx, base);
	// li r8,4165
	ctx.r8.s64 = 4165;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x8803322C;
	sub_8813FDD8(ctx, base);
	// li r8,4166
	ctx.r8.s64 = 4166;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033248;
	sub_8813FDD8(ctx, base);
	// li r8,4167
	ctx.r8.s64 = 4167;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033264;
	sub_8813FDD8(ctx, base);
	// li r8,4168
	ctx.r8.s64 = 4168;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x88033280;
	sub_8813FDD8(ctx, base);
	// li r8,4169
	ctx.r8.s64 = 4169;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x8803329C;
	sub_8813FDD8(ctx, base);
	// li r8,4170
	ctx.r8.s64 = 4170;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880332B8;
	sub_8813FDD8(ctx, base);
	// li r8,4171
	ctx.r8.s64 = 4171;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880332D4;
	sub_8813FDD8(ctx, base);
	// li r8,4172
	ctx.r8.s64 = 4172;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x880332F0;
	sub_8813FDD8(ctx, base);
	// li r8,4173
	ctx.r8.s64 = 4173;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8813fdd8
	ctx.lr = 0x8803330C;
	sub_8813FDD8(ctx, base);
	// li r8,4174
	ctx.r8.s64 = 4174;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x88033328;
	sub_8813FDD8(ctx, base);
	// li r8,4175
	ctx.r8.s64 = 4175;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x88033344;
	sub_8813FDD8(ctx, base);
	// li r8,4176
	ctx.r8.s64 = 4176;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x88033360;
	sub_8813FDD8(ctx, base);
	// li r8,4177
	ctx.r8.s64 = 4177;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x8803337C;
	sub_8813FDD8(ctx, base);
	// li r8,4178
	ctx.r8.s64 = 4178;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x88033398;
	sub_8813FDD8(ctx, base);
	// li r8,4179
	ctx.r8.s64 = 4179;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x880333B4;
	sub_8813FDD8(ctx, base);
	// li r8,4180
	ctx.r8.s64 = 4180;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x880333D0;
	sub_8813FDD8(ctx, base);
	// li r8,4181
	ctx.r8.s64 = 4181;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8813fdd8
	ctx.lr = 0x880333EC;
	sub_8813FDD8(ctx, base);
	// li r8,4182
	ctx.r8.s64 = 4182;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033408;
	sub_8813FDD8(ctx, base);
	// li r8,4183
	ctx.r8.s64 = 4183;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033424;
	sub_8813FDD8(ctx, base);
	// li r8,4184
	ctx.r8.s64 = 4184;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033440;
	sub_8813FDD8(ctx, base);
	// li r8,4185
	ctx.r8.s64 = 4185;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x8803345C;
	sub_8813FDD8(ctx, base);
	// li r8,4186
	ctx.r8.s64 = 4186;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033478;
	sub_8813FDD8(ctx, base);
	// li r8,4187
	ctx.r8.s64 = 4187;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033494;
	sub_8813FDD8(ctx, base);
	// li r8,4188
	ctx.r8.s64 = 4188;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x880334B0;
	sub_8813FDD8(ctx, base);
	// li r8,4189
	ctx.r8.s64 = 4189;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x880334CC;
	sub_8813FDD8(ctx, base);
	// li r8,4190
	ctx.r8.s64 = 4190;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x880334E8;
	sub_8813FDD8(ctx, base);
	// li r8,4191
	ctx.r8.s64 = 4191;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033504;
	sub_8813FDD8(ctx, base);
	// li r8,4192
	ctx.r8.s64 = 4192;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8813fdd8
	ctx.lr = 0x88033520;
	sub_8813FDD8(ctx, base);
	// li r8,4193
	ctx.r8.s64 = 4193;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x8803353C;
	sub_8813FDD8(ctx, base);
	// li r8,4194
	ctx.r8.s64 = 4194;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x88033558;
	sub_8813FDD8(ctx, base);
	// li r8,4195
	ctx.r8.s64 = 4195;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x88033574;
	sub_8813FDD8(ctx, base);
	// li r8,4196
	ctx.r8.s64 = 4196;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x88033590;
	sub_8813FDD8(ctx, base);
	// li r8,4197
	ctx.r8.s64 = 4197;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x880335AC;
	sub_8813FDD8(ctx, base);
	// li r8,4198
	ctx.r8.s64 = 4198;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x880335C8;
	sub_8813FDD8(ctx, base);
	// li r8,4199
	ctx.r8.s64 = 4199;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x880335E4;
	sub_8813FDD8(ctx, base);
	// li r8,4200
	ctx.r8.s64 = 4200;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8813fdd8
	ctx.lr = 0x88033600;
	sub_8813FDD8(ctx, base);
	// li r8,4201
	ctx.r8.s64 = 4201;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8813fdd8
	ctx.lr = 0x8803361C;
	sub_8813FDD8(ctx, base);
	// li r8,4202
	ctx.r8.s64 = 4202;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8813fdd8
	ctx.lr = 0x88033638;
	sub_8813FDD8(ctx, base);
	// li r8,4203
	ctx.r8.s64 = 4203;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8813fdd8
	ctx.lr = 0x88033654;
	sub_8813FDD8(ctx, base);
	// li r8,4204
	ctx.r8.s64 = 4204;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x88033670;
	sub_8813FDD8(ctx, base);
	// li r8,4205
	ctx.r8.s64 = 4205;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x8803368C;
	sub_8813FDD8(ctx, base);
	// li r8,4206
	ctx.r8.s64 = 4206;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x880336A8;
	sub_8813FDD8(ctx, base);
	// li r8,4207
	ctx.r8.s64 = 4207;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x880336C4;
	sub_8813FDD8(ctx, base);
	// li r8,4208
	ctx.r8.s64 = 4208;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x880336E0;
	sub_8813FDD8(ctx, base);
	// li r8,4209
	ctx.r8.s64 = 4209;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x880336FC;
	sub_8813FDD8(ctx, base);
	// li r8,4210
	ctx.r8.s64 = 4210;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x88033718;
	sub_8813FDD8(ctx, base);
	// li r8,4211
	ctx.r8.s64 = 4211;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8813fdd8
	ctx.lr = 0x88033734;
	sub_8813FDD8(ctx, base);
	// li r8,4212
	ctx.r8.s64 = 4212;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x88033750;
	sub_8813FDD8(ctx, base);
	// li r8,4213
	ctx.r8.s64 = 4213;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x8803376C;
	sub_8813FDD8(ctx, base);
	// li r8,4214
	ctx.r8.s64 = 4214;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x88033788;
	sub_8813FDD8(ctx, base);
	// li r8,4215
	ctx.r8.s64 = 4215;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x880337A4;
	sub_8813FDD8(ctx, base);
	// li r8,4216
	ctx.r8.s64 = 4216;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x880337C0;
	sub_8813FDD8(ctx, base);
	// li r8,4217
	ctx.r8.s64 = 4217;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x880337DC;
	sub_8813FDD8(ctx, base);
	// li r8,4218
	ctx.r8.s64 = 4218;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x880337F8;
	sub_8813FDD8(ctx, base);
	// li r8,4219
	ctx.r8.s64 = 4219;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8813fdd8
	ctx.lr = 0x88033814;
	sub_8813FDD8(ctx, base);
	// li r8,4220
	ctx.r8.s64 = 4220;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8813fdd8
	ctx.lr = 0x88033830;
	sub_8813FDD8(ctx, base);
	// li r8,4221
	ctx.r8.s64 = 4221;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8813fdd8
	ctx.lr = 0x8803384C;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_88033850:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// rlwinm r10,r31,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r8,r31,4095
	ctx.r8.s64 = ctx.r31.s64 + 4095;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r3,23
	ctx.r3.s64 = 23;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r4,r9,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// bl 0x8813fdd8
	ctx.lr = 0x88033880;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x88033850
	if (ctx.cr6.lt) goto loc_88033850;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88033890:
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// addi r9,r31,4111
	ctx.r9.s64 = ctx.r31.s64 + 4111;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// rlwinm r5,r10,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFF8;
	// li r3,23
	ctx.r3.s64 = 23;
	// rlwinm r4,r11,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFF8;
	// bl 0x8813fdd8
	ctx.lr = 0x880338C0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x88033890
	if (ctx.cr6.lt) goto loc_88033890;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fa4
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071E68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88071E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88071E7C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88071E88;
	sub_88024030(ctx, base);
	// lis r28,-30608
	ctx.r28.s64 = -2005925888;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,21860(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88071f14
	if (!ctx.cr6.eq) goto loc_88071F14;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88071EB0;
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
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88071EDC;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x88071EF4;
	sub_88024460(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x88071f14
	if (ctx.cr6.eq) goto loc_88071F14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_88071F14:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88071f3c
	if (!ctx.cr6.lt) goto loc_88071F3C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88071F2C;
	sub_88022BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88071F34;
	sub_88023F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88071F3C:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// stw r10,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lhz r9,154(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88071f8c
	if (ctx.cr6.eq) goto loc_88071F8C;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r11,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// beq cr6,0x88071fb8
	if (ctx.cr6.eq) goto loc_88071FB8;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x88071fb4
	goto loc_88071FB4;
loc_88071F8C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x88071fb8
	if (!ctx.cr6.lt) goto loc_88071FB8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88071fb8
	if (!ctx.cr6.eq) goto loc_88071FB8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_88071FB4:
	// stw r10,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
loc_88071FB8:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88071fec
	if (ctx.cr6.lt) goto loc_88071FEC;
	// bne cr6,0x88072030
	if (!ctx.cr6.eq) goto loc_88072030;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071b20
	ctx.lr = 0x88071FD4;
	sub_88071B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88072030
	if (!ctx.cr6.eq) goto loc_88072030;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88071FE4;
	sub_88023F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88071FEC:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21860(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 21860);
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8807200c
	if (!ctx.cr0.eq) goto loc_8807200C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071890
	ctx.lr = 0x8807200C;
	sub_88071890(ctx, base);
loc_8807200C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r10,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// bl 0x88018b98
	ctx.lr = 0x88072030;
	sub_88018B98(ctx, base);
loc_88072030:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r10,-16896
	ctx.r8.s64 = ctx.r10.s64 + -16896;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r29,r7,r8
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// beq cr6,0x88072090
	if (ctx.cr6.eq) goto loc_88072090;
	// bl 0x88024490
	ctx.lr = 0x88072058;
	sub_88024490(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024488
	ctx.lr = 0x88072068;
	sub_88024488(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r29,9824
	ctx.r3.s64 = ctx.r29.s64 + 9824;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88072080;
	sub_8801A9C8(ctx, base);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8813ff48
	ctx.lr = 0x88072088;
	sub_8813FF48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88072090:
	// bl 0x88024490
	ctx.lr = 0x88072094;
	sub_88024490(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024488
	ctx.lr = 0x880720A4;
	sub_88024488(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r29,9832
	ctx.r3.s64 = ctx.r29.s64 + 9832;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880720BC;
	sub_8801A9C8(ctx, base);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8813ff48
	ctx.lr = 0x880720C4;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024490
	ctx.lr = 0x880720CC;
	sub_88024490(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r8,r9,-40
	ctx.r8.s64 = ctx.r9.s64 + -2621440;
	// add r29,r3,r8
	ctx.r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024488
	ctx.lr = 0x880720E0;
	sub_88024488(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// li r3,9840
	ctx.r3.s64 = 9840;
	// addis r4,r6,13
	ctx.r4.s64 = ctx.r6.s64 + 851968;
	// addi r6,r27,-10
	ctx.r6.s64 = ctx.r27.s64 + -10;
	// bl 0x8801a9c8
	ctx.lr = 0x880720FC;
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
	ctx.lr = 0x88072110;
	sub_8813FF90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88074EA0) {
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
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88024758
	ctx.lr = 0x88074ED4;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88074f14
	if (!ctx.cr6.eq) goto loc_88074F14;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88074efc
	if (!ctx.cr6.eq) goto loc_88074EFC;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// blt cr6,0x88074f1c
	if (ctx.cr6.lt) goto loc_88074F1C;
loc_88074EFC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88074F04;
	sub_88022BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88074F0C;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88074f6c
	goto loc_88074F6C;
loc_88074F14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_88074F1C:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// ori r9,r10,32896
	ctx.r9.u64 = ctx.r10.u64 | 32896;
	// stw r9,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// lhz r8,110(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88074f68
	if (ctx.cr6.eq) goto loc_88074F68;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// beq cr6,0x88074f68
	if (ctx.cr6.eq) goto loc_88074F68;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
loc_88074F68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88074F6C:
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

DEFINE_REX_FUNC(sub_880758F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88075900;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807590C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88074ea0
	ctx.lr = 0x8807591C;
	sub_88074EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88075bb8
	if (ctx.cr6.eq) goto loc_88075BB8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88075bac
	if (!ctx.cr6.eq) goto loc_88075BAC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88075948;
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
	ctx.lr = 0x88075974;
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
	// bne cr6,0x88075b2c
	if (!ctx.cr6.eq) goto loc_88075B2C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88075a08
	if (ctx.cr6.eq) goto loc_88075A08;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x88075a08
	if (!ctx.cr0.lt) goto loc_88075A08;
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
	// bgt 0x88075a08
	if (ctx.cr0.gt) goto loc_88075A08;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// beq cr6,0x88075a08
	if (ctx.cr6.eq) goto loc_88075A08;
	// li r9,32
	ctx.r9.s64 = 32;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// bge cr6,0x88075a08
	if (!ctx.cr6.lt) goto loc_88075A08;
	// li r11,-32
	ctx.r11.s64 = -32;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_88075A08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880244d0
	ctx.lr = 0x88075A14;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88075a30
	if (ctx.cr6.lt) goto loc_88075A30;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88075A28;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_88075A30:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075a58
	if (!ctx.cr6.eq) goto loc_88075A58;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88074f88
	ctx.lr = 0x88075A50;
	sub_88074F88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88075A58:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075bac
	if (!ctx.cr6.eq) goto loc_88075BAC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x88075bac
	if (!ctx.cr0.lt) goto loc_88075BAC;
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
	// rlwinm r10,r11,29,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r9,r10,38
	ctx.xer.ca = ctx.r10.u32 <= 38;
	ctx.r9.u64 = static_cast<uint64_t>(38) - ctx.r10.u64;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bl 0x880244d0
	ctx.lr = 0x88075A98;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88075bac
	if (ctx.cr6.lt) goto loc_88075BAC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88075bac
	if (!ctx.cr6.eq) goto loc_88075BAC;
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
	// addi r11,r10,-5656
	ctx.r11.s64 = ctx.r10.s64 + -5656;
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
	ctx.lr = 0x88075AF4;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88075bac
	if (ctx.cr6.eq) goto loc_88075BAC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
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
	ctx.lr = 0x88075B18;
	sub_88074C28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88074f88
	ctx.lr = 0x88075B24;
	sub_88074F88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88075B2C:
	// cmpwi cr6,r10,56
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 56, ctx.xer);
	// bge cr6,0x88075b54
	if (!ctx.cr6.lt) goto loc_88075B54;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x88075b54
	if (!ctx.cr0.lt) goto loc_88075B54;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_88075B54:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88075bac
	if (!ctx.cr6.eq) goto loc_88075BAC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88075bac
	if (!ctx.cr0.lt) goto loc_88075BAC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r6,r8,0,23,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E0;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// bne cr6,0x88075bac
	if (!ctx.cr6.eq) goto loc_88075BAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_88075BAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88074f88
	ctx.lr = 0x88075BB8;
	sub_88074F88(ctx, base);
loc_88075BB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880784B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f58
	ctx.lr = 0x880784C0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880784CC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88024030
	ctx.lr = 0x880784D8;
	sub_88024030(ctx, base);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// addi r18,r31,148
	ctx.r18.s64 = ctx.r31.s64 + 148;
	// stw r10,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88078518
	if (ctx.cr6.eq) goto loc_88078518;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r18)
	REX_STORE_U16(ctx.r18.u32 + 2, ctx.r9.u16);
loc_88078518:
	// lhz r11,82(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88078538
	if (ctx.cr6.eq) goto loc_88078538;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r18)
	REX_STORE_U16(ctx.r18.u32 + 82, ctx.r10.u16);
	// b 0x88078540
	goto loc_88078540;
loc_88078538:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88078564
	if (ctx.cr6.eq) goto loc_88078564;
loc_88078540:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// beq cr6,0x88078590
	if (ctx.cr6.eq) goto loc_88078590;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x8807858c
	goto loc_8807858C;
loc_88078564:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// bge cr6,0x88078590
	if (!ctx.cr6.lt) goto loc_88078590;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88078590
	if (!ctx.cr6.eq) goto loc_88078590;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_8807858C:
	// stw r10,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
loc_88078590:
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// lis r17,1
	ctx.r17.s64 = 65536;
	// addi r30,r11,-4720
	ctx.r30.s64 = ctx.r11.s64 + -4720;
	// lwz r11,21860(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88078b2c
	if (!ctx.cr6.eq) goto loc_88078B2C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x880785C0;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x880785EC;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x88078604;
	sub_88024460(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88024758
	ctx.lr = 0x88078624;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88078650
	if (!ctx.cr6.eq) goto loc_88078650;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88078654
	if (ctx.cr6.eq) goto loc_88078654;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88078640;
	sub_88022BE0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88023f48
	ctx.lr = 0x88078648;
	sub_88023F48(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
loc_88078650:
	// stw r16,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r16.u32);
loc_88078654:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88078668
	if (ctx.cr6.eq) goto loc_88078668;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_88078668:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880786a8
	if (!ctx.cr6.eq) goto loc_880786A8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -131072;
	// subf r4,r17,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r17.u64;
	// bl 0x880244d0
	ctx.lr = 0x8807868C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880786a8
	if (ctx.cr6.lt) goto loc_880786A8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8801a808
	ctx.lr = 0x880786A0;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_880786A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x88078724
	if (!ctx.cr6.gt) goto loc_88078724;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// addi r7,r30,424
	ctx.r7.s64 = ctx.r30.s64 + 424;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// addi r5,r30,424
	ctx.r5.s64 = ctx.r30.s64 + 424;
	// lwzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r8,r3,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r3,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// subf r25,r4,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r26,r8,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r28,r5,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r27,r4,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r4.u64;
	// b 0x88078780
	goto loc_88078780;
loc_88078724:
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r30,424
	ctx.r6.s64 = ctx.r30.s64 + 424;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// addi r6,r30,424
	ctx.r6.s64 = ctx.r30.s64 + 424;
	// lwzx r8,r5,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r11,r5,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// subf r27,r25,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r25.u64;
	// add r28,r7,r9
	ctx.r28.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r25,r25,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r25.u64;
loc_88078780:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lis r24,-30608
	ctx.r24.s64 = -2005925888;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880788c4
	if (ctx.cr6.eq) goto loc_880788C4;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bge 0x880788f0
	if (!ctx.cr0.lt) goto loc_880788F0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bne cr6,0x880787dc
	if (!ctx.cr6.eq) goto loc_880787DC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880787C4;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880787D8;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_880787DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880788ac
	if (!ctx.cr6.gt) goto loc_880788AC;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88078874
	if (ctx.cr6.lt) goto loc_88078874;
	// beq cr6,0x88078850
	if (ctx.cr6.eq) goto loc_88078850;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880788ac
	if (!ctx.cr6.lt) goto loc_880788AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88013ce0
	ctx.lr = 0x88078828;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88013ce0
	ctx.lr = 0x8807884C;
	sub_88013CE0(ctx, base);
	// b 0x880788ac
	goto loc_880788AC;
loc_88078850:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013940
	ctx.lr = 0x8807886C;
	sub_88013940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x88078894
	goto loc_88078894;
loc_88078874:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013940
	ctx.lr = 0x88078890;
	sub_88013940(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
loc_88078894:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013940
	ctx.lr = 0x880788AC;
	sub_88013940(ctx, base);
loc_880788AC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bne 0x880788f0
	if (!ctx.cr0.eq) goto loc_880788F0;
	// stw r19,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r19.u32);
	// b 0x880788f0
	goto loc_880788F0;
loc_880788C4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bge 0x880788f0
	if (!ctx.cr0.lt) goto loc_880788F0;
	// lwz r11,21852(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 21852);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r16,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r16.u32);
	// subfic r8,r9,80
	ctx.xer.ca = ctx.r9.u32 <= 80;
	ctx.r8.u64 = static_cast<uint64_t>(80) - ctx.r9.u64;
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r10,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_880788F0:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88078944
	if (!ctx.cr6.eq) goto loc_88078944;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88078944
	if (!ctx.cr6.eq) goto loc_88078944;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bge 0x88078acc
	if (!ctx.cr0.lt) goto loc_88078ACC;
	// lwz r11,21852(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 21852);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r8,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// subfic r5,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// stw r5,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// b 0x88078acc
	goto loc_88078ACC;
loc_88078944:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880789b8
	if (!ctx.cr6.eq) goto loc_880789B8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88024120
	ctx.lr = 0x88078960;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880789b8
	if (ctx.cr6.eq) goto loc_880789B8;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x880789b8
	if (!ctx.cr0.lt) goto loc_880789B8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// blt cr6,0x880789b8
	if (ctx.cr6.lt) goto loc_880789B8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r19,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r19.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r16,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r16.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_880789B8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88078a7c
	if (!ctx.cr6.eq) goto loc_88078A7C;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bge 0x88078a7c
	if (!ctx.cr0.lt) goto loc_88078A7C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addis r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 524288;
	// lwz r27,8(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x88078a10
	if (!ctx.cr6.eq) goto loc_88078A10;
	// bl 0x880244d0
	ctx.lr = 0x88078A08;
	sub_880244D0(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// b 0x88078a28
	goto loc_88078A28;
loc_88078A10:
	// bl 0x880244d0
	ctx.lr = 0x88078A14;
	sub_880244D0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x8801a808
	ctx.lr = 0x88078A20;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_88078A28:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88024120
	ctx.lr = 0x88078A38;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88078a5c
	if (ctx.cr6.eq) goto loc_88078A5C;
	// li r7,10
	ctx.r7.s64 = 10;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88077f90
	ctx.lr = 0x88078A5C;
	sub_88077F90(ctx, base);
loc_88078A5C:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bne 0x88078a7c
	if (!ctx.cr0.eq) goto loc_88078A7C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_88078A7C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88078acc
	if (!ctx.cr6.eq) goto loc_88078ACC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x88078acc
	if (!ctx.cr0.lt) goto loc_88078ACC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// bgt 0x88078acc
	if (ctx.cr0.gt) goto loc_88078ACC;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r19,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r19.u32);
	// stw r19,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r19.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_88078ACC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88078afc
	if (ctx.cr6.eq) goto loc_88078AFC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bge 0x88078afc
	if (!ctx.cr0.lt) goto loc_88078AFC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_88078AFC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bge 0x88078b2c
	if (!ctx.cr0.lt) goto loc_88078B2C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// blt cr6,0x88078b2c
	if (ctx.cr6.lt) goto loc_88078B2C;
	// stw r19,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r19.u32);
loc_88078B2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r21,9
	ctx.r21.s64 = 589824;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,6271
	ctx.r3.s64 = 6271;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addis r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -2359296;
	// bl 0x8801a9c8
	ctx.lr = 0x88078B4C;
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
	ctx.lr = 0x88078B60;
	sub_8813FF90(ctx, base);
	// lis r9,-30584
	ctx.r9.s64 = -2004353024;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// ori r28,r9,34953
	ctx.r28.u64 = ctx.r9.u64 | 34953;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r24,14
	ctx.r24.s64 = 917504;
	// mulhwu r5,r8,r28
	ctx.r5.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// addi r26,r29,-1
	ctx.r26.s64 = ctx.r29.s64 + -1;
	// mulli r10,r11,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(30));
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// li r3,6272
	ctx.r3.s64 = 6272;
	// rlwinm r25,r9,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// lwzx r8,r25,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r11,55
	ctx.r5.s64 = ctx.r11.s64 + 55;
	// rlwinm r11,r5,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078BB8;
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
	ctx.lr = 0x88078BCC;
	sub_8813FF90(ctx, base);
	// addi r11,r30,1072
	ctx.r11.s64 = ctx.r30.s64 + 1072;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lis r20,32
	ctx.r20.s64 = 2097152;
	// lwzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88078BF0:
	// lwz r10,-4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + -8);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r5,r20,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r20.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88078c2c
	if (ctx.cr6.eq) goto loc_88078C2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078C24;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88078C2C;
	sub_8813FF48(ctx, base);
loc_88078C2C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88078bf0
	if (!ctx.cr0.eq) goto loc_88078BF0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r4,r9,20
	ctx.r4.s64 = ctx.r9.s64 + 1310720;
	// mulhwu r8,r11,r28
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// li r3,6273
	ctx.r3.s64 = 6273;
	// mulli r5,r7,30
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r25,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r7,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078C84;
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
	ctx.lr = 0x88078C98;
	sub_8813FF90(ctx, base);
	// addi r11,r30,1072
	ctx.r11.s64 = ctx.r30.s64 + 1072;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_88078CB8:
	// lwz r9,-4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r3,-8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + -8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r24,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r24.u64;
	// subf r5,r20,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r20.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88078d04
	if (ctx.cr6.eq) goto loc_88078D04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078CEC;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88078CF8;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88078D04;
	sub_8813FF08(ctx, base);
loc_88078D04:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x88078cb8
	if (!ctx.cr0.eq) goto loc_88078CB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r24,33
	ctx.r24.s64 = 2162688;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r4,r9,-25
	ctx.r4.s64 = ctx.r9.s64 + -1638400;
	// mulhwu r8,r11,r28
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mulli r5,r7,30
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r3,6274
	ctx.r3.s64 = 6274;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r25,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r8,r9,15,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF0000;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078D5C;
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
	ctx.lr = 0x88078D70;
	sub_8813FF90(ctx, base);
	// addi r11,r30,1840
	ctx.r11.s64 = ctx.r30.s64 + 1840;
	// addi r5,r30,1840
	ctx.r5.s64 = ctx.r30.s64 + 1840;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r23,40
	ctx.r23.s64 = 2621440;
	// lis r22,31
	ctx.r22.s64 = 2031616;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6174
	ctx.r3.s64 = ctx.r11.s64 + 6174;
	// lwzx r11,r8,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// subf r5,r22,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r22.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078DB8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88078DC0;
	sub_8813FF48(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mulhwu r9,r11,r28
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// add r4,r8,r24
	ctx.r4.u64 = ctx.r8.u64 + ctx.r24.u64;
	// mulli r5,r7,30
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(30));
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,6275
	ctx.r3.s64 = 6275;
	// lwzx r9,r25,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// rlwinm r8,r9,15,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF0000;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r24.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078E04;
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
	ctx.lr = 0x88078E18;
	sub_8813FF90(ctx, base);
	// lwzx r11,r25,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// addi r10,r30,1840
	ctx.r10.s64 = ctx.r30.s64 + 1840;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r30,1840
	ctx.r5.s64 = ctx.r30.s64 + 1840;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,6174
	ctx.r3.s64 = ctx.r11.s64 + 6174;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r7,r4,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// subf r4,r23,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r23.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r22,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r22.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078E58;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88078E64;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x88078E70;
	sub_8813FF08(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r25,r30,40
	ctx.r25.s64 = ctx.r30.s64 + 40;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r27,7
	ctx.r27.s64 = 458752;
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mulli r7,r9,30
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(30));
	// subf r4,r7,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r3,6276
	ctx.r3.s64 = 6276;
	// rlwinm r24,r4,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r4,r5,-17
	ctx.r4.s64 = ctx.r5.s64 + -1114112;
	// lwzx r11,r24,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// rlwinm r10,r11,15,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF0000;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078EBC;
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
	ctx.lr = 0x88078ED0;
	sub_8813FF90(ctx, base);
	// addi r11,r30,1968
	ctx.r11.s64 = ctx.r30.s64 + 1968;
	// addi r8,r30,1968
	ctx.r8.s64 = ctx.r30.s64 + 1968;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r22,29
	ctx.r22.s64 = 1900544;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r11,r24,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6190
	ctx.r3.s64 = ctx.r11.s64 + 6190;
	// lwzx r11,r5,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r8,r5,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078F14;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88078F1C;
	sub_8813FF48(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulhwu r7,r9,r10
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r7,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// mulli r10,r11,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(30));
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addis r4,r5,27
	ctx.r4.s64 = ctx.r5.s64 + 1769472;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,6277
	ctx.r3.s64 = 6277;
	// lwzx r7,r26,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// rlwinm r5,r7,15,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF0000;
	// subf r11,r5,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r5,r27,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r27.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078F64;
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
	ctx.lr = 0x88078F78;
	sub_8813FF90(ctx, base);
	// addi r11,r30,1968
	ctx.r11.s64 = ctx.r30.s64 + 1968;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r30,1968
	ctx.r9.s64 = ctx.r30.s64 + 1968;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r11,r26,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6190
	ctx.r3.s64 = ctx.r11.s64 + 6190;
	// lwzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r11,r5,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r22,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r22.u64;
	// add r5,r8,r21
	ctx.r5.u64 = ctx.r8.u64 + ctx.r21.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88078FB8;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88078FC4;
	sub_8813FF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x88078FD0;
	sub_8813FF08(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,6139
	ctx.r3.s64 = 6139;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x88078FE4;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88078FEC;
	sub_8813FF48(ctx, base);
	// addi r11,r30,2096
	ctx.r11.s64 = ctx.r30.s64 + 2096;
	// addi r7,r30,2096
	ctx.r7.s64 = ctx.r30.s64 + 2096;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r28,3
	ctx.r28.s64 = 196608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6206
	ctx.r3.s64 = ctx.r11.s64 + 6206;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88079030;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8807903C;
	sub_8813FF48(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88079054;
	sub_8813FF90(ctx, base);
	// addi r11,r30,2096
	ctx.r11.s64 = ctx.r30.s64 + 2096;
	// addi r9,r30,2096
	ctx.r9.s64 = ctx.r30.s64 + 2096;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6206
	ctx.r3.s64 = ctx.r11.s64 + 6206;
	// lwzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r11,r5,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r27.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88079094;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880790A0;
	sub_8813FF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880790AC;
	sub_8813FF08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880790C4;
	sub_8813FF90(ctx, base);
	// addi r11,r30,2224
	ctx.r11.s64 = ctx.r30.s64 + 2224;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r30,2224
	ctx.r7.s64 = ctx.r30.s64 + 2224;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lis r28,5
	ctx.r28.s64 = 327680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6222
	ctx.r3.s64 = ctx.r11.s64 + 6222;
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8807910C;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88079114;
	sub_8813FF48(ctx, base);
	// addi r11,r30,2224
	ctx.r11.s64 = ctx.r30.s64 + 2224;
	// addi r9,r30,2224
	ctx.r9.s64 = ctx.r30.s64 + 2224;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6222
	ctx.r3.s64 = ctx.r11.s64 + 6222;
	// lwzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r11,r5,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r27,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r27.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88079154;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88079160;
	sub_8813FF48(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x8807916C;
	sub_8813FF08(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,6138
	ctx.r3.s64 = 6138;
	// lwz r28,8(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,12(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addis r5,r27,-19
	ctx.r5.s64 = ctx.r27.s64 + -1245184;
	// bl 0x8801a9c8
	ctx.lr = 0x88079188;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x88079190;
	sub_8813FF48(ctx, base);
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r23,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r3,r11,6132
	ctx.r3.s64 = ctx.r11.s64 + 6132;
	// bl 0x8801a9c8
	ctx.lr = 0x880791B0;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x8813ff48
	ctx.lr = 0x880791B8;
	sub_8813FF48(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x880791e4
	if (ctx.cr6.lt) goto loc_880791E4;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x880791ec
	goto loc_880791EC;
loc_880791E4:
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
loc_880791EC:
	// addi r9,r30,2352
	ctx.r9.s64 = ctx.r30.s64 + 2352;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8807920c
	if (ctx.cr6.eq) goto loc_8807920C;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_8807920C:
	// addi r10,r30,2352
	ctx.r10.s64 = ctx.r30.s64 + 2352;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r3,r8,6238
	ctx.r3.s64 = ctx.r8.s64 + 6238;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r17,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r17.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88079230;
	sub_8801A9C8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8807923C;
	sub_8813FF48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88079248;
	sub_8813FF08(ctx, base);
	// lwz r8,144(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// subf r5,r20,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r20.u64;
	// stw r8,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r7,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// stw r5,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// stw r8,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// stw r7,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// stw r6,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x8807927C;
	sub_88018B98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fa8
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808AC88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8808AC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x8808ACA0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x8808ACA8;
	sub_88023F40(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8808ACB8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x8808ACC0;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8808ACC4;
	sub_88068E60(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x8808ACD8;
	sub_880240B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,511
	ctx.r3.s64 = 511;
	// addis r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -8388608;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8808ACEC;
	sub_8801A448(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x8801a448
	ctx.lr = 0x8808ACF8;
	sub_8801A448(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// bl 0x880240e0
	ctx.lr = 0x8808AD10;
	sub_880240E0(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x8808AD28;
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
	ctx.lr = 0x8808AD40;
	sub_8801A448(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r6,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r5,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x880247e8
	ctx.lr = 0x8808AD88;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x88069270
	ctx.lr = 0x8808AD98;
	sub_88069270(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// addis r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 46137344;
	// stw r4,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,568
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 568, ctx.xer);
	// bne cr6,0x8808add0
	if (!ctx.cr6.eq) goto loc_8808ADD0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addis r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 12582912;
	// stw r29,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addis r8,r10,96
	ctx.r8.s64 = ctx.r10.s64 + 6291456;
	// stw r9,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8808ADD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-22296
	ctx.r4.s64 = ctx.r10.s64 + -22296;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x88023e90
	ctx.lr = 0x8808ADF0;
	sub_88023E90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808D088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8808D090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,1016(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1016);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8808d22c
	if (ctx.cr6.lt) goto loc_8808D22C;
	// beq cr6,0x8808d1e0
	if (ctx.cr6.eq) goto loc_8808D1E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8808d268
	if (!ctx.cr6.lt) goto loc_8808D268;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1012);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,232(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// li r9,20
	ctx.r9.s64 = 20;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r4,544(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 544);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,-9
	ctx.r6.s64 = ctx.r30.s64 + -9;
	// li r3,49
	ctx.r3.s64 = 49;
	// li r8,12
	ctx.r8.s64 = 12;
	// addis r5,r11,-9
	ctx.r5.s64 = ctx.r11.s64 + -589824;
	// beq cr6,0x8808d170
	if (ctx.cr6.eq) goto loc_8808D170;
	// bl 0x88013ce0
	ctx.lr = 0x8808D100;
	sub_88013CE0(ctx, base);
	// lwz r5,236(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r4,552(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r30,-6
	ctx.r6.s64 = ctx.r30.s64 + -6;
	// li r3,5
	ctx.r3.s64 = 5;
	// addis r5,r5,-17
	ctx.r5.s64 = ctx.r5.s64 + -1114112;
	// bl 0x88013ce0
	ctx.lr = 0x8808D130;
	sub_88013CE0(ctx, base);
	// lwz r5,240(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r30,-3
	ctx.r6.s64 = ctx.r30.s64 + -3;
	// li r3,49
	ctx.r3.s64 = 49;
	// addis r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -1572864;
	// bl 0x88013ce0
	ctx.lr = 0x8808D160;
	sub_88013CE0(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8808d250
	goto loc_8808D250;
loc_8808D170:
	// bl 0x88013ce0
	ctx.lr = 0x8808D174;
	sub_88013CE0(ctx, base);
	// lwz r5,236(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r4,552(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r30,-6
	ctx.r6.s64 = ctx.r30.s64 + -6;
	// li r3,6
	ctx.r3.s64 = 6;
	// addis r5,r5,-17
	ctx.r5.s64 = ctx.r5.s64 + -1114112;
	// bl 0x88013ce0
	ctx.lr = 0x8808D1A4;
	sub_88013CE0(ctx, base);
	// lwz r5,240(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r30,-3
	ctx.r6.s64 = ctx.r30.s64 + -3;
	// li r3,49
	ctx.r3.s64 = 49;
	// addis r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -1572864;
	// bl 0x88013ce0
	ctx.lr = 0x8808D1D4;
	sub_88013CE0(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x8808d24c
	goto loc_8808D24C;
loc_8808D1E0:
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1012);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x8808d214
	if (ctx.cr6.eq) goto loc_8808D214;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,9
	ctx.r8.s64 = 9;
	// bl 0x88013ce0
	ctx.lr = 0x8808D20C;
	sub_88013CE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8808D214:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x88013ce0
	ctx.lr = 0x8808D224;
	sub_88013CE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8808D22C:
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1012);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8808d244
	if (ctx.cr6.eq) goto loc_8808D244;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,5
	ctx.r8.s64 = 5;
	// b 0x8808d250
	goto loc_8808D250;
loc_8808D244:
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,7
	ctx.r8.s64 = 7;
loc_8808D24C:
	// li r3,6
	ctx.r3.s64 = 6;
loc_8808D250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88013ce0
	ctx.lr = 0x8808D268;
	sub_88013CE0(ctx, base);
loc_8808D268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808FBC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8808FBD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x88024030
	ctx.lr = 0x8808FBE0;
	sub_88024030(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x8808fc14
	if (!ctx.cr0.lt) goto loc_8808FC14;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// blt cr6,0x8808fc14
	if (ctx.cr6.lt) goto loc_8808FC14;
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_8808FC14:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r28,-2
	ctx.r28.s64 = -131072;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r30,r10,26
	ctx.r30.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// ble cr6,0x8808fc40
	if (!ctx.cr6.gt) goto loc_8808FC40;
	// subfic r30,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r30.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8808FC40:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8808fc9c
	if (ctx.cr6.eq) goto loc_8808FC9C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bne 0x8808fcd8
	if (!ctx.cr0.eq) goto loc_8808FCD8;
	// li r11,129
	ctx.r11.s64 = 129;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r10,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r10.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x8808FC78;
	sub_8813FA58(ctx, base);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88022730
	ctx.lr = 0x8808FC8C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88022b68
	ctx.lr = 0x8808FC98;
	sub_88022B68(ctx, base);
	// b 0x8808fcd8
	goto loc_8808FCD8;
loc_8808FC9C:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r8,132(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// stw r8,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x8808FCD8;
	sub_88018B98(ctx, base);
loc_8808FCD8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r29,100(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bge 0x8808fd14
	if (!ctx.cr0.lt) goto loc_8808FD14;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r9,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// lwz r10,26072(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26072);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8808fd14
	if (ctx.cr6.lt) goto loc_8808FD14;
	// stw r26,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
loc_8808FD14:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-30694
	ctx.r10.s64 = -2011561984;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r10,26008
	ctx.r9.s64 = ctx.r10.s64 + 26008;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r3,r11,9853
	ctx.r3.s64 = ctx.r11.s64 + 9853;
	// bl 0x8801a9c8
	ctx.lr = 0x8808FD3C;
	sub_8801A9C8(ctx, base);
	// lwz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808FD58;
	sub_8813FF90(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8808FD80;
	sub_8813FF48(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// ble cr6,0x8808fd9c
	if (!ctx.cr6.gt) goto loc_8808FD9C;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_8808FD9C:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r8,-30694
	ctx.r8.s64 = -2011561984;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r8,26076
	ctx.r7.s64 = ctx.r8.s64 + 26076;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,7418
	ctx.r3.s64 = ctx.r11.s64 + 7418;
	// bl 0x8801a9c8
	ctx.lr = 0x8808FDD4;
	sub_8801A9C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8808FDE0;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x8808FDEC;
	sub_8813FF48(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x8808fe1c
	if (!ctx.cr6.lt) goto loc_8808FE1C;
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
	ctx.lr = 0x8808FE10;
	sub_8813FF90(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8808FE1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88090EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88090ED0;
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
	ctx.lr = 0x88090EE0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88090EE8;
	sub_88023F40(ctx, base);
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88090EF8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88090F00;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88090F04;
	sub_88068E60(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88090F14;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x88024028
	ctx.lr = 0x88090F20;
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
	ctx.lr = 0x88090F38;
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
	ctx.lr = 0x88090F4C;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x88090F5C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88090f68
	if (!ctx.cr6.lt) goto loc_88090F68;
	// li r3,256
	ctx.r3.s64 = 256;
loc_88090F68:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r7,r11,29,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r6,r7,56
	ctx.xer.ca = ctx.r7.u32 <= 56;
	ctx.r6.u64 = static_cast<uint64_t>(56) - ctx.r7.u64;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// bl 0x880750b8
	ctx.lr = 0x88090FC0;
	sub_880750B8(ctx, base);
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r4,-30711
	ctx.r4.s64 = -2012676096;
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lis r3,-30711
	ctx.r3.s64 = -2012676096;
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r8,r4,-2200
	ctx.r8.s64 = ctx.r4.s64 + -2200;
	// addi r7,r3,-2200
	ctx.r7.s64 = ctx.r3.s64 + -2200;
	// sth r29,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r29.u16);
	// sth r29,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r29.u16);
	// lis r6,-30711
	ctx.r6.s64 = -2012676096;
	// sth r9,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r9.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r4,r6,3112
	ctx.r4.s64 = ctx.r6.s64 + 3112;
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
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
	// stw r5,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r5,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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
	ctx.lr = 0x8809104C;
	sub_88023E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88091E10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88091E2C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8808fab0
	ctx.lr = 0x88091E3C;
	sub_8808FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88091fec
	if (ctx.cr6.eq) goto loc_88091FEC;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88091fe0
	if (!ctx.cr6.eq) goto loc_88091FE0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a860
	ctx.lr = 0x88091E68;
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
	ctx.lr = 0x88091E94;
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
	// blt cr6,0x88091eb4
	if (ctx.cr6.lt) goto loc_88091EB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_88091EB4:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88091f14
	if (ctx.cr6.eq) goto loc_88091F14;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88091f14
	if (ctx.cr6.eq) goto loc_88091F14;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88091f14
	if (!ctx.cr0.lt) goto loc_88091F14;
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
	ctx.lr = 0x88091EF8;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88091f14
	if (ctx.cr6.lt) goto loc_88091F14;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a808
	ctx.lr = 0x88091F0C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_88091F14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x88091F24;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88091f40
	if (ctx.cr6.lt) goto loc_88091F40;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88091F38;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_88091F40:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88091fe0
	if (!ctx.cr6.eq) goto loc_88091FE0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x88091fe0
	if (ctx.cr0.gt) goto loc_88091FE0;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r7,-30694
	ctx.r7.s64 = -2011561984;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r7,26096
	ctx.r10.s64 = ctx.r7.s64 + 26096;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r7,r9,90
	ctx.xer.ca = ctx.r9.u32 <= 90;
	ctx.r7.u64 = static_cast<uint64_t>(90) - ctx.r9.u64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x88024120
	ctx.lr = 0x88091FBC;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88091fe0
	if (ctx.cr6.eq) goto loc_88091FE0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88013940
	ctx.lr = 0x88091FE0;
	sub_88013940(ctx, base);
loc_88091FE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88091FEC;
	sub_8808FBC8(ctx, base);
loc_88091FEC:
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

DEFINE_REX_FUNC(sub_880948D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880948E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880948F0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880948F8;
	sub_88023F40(ctx, base);
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88094908;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88094910;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88094914;
	sub_88068E60(ctx, base);
	// stw r3,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880240b8
	ctx.lr = 0x88094934;
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
	ctx.lr = 0x88094948;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x88094950;
	sub_880240E0(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x8809495C;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x88094960;
	sub_88068E78(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x88094990
	if (!ctx.cr6.eq) goto loc_88094990;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e8
	ctx.lr = 0x88094978;
	sub_880240E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,710
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 710, ctx.xer);
	// blt cr6,0x88094990
	if (ctx.cr6.lt) goto loc_88094990;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addis r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 20971520;
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
loc_88094990:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,256
	ctx.r26.s64 = 256;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// rlwinm r8,r11,31,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFFFFF;
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r28,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// subfic r7,r8,160
	ctx.xer.ca = ctx.r8.u32 <= 160;
	ctx.r7.u64 = static_cast<uint64_t>(160) - ctx.r8.u64;
	// stw r28,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bne cr6,0x880949d8
	if (!ctx.cr6.eq) goto loc_880949D8;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_880949D8:
	// stw r29,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// bl 0x88024110
	ctx.lr = 0x880949E8;
	sub_88024110(ctx, base);
	// cmplwi cr6,r3,52
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 52, ctx.xer);
	// bne cr6,0x880949f8
	if (!ctx.cr6.eq) goto loc_880949F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880949F8:
	// li r11,276
	ctx.r11.s64 = 276;
	// stw r26,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// li r10,296
	ctx.r10.s64 = 296;
	// li r9,316
	ctx.r9.s64 = 316;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r8,336
	ctx.r8.s64 = 336;
	// stw r10,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r7,356
	ctx.r7.s64 = 356;
	// stw r9,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// li r6,376
	ctx.r6.s64 = 376;
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// li r5,396
	ctx.r5.s64 = 396;
	// stw r7,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// li r25,64
	ctx.r25.s64 = 64;
	// stw r5,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// stw r4,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r25,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8813fa58
	ctx.lr = 0x88094A54;
	sub_8813FA58(ctx, base);
	// lis r3,-20
	ctx.r3.s64 = -1310720;
	// li r11,118
	ctx.r11.s64 = 118;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r10,448
	ctx.r10.s64 = 448;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r26,-6
	ctx.r26.s64 = -393216;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880221d0
	ctx.lr = 0x88094A8C;
	sub_880221D0(ctx, base);
	// lis r29,20
	ctx.r29.s64 = 1310720;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880221d0
	ctx.lr = 0x88094AAC;
	sub_880221D0(ctx, base);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// li r8,768
	ctx.r8.s64 = 768;
	// stw r30,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r7,r9,16416
	ctx.r7.s64 = ctx.r9.s64 + 16416;
	// sth r28,156(r31)
	REX_STORE_U16(ctx.r31.u32 + 156, ctx.r28.u16);
	// sth r28,160(r31)
	REX_STORE_U16(ctx.r31.u32 + 160, ctx.r28.u16);
	// lis r6,-30711
	ctx.r6.s64 = -2012676096;
	// stw r29,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// addi r4,r6,16672
	ctx.r4.s64 = ctx.r6.s64 + 16672;
	// stw r29,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// stw r29,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
	// stw r7,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r5,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x88094AFC;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x88094B0C;
	sub_8813FA58(ctx, base);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88094B1C;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88099228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88099230;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88099240;
	sub_88023E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88023f40
	ctx.lr = 0x88099248;
	sub_88023F40(ctx, base);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88099258;
	sub_8813FA58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880247e8
	ctx.lr = 0x88099260;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88099264;
	sub_88068E60(ctx, base);
	// stw r3,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88099278;
	sub_88024118(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x88024028
	ctx.lr = 0x88099284;
	sub_88024028(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880240b8
	ctx.lr = 0x88099298;
	sub_880240B8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-30710
	ctx.r11.s64 = -2012610560;
	// stw r30,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29544
	ctx.r4.s64 = ctx.r11.s64 + -29544;
	// bl 0x88024dd0
	ctx.lr = 0x880992B4;
	sub_88024DD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880240e0
	ctx.lr = 0x880992BC;
	sub_880240E0(ctx, base);
	// lis r7,-30608
	ctx.r7.s64 = -2005925888;
	// stw r3,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lwz r11,21852(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 21852);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// rlwinm r7,r3,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// subfic r11,r7,64
	ctx.xer.ca = ctx.r7.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r7.u64;
	// sth r30,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r30.u16);
	// lis r7,-30710
	ctx.r7.s64 = -2012610560;
	// stw r4,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r4.u32);
	// li r3,376
	ctx.r3.s64 = 376;
	// stw r28,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// addi r7,r7,-30864
	ctx.r7.s64 = ctx.r7.s64 + -30864;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// li r27,336
	ctx.r27.s64 = 336;
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r26,296
	ctx.r26.s64 = 296;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r30,384
	ctx.r30.s64 = 384;
	// stw r27,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r26,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// lis r4,-30710
	ctx.r4.s64 = -2012610560;
	// sth r10,144(r31)
	REX_STORE_U16(ctx.r31.u32 + 144, ctx.r10.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r4,r4,-29416
	ctx.r4.s64 = ctx.r4.s64 + -29416;
	// stw r6,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// stw r5,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// stw r8,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// stw r8,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// stw r9,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r7,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x88023e90
	ctx.lr = 0x88099378;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88099388;
	sub_8813FA58(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88022730
	ctx.lr = 0x88099398;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809A5A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8809a648
	if (ctx.cr6.lt) goto loc_8809A648;
	// beq cr6,0x8809a614
	if (ctx.cr6.eq) goto loc_8809A614;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8809a65c
	if (!ctx.cr6.lt) goto loc_8809A65C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x8809A604;
	sub_88014578(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8809A614:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88014578
	ctx.lr = 0x8809A638;
	sub_88014578(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8809A648:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88014188
	ctx.lr = 0x8809A65C;
	sub_88014188(ctx, base);
loc_8809A65C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8809AC80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x8809AC88;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8809AC94;
	sub_88023F40(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8809ad08
	if (!ctx.cr6.eq) goto loc_8809AD08;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x8809ACBC;
	sub_8801A860(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x8809ACE8;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x8809ad08
	if (ctx.cr6.eq) goto loc_8809AD08;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
loc_8809AD08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809ad30
	if (!ctx.cr6.lt) goto loc_8809AD30;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x8809AD20;
	sub_88022BE0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88023f48
	ctx.lr = 0x8809AD28;
	sub_88023F48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
loc_8809AD30:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r20,0
	ctx.r20.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// addi r21,r31,484
	ctx.r21.s64 = ctx.r31.s64 + 484;
	// stw r10,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lhz r11,486(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 486);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8809ad68
	if (ctx.cr6.eq) goto loc_8809AD68;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r9.u16);
loc_8809AD68:
	// lhz r11,82(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8809ad88
	if (ctx.cr6.eq) goto loc_8809AD88;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r21)
	REX_STORE_U16(ctx.r21.u32 + 82, ctx.r10.u16);
	// b 0x8809ad90
	goto loc_8809AD90;
loc_8809AD88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809adb4
	if (ctx.cr6.eq) goto loc_8809ADB4;
loc_8809AD90:
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 648);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// beq cr6,0x8809ade0
	if (ctx.cr6.eq) goto loc_8809ADE0;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x8809addc
	goto loc_8809ADDC;
loc_8809ADB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// bge cr6,0x8809ade0
	if (!ctx.cr6.lt) goto loc_8809ADE0;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8809ade0
	if (!ctx.cr6.eq) goto loc_8809ADE0;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_8809ADDC:
	// stw r10,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
loc_8809ADE0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x8809ae10
	if (!ctx.cr0.lt) goto loc_8809AE10;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x8809ae10
	if (ctx.cr6.lt) goto loc_8809AE10;
	// stw r20,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r20.u32);
loc_8809AE10:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r25,r31,152
	ctx.r25.s64 = ctx.r31.s64 + 152;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addi r27,r9,4
	ctx.r27.s64 = ctx.r9.s64 + 4;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// clrlwi r6,r6,23
	ctx.r6.u64 = ctx.r6.u32 & 0x1FF;
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// clrlwi r3,r3,23
	ctx.r3.u64 = ctx.r3.u32 & 0x1FF;
	// stw r6,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// clrlwi r8,r8,23
	ctx.r8.u64 = ctx.r8.u32 & 0x1FF;
	// stw r4,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// clrlwi r7,r7,23
	ctx.r7.u64 = ctx.r7.u32 & 0x1FF;
	// clrlwi r8,r30,23
	ctx.r8.u64 = ctx.r30.u32 & 0x1FF;
	// clrlwi r6,r29,23
	ctx.r6.u64 = ctx.r29.u32 & 0x1FF;
	// stw r7,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// clrlwi r4,r28,23
	ctx.r4.u64 = ctx.r28.u32 & 0x1FF;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// clrlwi r3,r27,23
	ctx.r3.u64 = ctx.r27.u32 & 0x1FF;
	// stw r6,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// stw r4,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r3,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// clrlwi r9,r9,23
	ctx.r9.u64 = ctx.r9.u32 & 0x1FF;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AEE8;
	sub_8801A860(ctx, base);
	// addi r24,r31,172
	ctx.r24.s64 = ctx.r31.s64 + 172;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF00;
	sub_8801A860(ctx, base);
	// addi r23,r31,176
	ctx.r23.s64 = ctx.r31.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF18;
	sub_8801A860(ctx, base);
	// addi r27,r31,180
	ctx.r27.s64 = ctx.r31.s64 + 180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF30;
	sub_8801A860(ctx, base);
	// addi r26,r31,184
	ctx.r26.s64 = ctx.r31.s64 + 184;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF48;
	sub_8801A860(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r6,r31,188
	ctx.r6.s64 = ctx.r31.s64 + 188;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF5C;
	sub_8801A860(ctx, base);
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF70;
	sub_8801A860(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x8809AF84;
	sub_8801A860(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809AFB0;
	sub_8801A860(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r7,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809AFDC;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r8,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809B008;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r9,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// bl 0x8801a860
	ctx.lr = 0x8809B034;
	sub_8801A860(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r31,364
	ctx.r30.s64 = ctx.r31.s64 + 364;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// li r29,19
	ctx.r29.s64 = 19;
	// stw r5,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r5.u32);
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
loc_8809B05C:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x8809B06C;
	sub_8813FA60(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// bl 0x88024438
	ctx.lr = 0x8809B078;
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
	// bne 0x8809b05c
	if (!ctx.cr0.eq) goto loc_8809B05C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r7,276(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// stw r7,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r7.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b0c8
	if (!ctx.cr6.gt) goto loc_8809B0C8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b0d4
	goto loc_8809B0D4;
loc_8809B0C8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b0d8
	if (!ctx.cr6.lt) goto loc_8809B0D8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B0D4:
	// stw r10,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
loc_8809B0D8:
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// stw r9,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b0f8
	if (!ctx.cr6.gt) goto loc_8809B0F8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b104
	goto loc_8809B104;
loc_8809B0F8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b108
	if (!ctx.cr6.lt) goto loc_8809B108;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B104:
	// stw r10,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
loc_8809B108:
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// stw r9,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b128
	if (!ctx.cr6.gt) goto loc_8809B128;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b134
	goto loc_8809B134;
loc_8809B128:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b138
	if (!ctx.cr6.lt) goto loc_8809B138;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B134:
	// stw r10,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
loc_8809B138:
	// lwz r9,232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r9,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b158
	if (!ctx.cr6.gt) goto loc_8809B158;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b164
	goto loc_8809B164;
loc_8809B158:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b168
	if (!ctx.cr6.lt) goto loc_8809B168;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B164:
	// stw r10,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
loc_8809B168:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// stw r9,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b188
	if (!ctx.cr6.gt) goto loc_8809B188;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b194
	goto loc_8809B194;
loc_8809B188:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b198
	if (!ctx.cr6.lt) goto loc_8809B198;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B194:
	// stw r10,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
loc_8809B198:
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// stw r9,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b1b8
	if (!ctx.cr6.gt) goto loc_8809B1B8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b1c4
	goto loc_8809B1C4;
loc_8809B1B8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b1c8
	if (!ctx.cr6.lt) goto loc_8809B1C8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B1C4:
	// stw r10,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
loc_8809B1C8:
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r9,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b1e8
	if (!ctx.cr6.gt) goto loc_8809B1E8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b1f4
	goto loc_8809B1F4;
loc_8809B1E8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b1f8
	if (!ctx.cr6.lt) goto loc_8809B1F8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B1F4:
	// stw r10,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
loc_8809B1F8:
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r9,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b218
	if (!ctx.cr6.gt) goto loc_8809B218;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b224
	goto loc_8809B224;
loc_8809B218:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b228
	if (!ctx.cr6.lt) goto loc_8809B228;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B224:
	// stw r10,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
loc_8809B228:
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// stw r9,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b248
	if (!ctx.cr6.gt) goto loc_8809B248;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b254
	goto loc_8809B254;
loc_8809B248:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b258
	if (!ctx.cr6.lt) goto loc_8809B258;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B254:
	// stw r10,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
loc_8809B258:
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// stw r9,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b278
	if (!ctx.cr6.gt) goto loc_8809B278;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b284
	goto loc_8809B284;
loc_8809B278:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b288
	if (!ctx.cr6.lt) goto loc_8809B288;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B284:
	// stw r10,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
loc_8809B288:
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// stw r9,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b2a8
	if (!ctx.cr6.gt) goto loc_8809B2A8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b2b4
	goto loc_8809B2B4;
loc_8809B2A8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b2b8
	if (!ctx.cr6.lt) goto loc_8809B2B8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B2B4:
	// stw r10,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
loc_8809B2B8:
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// stw r9,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b2d8
	if (!ctx.cr6.gt) goto loc_8809B2D8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b2e4
	goto loc_8809B2E4;
loc_8809B2D8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b2e8
	if (!ctx.cr6.lt) goto loc_8809B2E8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B2E4:
	// stw r10,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
loc_8809B2E8:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// stw r9,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b308
	if (!ctx.cr6.gt) goto loc_8809B308;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b314
	goto loc_8809B314;
loc_8809B308:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b318
	if (!ctx.cr6.lt) goto loc_8809B318;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B314:
	// stw r10,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
loc_8809B318:
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// stw r9,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b338
	if (!ctx.cr6.gt) goto loc_8809B338;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b344
	goto loc_8809B344;
loc_8809B338:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b348
	if (!ctx.cr6.lt) goto loc_8809B348;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B344:
	// stw r10,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
loc_8809B348:
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r9,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b368
	if (!ctx.cr6.gt) goto loc_8809B368;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b374
	goto loc_8809B374;
loc_8809B368:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b378
	if (!ctx.cr6.lt) goto loc_8809B378;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B374:
	// stw r10,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
loc_8809B378:
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r9,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b398
	if (!ctx.cr6.gt) goto loc_8809B398;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b3a4
	goto loc_8809B3A4;
loc_8809B398:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b3a8
	if (!ctx.cr6.lt) goto loc_8809B3A8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B3A4:
	// stw r10,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
loc_8809B3A8:
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r9,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b3c8
	if (!ctx.cr6.gt) goto loc_8809B3C8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b3d4
	goto loc_8809B3D4;
loc_8809B3C8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b3d8
	if (!ctx.cr6.lt) goto loc_8809B3D8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B3D4:
	// stw r10,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
loc_8809B3D8:
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r9,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b3f8
	if (!ctx.cr6.gt) goto loc_8809B3F8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b404
	goto loc_8809B404;
loc_8809B3F8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b408
	if (!ctx.cr6.lt) goto loc_8809B408;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B404:
	// stw r10,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
loc_8809B408:
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// stw r9,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b428
	if (!ctx.cr6.gt) goto loc_8809B428;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b434
	goto loc_8809B434;
loc_8809B428:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b438
	if (!ctx.cr6.lt) goto loc_8809B438;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B434:
	// stw r10,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
loc_8809B438:
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r9,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b458
	if (!ctx.cr6.gt) goto loc_8809B458;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b464
	goto loc_8809B464;
loc_8809B458:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b468
	if (!ctx.cr6.lt) goto loc_8809B468;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B464:
	// stw r10,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
loc_8809B468:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// stw r9,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b488
	if (!ctx.cr6.gt) goto loc_8809B488;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b494
	goto loc_8809B494;
loc_8809B488:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b498
	if (!ctx.cr6.lt) goto loc_8809B498;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B494:
	// stw r10,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_8809B498:
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// stw r9,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809b4b8
	if (!ctx.cr6.gt) goto loc_8809B4B8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809b4c4
	goto loc_8809B4C4;
loc_8809B4B8:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8809b4c8
	if (!ctx.cr6.lt) goto loc_8809B4C8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8809B4C4:
	// stw r11,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
loc_8809B4C8:
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8809b4f8
	if (ctx.cr6.lt) goto loc_8809B4F8;
	// beq cr6,0x8809b4e8
	if (ctx.cr6.eq) goto loc_8809B4E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8809b540
	if (!ctx.cr6.lt) goto loc_8809B540;
	// stw r20,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r20.u32);
	// b 0x8809b540
	goto loc_8809B540;
loc_8809B4E8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8809aa40
	ctx.lr = 0x8809B4F4;
	sub_8809AA40(ctx, base);
	// b 0x8809b540
	goto loc_8809B540;
loc_8809B4F8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8809a7c0
	ctx.lr = 0x8809B504;
	sub_8809A7C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,580(r31)
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
	// bl 0x88018b98
	ctx.lr = 0x8809B540;
	sub_88018B98(ctx, base);
loc_8809B540:
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lis r30,12
	ctx.r30.s64 = 786432;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,144(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r3,7276
	ctx.r3.s64 = 7276;
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B570;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B578;
	sub_8813FF48(ctx, base);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,372(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// li r3,7277
	ctx.r3.s64 = 7277;
	// lwz r7,144(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B5A4;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B5AC;
	sub_8813FF48(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lis r30,11
	ctx.r30.s64 = 720896;
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lis r29,19
	ctx.r29.s64 = 1245184;
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,120
	ctx.r6.s64 = 120;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,7279
	ctx.r3.s64 = 7279;
	// subf r5,r30,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r4,r29,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B5E0;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B5E8;
	sub_8813FF48(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,388(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// li r3,7280
	ctx.r3.s64 = 7280;
	// lwz r7,156(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r5,r30,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r30.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B614;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B61C;
	sub_8813FF48(ctx, base);
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lis r28,22
	ctx.r28.s64 = 1441792;
	// lwz r8,396(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// lis r29,14
	ctx.r29.s64 = 917504;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,120
	ctx.r6.s64 = 120;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,7281
	ctx.r3.s64 = 7281;
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// subf r4,r29,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B650;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B658;
	sub_8813FF48(ctx, base);
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// li r3,7282
	ctx.r3.s64 = 7282;
	// lwz r8,164(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r5,r28,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B684;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B68C;
	sub_8813FF48(ctx, base);
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,7283
	ctx.r3.s64 = 7283;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B6AC;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B6B4;
	sub_8813FF48(ctx, base);
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7284
	ctx.r3.s64 = 7284;
	// lwz r4,412(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 1048576;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B6D4;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B6DC;
	sub_8813FF48(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7285
	ctx.r3.s64 = 7285;
	// lwz r4,420(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B6F8;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B700;
	sub_8813FF48(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7288
	ctx.r3.s64 = 7288;
	// lwz r4,420(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B720;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B728;
	sub_8813FF48(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7286
	ctx.r3.s64 = 7286;
	// lwz r4,428(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r8,-8
	ctx.r5.s64 = ctx.r8.s64 + -524288;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B748;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B750;
	sub_8813FF48(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7287
	ctx.r3.s64 = 7287;
	// lwz r4,428(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r7,10
	ctx.r5.s64 = ctx.r7.s64 + 655360;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B770;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B778;
	sub_8813FF48(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7278
	ctx.r3.s64 = 7278;
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r5,-13
	ctx.r5.s64 = ctx.r5.s64 + -851968;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B798;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B7A0;
	sub_8813FF48(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// lis r30,41
	ctx.r30.s64 = 2686976;
	// lis r29,17
	ctx.r29.s64 = 1114112;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r3,7289
	ctx.r3.s64 = 7289;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B7D4;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809B7EC;
	sub_8813FF90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B7F8;
	sub_8813FF48(ctx, base);
	// lwz r5,460(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,464(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// li r3,7289
	ctx.r3.s64 = 7289;
	// lwz r7,200(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B824;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8809B83C;
	sub_8813FF90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B848;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8809B854;
	sub_8813FF08(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r8,456(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// li r3,7290
	ctx.r3.s64 = 7290;
	// lwz r7,200(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B880;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B888;
	sub_8813FF48(ctx, base);
	// lwz r4,464(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// li r3,7290
	ctx.r3.s64 = 7290;
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B8B4;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8809B8C0;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x8809B8CC;
	sub_8813FF08(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// lis r6,-30694
	ctx.r6.s64 = -2011561984;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r30,36
	ctx.r30.s64 = 2359296;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r28,r6,30552
	ctx.r28.s64 = ctx.r6.s64 + 30552;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,21
	ctx.r29.s64 = 1376256;
	// subf r4,r30,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r30.u64;
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwzx r11,r10,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r3,r11,7293
	ctx.r3.s64 = ctx.r11.s64 + 7293;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B914;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B91C;
	sub_8813FF48(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// li r6,120
	ctx.r6.s64 = 120;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,464(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r9,r3,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r3.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwzx r11,r4,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r3,r11,7293
	ctx.r3.s64 = ctx.r11.s64 + 7293;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B954;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8809B960;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8809B96C;
	sub_8813FF08(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lis r30,25
	ctx.r30.s64 = 1638400;
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// li r6,120
	ctx.r6.s64 = 120;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,7291
	ctx.r3.s64 = 7291;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B99C;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B9A4;
	sub_8813FF48(ctx, base);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,384(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// li r6,120
	ctx.r6.s64 = 120;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// li r3,7292
	ctx.r3.s64 = 7292;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B9D0;
	sub_8801A9C8(ctx, base);
	// lwz r4,644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8813ff48
	ctx.lr = 0x8809B9D8;
	sub_8813FF48(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,118
	ctx.r6.s64 = 118;
	// li r3,9851
	ctx.r3.s64 = 9851;
	// addis r5,r7,-96
	ctx.r5.s64 = ctx.r7.s64 + -6291456;
	// addis r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 3145728;
	// bl 0x8801a9c8
	ctx.lr = 0x8809B9F4;
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
	ctx.lr = 0x8809BA08;
	sub_8813FF90(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A6AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f60
	ctx.lr = 0x880A6AF0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// lis r19,28
	ctx.r19.s64 = 1835008;
	// lis r23,1
	ctx.r23.s64 = 65536;
	// lis r20,18
	ctx.r20.s64 = 1179648;
loc_880A6B14:
	// lhz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880a6ddc
	if (ctx.cr6.eq) goto loc_880A6DDC;
	// lis r27,60
	ctx.r27.s64 = 3932160;
	// lis r26,182
	ctx.r26.s64 = 11927552;
	// li r24,1230
	ctx.r24.s64 = 1230;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880a6b40
	if (ctx.cr6.eq) goto loc_880A6B40;
	// lis r27,70
	ctx.r27.s64 = 4587520;
	// lis r26,180
	ctx.r26.s64 = 11796480;
	// li r24,1232
	ctx.r24.s64 = 1232;
loc_880A6B40:
	// lwz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r6,-4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r9,-12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mullw r30,r9,r19
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r8,17,0,14
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880A6B74;
	sub_8801A4A0(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8801a3e0
	ctx.lr = 0x880A6B8C;
	sub_8801A3E0(ctx, base);
	// subfc r5,r3,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r3.u32;
	ctx.r5.u64 = ctx.r23.u64 - ctx.r3.u64;
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r4,r23,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// subfe r11,r4,r7
	temp.u8 = (~ctx.r4.u32 + ctx.r7.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srawi r3,r10,14
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 14;
	// bl 0x8801a860
	ctx.lr = 0x880A6BB8;
	sub_8801A860(ctx, base);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,-4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lhz r9,-32(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + -32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x880a6bf0
	if (ctx.cr6.lt) goto loc_880A6BF0;
	// sth r18,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r18.u16);
	// b 0x880a6bfc
	goto loc_880A6BFC;
loc_880A6BF0:
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// sth r8,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_880A6BFC:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r25,r24,1
	ctx.r25.s64 = ctx.r24.s64 + 1;
	// li r6,240
	ctx.r6.s64 = 240;
	// subf r5,r10,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r10.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6C18;
	sub_8801A9C8(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a860
	ctx.lr = 0x880A6C34;
	sub_8801A860(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi. r11,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 11;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880a6c44
	if (!ctx.cr0.lt) goto loc_880A6C44;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880A6C44:
	// lhz r10,-32(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -32);
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// lhz r9,12(r21)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + 12);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x880a6c88
	if (ctx.cr6.lt) goto loc_880A6C88;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a6c88
	if (ctx.cr6.eq) goto loc_880A6C88;
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw r29,r29,r11
	ctx.r29.u64 = uint32_t((ctx.r11.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r29.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_880A6C88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880A6CA0;
	sub_8813FF90(ctx, base);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// or r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 | ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A6CBC;
	sub_8813FF48(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r7,-4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// li r6,243
	ctx.r6.s64 = 243;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r8,r23
	ctx.r4.u64 = ctx.r8.u64 + ctx.r23.u64;
	// subf r5,r7,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r7.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6CDC;
	sub_8801A9C8(ctx, base);
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880A6CFC;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A6D08;
	sub_8813FF48(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// li r6,242
	ctx.r6.s64 = 242;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// subf r5,r11,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6D24;
	sub_8801A9C8(ctx, base);
	// lhz r10,12(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880A6D3C;
	sub_8813FF90(ctx, base);
	// lis r29,171
	ctx.r29.s64 = 11206656;
	// lis r28,226
	ctx.r28.s64 = 14811136;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880a6d54
	if (ctx.cr6.eq) goto loc_880A6D54;
	// lis r29,33
	ctx.r29.s64 = 2162688;
	// lis r28,42
	ctx.r28.s64 = 2752512;
loc_880A6D54:
	// lhz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -24);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880a6d9c
	if (!ctx.cr6.gt) goto loc_880A6D9C;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_880A6D6C:
	// lbzx r11,r27,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1287
	ctx.r3.s64 = ctx.r11.s64 + 1287;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6D84;
	sub_8801A9C8(ctx, base);
	// lhz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// add r29,r29,r20
	ctx.r29.u64 = ctx.r29.u64 + ctx.r20.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a6d6c
	if (ctx.cr6.lt) goto loc_880A6D6C;
loc_880A6D9C:
	// lhz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + -32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x880a6ddc
	if (!ctx.cr6.lt) goto loc_880A6DDC;
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x880a6ddc
	if (ctx.cr6.eq) goto loc_880A6DDC;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1287
	ctx.r3.s64 = ctx.r11.s64 + 1287;
	// bl 0x8801a9c8
	ctx.lr = 0x880A6DDC;
	sub_8801A9C8(ctx, base);
loc_880A6DDC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// blt cr6,0x880a6b14
	if (ctx.cr6.lt) goto loc_880A6B14;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fb0
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A9F48) {
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
	// bge 0x880a9fb8
	if (!ctx.cr0.lt) goto loc_880A9FB8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a9fb8
	if (ctx.cr6.eq) goto loc_880A9FB8;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// ble cr6,0x880a9f98
	if (!ctx.cr6.gt) goto loc_880A9F98;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// bgt cr6,0x880a9fa4
	if (ctx.cr6.gt) goto loc_880A9FA4;
loc_880A9F98:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x880a9fa4
	if (ctx.cr6.lt) goto loc_880A9FA4;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_880A9FA4:
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x880a9fb8
	if (!ctx.cr0.lt) goto loc_880A9FB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880A9FB8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a9fdc
	if (!ctx.cr6.eq) goto loc_880A9FDC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bge 0x880a9fe4
	if (!ctx.cr0.lt) goto loc_880A9FE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880aa0dc
	goto loc_880AA0DC;
loc_880A9FDC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_880A9FE4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8801a860
	ctx.lr = 0x880A9FF8;
	sub_8801A860(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r9,-32768
	ctx.r5.s64 = ctx.r9.s64 + -32768;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 28, ctx.xer);
	// blt cr6,0x880aa038
	if (ctx.cr6.lt) goto loc_880AA038;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_880AA038:
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// blt cr6,0x880aa058
	if (ctx.cr6.lt) goto loc_880AA058;
	// cmpwi cr6,r9,26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 26, ctx.xer);
	// bgt cr6,0x880aa058
	if (ctx.cr6.gt) goto loc_880AA058;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_880AA058:
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// bgt cr6,0x880aa070
	if (ctx.cr6.gt) goto loc_880AA070;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_880AA070:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880AA084;
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
	ctx.lr = 0x880AA0A0;
	sub_8813FF90(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880aa0b4
	if (ctx.cr6.eq) goto loc_880AA0B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880AA0B4;
	sub_8813FF08(ctx, base);
loc_880AA0B4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880AA0C0;
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
	ctx.lr = 0x880AA0D8;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AA0DC:
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

DEFINE_REX_FUNC(sub_880AB4B8) {
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
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze. r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x880ab528
	if (ctx.cr0.eq) goto loc_880AB528;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r11,4019
	ctx.r3.s64 = ctx.r11.s64 + 4019;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AB4F8;
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
	ctx.lr = 0x880AB51C;
	sub_8813FF90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8813ff48
	ctx.lr = 0x880AB528;
	sub_8813FF48(ctx, base);
loc_880AB528:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ab564
	if (ctx.cr6.eq) goto loc_880AB564;
	// addi r3,r11,4019
	ctx.r3.s64 = ctx.r11.s64 + 4019;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AB54C;
	sub_8801A9C8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880AB564;
	sub_8813FF90(ctx, base);
loc_880AB564:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bgt 0x880ab584
	if (ctx.cr0.gt) goto loc_880AB584;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880ab5c0
	goto loc_880AB5C0;
loc_880AB584:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880ab5bc
	if (!ctx.cr0.lt) goto loc_880AB5BC;
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
	// bne 0x880ab5bc
	if (!ctx.cr0.eq) goto loc_880AB5BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x880ab5c0
	goto loc_880AB5C0;
loc_880AB5BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AB5C0:
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

DEFINE_REX_FUNC(sub_880AC130) {
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
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880AC338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x880AC340;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,280
	ctx.r31.s64 = ctx.r3.s64 + 280;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lis r29,-2
	ctx.r29.s64 = -131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r22,1
	ctx.r22.s64 = 1;
loc_880AC36C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880ac484
	if (ctx.cr6.lt) goto loc_880AC484;
	// beq cr6,0x880ac3c0
	if (ctx.cr6.eq) goto loc_880AC3C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880ac4a4
	if (!ctx.cr6.lt) goto loc_880AC4A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-8192
	ctx.r11.s64 = ctx.r9.s64 + -8192;
	// addi r9,r8,8192
	ctx.r9.s64 = ctx.r8.s64 + 8192;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bgt cr6,0x880ac4a4
	if (ctx.cr6.gt) goto loc_880AC4A4;
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r23,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x880ac4a4
	goto loc_880AC4A4;
loc_880AC3C0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8801a860
	ctx.lr = 0x880AC3D4;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r8,108(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// subf. r7,r8,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bgt 0x880ac43c
	if (ctx.cr0.gt) goto loc_880AC43C;
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_880AC43C:
	// addi r11,r30,872
	ctx.r11.s64 = ctx.r30.s64 + 872;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880AC444:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ac464
	if (ctx.cr6.eq) goto loc_880AC464;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,150
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 150, ctx.xer);
	// blt cr6,0x880ac444
	if (ctx.cr6.lt) goto loc_880AC444;
	// b 0x880ac4a4
	goto loc_880AC4A4;
loc_880AC464:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x880ac4a4
	goto loc_880AC4A4;
loc_880AC484:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880ac4a4
	if (ctx.cr6.lt) goto loc_880AC4A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt 0x880ac4a4
	if (ctx.cr0.gt) goto loc_880AC4A4;
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_880AC4A4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpwi cr6,r27,10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 10, ctx.xer);
	// blt cr6,0x880ac36c
	if (ctx.cr6.lt) goto loc_880AC36C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B2138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880B2140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// addi r11,r11,17504
	ctx.r11.s64 = ctx.r11.s64 + 17504;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b21ec
	if (!ctx.cr6.eq) goto loc_880B21EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b21ec
	if (!ctx.cr6.eq) goto loc_880B21EC;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r30,r3,3
	ctx.r30.s64 = ctx.r3.s64 + 3;
	// lwz r11,21888(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b21ec
	if (!ctx.cr6.eq) goto loc_880B21EC;
	// bl 0x880694f0
	ctx.lr = 0x880B2188;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b21a8
	if (ctx.cr6.eq) goto loc_880B21A8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r29,7
	ctx.r29.s64 = 7;
	// bl 0x8801a138
	ctx.lr = 0x880B219C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b21ec
	if (ctx.cr6.eq) goto loc_880B21EC;
loc_880B21A8:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,75
	ctx.r3.s64 = 75;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B21C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b21ec
	if (ctx.cr6.eq) goto loc_880B21EC;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,75
	ctx.r4.s64 = 75;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B21EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B21EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B2588) {
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
	// li r30,30
	ctx.r30.s64 = 30;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2618
	if (!ctx.cr6.eq) goto loc_880B2618;
	// bl 0x880694f0
	ctx.lr = 0x880B25B4;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b25d4
	if (ctx.cr6.eq) goto loc_880B25D4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,15
	ctx.r30.s64 = 15;
	// bl 0x8801a138
	ctx.lr = 0x880B25C8;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2618
	if (ctx.cr6.eq) goto loc_880B2618;
loc_880B25D4:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,86
	ctx.r3.s64 = 86;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B25F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2618
	if (ctx.cr6.eq) goto loc_880B2618;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2618:
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

DEFINE_REX_FUNC(sub_880B2BA0) {
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
	// lwz r11,17496(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2c48
	if (!ctx.cr6.eq) goto loc_880B2C48;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,35
	ctx.r30.s64 = 35;
	// stw r11,17496(r10)
	REX_STORE_U32(ctx.r10.u32 + 17496, ctx.r11.u32);
	// lwz r11,21888(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2c48
	if (!ctx.cr6.eq) goto loc_880B2C48;
	// bl 0x880694f0
	ctx.lr = 0x880B2BE4;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b2c04
	if (ctx.cr6.eq) goto loc_880B2C04;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,17
	ctx.r30.s64 = 17;
	// bl 0x8801a138
	ctx.lr = 0x880B2BF8;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2c48
	if (ctx.cr6.eq) goto loc_880B2C48;
loc_880B2C04:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,95
	ctx.r3.s64 = 95;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2c48
	if (ctx.cr6.eq) goto loc_880B2C48;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2C48:
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

DEFINE_REX_FUNC(sub_880B3398) {
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
	// bne cr6,0x880b3428
	if (!ctx.cr6.eq) goto loc_880B3428;
	// bl 0x880694f0
	ctx.lr = 0x880B33C4;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b33e4
	if (ctx.cr6.eq) goto loc_880B33E4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,33
	ctx.r30.s64 = 33;
	// bl 0x8801a138
	ctx.lr = 0x880B33D8;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3428
	if (ctx.cr6.eq) goto loc_880B3428;
loc_880B33E4:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,141
	ctx.r3.s64 = 141;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B3404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b3428
	if (ctx.cr6.eq) goto loc_880B3428;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,254
	ctx.r6.s64 = 254;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,141
	ctx.r4.s64 = 141;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B3428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3428:
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

DEFINE_REX_FUNC(sub_880B3A60) {
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
	// bne cr6,0x880b3acc
	if (!ctx.cr6.eq) goto loc_880B3ACC;
	// bl 0x880694f0
	ctx.lr = 0x880B3A88;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3aa8
	if (ctx.cr6.eq) goto loc_880B3AA8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B3A9C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3acc
	if (ctx.cr6.eq) goto loc_880B3ACC;
loc_880B3AA8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,162
	ctx.r4.s64 = 162;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B3ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3ACC:
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

DEFINE_REX_FUNC(sub_880B40B0) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88140530
	sub_88140530(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B4100) {
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
	ctx.lr = 0x880B4110;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b4138
	if (!ctx.cr6.eq) goto loc_880B4138;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B4138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B42B0) {
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
	ctx.lr = 0x880B42C0;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b42e8
	if (!ctx.cr6.eq) goto loc_880B42E8;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B42E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B42E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4F10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880B4F18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88023f40
	ctx.lr = 0x880B4F20;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r11,23
	ctx.r4.u64 = ctx.r11.u32 & 0x1FF;
	// stw r4,1004(r31)
	REX_STORE_U32(ctx.r31.u32 + 1004, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x880B4F44;
	sub_8801A860(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,1016(r31)
	REX_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r10,1020(r31)
	REX_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x880B4F6C;
	sub_8801A860(ctx, base);
	// stw r30,1008(r31)
	REX_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,1012(r31)
	REX_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x8801a860
	ctx.lr = 0x880B4F90;
	sub_8801A860(ctx, base);
	// stw r30,1024(r31)
	REX_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,1028(r31)
	REX_STORE_U32(ctx.r31.u32 + 1028, ctx.r8.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x8801a860
	ctx.lr = 0x880B4FB4;
	sub_8801A860(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,-30608
	ctx.r7.s64 = -2005925888;
	// stw r6,1024(r31)
	REX_STORE_U32(ctx.r31.u32 + 1024, ctx.r6.u32);
	// lwz r11,21864(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 21864);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880b5000
	if (ctx.cr6.eq) goto loc_880B5000;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x8801a808
	ctx.lr = 0x880B4FE0;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8801a808
	ctx.lr = 0x880B4FF8;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
loc_880B5000:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r26,r11,-24056
	ctx.r26.s64 = ctx.r11.s64 + -24056;
	// clrlwi r11,r10,23
	ctx.r11.u64 = ctx.r10.u32 & 0x1FF;
	// addi r9,r26,112
	ctx.r9.s64 = ctx.r26.s64 + 112;
	// addi r8,r26,176
	ctx.r8.s64 = ctx.r26.s64 + 176;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x880b502c
	if (!ctx.cr6.gt) goto loc_880B502C;
	// addi r9,r26,176
	ctx.r9.s64 = ctx.r26.s64 + 176;
	// addi r8,r26,112
	ctx.r8.s64 = ctx.r26.s64 + 112;
	// subfic r11,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r11.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
loc_880B502C:
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// divw r7,r11,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r10,r31,492
	ctx.r10.s64 = ctx.r31.s64 + 492;
	// subfic r6,r7,7
	ctx.xer.ca = ctx.r7.u32 <= 7;
	ctx.r6.u64 = static_cast<uint64_t>(7) - ctx.r7.u64;
	// subf r27,r30,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r30.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,17
	ctx.r29.s64 = 17;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_880B5054:
	// li r5,20
	ctx.r5.s64 = 20;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880B5064;
	sub_8813FA60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// bne 0x880b5054
	if (!ctx.cr0.eq) goto loc_880B5054;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r31,872
	ctx.r11.s64 = ctx.r31.s64 + 872;
	// addi r10,r31,852
	ctx.r10.s64 = ctx.r31.s64 + 852;
	// li r29,17
	ctx.r29.s64 = 17;
	// subf r27,r11,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,1020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_880B50C0:
	// li r5,20
	ctx.r5.s64 = 20;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880B50D0;
	sub_8813FA60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// bne 0x880b50c0
	if (!ctx.cr0.eq) goto loc_880B50C0;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwz r5,1020(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1020);
	// lwz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B6808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880B6810;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B6824;
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
	ctx.lr = 0x880B6838;
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
	// bge 0x880b6d84
	if (!ctx.cr0.lt) goto loc_880B6D84;
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
	// bne cr6,0x880b688c
	if (!ctx.cr6.eq) goto loc_880B688C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// bl 0x880244d0
	ctx.lr = 0x880B6874;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// bl 0x880244d0
	ctx.lr = 0x880B6888;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_880B688C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b68c0
	if (ctx.cr6.eq) goto loc_880B68C0;
	// lwz r29,904(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// lwz r28,908(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// lwz r27,32(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_880B68C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880b6adc
	if (ctx.cr6.lt) goto loc_880B6ADC;
	// beq cr6,0x880b69cc
	if (ctx.cr6.eq) goto loc_880B69CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880b6d08
	if (!ctx.cr6.lt) goto loc_880B6D08;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x880B6908;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B6940;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r9,24
	ctx.r6.s64 = ctx.r9.s64 + 24;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88013ce0
	ctx.lr = 0x880B6970;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r9,32
	ctx.r6.s64 = ctx.r9.s64 + 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B69A8;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r9,13
	ctx.r9.s64 = ctx.r9.s64 + 13;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x880b6cf8
	goto loc_880B6CF8;
loc_880B69CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x880B69E8;
	sub_88013940(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B6A18;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B6A50;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88013ce0
	ctx.lr = 0x880B6A80;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B6AB8;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,100
	ctx.r6.s64 = ctx.r11.s64 + 100;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x880b6cf8
	goto loc_880B6CF8;
loc_880B6ADC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013940
	ctx.lr = 0x880B6AEC;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// bl 0x88013940
	ctx.lr = 0x880B6B08;
	sub_88013940(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88013ce0
	ctx.lr = 0x880B6B38;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88013ce0
	ctx.lr = 0x880B6B68;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88013ce0
	ctx.lr = 0x880B6B98;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88013ce0
	ctx.lr = 0x880B6BC8;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r9,60
	ctx.r6.s64 = ctx.r9.s64 + 60;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88013ce0
	ctx.lr = 0x880B6C00;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,15
	ctx.r3.s64 = 15;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// addi r6,r6,60
	ctx.r6.s64 = ctx.r6.s64 + 60;
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88013ce0
	ctx.lr = 0x880B6C38;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88013ce0
	ctx.lr = 0x880B6C68;
	sub_88013CE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x88013ce0
	ctx.lr = 0x880B6C98;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r9,100
	ctx.r6.s64 = ctx.r9.s64 + 100;
	// lwz r5,900(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 900);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,896(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88013ce0
	ctx.lr = 0x880B6CD0;
	sub_88013CE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r9,100
	ctx.r6.s64 = ctx.r9.s64 + 100;
	// lwz r5,908(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 908);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 904);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B6CF8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x880B6D08;
	sub_88013CE0(ctx, base);
loc_880B6D08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b6d84
	if (!ctx.cr0.lt) goto loc_880B6D84;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880b6d34
	if (!ctx.cr0.lt) goto loc_880B6D34;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x880B6D34;
	sub_88021598(ctx, base);
loc_880B6D34:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x880b6d54
	if (ctx.cr6.gt) goto loc_880B6D54;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_880B6D54:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x880244a8
	ctx.lr = 0x880B6D84;
	sub_880244A8(ctx, base);
loc_880B6D84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BC6E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880BC6F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880BC700;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BC714;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880bc9ec
	if (ctx.cr6.gt) goto loc_880BC9EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880bc920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BC920;
	// bdzf 4*cr6+eq,0x880bc998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BC998;
	// bne cr6,0x880bc9d0
	if (!ctx.cr6.eq) goto loc_880BC9D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88021698
	ctx.lr = 0x880BC744;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bc9ec
	if (!ctx.cr6.eq) goto loc_880BC9EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bc76c
	if (ctx.cr6.eq) goto loc_880BC76C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC76C:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lis r10,344
	ctx.r10.s64 = 22544384;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880bc7b0
	if (!ctx.cr6.lt) goto loc_880BC7B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bc7b0
	if (!ctx.cr6.eq) goto loc_880BC7B0;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BC79C;
	sub_88021D68(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC7B0:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bc9ec
	if (!ctx.cr6.eq) goto loc_880BC9EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bc864
	if (!ctx.cr6.eq) goto loc_880BC864;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bc850
	if (!ctx.cr6.eq) goto loc_880BC850;
	// lwz r11,1264(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1264);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r4,r10,25456
	ctx.r4.s64 = ctx.r10.s64 + 25456;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BC804;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,1264(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1264);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,1264(r30)
	REX_STORE_U32(ctx.r30.u32 + 1264, ctx.r7.u32);
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r6,-3
	ctx.xer.ca = ctx.r6.u32 > 2;
	ctx.r11.s64 = ctx.r6.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bgt 0x880bc82c
	if (ctx.cr0.gt) goto loc_880BC82C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_880BC82C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// blt 0x880bc88c
	if (ctx.cr0.lt) goto loc_880BC88C;
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
loc_880BC850:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC864:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,24512
	ctx.r4.s64 = ctx.r10.s64 + 24512;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BC888;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880BC88C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x880bc8a8
	if (ctx.cr6.lt) goto loc_880BC8A8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880BC8A8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x880bc8c4
	if (ctx.cr6.lt) goto loc_880BC8C4;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880BC8C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880bc900
	if (!ctx.cr0.lt) goto loc_880BC900;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14720
	ctx.r4.s64 = ctx.r11.s64 + -14720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880BC8E8;
	sub_88021AD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BC8F4;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC900:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC920:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x880BC92C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bc9ec
	if (!ctx.cr6.eq) goto loc_880BC9EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x880bc9ec
	if (ctx.cr0.gt) goto loc_880BC9EC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-30709
	ctx.r10.s64 = -2012545024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,25064
	ctx.r4.s64 = ctx.r10.s64 + 25064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BC96C;
	sub_880213F0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r8,-30708
	ctx.r8.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-4568
	ctx.r4.s64 = ctx.r8.s64 + -4568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BC984;
	sub_88021D68(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC998:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,144(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880bc9ec
	if (!ctx.cr6.gt) goto loc_880BC9EC;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BC9BC;
	sub_88021D68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880BC9D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x880BC9DC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bc9ec
	if (!ctx.cr6.eq) goto loc_880BC9EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880BC9EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF380) {
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
	// lwz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880bf4b0
	if (!ctx.cr6.gt) goto loc_880BF4B0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,224(r5)
	REX_STORE_U32(ctx.r5.u32 + 224, ctx.r9.u32);
	// bgt 0x880bf490
	if (ctx.cr0.gt) goto loc_880BF490;
	// lwz r11,240(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 240);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880bf468
	if (ctx.cr6.lt) goto loc_880BF468;
	// beq cr6,0x880bf418
	if (ctx.cr6.eq) goto loc_880BF418;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880bf490
	if (!ctx.cr6.lt) goto loc_880BF490;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lis r11,208
	ctx.r11.s64 = 13631488;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880bf490
	if (!ctx.cr6.gt) goto loc_880BF490;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,-25
	ctx.r6.s64 = -25;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x88013ce0
	ctx.lr = 0x880BF3F8;
	sub_88013CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880bf308
	ctx.lr = 0x880BF400;
	sub_880BF308(ctx, base);
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
loc_880BF418:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880bf490
	if (!ctx.cr6.gt) goto loc_880BF490;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r6,-15
	ctx.r6.s64 = -15;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013ce0
	ctx.lr = 0x880BF448;
	sub_88013CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880bf308
	ctx.lr = 0x880BF450;
	sub_880BF308(ctx, base);
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
loc_880BF468:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,240
	ctx.r11.s64 = 15728640;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880bf490
	if (!ctx.cr6.gt) goto loc_880BF490;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// li r6,-15
	ctx.r6.s64 = -15;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88013940
	ctx.lr = 0x880BF490;
	sub_88013940(ctx, base);
loc_880BF490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880bf308
	ctx.lr = 0x880BF498;
	sub_880BF308(ctx, base);
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
loc_880BF4B0:
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

DEFINE_REX_FUNC(sub_880C0460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C0468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	ctx.lr = 0x880C0484;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880c0510
	if (ctx.cr6.lt) goto loc_880C0510;
	// bne cr6,0x880c0568
	if (!ctx.cr6.eq) goto loc_880C0568;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880694c8
	ctx.lr = 0x880C04A0;
	sub_880694C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880694d8
	ctx.lr = 0x880C04A8;
	sub_880694D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880c04e0
	if (!ctx.cr0.lt) goto loc_880C04E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c04e0
	if (ctx.cr6.eq) goto loc_880C04E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8806eef8
	ctx.lr = 0x880C04D4;
	sub_8806EEF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880C04E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c0568
	if (!ctx.cr0.lt) goto loc_880C0568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880694c8
	ctx.lr = 0x880C04F8;
	sub_880694C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880C0504;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C0510:
	// bl 0x880b1f90
	ctx.lr = 0x880C0514;
	sub_880B1F90(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r11,-15648
	ctx.r29.s64 = ctx.r11.s64 + -15648;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x880c0340
	ctx.lr = 0x880C0534;
	sub_880C0340(ctx, base);
	// addi r3,r29,1280
	ctx.r3.s64 = ctx.r29.s64 + 1280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x880c0340
	ctx.lr = 0x880C0548;
	sub_880C0340(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8806eef8
	ctx.lr = 0x880C0550;
	sub_8806EEF8(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880C0568:
	// li r30,0
	ctx.r30.s64 = 0;
loc_880C056C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880C0584;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880C0590;
	sub_8813FF28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880C05AC;
	sub_8813FF90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x880c056c
	if (ctx.cr6.lt) goto loc_880C056C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C1FA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C1FB0;
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
	ctx.lr = 0x880C1FC0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021898
	ctx.lr = 0x880C1FD4;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,1524(r29)
	REX_STORE_U32(ctx.r29.u32 + 1524, ctx.r11.u32);
	// addi r5,r9,7896
	ctx.r5.s64 = ctx.r9.s64 + 7896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880C1FFC;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C22B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C22C0;
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
	ctx.lr = 0x880C22D0;
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
	ctx.lr = 0x880C22E4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880c2318
	if (!ctx.cr0.lt) goto loc_880C2318;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bgt 0x880c2318
	if (ctx.cr0.gt) goto loc_880C2318;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x880C2318;
	sub_88021928(ctx, base);
loc_880C2318:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C2C30) {
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
	ctx.lr = 0x880C2C50;
	sub_88023F40(ctx, base);
	// lwz r10,2436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2436);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,2436(r3)
	REX_STORE_U32(ctx.r3.u32 + 2436, ctx.r10.u32);
	// bgt 0x880c2c88
	if (ctx.cr0.gt) goto loc_880C2C88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2436(r11)
	REX_STORE_U32(ctx.r11.u32 + 2436, ctx.r10.u32);
	// bl 0x880c9630
	ctx.lr = 0x880C2C74;
	sub_880C9630(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021928
	ctx.lr = 0x880C2C80;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880c2c8c
	goto loc_880C2C8C;
loc_880C2C88:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880C2C8C:
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

DEFINE_REX_FUNC(sub_880C3420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C3428;
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
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C344C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r6.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// stw r5,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r5.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C348C;
	sub_880244A8(ctx, base);
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,13072
	ctx.r5.s64 = ctx.r3.s64 + 13072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C34A0;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C3648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C3650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C3664;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x880C3678;
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
	// bge 0x880c36f4
	if (!ctx.cr0.lt) goto loc_880C36F4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bge cr6,0x880c36ac
	if (!ctx.cr6.lt) goto loc_880C36AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_880C36AC:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,92(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// addis r28,r11,-65
	ctx.r28.s64 = ctx.r11.s64 + -4259840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C36C8;
	sub_880244D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x880C36EC;
	sub_88013CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C36F4;
	sub_880244A8(ctx, base);
loc_880C36F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C40A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C40A8;
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
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880C40CC;
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
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r7,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// stw r4,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C4110;
	sub_880244A8(ctx, base);
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,16192
	ctx.r5.s64 = ctx.r3.s64 + 16192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C4124;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C47F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C47F8;
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
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x88021508
	ctx.lr = 0x880C4818;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,99
	ctx.r11.s64 = 99;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,-79
	ctx.r6.s64 = -79;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C4850;
	sub_880244A8(ctx, base);
	// lis r5,-30708
	ctx.r5.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,17944
	ctx.r5.s64 = ctx.r5.s64 + 17944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C4864;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880C5148;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x880C5160;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x88021508
	ctx.lr = 0x880C5174;
	sub_88021508(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r9,28(r26)
	REX_STORE_U32(ctx.r26.u32 + 28, ctx.r9.u32);
	// stw r8,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r8.u32);
	// stw r8,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r7.u32);
	// lwz r4,92(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r6,96(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 96);
	// addis r5,r6,-65
	ctx.r5.s64 = ctx.r6.s64 + -4259840;
	// bl 0x880244d0
	ctx.lr = 0x880C51BC;
	sub_880244D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r3,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r3.u32);
	// stw r5,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r5.u32);
	// lis r3,-30708
	ctx.r3.s64 = -2012479488;
	// stw r4,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,20432
	ctx.r5.s64 = ctx.r3.s64 + 20432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C51E4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5DB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880C5DB8;
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
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x880C5DD8;
	sub_88021508(ctx, base);
	// li r9,129
	ctx.r9.s64 = 129;
	// li r10,29
	ctx.r10.s64 = 29;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,-6
	ctx.r5.s64 = -6;
	// li r4,74
	ctx.r4.s64 = 74;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r8,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r8.u32);
	// li r28,48
	ctx.r28.s64 = 48;
	// stw r5,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r5.u32);
	// stw r4,52(r7)
	REX_STORE_U32(ctx.r7.u32 + 52, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// stw r9,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r9.u32);
	// stw r28,56(r7)
	REX_STORE_U32(ctx.r7.u32 + 56, ctx.r28.u32);
	// stw r10,60(r7)
	REX_STORE_U32(ctx.r7.u32 + 60, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C5E4C;
	sub_880244A8(ctx, base);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,23080
	ctx.r5.s64 = ctx.r9.s64 + 23080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C5E60;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6D78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C6D80;
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
	ctx.lr = 0x880C6D94;
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
	ctx.lr = 0x880C6DA8;
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
	// bge 0x880c6fec
	if (!ctx.cr0.lt) goto loc_880C6FEC;
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
	// bne cr6,0x880c6de0
	if (!ctx.cr6.eq) goto loc_880C6DE0;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_880C6DE0:
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
	ctx.lr = 0x880C6E0C;
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
	// li r9,20
	ctx.r9.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88013ce0
	ctx.lr = 0x880C6E34;
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
	// li r9,21
	ctx.r9.s64 = 21;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// bl 0x88013ce0
	ctx.lr = 0x880C6E60;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// bl 0x88013ce0
	ctx.lr = 0x880C6E88;
	sub_88013CE0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
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
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r11,-6
	ctx.r6.s64 = ctx.r11.s64 + -6;
	// bl 0x88013ce0
	ctx.lr = 0x880C6EB4;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bl 0x88013ce0
	ctx.lr = 0x880C6EDC;
	sub_88013CE0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,25
	ctx.r9.s64 = 25;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// bl 0x88013ce0
	ctx.lr = 0x880C6F08;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,26
	ctx.r9.s64 = 26;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88013ce0
	ctx.lr = 0x880C6F30;
	sub_88013CE0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,27
	ctx.r9.s64 = 27;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r11,-14
	ctx.r6.s64 = ctx.r11.s64 + -14;
	// bl 0x88013ce0
	ctx.lr = 0x880C6F5C;
	sub_88013CE0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// bl 0x88013ce0
	ctx.lr = 0x880C6F84;
	sub_88013CE0(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,29
	ctx.r9.s64 = 29;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r11,-18
	ctx.r6.s64 = ctx.r11.s64 + -18;
	// bl 0x88013ce0
	ctx.lr = 0x880C6FB0;
	sub_88013CE0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c6fec
	if (!ctx.cr0.lt) goto loc_880C6FEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c6fdc
	if (!ctx.cr0.lt) goto loc_880C6FDC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880C6FDC;
	sub_88021598(ctx, base);
loc_880C6FDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880C6FEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA0C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CA0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CA0D8;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x880CA0EC;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,9104
	ctx.r5.s64 = ctx.r9.s64 + 9104;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,1528(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1528);
	// bl 0x88021a78
	ctx.lr = 0x880CA10C;
	sub_88021A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ca138
	if (!ctx.cr6.eq) goto loc_880CA138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1528(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1528);
	// bl 0x88021928
	ctx.lr = 0x880CA120;
	sub_88021928(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9240
	ctx.r4.s64 = ctx.r11.s64 + 9240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x880CA134;
	sub_88021780(ctx, base);
	// stw r3,1528(r30)
	REX_STORE_U32(ctx.r30.u32 + 1528, ctx.r3.u32);
loc_880CA138:
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8552
	ctx.r5.s64 = ctx.r11.s64 + 8552;
	// bl 0x88021a78
	ctx.lr = 0x880CA14C;
	sub_88021A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ca178
	if (!ctx.cr6.eq) goto loc_880CA178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x88021928
	ctx.lr = 0x880CA160;
	sub_88021928(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8552
	ctx.r4.s64 = ctx.r11.s64 + 8552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x880CA174;
	sub_88021780(ctx, base);
	// stw r3,152(r30)
	REX_STORE_U32(ctx.r30.u32 + 152, ctx.r3.u32);
loc_880CA178:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// stw r11,100(r30)
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lis r8,288
	ctx.r8.s64 = 18874368;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021d68
	ctx.lr = 0x880CA1AC;
	sub_88021D68(ctx, base);
	// bl 0x880b3e88
	ctx.lr = 0x880CA1B0;
	sub_880B3E88(ctx, base);
	// lwz r4,2448(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 2448);
	// li r3,64
	ctx.r3.s64 = 64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880ca1c4
	if (!ctx.cr6.eq) goto loc_880CA1C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880CA1C4:
	// bl 0x88012f38
	ctx.lr = 0x880CA1C8;
	sub_88012F38(ctx, base);
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-25416
	ctx.r5.s64 = ctx.r11.s64 + -25416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CA1DC;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB4E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CB4E8;
	__savegprlr_28(ctx, base);
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
	// bl 0x88023f40
	ctx.lr = 0x880CB4FC;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021be0
	ctx.lr = 0x880CB510;
	sub_88021BE0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// stw r6,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// stw r11,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r5.u32);
	// stw r4,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r4.u32);
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r9,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// stw r9,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CB56C;
	sub_880244A8(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,11840
	ctx.r4.s64 = ctx.r11.s64 + 11840;
	// bl 0x88021780
	ctx.lr = 0x880CB580;
	sub_88021780(ctx, base);
	// stw r3,1528(r28)
	REX_STORE_U32(ctx.r28.u32 + 1528, ctx.r3.u32);
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-18160
	ctx.r5.s64 = ctx.r10.s64 + -18160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CB598;
	sub_88021B90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CBBE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880CBBF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,296
	ctx.r10.s64 = 19398656;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-8552
	ctx.r4.s64 = ctx.r9.s64 + -8552;
	// bl 0x88021d68
	ctx.lr = 0x880CBC2C;
	sub_88021D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CBC34;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021be0
	ctx.lr = 0x880CBC48;
	sub_88021BE0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r26,64
	ctx.r26.s64 = 64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// stw r6,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r26.u32);
	// addi r4,r7,11840
	ctx.r4.s64 = ctx.r7.s64 + 11840;
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r25,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r25.u32);
	// stw r31,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r31.u32);
	// stw r11,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// bl 0x88021780
	ctx.lr = 0x880CBCB0;
	sub_88021780(ctx, base);
	// stw r3,1528(r27)
	REX_STORE_U32(ctx.r27.u32 + 1528, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x880CBCBC;
	sub_880244A8(ctx, base);
	// lis r6,-30707
	ctx.r6.s64 = -2012413952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r6,-18160
	ctx.r5.s64 = ctx.r6.s64 + -18160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021b90
	ctx.lr = 0x880CBCD0;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880CC4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880CC4D8;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x880CC4EC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880cc564
	if (ctx.cr6.gt) goto loc_880CC564;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880cc570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CC570;
	// bdzf 4*cr6+eq,0x880cc5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880CC5F8;
	// bne cr6,0x880cc670
	if (!ctx.cr6.eq) goto loc_880CC670;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1528(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1528);
	// bl 0x88021a28
	ctx.lr = 0x880CC51C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cc564
	if (!ctx.cr6.eq) goto loc_880CC564;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x880cc564
	if (!ctx.cr0.lt) goto loc_880CC564;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,19048
	ctx.r4.s64 = ctx.r9.s64 + 19048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x880213f0
	ctx.lr = 0x880CC558;
	sub_880213F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_880CC564:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CC570:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x880CC57C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cc564
	if (!ctx.cr6.eq) goto loc_880CC564;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880cc564
	if (!ctx.cr0.lt) goto loc_880CC564;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r8,-30708
	ctx.r8.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,20288
	ctx.r4.s64 = ctx.r8.s64 + 20288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// bl 0x880213f0
	ctx.lr = 0x880CC5E0;
	sub_880213F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CC5F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88021698
	ctx.lr = 0x880CC604;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cc564
	if (!ctx.cr6.eq) goto loc_880CC564;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880cc564
	if (!ctx.cr0.lt) goto loc_880CC564;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x88021598
	ctx.lr = 0x880CC630;
	sub_88021598(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,19472
	ctx.r4.s64 = ctx.r9.s64 + 19472;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880213f0
	ctx.lr = 0x880CC654;
	sub_880213F0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880CC670:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88021698
	ctx.lr = 0x880CC67C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cc564
	if (!ctx.cr6.eq) goto loc_880CC564;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bgt 0x880cc564
	if (ctx.cr0.gt) goto loc_880CC564;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9240
	ctx.r4.s64 = ctx.r11.s64 + 9240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021780
	ctx.lr = 0x880CC6B0;
	sub_88021780(ctx, base);
	// lwz r10,1924(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r3,1528(r30)
	REX_STORE_U32(ctx.r30.u32 + 1528, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cc6d8
	if (ctx.cr6.eq) goto loc_880CC6D8;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-15288
	ctx.r4.s64 = ctx.r11.s64 + -15288;
	// b 0x880cc6e0
	goto loc_880CC6E0;
loc_880CC6D8:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r4,r11,-13416
	ctx.r4.s64 = ctx.r11.s64 + -13416;
loc_880CC6E0:
	// bl 0x88021ad0
	ctx.lr = 0x880CC6E4;
	sub_88021AD0(ctx, base);
	// lwz r11,1924(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1924);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1924(r30)
	REX_STORE_U32(ctx.r30.u32 + 1924, ctx.r11.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880cc708
	if (ctx.cr6.eq) goto loc_880CC708;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC708:
	// lwz r11,424(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cc720
	if (ctx.cr6.eq) goto loc_880CC720;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC720:
	// lwz r11,644(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cc738
	if (ctx.cr6.eq) goto loc_880CC738;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC738:
	// lwz r11,864(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cc750
	if (ctx.cr6.eq) goto loc_880CC750;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC750:
	// lwz r11,1084(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cc768
	if (ctx.cr6.eq) goto loc_880CC768;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC768:
	// lwz r11,1304(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880cc780
	if (ctx.cr6.eq) goto loc_880CC780;
	// lwz r11,1936(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1936(r30)
	REX_STORE_U32(ctx.r30.u32 + 1936, ctx.r11.u32);
loc_880CC780:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021c70
	ctx.lr = 0x880CC78C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF068) {
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
	ctx.lr = 0x880CF088;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x880CF098;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,-4312
	ctx.r5.s64 = ctx.r10.s64 + -4312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x880CF0B4;
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

DEFINE_REX_FUNC(sub_880CF2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF2C0;
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
	ctx.lr = 0x880CF2D0;
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
	ctx.lr = 0x880CF2E4;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x880cf348
	if (!ctx.cr0.lt) goto loc_880CF348;
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
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x880cf348
	if (!ctx.cr6.gt) goto loc_880CF348;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,7
	ctx.r10.s64 = 7;
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
	ctx.lr = 0x880CF33C;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880CF348:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CFF40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880CFF48;
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
	ctx.lr = 0x880CFF5C;
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
	ctx.lr = 0x880CFF70;
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
	// bge 0x880d00f4
	if (!ctx.cr0.lt) goto loc_880D00F4;
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
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addis r30,r8,-32
	ctx.r30.s64 = ctx.r8.s64 + -2097152;
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bne cr6,0x880cffe0
	if (!ctx.cr6.eq) goto loc_880CFFE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880CFFB8;
	sub_880244D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880CFFCC;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880cffe0
	if (ctx.cr6.eq) goto loc_880CFFE0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_880CFFE0:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880D0014;
	sub_88013CE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// bl 0x88013ce0
	ctx.lr = 0x880D004C;
	sub_88013CE0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880d00f4
	if (!ctx.cr0.lt) goto loc_880D00F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244a8
	ctx.lr = 0x880D007C;
	sub_880244A8(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// bge 0x880d00f4
	if (!ctx.cr0.lt) goto loc_880D00F4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x880d00c8
	if (!ctx.cr0.lt) goto loc_880D00C8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880D00C8;
	sub_88021598(ctx, base);
loc_880D00C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_880D00F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D32B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880D32C0;
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
	ctx.lr = 0x880D32D0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021be0
	ctx.lr = 0x880D32E4;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,720
	ctx.r9.s64 = 720;
	// lis r8,-30707
	ctx.r8.s64 = -2012413952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r4,r8,-3992
	ctx.r4.s64 = ctx.r8.s64 + -3992;
	// bl 0x88021780
	ctx.lr = 0x880D330C;
	sub_88021780(ctx, base);
	// stw r3,844(r29)
	REX_STORE_U32(ctx.r29.u32 + 844, ctx.r3.u32);
	// lis r7,-30707
	ctx.r7.s64 = -2012413952;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r7,12608
	ctx.r5.s64 = ctx.r7.s64 + 12608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x880D3324;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D3478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D3480;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D3494;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021be0
	ctx.lr = 0x880D34A8;
	sub_88021BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024030
	ctx.lr = 0x880D34B4;
	sub_88024030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880d3720
	if (ctx.cr6.gt) goto loc_880D3720;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880d3550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D3550;
	// bdzf 4*cr6+eq,0x880d3670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D3670;
	// bne cr6,0x880d3684
	if (!ctx.cr6.eq) goto loc_880D3684;
	// bl 0x880b1e10
	ctx.lr = 0x880D34DC;
	sub_880B1E10(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lwz r7,932(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// addi r27,r11,-6128
	ctx.r27.s64 = ctx.r11.s64 + -6128;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x880d3330
	ctx.lr = 0x880D3504;
	sub_880D3330(ctx, base);
	// addi r3,r27,192
	ctx.r3.s64 = ctx.r27.s64 + 192;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,932(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x880d3330
	ctx.lr = 0x880D351C;
	sub_880D3330(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8801a448
	ctx.lr = 0x880D3524;
	sub_8801A448(ctx, base);
	// addi r10,r3,22
	ctx.r10.s64 = ctx.r3.s64 + 22;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x880D3534;
	sub_8801A448(ctx, base);
	// addi r9,r3,22
	ctx.r9.s64 = ctx.r3.s64 + 22;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D3550:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r11,-6128
	ctx.r26.s64 = ctx.r11.s64 + -6128;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d35d4
	if (ctx.cr6.eq) goto loc_880D35D4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x880d35d4
	if (!ctx.cr0.eq) goto loc_880D35D4;
	// addi r3,r26,384
	ctx.r3.s64 = ctx.r26.s64 + 384;
	// lwz r7,932(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// addi r5,r31,852
	ctx.r5.s64 = ctx.r31.s64 + 852;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880d3330
	ctx.lr = 0x880D358C;
	sub_880D3330(ctx, base);
	// stw r27,1628(r31)
	REX_STORE_U32(ctx.r31.u32 + 1628, ctx.r27.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x880D35A0;
	sub_8813FA58(ctx, base);
	// addi r11,r31,884
	ctx.r11.s64 = ctx.r31.s64 + 884;
	// lis r10,-8
	ctx.r10.s64 = -524288;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lis r9,14
	ctx.r9.s64 = 917504;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88022558
	ctx.lr = 0x880D35D4;
	sub_88022558(ctx, base);
loc_880D35D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d364c
	if (ctx.cr6.eq) goto loc_880D364C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x880d364c
	if (!ctx.cr0.eq) goto loc_880D364C;
	// addi r3,r26,384
	ctx.r3.s64 = ctx.r26.s64 + 384;
	// lwz r7,932(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 932);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// addi r5,r31,860
	ctx.r5.s64 = ctx.r31.s64 + 860;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x880d3330
	ctx.lr = 0x880D3604;
	sub_880D3330(ctx, base);
	// stw r27,1624(r31)
	REX_STORE_U32(ctx.r31.u32 + 1624, ctx.r27.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x880D3618;
	sub_8813FA58(ctx, base);
	// addi r11,r31,892
	ctx.r11.s64 = ctx.r31.s64 + 892;
	// lis r10,11
	ctx.r10.s64 = 720896;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lis r9,18
	ctx.r9.s64 = 1179648;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88022558
	ctx.lr = 0x880D364C;
	sub_88022558(ctx, base);
loc_880D364C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880d3720
	if (!ctx.cr0.eq) goto loc_880D3720;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D3670:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D3684:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,18912
	ctx.r4.s64 = ctx.r11.s64 + 18912;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880D3698;
	sub_88021AD0(ctx, base);
	// lwz r10,1640(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1640);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d36d4
	if (!ctx.cr6.eq) goto loc_880D36D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024750
	ctx.lr = 0x880D36AC;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,72
	ctx.r8.s64 = 72;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,2
	ctx.r10.s64 = 2;
	// bl 0x88011728
	ctx.lr = 0x880D36D0;
	sub_88011728(ctx, base);
	// b 0x880d3704
	goto loc_880D3704;
loc_880D36D4:
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x880D3704;
	sub_880114D8(ctx, base);
loc_880D3704:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,1636(r31)
	REX_STORE_U32(ctx.r31.u32 + 1636, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021c70
	ctx.lr = 0x880D3720;
	sub_88021C70(ctx, base);
loc_880D3720:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D66C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x880D66C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,524
	ctx.r4.s64 = 524;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D66D8;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D66E0;
	sub_88023F40(ctx, base);
	// li r5,524
	ctx.r5.s64 = 524;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D66F0;
	sub_8813FA58(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r25,r31,36
	ctx.r25.s64 = ctx.r31.s64 + 36;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D670C;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D6714;
	sub_88023C50(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r22,32
	ctx.r22.s64 = 32;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r21,128
	ctx.r21.s64 = 128;
	// stw r22,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r22.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r22,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// stw r23,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r23.u32);
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r23,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r23.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r28,8
	ctx.r28.s64 = 8;
	// stw r21,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r21.u32);
	// lis r20,40
	ctx.r20.s64 = 2621440;
loc_880D6750:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8801a860
	ctx.lr = 0x880D6764;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// stw r10,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// stwu r26,24(r29)
	ea = 24 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r29.u32 = ea;
	// bne 0x880d6750
	if (!ctx.cr0.eq) goto loc_880D6750;
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// stw r22,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// stw r26,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r26.u32);
	// lis r9,160
	ctx.r9.s64 = 10485760;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// bl 0x8801a448
	ctx.lr = 0x880D67C4;
	sub_8801A448(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r23,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r23.u32);
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r21,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r21.u32);
	// stw r7,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// lis r5,-30707
	ctx.r5.s64 = -2012413952;
	// stw r6,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// addi r4,r5,25184
	ctx.r4.s64 = ctx.r5.s64 + 25184;
	// stw r10,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r26,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r26.u32);
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r29,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// stw r11,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x880D6814;
	sub_88023E90(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7B48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880D7B50;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D7B68;
	sub_88023F40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,224(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r10,-11960(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -11960);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d7bb4
	if (ctx.cr6.eq) goto loc_880D7BB4;
loc_880D7BA0:
	// stw r27,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88023f48
	ctx.lr = 0x880D7BAC;
	sub_88023F48(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880D7BB4:
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r10,21860(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21860);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d7d7c
	if (!ctx.cr6.eq) goto loc_880D7D7C;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r30,-30608
	ctx.r30.s64 = -2005925888;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x880d7c34
	if (ctx.cr6.lt) goto loc_880D7C34;
	// bne cr6,0x880d7c78
	if (!ctx.cr6.eq) goto loc_880D7C78;
	// lwz r10,21864(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21864);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d7bf4
	if (!ctx.cr6.eq) goto loc_880D7BF4;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_880D7BF4:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x880d7c08
	if (ctx.cr6.gt) goto loc_880D7C08;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_880D7C08:
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// subf. r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// bgt 0x880d7c78
	if (ctx.cr0.gt) goto loc_880D7C78;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// ble 0x880d7ba0
	if (!ctx.cr0.gt) goto loc_880D7BA0;
	// stw r27,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r27.u32);
	// b 0x880d7c78
	goto loc_880D7C78;
loc_880D7C34:
	// lwz r11,21864(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21864);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d7c50
	if (!ctx.cr6.eq) goto loc_880D7C50;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_880D7C50:
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r11,448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 448, ctx.xer);
	// blt cr6,0x880d7c78
	if (ctx.cr6.lt) goto loc_880D7C78;
	// li r11,448
	ctx.r11.s64 = 448;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
loc_880D7C78:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7ca0
	if (ctx.cr6.eq) goto loc_880D7CA0;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bge 0x880d7ca0
	if (!ctx.cr0.lt) goto loc_880D7CA0;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_880D7CA0:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bge 0x880d7d20
	if (!ctx.cr0.lt) goto loc_880D7D20;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// bge 0x880d7d20
	if (!ctx.cr0.lt) goto loc_880D7D20;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,188(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// cmpwi cr6,r7,14
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 14, ctx.xer);
	// stw r6,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// stw r8,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// blt cr6,0x880d7d08
	if (ctx.cr6.lt) goto loc_880D7D08;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_880D7D08:
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x880d7d20
	if (!ctx.cr6.lt) goto loc_880D7D20;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_880D7D20:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D7D50;
	sub_880244D0(ctx, base);
	// lwz r11,21864(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21864);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880d7d7c
	if (!ctx.cr6.eq) goto loc_880D7D7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// neg r4,r11
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x8801a808
	ctx.lr = 0x880D7D70;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_880D7D7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8801a448
	ctx.lr = 0x880D7D84;
	sub_8801A448(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// li r28,16
	ctx.r28.s64 = 16;
loc_880D7D90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8801a860
	ctx.lr = 0x880D7DA4;
	sub_8801A860(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x880D7DD0;
	sub_8801AC60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801ab78
	ctx.lr = 0x880D7DE0;
	sub_8801AB78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8801aa90
	ctx.lr = 0x880D7DF0;
	sub_8801AA90(ctx, base);
	// lis r5,500
	ctx.r5.s64 = 32768000;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8801ad48
	ctx.lr = 0x880D7E00;
	sub_8801AD48(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,131
	ctx.r6.s64 = 131;
	// li r3,10337
	ctx.r3.s64 = 10337;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x880D7E34;
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
	ctx.lr = 0x880D7E48;
	sub_8813FF90(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880d7ed0
	if (ctx.cr6.eq) goto loc_880D7ED0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,-36
	ctx.r6.s64 = -36;
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// bl 0x88013940
	ctx.lr = 0x880D7E78;
	sub_88013940(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r10,r29,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-33
	ctx.r6.s64 = -33;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r7,r11,170
	ctx.r7.s64 = ctx.r11.s64 + 170;
	// bl 0x88013940
	ctx.lr = 0x880D7EA4;
	sub_88013940(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r29,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-30
	ctx.r6.s64 = -30;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r7,r11,341
	ctx.r7.s64 = ctx.r11.s64 + 341;
	// bl 0x88013940
	ctx.lr = 0x880D7ED0;
	sub_88013940(ctx, base);
loc_880D7ED0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880d7ee8
	if (ctx.cr6.eq) goto loc_880D7EE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x880244d0
	ctx.lr = 0x880D7EE8;
	sub_880244D0(ctx, base);
loc_880D7EE8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x880d7d90
	if (!ctx.cr0.eq) goto loc_880D7D90;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DB230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DB238;
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
	ctx.lr = 0x880DB24C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x88021508
	ctx.lr = 0x880DB25C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DB290;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-20288
	ctx.r5.s64 = ctx.r6.s64 + -20288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DB2A4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DBDE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DBDF0;
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
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x88021508
	ctx.lr = 0x880DBE10;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DBE44;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-17632
	ctx.r5.s64 = ctx.r6.s64 + -17632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DBE58;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DC6B0;
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
	ctx.lr = 0x880DC6C4;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021508
	ctx.lr = 0x880DC6D4;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r7,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DC704;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-14944
	ctx.r5.s64 = ctx.r6.s64 + -14944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DC718;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880DD368;
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
	ctx.lr = 0x880DD37C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021508
	ctx.lr = 0x880DD38C;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r7,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DD3BC;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-11696
	ctx.r5.s64 = ctx.r6.s64 + -11696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880DD3D0;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD7A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880DD7B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DD7C4;
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
	ctx.lr = 0x880DD7D8;
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
	// bge 0x880dd87c
	if (!ctx.cr0.lt) goto loc_880DD87C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// addis r28,r10,24
	ctx.r28.s64 = ctx.r10.s64 + 1572864;
	// lwz r29,56(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880DD810;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880dd81c
	if (ctx.cr6.lt) goto loc_880DD81C;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_880DD81C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88013ce0
	ctx.lr = 0x880DD840;
	sub_88013CE0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DD860;
	sub_880244A8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880dd87c
	if (!ctx.cr0.lt) goto loc_880DD87C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880DD87C;
	sub_88021598(ctx, base);
loc_880DD87C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DED18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880DED20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DED2C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88024030
	ctx.lr = 0x880DED38;
	sub_88024030(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,2704
	ctx.r10.s64 = ctx.r10.s64 + 2704;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,3
	ctx.r28.s64 = 3;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880DED64:
	// lwz r3,-8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ded90
	if (ctx.cr6.eq) goto loc_880DED90;
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DED90;
	sub_8801A9C8(ctx, base);
loc_880DED90:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x880ded64
	if (!ctx.cr0.eq) goto loc_880DED64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DFCE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880DFCF0;
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
	ctx.lr = 0x880DFD04;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021be0
	ctx.lr = 0x880DFD14;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,6232
	ctx.r4.s64 = ctx.r8.s64 + 6232;
	// bl 0x88021d68
	ctx.lr = 0x880DFD44;
	sub_88021D68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r7,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// stw r10,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880DFD6C;
	sub_880244A8(ctx, base);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-1272
	ctx.r5.s64 = ctx.r6.s64 + -1272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880DFD80;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0718;
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
	ctx.lr = 0x880E0728;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880E0738;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x880e08b4
	if (ctx.cr6.gt) goto loc_880E08B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880e07b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E07B0;
	// bdzf 4*cr6+eq,0x880e0818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880E0818;
	// bne cr6,0x880e0884
	if (!ctx.cr6.eq) goto loc_880E0884;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e077c
	if (ctx.cr6.eq) goto loc_880E077C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E077C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12560
	ctx.r4.s64 = ctx.r10.s64 + -12560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x880E0798;
	sub_880213F0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E07B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88021698
	ctx.lr = 0x880E07BC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e08b4
	if (!ctx.cr6.eq) goto loc_880E08B4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq 0x880e07fc
	if (ctx.cr0.eq) goto loc_880E07FC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,96
	ctx.r10.s64 = 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E07FC:
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E0818:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e0854
	if (ctx.cr6.eq) goto loc_880E0854;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x880e08b4
	if (!ctx.cr0.eq) goto loc_880E08B4;
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11424
	ctx.r4.s64 = ctx.r11.s64 + -11424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E0844;
	sub_880213F0(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E0854:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x88021698
	ctx.lr = 0x880E0860;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e08b4
	if (!ctx.cr6.eq) goto loc_880E08B4;
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E0884:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880e08b4
	if (!ctx.cr0.lt) goto loc_880E08B4;
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1632
	ctx.r4.s64 = ctx.r11.s64 + 1632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880E08A8;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880E08B4;
	sub_88021C70(ctx, base);
loc_880E08B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E19C0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E19D8;
	sub_88023F40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// addi r4,r8,6480
	ctx.r4.s64 = ctx.r8.s64 + 6480;
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// bl 0x88021e18
	ctx.lr = 0x880E19FC;
	sub_88021E18(ctx, base);
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

DEFINE_REX_FUNC(sub_880E23F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880E23F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2832
	ctx.r4.s64 = 2832;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880E2408;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E2410;
	sub_88023F40(ctx, base);
	// li r5,2832
	ctx.r5.s64 = 2832;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880E2420;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x880E2428;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x880E242C;
	sub_88068E60(ctx, base);
	// stw r3,2828(r31)
	REX_STORE_U32(ctx.r31.u32 + 2828, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x880E2440;
	sub_88024028(ctx, base);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880240b8
	ctx.lr = 0x880E2458;
	sub_880240B8(ctx, base);
	// li r3,191
	ctx.r3.s64 = 191;
	// bl 0x8801a448
	ctx.lr = 0x880E2460;
	sub_8801A448(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r3,127
	ctx.r3.s64 = 127;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E2474;
	sub_8801A448(ctx, base);
	// addi r9,r3,160
	ctx.r9.s64 = ctx.r3.s64 + 160;
	// li r3,7
	ctx.r3.s64 = 7;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E2488;
	sub_8801A448(ctx, base);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// li r3,63
	ctx.r3.s64 = 63;
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E24A8;
	sub_8801A448(ctx, base);
	// rlwinm r4,r3,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r4,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x88023c50
	ctx.lr = 0x880E24C0;
	sub_88023C50(ctx, base);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,75
	ctx.r10.s64 = 75;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r6,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
loc_880E24EC:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880e24ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E24EC;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,668
	ctx.r11.s64 = ctx.r31.s64 + 668;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r8,16
	ctx.r8.s64 = 1048576;
loc_880E252C:
	// lis r30,-30706
	ctx.r30.s64 = -2012348416;
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// addi r30,r30,7216
	ctx.r30.s64 = ctx.r30.s64 + 7216;
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// sth r6,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r6.u16);
	// sth r10,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r10.u16);
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r8,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r8.u32);
	// stw r8,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// stw r8,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// stw r8,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// stw r30,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r30.u32);
	// stwu r31,144(r11)
	ea = 144 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880e252c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E252C;
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// bl 0x88023e90
	ctx.lr = 0x880E25A8;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x880E25B8;
	sub_8813FA58(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88022730
	ctx.lr = 0x880E25C8;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x88022b68
	ctx.lr = 0x880E25D4;
	sub_88022B68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E4DE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E4DE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e4e10
	if (!ctx.cr6.gt) goto loc_880E4E10;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880E4E10;
	sub_880236A8(ctx, base);
loc_880E4E10:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e4e90
	if (!ctx.cr6.eq) goto loc_880E4E90;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// bgt 0x880e4e90
	if (ctx.cr0.gt) goto loc_880E4E90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880E4E3C;
	sub_88022A88(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,5130
	ctx.r5.s64 = 5130;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88024de8
	ctx.lr = 0x880E4E50;
	sub_88024DE8(ctx, base);
	// bl 0x880b1e10
	ctx.lr = 0x880E4E54;
	sub_880B1E10(ctx, base);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r11,-11940(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -11940);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-11940(r9)
	REX_STORE_U32(ctx.r9.u32 + -11940, ctx.r11.u32);
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E4E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E5960) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E5968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e5990
	if (!ctx.cr6.gt) goto loc_880E5990;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x880E5990;
	sub_880236A8(ctx, base);
loc_880E5990:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e5a30
	if (!ctx.cr6.eq) goto loc_880E5A30;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// bgt 0x880e5a30
	if (ctx.cr0.gt) goto loc_880E5A30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x880E59BC;
	sub_88022A88(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,12974
	ctx.r5.u64 = ctx.r5.u64 | 12974;
	// bl 0x88024de8
	ctx.lr = 0x880E59D4;
	sub_88024DE8(ctx, base);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r11,-11940(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -11940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880e5a0c
	if (!ctx.cr6.eq) goto loc_880E5A0C;
	// li r3,11
	ctx.r3.s64 = 11;
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x880a2e10
	ctx.lr = 0x880E5A0C;
	sub_880A2E10(ctx, base);
loc_880E5A0C:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x88012f38
	ctx.lr = 0x880E5A18;
	sub_88012F38(ctx, base);
	// bl 0x880b1e10
	ctx.lr = 0x880E5A1C;
	sub_880B1E10(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880E5A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E6638) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880E6640;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x880e6774
	if (!ctx.cr0.lt) goto loc_880E6774;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E666C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880e667c
	if (ctx.cr6.eq) goto loc_880E667C;
	// bl 0x880b1c90
	ctx.lr = 0x880E6678;
	sub_880B1C90(ctx, base);
	// b 0x880e6680
	goto loc_880E6680;
loc_880E667C:
	// bl 0x880b1a90
	ctx.lr = 0x880E6680;
	sub_880B1A90(ctx, base);
loc_880E6680:
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,56(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r30,r11,8120
	ctx.r30.s64 = ctx.r11.s64 + 8120;
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// addi r5,r30,256
	ctx.r5.s64 = ctx.r30.s64 + 256;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r27,r6,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x8801a448
	ctx.lr = 0x880E66C4;
	sub_8801A448(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,90
	ctx.r6.s64 = 90;
	// addi r26,r3,224
	ctx.r26.s64 = ctx.r3.s64 + 224;
	// lwzx r3,r27,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// bl 0x880a84f0
	ctx.lr = 0x880E66DC;
	sub_880A84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880E66E8;
	sub_8801A448(ctx, base);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880E66F8;
	sub_880A85C0(ctx, base);
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a84f0
	ctx.lr = 0x880E670C;
	sub_880A84F0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880E671C;
	sub_880A85C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x880E6728;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x880E6734;
	sub_880A8668(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
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
	// blt cr6,0x880e6760
	if (ctx.cr6.lt) goto loc_880E6760;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_880E6760:
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
	// ble 0x880e6778
	if (!ctx.cr0.gt) goto loc_880E6778;
loc_880E6774:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880E6778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E7E10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880E7E18;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bgt 0x880e80fc
	if (ctx.cr0.gt) goto loc_880E80FC;
	// lwz r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r29,52(r5)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// addis r28,r11,-40
	ctx.r28.s64 = ctx.r11.s64 + -2621440;
	// bl 0x880b1c10
	ctx.lr = 0x880E7E48;
	sub_880B1C10(ctx, base);
	// bl 0x880b1e10
	ctx.lr = 0x880E7E4C;
	sub_880B1E10(ctx, base);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r10,9464
	ctx.r11.s64 = ctx.r10.s64 + 9464;
	// lis r27,100
	ctx.r27.s64 = 6553600;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_880E7E60:
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// li r6,91
	ctx.r6.s64 = 91;
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,-20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880E7E7C;
	sub_880A84F0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r4,-8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x880E7E90;
	sub_880A85C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x880a8620
	ctx.lr = 0x880E7E9C;
	sub_880A8620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880a8638
	ctx.lr = 0x880E7EA8;
	sub_880A8638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880a8650
	ctx.lr = 0x880E7EB4;
	sub_880A8650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x880a8668
	ctx.lr = 0x880E7EC0;
	sub_880A8668(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// li r6,91
	ctx.r6.s64 = 91;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,-20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880E7EE0;
	sub_880A84F0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a85c0
	ctx.lr = 0x880E7EFC;
	sub_880A85C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x880a8620
	ctx.lr = 0x880E7F0C;
	sub_880A8620(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8638
	ctx.lr = 0x880E7F18;
	sub_880A8638(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880e7f28
	if (!ctx.cr6.eq) goto loc_880E7F28;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880E7F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8650
	ctx.lr = 0x880E7F30;
	sub_880A8650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x880a8668
	ctx.lr = 0x880E7F3C;
	sub_880A8668(ctx, base);
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x8801a448
	ctx.lr = 0x880E7F44;
	sub_8801A448(ctx, base);
	// addi r30,r3,-100
	ctx.r30.s64 = ctx.r3.s64 + -100;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x8801a448
	ctx.lr = 0x880E7F50;
	sub_8801A448(ctx, base);
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// li r3,10
	ctx.r3.s64 = 10;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// bl 0x880a84f0
	ctx.lr = 0x880E7F70;
	sub_880A84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x880E7F7C;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E7F84;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x880a85c0
	ctx.lr = 0x880E7F94;
	sub_880A85C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x880E7FA0;
	sub_880A8620(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x880E7FAC;
	sub_880A8668(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// li r6,91
	ctx.r6.s64 = 91;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x880a99a8
	ctx.lr = 0x880E7FC8;
	sub_880A99A8(ctx, base);
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x880a9a58
	ctx.lr = 0x880E7FD4;
	sub_880A9A58(ctx, base);
	// lwz r9,56(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e8060
	if (!ctx.cr6.eq) goto loc_880E8060;
	// lwz r11,8532(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8060
	if (!ctx.cr6.eq) goto loc_880E8060;
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e8060
	if (ctx.cr6.eq) goto loc_880E8060;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E8000;
	sub_8801A448(ctx, base);
	// addi r30,r3,-32
	ctx.r30.s64 = ctx.r3.s64 + -32;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E800C;
	sub_8801A448(ctx, base);
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x880E802C;
	sub_880111C0(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E8034;
	sub_8801A448(ctx, base);
	// addi r30,r3,-92
	ctx.r30.s64 = ctx.r3.s64 + -92;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x880E8040;
	sub_8801A448(ctx, base);
	// addi r9,r3,-32
	ctx.r9.s64 = ctx.r3.s64 + -32;
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x880E8060;
	sub_880111C0(ctx, base);
loc_880E8060:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 15, ctx.xer);
	// blt cr6,0x880e7e60
	if (ctx.cr6.lt) goto loc_880E7E60;
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e80f0
	if (!ctx.cr6.eq) goto loc_880E80F0;
	// lwz r11,8532(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e80c0
	if (!ctx.cr6.eq) goto loc_880E80C0;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x88024750
	ctx.lr = 0x880E8090;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88011728
	ctx.lr = 0x880E80B4;
	sub_88011728(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880E80C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,112
	ctx.r8.s64 = 112;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880114d8
	ctx.lr = 0x880E80F0;
	sub_880114D8(ctx, base);
loc_880E80F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880E80FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EA9E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880EA9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880EAA10;
	sub_88021508(ctx, base);
	// li r10,40
	ctx.r10.s64 = 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r10,40
	ctx.r4.s64 = ctx.r10.s64 + 40;
	// li r8,104
	ctx.r8.s64 = 104;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r6,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// bne cr6,0x880eaac4
	if (!ctx.cr6.eq) goto loc_880EAAC4;
	// li r11,384
	ctx.r11.s64 = 384;
	// li r10,-4
	ctx.r10.s64 = -4;
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lis r8,-7
	ctx.r8.s64 = -458752;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r7,-3
	ctx.r7.s64 = -196608;
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r8,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r7,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
loc_880EAAC4:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-22552
	ctx.r5.s64 = ctx.r11.s64 + -22552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EAAD8;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EB950) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880EB958;
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
	ctx.lr = 0x880EB978;
	sub_88021508(ctx, base);
	// li r8,60
	ctx.r8.s64 = 60;
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
	// addi r10,r9,60
	ctx.r10.s64 = ctx.r9.s64 + 60;
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
	// lis r5,8
	ctx.r5.s64 = 524288;
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
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// bne cr6,0x880eba58
	if (!ctx.cr6.eq) goto loc_880EBA58;
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
	// lis r6,-8
	ctx.r6.s64 = -524288;
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
loc_880EBA58:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-18608
	ctx.r5.s64 = ctx.r11.s64 + -18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EBA6C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EC6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880EC6B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x880EC6CC;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r11,272
	ctx.r11.s64 = 272;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// bl 0x8801a448
	ctx.lr = 0x880EC718;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ec72c
	if (ctx.cr6.eq) goto loc_880EC72C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_880EC72C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ble cr6,0x880ec748
	if (!ctx.cr6.gt) goto loc_880EC748;
	// li r11,-6
	ctx.r11.s64 = -6;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880EC748:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-14984
	ctx.r5.s64 = ctx.r11.s64 + -14984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EC75C;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED1F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880ED200;
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
	ctx.lr = 0x880ED220;
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
	// blt cr6,0x880ed2dc
	if (ctx.cr6.lt) goto loc_880ED2DC;
	// beq cr6,0x880ed298
	if (ctx.cr6.eq) goto loc_880ED298;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880ed324
	if (!ctx.cr6.lt) goto loc_880ED324;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r5,-15
	ctx.r5.s64 = -15;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// b 0x880ed324
	goto loc_880ED324;
loc_880ED298:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r6,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// b 0x880ed320
	goto loc_880ED320;
loc_880ED2DC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,160
	ctx.r8.s64 = 160;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// li r6,-20
	ctx.r6.s64 = -20;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r6,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r5,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
loc_880ED320:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_880ED324:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-12480
	ctx.r5.s64 = ctx.r11.s64 + -12480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880ED338;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EEB40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x880EEB48;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EEB54;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x880EEB60;
	sub_880247E8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x88069270
	ctx.lr = 0x880EEB70;
	sub_88069270(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8168(r31)
	REX_STORE_U32(ctx.r31.u32 + 8168, ctx.r11.u32);
	// stw r11,8172(r31)
	REX_STORE_U32(ctx.r31.u32 + 8172, ctx.r11.u32);
	// lwz r11,21860(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880eeb98
	if (!ctx.cr6.eq) goto loc_880EEB98;
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8176(r31)
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r11.u32);
loc_880EEB98:
	// addi r30,r31,7696
	ctx.r30.s64 = ctx.r31.s64 + 7696;
	// addi r11,r31,7688
	ctx.r11.s64 = ctx.r31.s64 + 7688;
	// li r29,31
	ctx.r29.s64 = 31;
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880EEBA8:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880EEBB8;
	sub_8813FA60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x880eeba8
	if (!ctx.cr0.eq) goto loc_880EEBA8;
	// lwz r11,7336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7336);
	// lwz r10,7392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7392);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,7448(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7448);
	// stw r8,7704(r31)
	REX_STORE_U32(ctx.r31.u32 + 7704, ctx.r8.u32);
	// lwz r7,7452(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7452);
	// stw r7,7708(r31)
	REX_STORE_U32(ctx.r31.u32 + 7708, ctx.r7.u32);
	// lwz r6,7480(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7480);
	// stw r6,7712(r31)
	REX_STORE_U32(ctx.r31.u32 + 7712, ctx.r6.u32);
	// lwz r5,7484(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7484);
	// stw r5,7716(r31)
	REX_STORE_U32(ctx.r31.u32 + 7716, ctx.r5.u32);
	// lwz r4,7512(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7512);
	// stw r4,7720(r31)
	REX_STORE_U32(ctx.r31.u32 + 7720, ctx.r4.u32);
	// lwz r3,7516(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7516);
	// stw r3,7724(r31)
	REX_STORE_U32(ctx.r31.u32 + 7724, ctx.r3.u32);
	// lwz r11,7544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// stw r11,7728(r31)
	REX_STORE_U32(ctx.r31.u32 + 7728, ctx.r11.u32);
	// lwz r10,7548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// stw r10,7732(r31)
	REX_STORE_U32(ctx.r31.u32 + 7732, ctx.r10.u32);
	// lwz r9,7576(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7576);
	// stw r9,7736(r31)
	REX_STORE_U32(ctx.r31.u32 + 7736, ctx.r9.u32);
	// lwz r8,7580(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7580);
	// stw r8,7740(r31)
	REX_STORE_U32(ctx.r31.u32 + 7740, ctx.r8.u32);
	// lwz r7,7608(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7608);
	// stw r7,7744(r31)
	REX_STORE_U32(ctx.r31.u32 + 7744, ctx.r7.u32);
	// lwz r6,7612(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7612);
	// stw r6,7748(r31)
	REX_STORE_U32(ctx.r31.u32 + 7748, ctx.r6.u32);
	// lwz r5,7640(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7640);
	// stw r5,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r5.u32);
	// lwz r4,7644(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7644);
	// stw r4,7756(r31)
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r4.u32);
	// lwz r3,7672(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7672);
	// stw r3,7760(r31)
	REX_STORE_U32(ctx.r31.u32 + 7760, ctx.r3.u32);
	// lwz r11,7676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7676);
	// stw r11,7764(r31)
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,336
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 336, ctx.xer);
	// bgt cr6,0x880eec6c
	if (ctx.cr6.gt) goto loc_880EEC6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
loc_880EEC6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,108
	ctx.r29.s64 = 7077888;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,342
	ctx.r30.s64 = 22413312;
	// lis r22,260
	ctx.r22.s64 = 17039360;
	// subf r4,r29,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lis r20,-20
	ctx.r20.s64 = -1310720;
	// lis r19,356
	ctx.r19.s64 = 23330816;
	// lis r17,-36
	ctx.r17.s64 = -2359296;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r30.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880eecc0
	if (!ctx.cr6.lt) goto loc_880EECC0;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880eecc0
	if (!ctx.cr6.gt) goto loc_880EECC0;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880eecc0
	if (!ctx.cr6.lt) goto loc_880EECC0;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x880eecc0
	if (!ctx.cr6.gt) goto loc_880EECC0;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13973
	ctx.r3.s64 = 13973;
	// bl 0x8801a9c8
	ctx.lr = 0x880EECC0;
	sub_8801A9C8(ctx, base);
loc_880EECC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r30.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880eed04
	if (!ctx.cr6.lt) goto loc_880EED04;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880eed04
	if (!ctx.cr6.gt) goto loc_880EED04;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880eed04
	if (!ctx.cr6.lt) goto loc_880EED04;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x880eed04
	if (!ctx.cr6.gt) goto loc_880EED04;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13973
	ctx.r3.s64 = 13973;
	// bl 0x8801a9c8
	ctx.lr = 0x880EECFC;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EED04;
	sub_8813FF08(ctx, base);
loc_880EED04:
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lis r27,56
	ctx.r27.s64 = 3670016;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,6008
	ctx.r30.s64 = ctx.r31.s64 + 6008;
	// lwz r8,7740(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// lis r14,-32
	ctx.r14.s64 = -2097152;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,6024(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6024);
	// lis r26,372
	ctx.r26.s64 = 24379392;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r25,-52
	ctx.r25.s64 = -3407872;
	// subf r28,r27,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r27.u64;
	// addis r29,r9,-326
	ctx.r29.s64 = ctx.r9.s64 + -21364736;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r16,272
	ctx.r16.s64 = 17825792;
	// bne cr6,0x880eedc0
	if (!ctx.cr6.eq) goto loc_880EEDC0;
	// cmpw cr6,r28,r16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880eedfc
	if (!ctx.cr6.lt) goto loc_880EEDFC;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880eedfc
	if (!ctx.cr6.gt) goto loc_880EEDFC;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880eedfc
	if (!ctx.cr6.lt) goto loc_880EEDFC;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880eedfc
	if (!ctx.cr6.gt) goto loc_880EEDFC;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,13937
	ctx.r3.s64 = 13937;
	// bl 0x8801a9c8
	ctx.lr = 0x880EED7C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EED84;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eedfc
	if (ctx.cr6.eq) goto loc_880EEDFC;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,13937
	ctx.r3.s64 = 13937;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEDA4;
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
	ctx.lr = 0x880EEDBC;
	sub_8813FF90(ctx, base);
	// b 0x880eedfc
	goto loc_880EEDFC;
loc_880EEDC0:
	// cmpw cr6,r28,r16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880eedfc
	if (!ctx.cr6.lt) goto loc_880EEDFC;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880eedfc
	if (!ctx.cr6.gt) goto loc_880EEDFC;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880eedfc
	if (!ctx.cr6.lt) goto loc_880EEDFC;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880eedfc
	if (!ctx.cr6.gt) goto loc_880EEDFC;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,13938
	ctx.r3.s64 = 13938;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEDF4;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EEDFC;
	sub_8813FF48(ctx, base);
loc_880EEDFC:
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// addi r28,r30,144
	ctx.r28.s64 = ctx.r30.s64 + 144;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,160(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r30,r8,r27
	ctx.r30.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bne cr6,0x880eeeb4
	if (!ctx.cr6.eq) goto loc_880EEEB4;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880eef00
	if (!ctx.cr6.lt) goto loc_880EEF00;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880eef00
	if (!ctx.cr6.gt) goto loc_880EEF00;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880eef00
	if (!ctx.cr6.lt) goto loc_880EEF00;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880eef00
	if (!ctx.cr6.gt) goto loc_880EEF00;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,13937
	ctx.r3.s64 = 13937;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEE50;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EEE5C;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,132(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EEE68;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eef00
	if (ctx.cr6.eq) goto loc_880EEF00;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,13937
	ctx.r3.s64 = 13937;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEE88;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EEE94;
	sub_8813FF08(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
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
	ctx.lr = 0x880EEEB0;
	sub_8813FF90(ctx, base);
	// b 0x880eef00
	goto loc_880EEF00;
loc_880EEEB4:
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880eef00
	if (!ctx.cr6.lt) goto loc_880EEF00;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880eef00
	if (!ctx.cr6.gt) goto loc_880EEF00;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880eef00
	if (!ctx.cr6.lt) goto loc_880EEF00;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880eef00
	if (!ctx.cr6.gt) goto loc_880EEF00;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,13938
	ctx.r3.s64 = 13938;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEEE8;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EEEF4;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EEF00;
	sub_8813FF48(ctx, base);
loc_880EEF00:
	// lwz r11,5592(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5592);
	// addi r23,r31,5576
	ctx.r23.s64 = ctx.r31.s64 + 5576;
	// lwz r30,7724(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// lis r9,288
	ctx.r9.s64 = 18874368;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r21,7720(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// lis r15,-48
	ctx.r15.s64 = -3145728;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bne cr6,0x880ef0dc
	if (!ctx.cr6.eq) goto loc_880EF0DC;
	// add r29,r21,r11
	ctx.r29.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addis r28,r8,-283
	ctx.r28.s64 = ctx.r8.s64 + -18546688;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880eefb0
	if (!ctx.cr6.lt) goto loc_880EEFB0;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880eefb0
	if (!ctx.cr6.gt) goto loc_880EEFB0;
	// lis r11,384
	ctx.r11.s64 = 25165824;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880eefb0
	if (!ctx.cr6.lt) goto loc_880EEFB0;
	// lis r11,-64
	ctx.r11.s64 = -4194304;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880eefb0
	if (!ctx.cr6.gt) goto loc_880EEFB0;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13974
	ctx.r3.s64 = 13974;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEF70;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EEF78;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eefb0
	if (ctx.cr6.eq) goto loc_880EEFB0;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13974
	ctx.r3.s64 = 13974;
	// bl 0x8801a9c8
	ctx.lr = 0x880EEF98;
	sub_8801A9C8(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EEFB0;
	sub_8813FF90(ctx, base);
loc_880EEFB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,68
	ctx.r28.s64 = 4456448;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r26,290
	ctx.r26.s64 = 19005440;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// subf r29,r28,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r28.u64;
	// lis r25,396
	ctx.r25.s64 = 25952256;
	// lis r24,-76
	ctx.r24.s64 = -4980736;
	// subf r27,r26,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r26.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880ef04c
	if (!ctx.cr6.lt) goto loc_880EF04C;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880ef04c
	if (!ctx.cr6.gt) goto loc_880EF04C;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880ef04c
	if (!ctx.cr6.lt) goto loc_880EF04C;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880ef04c
	if (!ctx.cr6.gt) goto loc_880EF04C;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13969
	ctx.r3.s64 = 13969;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF00C;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EF014;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ef04c
	if (ctx.cr6.eq) goto loc_880EF04C;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13969
	ctx.r3.s64 = 13969;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF034;
	sub_8801A9C8(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EF04C;
	sub_8813FF90(ctx, base);
loc_880EF04C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r28,r26,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r26.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880ef1c8
	if (!ctx.cr6.lt) goto loc_880EF1C8;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880ef1c8
	if (!ctx.cr6.gt) goto loc_880EF1C8;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880ef1c8
	if (!ctx.cr6.lt) goto loc_880EF1C8;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880ef1c8
	if (!ctx.cr6.gt) goto loc_880EF1C8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13971
	ctx.r3.s64 = 13971;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF098;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EF0A0;
	sub_8813FF48(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ef1c8
	if (ctx.cr6.eq) goto loc_880EF1C8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13971
	ctx.r3.s64 = 13971;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF0C0;
	sub_8801A9C8(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EF0D8;
	sub_8813FF90(ctx, base);
	// b 0x880ef1c8
	goto loc_880EF1C8;
loc_880EF0DC:
	// add r4,r21,r11
	ctx.r4.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addis r5,r8,-279
	ctx.r5.s64 = ctx.r8.s64 + -18284544;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880ef120
	if (!ctx.cr6.lt) goto loc_880EF120;
	// cmpw cr6,r4,r15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880ef120
	if (!ctx.cr6.gt) goto loc_880EF120;
	// lis r11,380
	ctx.r11.s64 = 24903680;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880ef120
	if (!ctx.cr6.lt) goto loc_880EF120;
	// lis r11,-60
	ctx.r11.s64 = -3932160;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880ef120
	if (!ctx.cr6.gt) goto loc_880EF120;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13975
	ctx.r3.s64 = 13975;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF118;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EF120;
	sub_8813FF48(ctx, base);
loc_880EF120:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,68
	ctx.r28.s64 = 4456448;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,278
	ctx.r29.s64 = 18219008;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// subf r4,r28,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r28.u64;
	// lis r27,384
	ctx.r27.s64 = 25165824;
	// lis r26,-64
	ctx.r26.s64 = -4194304;
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880ef17c
	if (!ctx.cr6.lt) goto loc_880EF17C;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880ef17c
	if (!ctx.cr6.gt) goto loc_880EF17C;
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x880ef17c
	if (!ctx.cr6.lt) goto loc_880EF17C;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x880ef17c
	if (!ctx.cr6.gt) goto loc_880EF17C;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13970
	ctx.r3.s64 = 13970;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF174;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EF17C;
	sub_8813FF48(ctx, base);
loc_880EF17C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880ef1c8
	if (!ctx.cr6.lt) goto loc_880EF1C8;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x880ef1c8
	if (!ctx.cr6.gt) goto loc_880EF1C8;
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x880ef1c8
	if (!ctx.cr6.lt) goto loc_880EF1C8;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x880ef1c8
	if (!ctx.cr6.gt) goto loc_880EF1C8;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13972
	ctx.r3.s64 = 13972;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF1C0;
	sub_8801A9C8(ctx, base);
	// lwz r4,132(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 132);
	// bl 0x8813ff48
	ctx.lr = 0x880EF1C8;
	sub_8813FF48(ctx, base);
loc_880EF1C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,7728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r8,7732(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r16.s32, ctx.xer);
	// addis r5,r11,-55
	ctx.r5.s64 = ctx.r11.s64 + -3604480;
	// bge cr6,0x880ef210
	if (!ctx.cr6.lt) goto loc_880EF210;
	// cmpw cr6,r4,r14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880ef210
	if (!ctx.cr6.gt) goto loc_880EF210;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880ef210
	if (!ctx.cr6.lt) goto loc_880EF210;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x880ef210
	if (!ctx.cr6.gt) goto loc_880EF210;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r3,13905
	ctx.r3.s64 = 13905;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF210;
	sub_8801A9C8(ctx, base);
loc_880EF210:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x8801a860
	ctx.lr = 0x880EF228;
	sub_8801A860(ctx, base);
	// srawi r11,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 2;
	// lwz r10,7748(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// lis r29,136
	ctx.r29.s64 = 8912896;
	// addze r19,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r19.s64 = temp.s64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r20,268
	ctx.r20.s64 = 17563648;
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r18,-28
	ctx.r18.s64 = -1835008;
	// add r9,r19,r11
	ctx.r9.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lis r26,348
	ctx.r26.s64 = 22806528;
	// lwz r11,7744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// addi r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -48;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r29.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef2b0
	if (!ctx.cr6.lt) goto loc_880EF2B0;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef2b0
	if (!ctx.cr6.gt) goto loc_880EF2B0;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef2b0
	if (!ctx.cr6.lt) goto loc_880EF2B0;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef2b0
	if (!ctx.cr6.gt) goto loc_880EF2B0;
	// li r6,52
	ctx.r6.s64 = 52;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF2B0;
	sub_8801A9C8(ctx, base);
loc_880EF2B0:
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,7748(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// add r11,r19,r27
	ctx.r11.u64 = ctx.r19.u64 + ctx.r27.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,7744(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r29.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef328
	if (!ctx.cr6.lt) goto loc_880EF328;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef328
	if (!ctx.cr6.gt) goto loc_880EF328;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef328
	if (!ctx.cr6.lt) goto loc_880EF328;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef328
	if (!ctx.cr6.gt) goto loc_880EF328;
	// li r6,52
	ctx.r6.s64 = 52;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF320;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EF328;
	sub_8813FF08(ctx, base);
loc_880EF328:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880EF340;
	sub_8801A860(ctx, base);
	// srawi r10,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 1;
	// lwz r11,7736(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lis r28,40
	ctx.r28.s64 = 2621440;
	// addze r22,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r22.s64 = temp.s64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r29,160
	ctx.r29.s64 = 10485760;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,7740(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r4,r28,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r28.u64;
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r29.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef3b4
	if (!ctx.cr6.lt) goto loc_880EF3B4;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef3b4
	if (!ctx.cr6.gt) goto loc_880EF3B4;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef3b4
	if (!ctx.cr6.lt) goto loc_880EF3B4;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef3b4
	if (!ctx.cr6.gt) goto loc_880EF3B4;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF3B4;
	sub_8801A9C8(ctx, base);
loc_880EF3B4:
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,7740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef420
	if (!ctx.cr6.lt) goto loc_880EF420;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef420
	if (!ctx.cr6.gt) goto loc_880EF420;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef420
	if (!ctx.cr6.lt) goto loc_880EF420;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef420
	if (!ctx.cr6.gt) goto loc_880EF420;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF418;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EF420;
	sub_8813FF08(ctx, base);
loc_880EF420:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880EF438;
	sub_8801A860(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,7728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lis r28,32
	ctx.r28.s64 = 2097152;
	// divw r23,r21,r11
	ctx.r23.u64 = uint32_t((ctx.r11.s32 && !(ctx.r21.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r21.s32 / ctx.r11.s32 : 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,184
	ctx.r29.s64 = 12058624;
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r4,r28,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r28.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,7732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// bge cr6,0x880ef4ac
	if (!ctx.cr6.lt) goto loc_880EF4AC;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef4ac
	if (!ctx.cr6.gt) goto loc_880EF4AC;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef4ac
	if (!ctx.cr6.lt) goto loc_880EF4AC;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef4ac
	if (!ctx.cr6.gt) goto loc_880EF4AC;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF4AC;
	sub_8801A9C8(ctx, base);
loc_880EF4AC:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,7728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r11,7732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// subf r10,r10,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r10.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// bge cr6,0x880ef518
	if (!ctx.cr6.lt) goto loc_880EF518;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef518
	if (!ctx.cr6.gt) goto loc_880EF518;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef518
	if (!ctx.cr6.lt) goto loc_880EF518;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef518
	if (!ctx.cr6.gt) goto loc_880EF518;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF510;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EF518;
	sub_8813FF08(ctx, base);
loc_880EF518:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880EF530;
	sub_8801A860(ctx, base);
	// lwz r10,7720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// lwz r11,7724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// lis r28,24
	ctx.r28.s64 = 1572864;
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,208
	ctx.r29.s64 = 13631488;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r4,r28,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r28.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// bge cr6,0x880ef59c
	if (!ctx.cr6.lt) goto loc_880EF59C;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef59c
	if (!ctx.cr6.gt) goto loc_880EF59C;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef59c
	if (!ctx.cr6.lt) goto loc_880EF59C;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef59c
	if (!ctx.cr6.gt) goto loc_880EF59C;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF59C;
	sub_8801A9C8(ctx, base);
loc_880EF59C:
	// lwz r10,7720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,7724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef608
	if (!ctx.cr6.lt) goto loc_880EF608;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef608
	if (!ctx.cr6.gt) goto loc_880EF608;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef608
	if (!ctx.cr6.lt) goto loc_880EF608;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef608
	if (!ctx.cr6.gt) goto loc_880EF608;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF600;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EF608;
	sub_8813FF08(ctx, base);
loc_880EF608:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a860
	ctx.lr = 0x880EF620;
	sub_8801A860(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,7712(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7712);
	// lis r28,232
	ctx.r28.s64 = 15204352;
	// divw r29,r21,r10
	ctx.r29.u64 = uint32_t((ctx.r10.s32 && !(ctx.r21.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r21.s32 / ctx.r10.s32 : 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r4,r27,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r27.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// lwz r10,7716(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7716);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// bge cr6,0x880ef694
	if (!ctx.cr6.lt) goto loc_880EF694;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef694
	if (!ctx.cr6.gt) goto loc_880EF694;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef694
	if (!ctx.cr6.lt) goto loc_880EF694;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef694
	if (!ctx.cr6.gt) goto loc_880EF694;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF690;
	sub_8801A9C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880EF694:
	// lwz r10,7716(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7716);
	// subf r9,r11,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lwz r7,7712(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7712);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x880ef6f8
	if (!ctx.cr6.lt) goto loc_880EF6F8;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef6f8
	if (!ctx.cr6.gt) goto loc_880EF6F8;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef6f8
	if (!ctx.cr6.lt) goto loc_880EF6F8;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef6f8
	if (!ctx.cr6.gt) goto loc_880EF6F8;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r3,13966
	ctx.r3.s64 = 13966;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF6F0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880EF6F8;
	sub_8813FF08(ctx, base);
loc_880EF6F8:
	// lwz r10,7712(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7712);
	// lwz r11,7716(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7716);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r20.s32, ctx.xer);
	// addis r5,r11,-206
	ctx.r5.s64 = ctx.r11.s64 + -13500416;
	// bge cr6,0x880ef750
	if (!ctx.cr6.lt) goto loc_880EF750;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef750
	if (!ctx.cr6.gt) goto loc_880EF750;
	// lis r11,344
	ctx.r11.s64 = 22544384;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880ef750
	if (!ctx.cr6.lt) goto loc_880EF750;
	// lis r11,-24
	ctx.r11.s64 = -1572864;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880ef750
	if (!ctx.cr6.gt) goto loc_880EF750;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13903
	ctx.r3.s64 = 13903;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF750;
	sub_8801A9C8(ctx, base);
loc_880EF750:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3180);
	// addi r27,r31,3164
	ctx.r27.s64 = ctx.r31.s64 + 3164;
	// lwz r10,7720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,7724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x880ef7fc
	if (!ctx.cr6.eq) goto loc_880EF7FC;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r28,r11,-180
	ctx.r28.s64 = ctx.r11.s64 + -11796480;
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880ef838
	if (!ctx.cr6.lt) goto loc_880EF838;
	// cmpw cr6,r29,r14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880ef838
	if (!ctx.cr6.gt) goto loc_880EF838;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef838
	if (!ctx.cr6.lt) goto loc_880EF838;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef838
	if (!ctx.cr6.gt) goto loc_880EF838;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13901
	ctx.r3.s64 = 13901;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF7B8;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EF7C0;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ef838
	if (ctx.cr6.eq) goto loc_880EF838;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13901
	ctx.r3.s64 = 13901;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF7E0;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EF7F8;
	sub_8813FF90(ctx, base);
	// b 0x880ef838
	goto loc_880EF838;
loc_880EF7FC:
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r5,r11,-180
	ctx.r5.s64 = ctx.r11.s64 + -11796480;
	// cmpw cr6,r4,r16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x880ef838
	if (!ctx.cr6.lt) goto loc_880EF838;
	// cmpw cr6,r4,r14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880ef838
	if (!ctx.cr6.gt) goto loc_880EF838;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef838
	if (!ctx.cr6.lt) goto loc_880EF838;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880ef838
	if (!ctx.cr6.gt) goto loc_880EF838;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13902
	ctx.r3.s64 = 13902;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF830;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EF838;
	sub_8813FF48(ctx, base);
loc_880EF838:
	// addi r27,r27,-152
	ctx.r27.s64 = ctx.r27.s64 + -152;
	// lwz r10,7728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,352
	ctx.r26.s64 = 23068672;
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,276
	ctx.r7.s64 = 18087936;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,7732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x880ef8ec
	if (!ctx.cr6.eq) goto loc_880EF8EC;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r28,r6,-152
	ctx.r28.s64 = ctx.r6.s64 + -9961472;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880ef928
	if (!ctx.cr6.lt) goto loc_880EF928;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x880ef928
	if (!ctx.cr6.gt) goto loc_880EF928;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef928
	if (!ctx.cr6.lt) goto loc_880EF928;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880ef928
	if (!ctx.cr6.gt) goto loc_880EF928;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13899
	ctx.r3.s64 = 13899;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF8A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EF8B0;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ef928
	if (ctx.cr6.eq) goto loc_880EF928;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13899
	ctx.r3.s64 = 13899;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF8D0;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EF8E8;
	sub_8813FF90(ctx, base);
	// b 0x880ef928
	goto loc_880EF928;
loc_880EF8EC:
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r5,r6,-152
	ctx.r5.s64 = ctx.r6.s64 + -9961472;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880ef928
	if (!ctx.cr6.lt) goto loc_880EF928;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x880ef928
	if (!ctx.cr6.gt) goto loc_880EF928;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880ef928
	if (!ctx.cr6.lt) goto loc_880EF928;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880ef928
	if (!ctx.cr6.gt) goto loc_880EF928;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13900
	ctx.r3.s64 = 13900;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF920;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EF928;
	sub_8813FF48(ctx, base);
loc_880EF928:
	// addi r27,r27,-152
	ctx.r27.s64 = ctx.r27.s64 + -152;
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r7,280
	ctx.r7.s64 = 18350080;
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,7740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x880ef9dc
	if (!ctx.cr6.eq) goto loc_880EF9DC;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r28,r6,-120
	ctx.r28.s64 = ctx.r6.s64 + -7864320;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880efa1c
	if (!ctx.cr6.lt) goto loc_880EFA1C;
	// lis r11,-40
	ctx.r11.s64 = -2621440;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880efa1c
	if (!ctx.cr6.gt) goto loc_880EFA1C;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880efa1c
	if (!ctx.cr6.lt) goto loc_880EFA1C;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880efa1c
	if (!ctx.cr6.gt) goto loc_880EFA1C;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13897
	ctx.r3.s64 = 13897;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF998;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EF9A0;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efa1c
	if (ctx.cr6.eq) goto loc_880EFA1C;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13897
	ctx.r3.s64 = 13897;
	// bl 0x8801a9c8
	ctx.lr = 0x880EF9C0;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EF9D8;
	sub_8813FF90(ctx, base);
	// b 0x880efa1c
	goto loc_880EFA1C;
loc_880EF9DC:
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r5,r6,-120
	ctx.r5.s64 = ctx.r6.s64 + -7864320;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880efa1c
	if (!ctx.cr6.lt) goto loc_880EFA1C;
	// lis r11,-40
	ctx.r11.s64 = -2621440;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880efa1c
	if (!ctx.cr6.gt) goto loc_880EFA1C;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880efa1c
	if (!ctx.cr6.lt) goto loc_880EFA1C;
	// cmpw cr6,r5,r14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880efa1c
	if (!ctx.cr6.gt) goto loc_880EFA1C;
	// li r6,78
	ctx.r6.s64 = 78;
	// li r3,13898
	ctx.r3.s64 = 13898;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFA14;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EFA1C;
	sub_8813FF48(ctx, base);
loc_880EFA1C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,640
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 640, ctx.xer);
	// blt cr6,0x880efc44
	if (ctx.cr6.lt) goto loc_880EFC44;
	// lwz r11,2876(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2876);
	// addi r27,r31,2860
	ctx.r27.s64 = ctx.r31.s64 + 2860;
	// lis r25,-8
	ctx.r25.s64 = -524288;
	// lis r24,328
	ctx.r24.s64 = 21495808;
	// lis r26,248
	ctx.r26.s64 = 16252928;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880efae4
	if (!ctx.cr6.eq) goto loc_880EFAE4;
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r11,7740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// addis r28,r11,-131
	ctx.r28.s64 = ctx.r11.s64 + -8585216;
	// bge cr6,0x880efae4
	if (!ctx.cr6.lt) goto loc_880EFAE4;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efae4
	if (!ctx.cr6.gt) goto loc_880EFAE4;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x880efae4
	if (!ctx.cr6.lt) goto loc_880EFAE4;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efae4
	if (!ctx.cr6.gt) goto loc_880EFAE4;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFAA0;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EFAA8;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efae4
	if (ctx.cr6.eq) goto loc_880EFAE4;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFACC;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EFAE4;
	sub_8813FF90(ctx, base);
loc_880EFAE4:
	// addi r27,r27,152
	ctx.r27.s64 = ctx.r27.s64 + 152;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880efb94
	if (!ctx.cr6.eq) goto loc_880EFB94;
	// lwz r10,7728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r11,7732(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// addis r28,r11,-161
	ctx.r28.s64 = ctx.r11.s64 + -10551296;
	// bge cr6,0x880efb94
	if (!ctx.cr6.lt) goto loc_880EFB94;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efb94
	if (!ctx.cr6.gt) goto loc_880EFB94;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x880efb94
	if (!ctx.cr6.lt) goto loc_880EFB94;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efb94
	if (!ctx.cr6.gt) goto loc_880EFB94;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFB50;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EFB58;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efb94
	if (ctx.cr6.eq) goto loc_880EFB94;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFB7C;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EFB94;
	sub_8813FF90(ctx, base);
loc_880EFB94:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 168);
	// addi r28,r27,152
	ctx.r28.s64 = ctx.r27.s64 + 152;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880efc44
	if (!ctx.cr6.eq) goto loc_880EFC44;
	// lwz r10,7720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// lwz r11,7724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// addis r29,r11,-188
	ctx.r29.s64 = ctx.r11.s64 + -12320768;
	// bge cr6,0x880efc44
	if (!ctx.cr6.lt) goto loc_880EFC44;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efc44
	if (!ctx.cr6.gt) goto loc_880EFC44;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x880efc44
	if (!ctx.cr6.lt) goto loc_880EFC44;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x880efc44
	if (!ctx.cr6.gt) goto loc_880EFC44;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFC00;
	sub_8801A9C8(ctx, base);
	// lwz r4,140(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 140);
	// bl 0x8813ff48
	ctx.lr = 0x880EFC08;
	sub_8813FF48(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efc44
	if (ctx.cr6.eq) goto loc_880EFC44;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13923
	ctx.r3.s64 = ctx.r11.s64 + 13923;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFC2C;
	sub_8801A9C8(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x880EFC44;
	sub_8813FF90(ctx, base);
loc_880EFC44:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1248, ctx.xer);
	// blt cr6,0x880effd8
	if (ctx.cr6.lt) goto loc_880EFFD8;
	// lwz r11,4708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4708);
	// addi r30,r31,4692
	ctx.r30.s64 = ctx.r31.s64 + 4692;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880effd8
	if (!ctx.cr6.eq) goto loc_880EFFD8;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lis r25,19
	ctx.r25.s64 = 1245184;
	// lwz r9,7736(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lis r26,29
	ctx.r26.s64 = 1900544;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r27,256
	ctx.r27.s64 = 16777216;
	// lwz r7,7740(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r24,-16
	ctx.r24.s64 = -1048576;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r29,r25,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r25.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r23,364
	ctx.r23.s64 = 23855104;
	// lis r22,-44
	ctx.r22.s64 = -2883584;
	// add r28,r8,r26
	ctx.r28.u64 = ctx.r8.u64 + ctx.r26.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x880efd18
	if (!ctx.cr6.lt) goto loc_880EFD18;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880efd18
	if (!ctx.cr6.gt) goto loc_880EFD18;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880efd18
	if (!ctx.cr6.lt) goto loc_880EFD18;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x880efd18
	if (!ctx.cr6.gt) goto loc_880EFD18;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13894
	ctx.r3.s64 = 13894;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFCD8;
	sub_8801A9C8(ctx, base);
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880EFCE0;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efd18
	if (ctx.cr6.eq) goto loc_880EFD18;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13894
	ctx.r3.s64 = 13894;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFD00;
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
	ctx.lr = 0x880EFD18;
	sub_8813FF90(ctx, base);
loc_880EFD18:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,7740(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r8,r25
	ctx.r29.u64 = ctx.r8.u64 + ctx.r25.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// add r28,r7,r26
	ctx.r28.u64 = ctx.r7.u64 + ctx.r26.u64;
	// bge cr6,0x880efdd8
	if (!ctx.cr6.lt) goto loc_880EFDD8;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880efdd8
	if (!ctx.cr6.gt) goto loc_880EFDD8;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880efdd8
	if (!ctx.cr6.lt) goto loc_880EFDD8;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x880efdd8
	if (!ctx.cr6.gt) goto loc_880EFDD8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13894
	ctx.r3.s64 = 13894;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFD78;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EFD84;
	sub_8813FF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880EFD90;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efdd8
	if (ctx.cr6.eq) goto loc_880EFDD8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13894
	ctx.r3.s64 = 13894;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFDB0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EFDBC;
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
	ctx.lr = 0x880EFDD8;
	sub_8813FF90(ctx, base);
loc_880EFDD8:
	// lwz r11,7744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,7748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r16.s32, ctx.xer);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x880efe68
	if (!ctx.cr6.lt) goto loc_880EFE68;
	// cmpw cr6,r29,r14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x880efe68
	if (!ctx.cr6.gt) goto loc_880EFE68;
	// lis r11,368
	ctx.r11.s64 = 24117248;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880efe68
	if (!ctx.cr6.lt) goto loc_880EFE68;
	// cmpw cr6,r28,r15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x880efe68
	if (!ctx.cr6.gt) goto loc_880EFE68;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13896
	ctx.r3.s64 = 13896;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFE28;
	sub_8801A9C8(ctx, base);
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880EFE30;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880efe68
	if (ctx.cr6.eq) goto loc_880EFE68;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13896
	ctx.r3.s64 = 13896;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFE50;
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
	ctx.lr = 0x880EFE68;
	sub_8813FF90(ctx, base);
loc_880EFE68:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lis r26,30
	ctx.r26.s64 = 1966080;
	// lwz r9,7744(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// lis r27,49
	ctx.r27.s64 = 3211264;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r25,400
	ctx.r25.s64 = 26214400;
	// lwz r7,7748(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r24,-80
	ctx.r24.s64 = -5242880;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r29,r26,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r26.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// add r28,r8,r27
	ctx.r28.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bge cr6,0x880eff18
	if (!ctx.cr6.lt) goto loc_880EFF18;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880eff18
	if (!ctx.cr6.gt) goto loc_880EFF18;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880eff18
	if (!ctx.cr6.lt) goto loc_880EFF18;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880eff18
	if (!ctx.cr6.gt) goto loc_880EFF18;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13893
	ctx.r3.s64 = 13893;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFED8;
	sub_8801A9C8(ctx, base);
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880EFEE0;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eff18
	if (ctx.cr6.eq) goto loc_880EFF18;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,13893
	ctx.r3.s64 = 13893;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFF00;
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
	ctx.lr = 0x880EFF18;
	sub_8813FF90(ctx, base);
loc_880EFF18:
	// lwz r10,7744(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,7748(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r8,r26
	ctx.r31.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r31,r20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r20.s32, ctx.xer);
	// add r29,r7,r27
	ctx.r29.u64 = ctx.r7.u64 + ctx.r27.u64;
	// bge cr6,0x880effd8
	if (!ctx.cr6.lt) goto loc_880EFFD8;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x880effd8
	if (!ctx.cr6.gt) goto loc_880EFFD8;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880effd8
	if (!ctx.cr6.lt) goto loc_880EFFD8;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880effd8
	if (!ctx.cr6.gt) goto loc_880EFFD8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,13893
	ctx.r3.s64 = 13893;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFF78;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EFF84;
	sub_8813FF08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x8813ff48
	ctx.lr = 0x880EFF90;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880effd8
	if (ctx.cr6.eq) goto loc_880EFFD8;
	// li r6,78
	ctx.r6.s64 = 78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,13893
	ctx.r3.s64 = 13893;
	// bl 0x8801a9c8
	ctx.lr = 0x880EFFB0;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880EFFBC;
	sub_8813FF08(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8813ff90
	ctx.lr = 0x880EFFD8;
	sub_8813FF90(ctx, base);
loc_880EFFD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810BE60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810BE68;
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
	ctx.lr = 0x8810BE7C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x88021be0
	ctx.lr = 0x8810BE90;
	sub_88021BE0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r8,156(r28)
	REX_STORE_U32(ctx.r28.u32 + 156, ctx.r8.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r6,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r4,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r4.u32);
	// lis r9,304
	ctx.r9.s64 = 19922944;
	// stw r5,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// stw r3,60(r7)
	REX_STORE_U32(ctx.r7.u32 + 60, ctx.r3.u32);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// stw r8,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r4,-5712
	ctx.r4.s64 = ctx.r4.s64 + -5712;
	// stw r10,68(r7)
	REX_STORE_U32(ctx.r7.u32 + 68, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x88021d68
	ctx.lr = 0x8810BF18;
	sub_88021D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880244a8
	ctx.lr = 0x8810BF20;
	sub_880244A8(ctx, base);
	// lis r3,-30703
	ctx.r3.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-17760
	ctx.r5.s64 = ctx.r3.s64 + -17760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810BF34;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810C628;
	__savegprlr_28(ctx, base);
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
	// bl 0x88023f40
	ctx.lr = 0x8810C63C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x88021be0
	ctx.lr = 0x8810C650;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,156(r28)
	REX_STORE_U32(ctx.r28.u32 + 156, ctx.r10.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810C67C;
	sub_880244A8(ctx, base);
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-15232
	ctx.r5.s64 = ctx.r6.s64 + -15232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810C690;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810CB90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810CB98;
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
	ctx.lr = 0x8810CBA8;
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
	ctx.lr = 0x8810CBBC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8810cc5c
	if (ctx.cr6.gt) goto loc_8810CC5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810cc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810CC28;
	// bdzf 4*cr6+eq,0x8810cc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810CC68;
	// bdzf 4*cr6+eq,0x8810ccc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810CCC0;
	// bne cr6,0x8810cd28
	if (!ctx.cr6.eq) goto loc_8810CD28;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x8810cc5c
	if (ctx.cr0.gt) goto loc_8810CC5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// stw r11,184(r28)
	REX_STORE_U32(ctx.r28.u32 + 184, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,1328
	ctx.r4.s64 = ctx.r10.s64 + 1328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810CC10;
	sub_88021780(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810CC28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88021a28
	ctx.lr = 0x8810CC34;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810cc5c
	if (!ctx.cr6.eq) goto loc_8810CC5C;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21008
	ctx.r4.s64 = ctx.r11.s64 + 21008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8810CC50;
	sub_880213F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8810CC5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810CC68:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8810cc5c
	if (!ctx.cr0.lt) goto loc_8810CC5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,20520
	ctx.r4.s64 = ctx.r10.s64 + 20520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810CC9C;
	sub_880213F0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810CCC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x8810CCCC;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810cc5c
	if (!ctx.cr6.eq) goto loc_8810CC5C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x8810cc5c
	if (ctx.cr0.gt) goto loc_8810CC5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x8810CCFC;
	sub_880216E8(ctx, base);
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810CD10;
	sub_88021780(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810CD28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88021a28
	ctx.lr = 0x8810CD34;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810cc5c
	if (!ctx.cr6.eq) goto loc_8810CC5C;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13592
	ctx.r4.s64 = ctx.r11.s64 + -13592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810CD50;
	sub_88021AD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x88021c70
	ctx.lr = 0x8810CD5C;
	sub_88021C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8810CD68;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810E3C8;
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
	ctx.lr = 0x8810E3DC;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x88021be0
	ctx.lr = 0x8810E3EC;
	sub_88021BE0(ctx, base);
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-5712
	ctx.r4.s64 = ctx.r8.s64 + -5712;
	// bl 0x88021d68
	ctx.lr = 0x8810E41C;
	sub_88021D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r9,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// stw r9,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// stw r10,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stw r10,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810E454;
	sub_880244A8(ctx, base);
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-7936
	ctx.r5.s64 = ctx.r6.s64 + -7936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810E468;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E790) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810E798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810E7A8;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x88021de0
	ctx.lr = 0x8810E7B8;
	sub_88021DE0(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// stw r10,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8810E7D4;
	sub_8801A448(ctx, base);
	// addi r9,r3,-24
	ctx.r9.s64 = ctx.r3.s64 + -24;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// li r3,48
	ctx.r3.s64 = 48;
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x8810E7F0;
	sub_8801A448(ctx, base);
	// addi r7,r3,-24
	ctx.r7.s64 = ctx.r3.s64 + -24;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r6,-6528
	ctx.r4.s64 = ctx.r6.s64 + -6528;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r5.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// bl 0x88021e18
	ctx.lr = 0x8810E81C;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810EB18) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810EB30;
	sub_88023F40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r4,r8,-5464
	ctx.r4.s64 = ctx.r8.s64 + -5464;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// bl 0x88021e18
	ctx.lr = 0x8810EB54;
	sub_88021E18(ctx, base);
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

DEFINE_REX_FUNC(sub_8810F628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810F630;
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
	ctx.lr = 0x8810F640;
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
	ctx.lr = 0x8810F654;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x8810f694
	if (!ctx.cr0.lt) goto loc_8810F694;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x8810f698
	if (ctx.cr6.lt) goto loc_8810F698;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810F694:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810F698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F870) {
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
	ctx.lr = 0x8810F89C;
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
	// addi r5,r9,-2056
	ctx.r5.s64 = ctx.r9.s64 + -2056;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8810F8C0;
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

DEFINE_REX_FUNC(sub_8810FB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810FB70;
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
	ctx.lr = 0x8810FB80;
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
	ctx.lr = 0x8810FB94;
	sub_88021898(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,136(r29)
	REX_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// addi r5,r9,-1328
	ctx.r5.s64 = ctx.r9.s64 + -1328;
	// stw r11,88(r29)
	REX_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8810FBC0;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810FF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f68
	ctx.lr = 0x8810FF98;
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
	ctx.lr = 0x8810FFAC;
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
	ctx.lr = 0x8810FFC0;
	sub_88021898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x8810FFCC;
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
	// bge 0x881100ec
	if (!ctx.cr0.lt) goto loc_881100EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,32
	ctx.r3.s64 = 32;
	// mulli r11,r11,124
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(124));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,612(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 612);
	// lwz r27,616(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// bl 0x8801a448
	ctx.lr = 0x8810FFFC;
	sub_8801A448(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-32608
	ctx.r11.s64 = ctx.r10.s64 + -32608;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-216
	ctx.r10.s64 = ctx.r11.s64 + -216;
	// addi r23,r30,2
	ctx.r23.s64 = ctx.r30.s64 + 2;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// li r30,6
	ctx.r30.s64 = 6;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// add r26,r3,r7
	ctx.r26.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_88110030:
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
	ctx.lr = 0x8811004C;
	sub_880A84F0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8811005C;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880a8620
	ctx.lr = 0x88110068;
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
	ctx.lr = 0x88110084;
	sub_880A99A8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880a9a58
	ctx.lr = 0x8811008C;
	sub_880A9A58(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8801a448
	ctx.lr = 0x88110094;
	sub_8801A448(ctx, base);
	// addi r20,r3,-12
	ctx.r20.s64 = ctx.r3.s64 + -12;
	// li r3,47
	ctx.r3.s64 = 47;
	// lwz r25,8(r29)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8801a448
	ctx.lr = 0x881100A4;
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
	ctx.lr = 0x881100C8;
	sub_880111C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x88110030
	if (!ctx.cr0.eq) goto loc_88110030;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x88021928
	ctx.lr = 0x881100E0;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
loc_881100EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb8
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111BA0) {
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
	ctx.lr = 0x88111BCC;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// li r7,46
	ctx.r7.s64 = 46;
	// stw r3,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r3.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lis r5,-30703
	ctx.r5.s64 = -2012151808;
	// stw r6,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// addi r5,r5,6096
	ctx.r5.s64 = ctx.r5.s64 + 6096;
	// stw r8,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r7.u32);
	// bl 0x880214b8
	ctx.lr = 0x88111C2C;
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

DEFINE_REX_FUNC(sub_88112320) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88112328;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811233C;
	sub_88023F40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x88112350;
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
	// bge 0x88112580
	if (!ctx.cr0.lt) goto loc_88112580;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r4,-30692
	ctx.r4.s64 = -2011430912;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r5,116(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// lwz r9,544(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 544);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lwz r8,548(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 548);
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// addi r10,r10,-30696
	ctx.r10.s64 = ctx.r10.s64 + -30696;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// addi r7,r4,-31848
	ctx.r7.s64 = ctx.r4.s64 + -31848;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// ble cr6,0x881123dc
	if (!ctx.cr6.gt) goto loc_881123DC;
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r30,r7,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r29,r6,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r6.u64;
	// b 0x88112410
	goto loc_88112410;
loc_881123DC:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_88112410:
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,14
	ctx.r3.s64 = 14;
	// bne cr6,0x8811248c
	if (!ctx.cr6.eq) goto loc_8811248C;
	// addi r7,r5,-32
	ctx.r7.s64 = ctx.r5.s64 + -32;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88014578
	ctx.lr = 0x88112458;
	sub_88014578(ctx, base);
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// bl 0x88014578
	ctx.lr = 0x88112488;
	sub_88014578(ctx, base);
	// b 0x881124d4
	goto loc_881124D4;
loc_8811248C:
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r7,r5,32
	ctx.r7.s64 = ctx.r5.s64 + 32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88014578
	ctx.lr = 0x881124A4;
	sub_88014578(ctx, base);
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// bl 0x88014578
	ctx.lr = 0x881124D4;
	sub_88014578(ctx, base);
loc_881124D4:
	// lwz r10,116(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,116(r24)
	REX_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x88112580
	if (!ctx.cr0.lt) goto loc_88112580;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880244a8
	ctx.lr = 0x881124FC;
	sub_880244A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x88112518
	if (ctx.cr6.lt) goto loc_88112518;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_88112518:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,-23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -23, ctx.xer);
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// blt cr6,0x88112550
	if (ctx.cr6.lt) goto loc_88112550;
	// li r11,-23
	ctx.r11.s64 = -23;
	// li r10,-18
	ctx.r10.s64 = -18;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_88112550:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8811256c
	if (ctx.cr6.gt) goto loc_8811256C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8811256C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,16
	ctx.r10.s64 = 16;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
loc_88112580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88114970) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88114978;
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
	ctx.lr = 0x88114988;
	sub_88023F40(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,23248
	ctx.r4.s64 = ctx.r11.s64 + 23248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021e70
	ctx.lr = 0x8811499C;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881149c8
	if (!ctx.cr6.eq) goto loc_881149C8;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88022be0
	ctx.lr = 0x881149AC;
	sub_88022BE0(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x88022be0
	ctx.lr = 0x881149B4;
	sub_88022BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88023f48
	ctx.lr = 0x881149BC;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_881149C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88114F10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88114F18;
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
	ctx.lr = 0x88114F28;
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
	ctx.lr = 0x88114F3C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88114fac
	if (ctx.cr6.gt) goto loc_88114FAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88114fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88114FAC;
	// bdzf 4*cr6+eq,0x88114fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88114FB8;
	// bdzf 4*cr6+eq,0x88114fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88114FAC;
	// bdzf 4*cr6+eq,0x88115024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88115024;
	// bne cr6,0x88115078
	if (!ctx.cr6.eq) goto loc_88115078;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88114fac
	if (!ctx.cr0.lt) goto loc_88114FAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,256(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 256);
	// bl 0x88021928
	ctx.lr = 0x88114F84;
	sub_88021928(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1440
	ctx.r4.s64 = ctx.r11.s64 + -1440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88114F98;
	sub_88021780(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r3.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_88114FAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88114FB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88114fac
	if (!ctx.cr0.lt) goto loc_88114FAC;
	// lwz r11,1380(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88114ff8
	if (ctx.cr6.lt) goto loc_88114FF8;
	// beq cr6,0x88114fec
	if (ctx.cr6.eq) goto loc_88114FEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88115010
	if (!ctx.cr6.lt) goto loc_88115010;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,8008
	ctx.r4.s64 = ctx.r11.s64 + 8008;
	// b 0x88115000
	goto loc_88115000;
loc_88114FEC:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,5200
	ctx.r4.s64 = ctx.r11.s64 + 5200;
	// b 0x88115000
	goto loc_88115000;
loc_88114FF8:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,2752
	ctx.r4.s64 = ctx.r11.s64 + 2752;
loc_88115000:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8811500C;
	sub_880213F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_88115010:
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
loc_88115024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x88115030;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88114fac
	if (!ctx.cr6.eq) goto loc_88114FAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x88021928
	ctx.lr = 0x88115044;
	sub_88021928(ctx, base);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1688
	ctx.r4.s64 = ctx.r11.s64 + -1688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88115058;
	sub_88021780(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r3,256(r29)
	REX_STORE_U32(ctx.r29.u32 + 256, ctx.r3.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88115078:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88114fac
	if (!ctx.cr0.lt) goto loc_88114FAC;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,20136
	ctx.r4.s64 = ctx.r11.s64 + 20136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8811509C;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x881150A8;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88116FC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88116FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,236
	ctx.r4.s64 = 236;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88116FD8;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88116FE0;
	sub_88023F40(ctx, base);
	// li r5,236
	ctx.r5.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88116FF0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88116FF8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88116FFC;
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
	ctx.lr = 0x88117010;
	sub_88024028(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x88117020;
	sub_880240B8(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r5,r7,27888
	ctx.r5.s64 = ctx.r7.s64 + 27888;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r29,0
	ctx.r29.s64 = 0;
	// sth r9,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// addi r6,r8,27888
	ctx.r6.s64 = ctx.r8.s64 + 27888;
	// sth r9,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r3,511
	ctx.r3.s64 = 511;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// sth r9,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r9.u16);
	// sth r29,100(r31)
	REX_STORE_U16(ctx.r31.u32 + 100, ctx.r29.u16);
	// stw r29,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r31,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r31.u32);
	// stw r5,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// stw r31,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r31.u32);
	// stw r4,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r4.u32);
	// stw r8,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// stw r29,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stw r9,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x881170C0;
	sub_8801A448(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x881170CC;
	sub_88023C50(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r10,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// blt cr6,0x881170ec
	if (ctx.cr6.lt) goto loc_881170EC;
	// bne cr6,0x88117104
	if (!ctx.cr6.eq) goto loc_88117104;
loc_881170EC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x881170F4;
	sub_8801A448(ctx, base);
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_88117104:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27984
	ctx.r4.s64 = ctx.r11.s64 + 27984;
	// bl 0x88023e90
	ctx.lr = 0x88117114;
	sub_88023E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881181C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881181C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881181fc
	if (!ctx.cr6.gt) goto loc_881181FC;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x880236a8
	ctx.lr = 0x881181FC;
	sub_880236A8(ctx, base);
loc_881181FC:
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881182cc
	if (!ctx.cr6.eq) goto loc_881182CC;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bne cr6,0x881182d8
	if (!ctx.cr6.eq) goto loc_881182D8;
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x881182d8
	if (ctx.cr6.gt) goto loc_881182D8;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x880229d0
	ctx.lr = 0x88118240;
	sub_880229D0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,24464
	ctx.r5.u64 = ctx.r5.u64 | 24464;
	// bl 0x88024de8
	ctx.lr = 0x88118258;
	sub_88024DE8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88118268;
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
	ctx.lr = 0x8811827C;
	sub_88022730(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x88118284;
	sub_88022980(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88023678
	ctx.lr = 0x88118290;
	sub_88023678(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x88021618
	ctx.lr = 0x881182A8;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x881182B0;
	sub_88021CF0(ctx, base);
	// lwz r8,36(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,24320
	ctx.r4.s64 = ctx.r9.s64 + 24320;
	// stw r8,936(r31)
	REX_STORE_U32(ctx.r31.u32 + 936, ctx.r8.u32);
	// bl 0x88021ad0
	ctx.lr = 0x881182CC;
	sub_88021AD0(ctx, base);
loc_881182CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881182D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881182cc
	if (!ctx.cr6.eq) goto loc_881182CC;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x881182cc
	if (ctx.cr6.gt) goto loc_881182CC;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x880229d0
	ctx.lr = 0x881182FC;
	sub_880229D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,41248
	ctx.r5.u64 = ctx.r5.u64 | 41248;
	// bl 0x88024de8
	ctx.lr = 0x88118314;
	sub_88024DE8(ctx, base);
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
	// blt cr6,0x88118338
	if (ctx.cr6.lt) goto loc_88118338;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x880247e8
	ctx.lr = 0x88118334;
	sub_880247E8(ctx, base);
	// bl 0x88069600
	ctx.lr = 0x88118338;
	sub_88069600(ctx, base);
loc_88118338:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x88021618
	ctx.lr = 0x8811834C;
	sub_88021618(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021cf0
	ctx.lr = 0x88118354;
	sub_88021CF0(ctx, base);
	// lwz r9,36(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,26096
	ctx.r4.s64 = ctx.r10.s64 + 26096;
	// stw r9,940(r31)
	REX_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// bl 0x88021ad0
	ctx.lr = 0x88118370;
	sub_88021AD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118EC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118EC8;
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
	ctx.lr = 0x88118ED8;
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
	ctx.lr = 0x88118EEC;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88118f38
	if (!ctx.cr0.lt) goto loc_88118F38;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x88118f38
	if (ctx.cr6.lt) goto loc_88118F38;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x88118F2C;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88118F38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88119368;
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
	ctx.lr = 0x88119378;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,256
	ctx.r3.s64 = 256;
	// lwz r4,376(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 376);
	// bl 0x8801a808
	ctx.lr = 0x8811938C;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,376(r29)
	REX_STORE_U32(ctx.r29.u32 + 376, ctx.r11.u32);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bne cr6,0x881193b4
	if (!ctx.cr6.eq) goto loc_881193B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021928
	ctx.lr = 0x881193A8;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_881193B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881199E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881199E8;
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
	ctx.lr = 0x881199F8;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x88119A0C;
	sub_88021898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r4,r8,-27312
	ctx.r4.s64 = ctx.r8.s64 + -27312;
	// bl 0x88021780
	ctx.lr = 0x88119A34;
	sub_88021780(ctx, base);
	// stw r3,392(r29)
	REX_STORE_U32(ctx.r29.u32 + 392, ctx.r3.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r7,-30480
	ctx.r5.s64 = ctx.r7.s64 + -30480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x88119A4C;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811A330) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8811A338;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811A34C;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021508
	ctx.lr = 0x8811A360;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811a560
	if (ctx.cr6.eq) goto loc_8811A560;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811a588
	if (!ctx.cr0.lt) goto loc_8811A588;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r30,72(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 72);
	// lwz r29,76(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811A3A0;
	sub_880244D0(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8811a440
	if (!ctx.cr6.eq) goto loc_8811A440;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,944(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 944);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bne cr6,0x8811a410
	if (!ctx.cr6.eq) goto loc_8811A410;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// bne cr6,0x8811a3f4
	if (!ctx.cr6.eq) goto loc_8811A3F4;
	// li r8,3
	ctx.r8.s64 = 3;
	// bl 0x88013ce0
	ctx.lr = 0x8811A3F0;
	sub_88013CE0(ctx, base);
	// b 0x8811a440
	goto loc_8811A440;
loc_8811A3F4:
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// bl 0x880140f0
	ctx.lr = 0x8811A40C;
	sub_880140F0(ctx, base);
	// b 0x8811a440
	goto loc_8811A440;
loc_8811A410:
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// bne cr6,0x8811a42c
	if (!ctx.cr6.eq) goto loc_8811A42C;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x88013ce0
	ctx.lr = 0x8811A428;
	sub_88013CE0(ctx, base);
	// b 0x8811a440
	goto loc_8811A440;
loc_8811A42C:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880140f0
	ctx.lr = 0x8811A440;
	sub_880140F0(ctx, base);
loc_8811A440:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8811a49c
	if (!ctx.cr6.eq) goto loc_8811A49C;
	// lwz r11,944(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 944);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// bne cr6,0x8811a484
	if (!ctx.cr6.eq) goto loc_8811A484;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// bl 0x88013ce0
	ctx.lr = 0x8811A480;
	sub_88013CE0(ctx, base);
	// b 0x8811a49c
	goto loc_8811A49C;
loc_8811A484:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// bl 0x880140f0
	ctx.lr = 0x8811A49C;
	sub_880140F0(ctx, base);
loc_8811A49C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8811a4f8
	if (!ctx.cr6.eq) goto loc_8811A4F8;
	// lwz r11,944(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 944);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r6,r11,30
	ctx.r6.s64 = ctx.r11.s64 + 30;
	// bne cr6,0x8811a4e0
	if (!ctx.cr6.eq) goto loc_8811A4E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// bl 0x88013ce0
	ctx.lr = 0x8811A4DC;
	sub_88013CE0(ctx, base);
	// b 0x8811a4f8
	goto loc_8811A4F8;
loc_8811A4E0:
	// li r8,-6
	ctx.r8.s64 = -6;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// bl 0x88014578
	ctx.lr = 0x8811A4F8;
	sub_88014578(ctx, base);
loc_8811A4F8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// andc r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// subf r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bgt 0x8811a588
	if (ctx.cr0.gt) goto loc_8811A588;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x8811a588
	if (ctx.cr0.gt) goto loc_8811A588;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x8811A554;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8811A560:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811a588
	if (!ctx.cr0.lt) goto loc_8811A588;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-4
	ctx.r10.s64 = -4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_8811A588:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811C4B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8811C4B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811C4CC;
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
	ctx.lr = 0x8811C4E0;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811c62c
	if (ctx.cr6.eq) goto loc_8811C62C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811c670
	if (!ctx.cr0.lt) goto loc_8811C670;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r30,72(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,76(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// beq cr6,0x8811c554
	if (ctx.cr6.eq) goto loc_8811C554;
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,-40
	ctx.r6.s64 = -40;
	// subfic r9,r8,48
	ctx.xer.ca = ctx.r8.u32 <= 48;
	ctx.r9.u64 = static_cast<uint64_t>(48) - ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88013ce0
	ctx.lr = 0x8811C540;
	sub_88013CE0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8811c5e8
	goto loc_8811C5E8;
loc_8811C554:
	// li r5,192
	ctx.r5.s64 = 192;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x880140f0
	ctx.lr = 0x8811C584;
	sub_880140F0(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// bl 0x880140f0
	ctx.lr = 0x8811C5B8;
	sub_880140F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x88013ce0
	ctx.lr = 0x8811C5DC;
	sub_88013CE0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_8811C5E8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8811c670
	if (ctx.cr0.gt) goto loc_8811C670;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bgt 0x8811c670
	if (ctx.cr0.gt) goto loc_8811C670;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x8811C620;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8811C62C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811c670
	if (!ctx.cr0.lt) goto loc_8811C670;
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
	ctx.lr = 0x8811C65C;
	sub_880244D0(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_8811C670:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811EEC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x8811EEC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811EEDC;
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
	ctx.lr = 0x8811EEF0;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811f214
	if (ctx.cr6.eq) goto loc_8811F214;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811f250
	if (!ctx.cr0.lt) goto loc_8811F250;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bgt cr6,0x8811ef30
	if (ctx.cr6.gt) goto loc_8811EF30;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8811EF30:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x8811f09c
	if (!ctx.cr6.eq) goto loc_8811F09C;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r29,r11,-23688
	ctx.r29.s64 = ctx.r11.s64 + -23688;
	// lwz r11,-23688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23688);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811EF74;
	sub_880244D0(ctx, base);
	// lwz r11,944(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,80
	ctx.r26.s64 = 80;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8811efb4
	if (!ctx.cr6.eq) goto loc_8811EFB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// bl 0x88013ce0
	ctx.lr = 0x8811EFB0;
	sub_88013CE0(ctx, base);
	// b 0x8811efc8
	goto loc_8811EFC8;
loc_8811EFB4:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x880140f0
	ctx.lr = 0x8811EFC8;
	sub_880140F0(ctx, base);
loc_8811EFC8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r29,120
	ctx.r9.s64 = ctx.r29.s64 + 120;
	// addi r7,r29,124
	ctx.r7.s64 = ctx.r29.s64 + 124;
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r6,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811F008;
	sub_880244D0(ctx, base);
	// lwz r11,944(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8811f040
	if (!ctx.cr6.eq) goto loc_8811F040;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// bl 0x88013ce0
	ctx.lr = 0x8811F03C;
	sub_88013CE0(ctx, base);
	// b 0x8811f054
	goto loc_8811F054;
loc_8811F040:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x880140f0
	ctx.lr = 0x8811F054;
	sub_880140F0(ctx, base);
loc_8811F054:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r9,-6928
	ctx.r4.s64 = ctx.r9.s64 + -6928;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880213f0
	ctx.lr = 0x8811F07C;
	sub_880213F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8811f1d0
	if (ctx.cr6.lt) goto loc_8811F1D0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8811f1d0
	goto loc_8811F1D0;
loc_8811F09C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,76(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-23688
	ctx.r10.s64 = ctx.r11.s64 + -23688;
	// beq cr6,0x8811f134
	if (ctx.cr6.eq) goto loc_8811F134;
	// lwz r11,-23688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23688);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811F0D8;
	sub_880244D0(ctx, base);
	// lwz r9,944(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bne cr6,0x8811f110
	if (!ctx.cr6.eq) goto loc_8811F110;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// bl 0x88013ce0
	ctx.lr = 0x8811F10C;
	sub_88013CE0(ctx, base);
	// b 0x8811f1a8
	goto loc_8811F1A8;
loc_8811F110:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-10
	ctx.r8.s64 = -10;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// bl 0x88014578
	ctx.lr = 0x8811F130;
	sub_88014578(ctx, base);
	// b 0x8811f1a8
	goto loc_8811F1A8;
loc_8811F134:
	// lwz r11,120(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r10,124(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x8811F150;
	sub_880244D0(ctx, base);
	// lwz r9,944(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 944);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bne cr6,0x8811f188
	if (!ctx.cr6.eq) goto loc_8811F188;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// bl 0x88013ce0
	ctx.lr = 0x8811F184;
	sub_88013CE0(ctx, base);
	// b 0x8811f1a8
	goto loc_8811F1A8;
loc_8811F188:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-10
	ctx.r8.s64 = -10;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// bl 0x88014578
	ctx.lr = 0x8811F1A8;
	sub_88014578(ctx, base);
loc_8811F1A8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bgt cr6,0x8811f1c4
	if (ctx.cr6.gt) goto loc_8811F1C4;
	// li r11,-16
	ctx.r11.s64 = -16;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8811F1C4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8811F1D0:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x8811F1F0;
	sub_880244A8(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8811f250
	if (ctx.cr6.gt) goto loc_8811F250;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88021598
	ctx.lr = 0x8811F208;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_8811F214:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811f250
	if (!ctx.cr0.lt) goto loc_8811F250;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x8811f250
	if (ctx.cr6.eq) goto loc_8811F250;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8811F250:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125658) {
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
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// addi r11,r4,508
	ctx.r11.s64 = ctx.r4.s64 + 508;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r8,508(r4)
	REX_STORE_U32(ctx.r4.u32 + 508, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,9144
	ctx.r5.s64 = ctx.r7.s64 + 9144;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x881256A0;
	sub_88021E88(ctx, base);
	// lis r6,-30606
	ctx.r6.s64 = -2005794816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r6,17808
	ctx.r30.s64 = ctx.r6.s64 + 17808;
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,6720
	ctx.r5.s64 = ctx.r5.s64 + 6720;
	// stw r11,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x881256C8;
	sub_88021E88(ctx, base);
	// stw r3,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lis r4,-30702
	ctx.r4.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r4,7320
	ctx.r5.s64 = ctx.r4.s64 + 7320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x881256E4;
	sub_88021E88(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,18856
	ctx.r5.s64 = ctx.r11.s64 + 18856;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x88125700;
	sub_88021E88(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20048
	ctx.r5.s64 = ctx.r10.s64 + 20048;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x8812571C;
	sub_88021E88(ctx, base);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,18296
	ctx.r5.s64 = ctx.r9.s64 + 18296;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x88125738;
	sub_88021E88(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,9144
	ctx.r5.s64 = ctx.r8.s64 + 9144;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x88021e88
	ctx.lr = 0x88125754;
	sub_88021E88(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,6720
	ctx.r5.s64 = ctx.r7.s64 + 6720;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x88125770;
	sub_88021E88(ctx, base);
	// stw r3,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,7320
	ctx.r5.s64 = ctx.r5.s64 + 7320;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x8812578C;
	sub_88021E88(ctx, base);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lis r4,-30702
	ctx.r4.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r4,18856
	ctx.r5.s64 = ctx.r4.s64 + 18856;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x881257A8;
	sub_88021E88(ctx, base);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r3,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20048
	ctx.r5.s64 = ctx.r11.s64 + 20048;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x881257C4;
	sub_88021E88(ctx, base);
	// stw r3,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,18296
	ctx.r5.s64 = ctx.r10.s64 + 18296;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e88
	ctx.lr = 0x881257E0;
	sub_88021E88(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_88126D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88126D18;
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
	ctx.lr = 0x88126D28;
	sub_88023F40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x88126D38;
	sub_88021BE0(ctx, base);
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f0,19112(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19112);
	// stfd f0,136(r9)
	REX_STORE_U64(ctx.r9.u32 + 136, ctx.f0.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x88126d98
	if (ctx.cr6.gt) goto loc_88126D98;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88126da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88126DA4;
	// bdzf 4*cr6+eq,0x88126e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88126E78;
	// bne cr6,0x88126f58
	if (!ctx.cr6.eq) goto loc_88126F58;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88126d90
	if (ctx.cr6.eq) goto loc_88126D90;
loc_88126D7C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88126D90:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88126D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88126DA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x88126d98
	if (!ctx.cr0.lt) goto loc_88126D98;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// addi r29,r10,-15696
	ctx.r29.s64 = ctx.r10.s64 + -15696;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r4,r8,-21328
	ctx.r4.s64 = ctx.r8.s64 + -21328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r6,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x88126DF4;
	sub_880213F0(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// subfic r6,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r6.u64 = static_cast<uint64_t>(7) - ctx.r8.u64;
	// lis r4,-30702
	ctx.r4.s64 = -2012086272;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,-21328
	ctx.r4.s64 = ctx.r4.s64 + -21328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x88126E2C;
	sub_880213F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88126d98
	if (ctx.cr6.lt) goto loc_88126D98;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25248
	ctx.r4.s64 = ctx.r11.s64 + -25248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88126E58;
	sub_880213F0(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88126E78:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x88126f00
	if (!ctx.cr0.lt) goto loc_88126F00;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88126E98;
	sub_8801A448(ctx, base);
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r10,-15696
	ctx.r29.s64 = ctx.r10.s64 + -15696;
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r9,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// addi r4,r7,-20832
	ctx.r4.s64 = ctx.r7.s64 + -20832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x88126ED0;
	sub_880213F0(ctx, base);
	// subfic r10,r28,7
	ctx.xer.ca = ctx.r28.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r28.u64;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-20832
	ctx.r4.s64 = ctx.r7.s64 + -20832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r6,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r10,r6,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x880213f0
	ctx.lr = 0x88126F00;
	sub_880213F0(ctx, base);
loc_88126F00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x88021698
	ctx.lr = 0x88126F0C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88126d98
	if (!ctx.cr6.eq) goto loc_88126D98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021698
	ctx.lr = 0x88126F20;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88126d98
	if (!ctx.cr6.eq) goto loc_88126D98;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88126d7c
	if (!ctx.cr6.eq) goto loc_88126D7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x88126F44;
	sub_880216E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88126F58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x88021698
	ctx.lr = 0x88126F64;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88126d98
	if (!ctx.cr6.eq) goto loc_88126D98;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,27728
	ctx.r4.s64 = ctx.r11.s64 + 27728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88126F80;
	sub_88021AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x88126F8C;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88128B68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88128B70;
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
	ctx.lr = 0x88128B84;
	sub_88023F40(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x88021be0
	ctx.lr = 0x88128B94;
	sub_88021BE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,184
	ctx.r9.s64 = 12058624;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r8,96
	ctx.r8.s64 = 96;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r31,32
	ctx.r31.s64 = 32;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r6,120
	ctx.r6.s64 = 7864320;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r31,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// lis r4,-30701
	ctx.r4.s64 = -2012020736;
	// stw r7,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r4,-19064
	ctx.r4.s64 = ctx.r4.s64 + -19064;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x88021d68
	ctx.lr = 0x88128BF4;
	sub_88021D68(ctx, base);
	// stw r31,68(r27)
	REX_STORE_U32(ctx.r27.u32 + 68, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x88128C00;
	sub_880244A8(ctx, base);
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r10,-30544
	ctx.r5.s64 = ctx.r10.s64 + -30544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021b90
	ctx.lr = 0x88128C14;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88129700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88129708;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88129718;
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
	ctx.lr = 0x8812972C;
	sub_88021BE0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bgt 0x88129790
	if (ctx.cr0.gt) goto loc_88129790;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,224
	ctx.r11.s64 = 14680064;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addis r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 524288;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blt cr6,0x88129768
	if (ctx.cr6.lt) goto loc_88129768;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_88129768:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r9,-19064
	ctx.r4.s64 = ctx.r9.s64 + -19064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x88021d68
	ctx.lr = 0x88129790;
	sub_88021D68(ctx, base);
loc_88129790:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88129800
	if (ctx.cr6.gt) goto loc_88129800;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8812980c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8812980C;
	// bdzf 4*cr6+eq,0x8812985c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8812985C;
	// bdzf 4*cr6+eq,0x881298e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881298E8;
	// bdzf 4*cr6+eq,0x881298fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881298FC;
	// bne cr6,0x88129954
	if (!ctx.cr6.eq) goto loc_88129954;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881297d8
	if (ctx.cr6.eq) goto loc_881297D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881297D8:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29360
	ctx.r4.s64 = ctx.r11.s64 + -29360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x881297F4;
	sub_88021780(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,344(r27)
	REX_STORE_U32(ctx.r27.u32 + 344, ctx.r3.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88129800:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8812980C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 344);
	// bl 0x88021a28
	ctx.lr = 0x88129818;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129800
	if (!ctx.cr6.eq) goto loc_88129800;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-216
	ctx.r4.s64 = ctx.r8.s64 + -216;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x8812984C;
	sub_880213F0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8812985C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881298a4
	if (ctx.cr6.eq) goto loc_881298A4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bne 0x88129800
	if (!ctx.cr0.eq) goto loc_88129800;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29360
	ctx.r4.s64 = ctx.r10.s64 + -29360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88129894;
	sub_88021780(ctx, base);
	// stw r3,348(r27)
	REX_STORE_U32(ctx.r27.u32 + 348, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881298A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,348(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x88021a28
	ctx.lr = 0x881298B0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129800
	if (!ctx.cr6.eq) goto loc_88129800;
	// li r29,3
	ctx.r29.s64 = 3;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x881298D4;
	sub_880213F0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881298E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_881298FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88021698
	ctx.lr = 0x88129908;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129800
	if (!ctx.cr6.eq) goto loc_88129800;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29096
	ctx.r4.s64 = ctx.r11.s64 + -29096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8812992C;
	sub_88021780(ctx, base);
	// stw r3,344(r27)
	REX_STORE_U32(ctx.r27.u32 + 344, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880216e8
	ctx.lr = 0x88129940;
	sub_880216E8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88129954:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x88021698
	ctx.lr = 0x88129960;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88129800
	if (!ctx.cr6.eq) goto loc_88129800;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-29096
	ctx.r4.s64 = ctx.r10.s64 + -29096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88129988;
	sub_88021780(ctx, base);
	// stw r3,348(r27)
	REX_STORE_U32(ctx.r27.u32 + 348, ctx.r3.u32);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-27080
	ctx.r4.s64 = ctx.r9.s64 + -27080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x881299A0;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x881299AC;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BCB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8812BCC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 332);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812bcf4
	if (!ctx.cr6.gt) goto loc_8812BCF4;
	// lwz r11,1576(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 1576);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x880236a8
	ctx.lr = 0x8812BCF4;
	sub_880236A8(ctx, base);
loc_8812BCF4:
	// lwz r11,1552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812bdc4
	if (!ctx.cr6.eq) goto loc_8812BDC4;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// bl 0x8812b9c8
	ctx.lr = 0x8812BD1C;
	sub_8812B9C8(ctx, base);
	// lwz r8,1576(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8812bd70
	if (!ctx.cr6.eq) goto loc_8812BD70;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8812bd70
	if (ctx.cr6.gt) goto loc_8812BD70;
	// lwz r11,1592(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812bd70
	if (!ctx.cr6.eq) goto loc_8812BD70;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,40000
	ctx.r5.u64 = ctx.r5.u64 | 40000;
	// bl 0x88024de8
	ctx.lr = 0x8812BD60;
	sub_88024DE8(ctx, base);
	// lwz r11,1600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1600);
	// stw r29,1592(r31)
	REX_STORE_U32(ctx.r31.u32 + 1592, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1600(r31)
	REX_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
loc_8812BD70:
	// lwz r11,1576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812bdb8
	if (!ctx.cr6.eq) goto loc_8812BDB8;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8812bdb8
	if (ctx.cr6.gt) goto loc_8812BDB8;
	// lwz r11,1596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812bdb8
	if (!ctx.cr6.eq) goto loc_8812BDB8;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,34464
	ctx.r5.u64 = ctx.r5.u64 | 34464;
	// bl 0x88024de8
	ctx.lr = 0x8812BDA8;
	sub_88024DE8(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1604);
	// stw r29,1596(r31)
	REX_STORE_U32(ctx.r31.u32 + 1596, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
loc_8812BDB8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8812bdc8
	if (ctx.cr6.eq) goto loc_8812BDC8;
loc_8812BDC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8812BDC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812CC60) {
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
	ctx.lr = 0x8812CC8C;
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
	// addi r5,r9,-13456
	ctx.r5.s64 = ctx.r9.s64 + -13456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8812CCB0;
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

DEFINE_REX_FUNC(sub_8812D568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8812D570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812D584;
	sub_88023F40(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x88021508
	ctx.lr = 0x8812D594;
	sub_88021508(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// stw r31,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// stw r30,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// stw r31,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// stw r30,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812D5C4;
	sub_8801A448(ctx, base);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// stw r3,28(r26)
	REX_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r7,-30701
	ctx.r7.s64 = -2012020736;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-6432(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -6432);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r10,56(r26)
	REX_STORE_U32(ctx.r26.u32 + 56, ctx.r10.u32);
	// addi r5,r7,-11304
	ctx.r5.s64 = ctx.r7.s64 + -11304;
	// stw r30,60(r26)
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r31.u32);
	// stw r6,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r6.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r8,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r8.u32);
	// stw r10,52(r26)
	REX_STORE_U32(ctx.r26.u32 + 52, ctx.r10.u32);
	// bl 0x880214b8
	ctx.lr = 0x8812D610;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812E2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8812E2E8;
	__savegprlr_27(ctx, base);
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
	ctx.lr = 0x8812E2FC;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x88021508
	ctx.lr = 0x8812E30C;
	sub_88021508(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r31,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// stw r31,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stw r31,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// stw r10,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812E33C;
	sub_8801A448(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r3,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,60(r27)
	REX_STORE_U32(ctx.r27.u32 + 60, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,64(r27)
	REX_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// stw r31,68(r27)
	REX_STORE_U32(ctx.r27.u32 + 68, ctx.r31.u32);
	// lis r6,-30701
	ctx.r6.s64 = -2012020736;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r5,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r5.u32);
	// addi r5,r6,-8424
	ctx.r5.s64 = ctx.r6.s64 + -8424;
	// stw r9,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r8.u32);
	// stw r7,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r7.u32);
	// stw r31,56(r27)
	REX_STORE_U32(ctx.r27.u32 + 56, ctx.r31.u32);
	// bl 0x880214b8
	ctx.lr = 0x8812E388;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812F108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x8812F110;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8812F124;
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
	ctx.lr = 0x8812F138;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812f34c
	if (ctx.cr6.eq) goto loc_8812F34C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bge 0x8812f3c0
	if (!ctx.cr0.lt) goto loc_8812F3C0;
	// lis r10,-28087
	ctx.r10.s64 = -1840709632;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// ori r8,r10,9363
	ctx.r8.u64 = ctx.r10.u64 | 9363;
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8812f194
	if (!ctx.cr0.eq) goto loc_8812F194;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8812F194:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r29,48
	ctx.r29.s64 = 3145728;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subf r5,r29,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r29.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r6,-20
	ctx.r6.s64 = -20;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x880140f0
	ctx.lr = 0x8812F1DC;
	sub_880140F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,-20
	ctx.r6.s64 = -20;
	// li r3,16
	ctx.r3.s64 = 16;
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x880140f0
	ctx.lr = 0x8812F218;
	sub_880140F0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8812f3c0
	if (ctx.cr0.gt) goto loc_8812F3C0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r25,56
	ctx.r25.s64 = 3670016;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lis r27,24
	ctx.r27.s64 = 1572864;
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r29,r25,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r25.u64;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r28,r27,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812F26C;
	sub_880244D0(ctx, base);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8812f2a0
	if (ctx.cr6.eq) goto loc_8812F2A0;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x8812f2a8
	goto loc_8812F2A8;
loc_8812F2A0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
loc_8812F2A8:
	// bl 0x88013ce0
	ctx.lr = 0x8812F2AC;
	sub_88013CE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r29,r27,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r27.u64;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812F2CC;
	sub_880244D0(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8812f304
	if (ctx.cr6.eq) goto loc_8812F304;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// b 0x8812f308
	goto loc_8812F308;
loc_8812F304:
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
loc_8812F308:
	// bl 0x88013ce0
	ctx.lr = 0x8812F30C;
	sub_88013CE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,10
	ctx.r7.s64 = ctx.r10.s64 + 10;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x8812f3c0
	if (ctx.cr0.gt) goto loc_8812F3C0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021598
	ctx.lr = 0x8812F340;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8812F34C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8812f3c0
	if (!ctx.cr0.lt) goto loc_8812F3C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,-14
	ctx.r8.s64 = -14;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r8,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lis r29,48
	ctx.r29.s64 = 3145728;
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// subf r4,r29,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r5,r29,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812F3A0;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r5,r29,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812F3BC;
	sub_880244D0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8812F3C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881320D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881320D8;
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
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x88021be0
	ctx.lr = 0x881320F8;
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
	ctx.lr = 0x88132110;
	sub_88024018(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8809cb78
	ctx.lr = 0x88132118;
	sub_8809CB78(ctx, base);
	// lis r9,-30701
	ctx.r9.s64 = -2012020736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,6000
	ctx.r5.s64 = ctx.r9.s64 + 6000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8813212C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132560) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88132568;
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
	ctx.lr = 0x88132588;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x881325A4;
	sub_880244A8(ctx, base);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,9200
	ctx.r5.s64 = ctx.r8.s64 + 9200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x881325B8;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132AC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88132AD0;
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
	ctx.lr = 0x88132AF0;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x88132B0C;
	sub_880244A8(ctx, base);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,10600
	ctx.r5.s64 = ctx.r8.s64 + 10600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x88132B20;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88132ED0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88132ED8;
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
	ctx.lr = 0x88132EE8;
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
	ctx.lr = 0x88132EFC;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88132f48
	if (ctx.cr6.gt) goto loc_88132F48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88132f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132F48;
	// bdzf 4*cr6+eq,0x88132f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132F54;
	// bdzf 4*cr6+eq,0x88132f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132F48;
	// bdzf 4*cr6+eq,0x88132fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132FAC;
	// bne cr6,0x88133000
	if (!ctx.cr6.eq) goto loc_88133000;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14768
	ctx.r4.s64 = ctx.r11.s64 + -14768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88132F3C;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_88132F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88132F54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x88021a28
	ctx.lr = 0x88132F60;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132f48
	if (!ctx.cr6.eq) goto loc_88132F48;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge 0x88132f48
	if (!ctx.cr0.lt) goto loc_88132F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-8576
	ctx.r4.s64 = ctx.r10.s64 + -8576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880213f0
	ctx.lr = 0x88132F94;
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
loc_88132FAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x88132FB8;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132f48
	if (!ctx.cr6.eq) goto loc_88132F48;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14528
	ctx.r4.s64 = ctx.r11.s64 + -14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x88132FD4;
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
loc_88133000:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x88021a28
	ctx.lr = 0x8813300C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132f48
	if (!ctx.cr6.eq) goto loc_88132F48;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,11880
	ctx.r4.s64 = ctx.r11.s64 + 11880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88133028;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x88133034;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88134A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x88023f40
	ctx.lr = 0x88134A68;
	sub_88023F40(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,400
	ctx.r11.s64 = 26214400;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88134a98
	if (ctx.cr6.lt) goto loc_88134A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e28
	ctx.lr = 0x88134A80;
	sub_88021E28(ctx, base);
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
loc_88134A98:
	// bl 0x881342c8
	ctx.lr = 0x88134A9C;
	sub_881342C8(ctx, base);
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

DEFINE_REX_FUNC(sub_88135808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x88135810;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813581C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88135828;
	sub_88024030(ctx, base);
	// lwz r9,4196(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4196);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88135848
	if (!ctx.cr6.eq) goto loc_88135848;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,72(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r25,76(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x88135850
	goto loc_88135850;
loc_88135848:
	// lwz r26,4(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,8(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_88135850:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// lwz r10,21860(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21860);
	// add. r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x88135a6c
	if (!ctx.cr0.eq) goto loc_88135A6C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x881359a0
	if (ctx.cr6.lt) goto loc_881359A0;
	// beq cr6,0x881358d8
	if (ctx.cr6.eq) goto loc_881358D8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x88135a50
	if (!ctx.cr6.lt) goto loc_88135A50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024438
	ctx.lr = 0x88135888;
	sub_88024438(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// lwz r25,8(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r11,21864(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21864);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881358bc
	if (ctx.cr6.eq) goto loc_881358BC;
	// lwz r11,4116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4116(r31)
	REX_STORE_U32(ctx.r31.u32 + 4116, ctx.r11.u32);
loc_881358BC:
	// lwz r11,4116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88135a50
	if (ctx.cr6.gt) goto loc_88135A50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x881358D0;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_881358D8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4168(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4168);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,4164(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4164);
	// bl 0x8801a860
	ctx.lr = 0x881358EC;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88135918;
	sub_88024438(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4132(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4132);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,4132(r31)
	REX_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// bge 0x88135948
	if (!ctx.cr0.lt) goto loc_88135948;
	// lwz r11,4164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4164);
	// lwz r10,4136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4136);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4164(r31)
	REX_STORE_U32(ctx.r31.u32 + 4164, ctx.r9.u32);
	// stw r10,4132(r31)
	REX_STORE_U32(ctx.r31.u32 + 4132, ctx.r10.u32);
loc_88135948:
	// lwz r11,4124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4124);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4124(r31)
	REX_STORE_U32(ctx.r31.u32 + 4124, ctx.r11.u32);
	// bge 0x88135994
	if (!ctx.cr0.lt) goto loc_88135994;
	// lwz r11,4120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4120);
	// lwz r10,4128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4128);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4120(r31)
	REX_STORE_U32(ctx.r31.u32 + 4120, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r10,4124(r31)
	REX_STORE_U32(ctx.r31.u32 + 4124, ctx.r10.u32);
	// bgt cr6,0x88135994
	if (ctx.cr6.gt) goto loc_88135994;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r11,-38
	ctx.r5.s64 = ctx.r11.s64 + -2490368;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x880244d0
	ctx.lr = 0x8813598C;
	sub_880244D0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4196(r31)
	REX_STORE_U32(ctx.r31.u32 + 4196, ctx.r10.u32);
loc_88135994:
	// lwz r26,4(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,8(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x88135a50
	goto loc_88135A50;
loc_881359A0:
	// lwz r11,4116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4116(r31)
	REX_STORE_U32(ctx.r31.u32 + 4116, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x881359bc
	if (ctx.cr6.lt) goto loc_881359BC;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,4116(r31)
	REX_STORE_U32(ctx.r31.u32 + 4116, ctx.r11.u32);
loc_881359BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// lwz r26,72(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r25,76(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bne cr6,0x88135a50
	if (!ctx.cr6.eq) goto loc_88135A50;
	// lwz r11,4184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4184);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4184(r31)
	REX_STORE_U32(ctx.r31.u32 + 4184, ctx.r11.u32);
	// bge 0x88135a50
	if (!ctx.cr0.lt) goto loc_88135A50;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r11,4168(r31)
	REX_STORE_U32(ctx.r31.u32 + 4168, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r10,4164(r31)
	REX_STORE_U32(ctx.r31.u32 + 4164, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88135A0C;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88135a34
	if (ctx.cr6.lt) goto loc_88135A34;
	// cmpwi cr6,r3,320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 320, ctx.xer);
	// blt cr6,0x88135a24
	if (ctx.cr6.lt) goto loc_88135A24;
	// li r3,320
	ctx.r3.s64 = 320;
	// b 0x88135a30
	goto loc_88135A30;
loc_88135A24:
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// bgt cr6,0x88135a30
	if (ctx.cr6.gt) goto loc_88135A30;
	// li r3,192
	ctx.r3.s64 = 192;
loc_88135A30:
	// stw r3,4168(r31)
	REX_STORE_U32(ctx.r31.u32 + 4168, ctx.r3.u32);
loc_88135A34:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4124(r31)
	REX_STORE_U32(ctx.r31.u32 + 4124, ctx.r11.u32);
	// stw r10,4128(r31)
	REX_STORE_U32(ctx.r31.u32 + 4128, ctx.r10.u32);
	// stw r11,4132(r31)
	REX_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// stw r9,4196(r31)
	REX_STORE_U32(ctx.r31.u32 + 4196, ctx.r9.u32);
loc_88135A50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881356c8
	ctx.lr = 0x88135A5C;
	sub_881356C8(ctx, base);
	// lwz r11,4108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4108);
	// lwz r10,4112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4108(r31)
	REX_STORE_U32(ctx.r31.u32 + 4108, ctx.r11.u32);
loc_88135A6C:
	// addi r11,r31,3212
	ctx.r11.s64 = ctx.r31.s64 + 3212;
	// lwz r30,4108(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4108);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// li r24,32
	ctx.r24.s64 = 32;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// ori r27,r10,64
	ctx.r27.u64 = ctx.r10.u64 | 64;
loc_88135A8C:
	// lwz r10,4116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,4120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4120);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// subfic r9,r10,128
	ctx.xer.ca = ctx.r10.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8801a860
	ctx.lr = 0x88135AB0;
	sub_8801A860(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// subf r5,r28,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r28.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r3,4120(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4120);
	// subfic r3,r3,10369
	ctx.xer.ca = ctx.r3.u32 <= 10369;
	ctx.r3.u64 = static_cast<uint64_t>(10369) - ctx.r3.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88135AE4;
	sub_8801A9C8(ctx, base);
	// lwz r11,4116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88135AFC;
	sub_8813FF90(ctx, base);
	// lwz r10,4120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4120);
	// li r6,218
	ctx.r6.s64 = 218;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r3,r10,10369
	ctx.xer.ca = ctx.r10.u32 <= 10369;
	ctx.r3.u64 = static_cast<uint64_t>(10369) - ctx.r10.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a9c8
	ctx.lr = 0x88135B14;
	sub_8801A9C8(ctx, base);
	// lwz r9,4116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88135B30;
	sub_8813FF90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88135B3C;
	sub_8813FF48(ctx, base);
	// lwz r8,4196(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4196);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bge cr6,0x88135bac
	if (!ctx.cr6.lt) goto loc_88135BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bge 0x88135bac
	if (!ctx.cr0.lt) goto loc_88135BAC;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r9,-4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r8,4116(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4116);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88135B78:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88135b98
	if (ctx.cr6.eq) goto loc_88135B98;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// blt cr6,0x88135b78
	if (ctx.cr6.lt) goto loc_88135B78;
	// b 0x88135bac
	goto loc_88135BAC;
loc_88135B98:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_88135BAC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x88135a8c
	if (!ctx.cr0.eq) goto loc_88135A8C;
	// lwz r3,4192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4192);
	// bl 0x88024030
	ctx.lr = 0x88135BC0;
	sub_88024030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r28,200
	ctx.r28.s64 = 200;
loc_88135BCC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88135c38
	if (ctx.cr6.eq) goto loc_88135C38;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4192);
	// bl 0x88024438
	ctx.lr = 0x88135BE4;
	sub_88024438(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r11,10337
	ctx.r3.s64 = ctx.r11.s64 + 10337;
	// stw r4,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88135C04;
	sub_8801A9C8(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88135C20;
	sub_8813FF90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88135C2C;
	sub_8813FF48(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_88135C38:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x88135bcc
	if (!ctx.cr0.eq) goto loc_88135BCC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139590) {
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
	ctx.lr = 0x881395B0;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x88021508
	ctx.lr = 0x881395C0;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r7,-30700
	ctx.r7.s64 = -2011955200;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r5,r7,-27568
	ctx.r5.s64 = ctx.r7.s64 + -27568;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x880214b8
	ctx.lr = 0x88139600;
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

DEFINE_REX_FUNC(sub_88139DC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18708
	ctx.r9.s64 = ctx.r11.s64 + 18708;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x88022050
	sub_88022050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139DD8) {
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
	// addi r30,r11,18708
	ctx.r30.s64 = ctx.r11.s64 + 18708;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x88022050
	ctx.lr = 0x88139E04;
	sub_88022050(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88022050
	ctx.lr = 0x88139E14;
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

DEFINE_REX_FUNC(sub_8813A598) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x8813A5A0;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813A5B4;
	sub_88023F40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813A5C8;
	sub_88021BE0(ctx, base);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// lwz r31,72(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r30,r11,-50
	ctx.r30.s64 = ctx.r11.s64 + -3276800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x88024030
	ctx.lr = 0x8813A5E8;
	sub_88024030(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8813a784
	if (ctx.cr6.lt) goto loc_8813A784;
	// bne cr6,0x8813a8e8
	if (!ctx.cr6.eq) goto loc_8813A8E8;
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// bge 0x8813a630
	if (!ctx.cr0.lt) goto loc_8813A630;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x8813A61C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8813a62c
	if (ctx.cr6.eq) goto loc_8813A62C;
	// bl 0x880b1c90
	ctx.lr = 0x8813A628;
	sub_880B1C90(ctx, base);
	// b 0x8813a630
	goto loc_8813A630;
loc_8813A62C:
	// bl 0x880b1a90
	ctx.lr = 0x8813A630;
	sub_880B1A90(ctx, base);
loc_8813A630:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bge 0x8813a8e8
	if (!ctx.cr0.lt) goto loc_8813A8E8;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r7,12(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// addi r6,r27,4
	ctx.r6.s64 = ctx.r27.s64 + 4;
	// addi r11,r11,-11360
	ctx.r11.s64 = ctx.r11.s64 + -11360;
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r8,r11,960
	ctx.r8.s64 = ctx.r11.s64 + 960;
	// lwzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addis r5,r7,80
	ctx.r5.s64 = ctx.r7.s64 + 5242880;
	// lwzx r8,r4,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// bl 0x880a84f0
	ctx.lr = 0x8813A68C;
	sub_880A84F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x8813A698;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x8813A6A8;
	sub_880A85C0(ctx, base);
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
	// blt cr6,0x8813a6d4
	if (ctx.cr6.lt) goto loc_8813A6D4;
	// stw r21,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r21.u32);
loc_8813A6D4:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bgt 0x8813a8e8
	if (ctx.cr0.gt) goto loc_8813A8E8;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// stw r21,512(r26)
	REX_STORE_U32(ctx.r26.u32 + 512, ctx.r21.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,532(r26)
	REX_STORE_U32(ctx.r26.u32 + 532, ctx.r9.u32);
	// stw r11,-11952(r10)
	REX_STORE_U32(ctx.r10.u32 + -11952, ctx.r11.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x8813a738
	if (ctx.cr6.lt) goto loc_8813A738;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,76(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,72(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x8813A738;
	sub_880114D8(ctx, base);
loc_8813A738:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813a758
	if (!ctx.cr6.eq) goto loc_8813A758;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-11768
	ctx.r4.s64 = ctx.r11.s64 + -11768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813A758;
	sub_88021AD0(ctx, base);
loc_8813A758:
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r11,-25048
	ctx.r9.s64 = ctx.r11.s64 + -25048;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f0,19536(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19536);
	// stfd f0,224(r9)
	REX_STORE_U64(ctx.r9.u32 + 224, ctx.f0.u64);
	// bl 0x88021c70
	ctx.lr = 0x8813A778;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
loc_8813A784:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r6,r27,4
	ctx.r6.s64 = ctx.r27.s64 + 4;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8813a050
	ctx.lr = 0x8813A79C;
	sub_8813A050(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x880b1e10
	ctx.lr = 0x8813A7A4;
	sub_880B1E10(ctx, base);
	// li r20,2
	ctx.r20.s64 = 2;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r22,29
	ctx.r22.s64 = 1900544;
	// lis r23,85
	ctx.r23.s64 = 5570560;
	// lis r25,16
	ctx.r25.s64 = 1048576;
loc_8813A7B8:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// mullw r10,r24,r22
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// lwz r9,76(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// subf r31,r10,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r29,r23,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r23.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8813A7D0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8801a448
	ctx.lr = 0x8813A7D8;
	sub_8801A448(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r3,4
	ctx.r3.s64 = 4;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8801a448
	ctx.lr = 0x8813A7EC;
	sub_8801A448(ctx, base);
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
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
	ctx.lr = 0x8813A80C;
	sub_880A99A8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x8813A818;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x880a9a58
	ctx.lr = 0x8813A824;
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
	ctx.lr = 0x8813A838;
	sub_880A84F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x8813A844;
	sub_880A8620(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x8813A84C;
	sub_8801A448(ctx, base);
	// addi r5,r3,224
	ctx.r5.s64 = ctx.r3.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880a85c0
	ctx.lr = 0x8813A85C;
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
	ctx.lr = 0x8813A870;
	sub_880A84F0(ctx, base);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x8813A87C;
	sub_880A8620(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x8813A884;
	sub_8801A448(ctx, base);
	// addi r5,r3,224
	ctx.r5.s64 = ctx.r3.s64 + 224;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8813A894;
	sub_880A85C0(ctx, base);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 24, ctx.xer);
	// blt cr6,0x8813a7d0
	if (ctx.cr6.lt) goto loc_8813A7D0;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// neg r24,r24
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// bne 0x8813a7b8
	if (!ctx.cr0.eq) goto loc_8813A7B8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,68(r26)
	REX_STORE_U32(ctx.r26.u32 + 68, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// stw r21,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r21.u32);
	// stw r10,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8813A8D0;
	sub_8801A448(ctx, base);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// stw r21,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r21.u32);
	// stw r9,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_8813A8E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813DAD0) {
	REX_FUNC_PROLOGUE();
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DB08) {
	REX_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DB30) {
	REX_FUNC_PROLOGUE();
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DB38) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DBC0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DCB8) {
	REX_FUNC_PROLOGUE();
	// stw r4,716(r3)
	REX_STORE_U32(ctx.r3.u32 + 716, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD00) {
	REX_FUNC_PROLOGUE();
	// stw r4,752(r3)
	REX_STORE_U32(ctx.r3.u32 + 752, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD48) {
	REX_FUNC_PROLOGUE();
	// stw r4,788(r3)
	REX_STORE_U32(ctx.r3.u32 + 788, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DDA0) {
	REX_FUNC_PROLOGUE();
	// stw r4,832(r3)
	REX_STORE_U32(ctx.r3.u32 + 832, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DDF8) {
	REX_FUNC_PROLOGUE();
	// stw r4,876(r3)
	REX_STORE_U32(ctx.r3.u32 + 876, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DE50) {
	REX_FUNC_PROLOGUE();
	// stw r4,920(r3)
	REX_STORE_U32(ctx.r3.u32 + 920, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DEA8) {
	REX_FUNC_PROLOGUE();
	// stw r4,964(r3)
	REX_STORE_U32(ctx.r3.u32 + 964, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DF00) {
	REX_FUNC_PROLOGUE();
	// stw r4,1008(r3)
	REX_STORE_U32(ctx.r3.u32 + 1008, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DF68) {
	REX_FUNC_PROLOGUE();
	// stw r4,1056(r3)
	REX_STORE_U32(ctx.r3.u32 + 1056, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DFD0) {
	REX_FUNC_PROLOGUE();
	// stw r4,1112(r3)
	REX_STORE_U32(ctx.r3.u32 + 1112, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813E090) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8813E098;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8813e150
	if (!ctx.cr6.lt) goto loc_8813E150;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x8813e0dc
	if (ctx.cr6.lt) goto loc_8813E0DC;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813e0dc
	if (!ctx.cr6.eq) goto loc_8813E0DC;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_8813E0DC:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813e11c
	if (!ctx.cr6.eq) goto loc_8813E11C;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8813e11c
	if (ctx.cr6.lt) goto loc_8813E11C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r29,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x88141528
	ctx.lr = 0x8813E104;
	sub_88141528(ctx, base);
	// rlwinm r11,r29,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8813E110:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bne 0x8813e110
	if (!ctx.cr0.eq) goto loc_8813E110;
loc_8813E11C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8813e378
	if (ctx.cr6.eq) goto loc_8813E378;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// subf r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	// lwz r10,-9884(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -9884);
loc_8813E130:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// subf. r29,r10,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r9,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x8813e130
	if (!ctx.cr0.eq) goto loc_8813E130;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8813E150:
	// neg r11,r26
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// blt cr6,0x8813e170
	if (ctx.cr6.lt) goto loc_8813E170;
	// li r9,1024
	ctx.r9.s64 = 1024;
loc_8813E170:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8813e198
	if (ctx.cr6.eq) goto loc_8813E198;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8813E18C:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8813e18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813E18C;
loc_8813E198:
	// li r27,15
	ctx.r27.s64 = 15;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8813e1c4
	if (ctx.cr6.eq) goto loc_8813E1C4;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r4,r27
	ea = (ctx.r4.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v63,r0,r26
	ea = ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
loc_8813E1C4:
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8813e1d4
	if (!ctx.cr6.lt) goto loc_8813E1D4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8813E1D4:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// rlwinm r28,r10,0,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// blt cr6,0x8813e1f0
	if (ctx.cr6.lt) goto loc_8813E1F0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_8813E1F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8813e210
	if (ctx.cr6.eq) goto loc_8813E210;
	// addi r9,r31,127
	ctx.r9.s64 = ctx.r31.s64 + 127;
loc_8813E200:
	// dcbzl r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8813e200
	if (ctx.cr6.lt) goto loc_8813E200;
loc_8813E210:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8813e248
	if (ctx.cr6.eq) goto loc_8813E248;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8813E22C:
	// lvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vperm128 v62,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x8813e22c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813E22C;
loc_8813E248:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r30,28
	ctx.r10.u64 = ctx.r30.u32 & 0xF;
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8813e2fc
	if (!ctx.cr6.eq) goto loc_8813E2FC;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x8813e320
	if (ctx.cr6.lt) goto loc_8813E320;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_8813E288:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1024, ctx.xer);
	// ble cr6,0x8813e298
	if (!ctx.cr6.gt) goto loc_8813E298;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r30
loc_8813E298:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// ble cr6,0x8813e2a8
	if (!ctx.cr6.gt) goto loc_8813E2A8;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbzl r4,r31
	ea = (ctx.r4.u32 + ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_8813E2A8:
	// lvx128 v61,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	ctx.r29.s64 = ctx.r29.s64 + -128;
	// lvx128 v60,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r30,r7
	ea = (ctx.r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvx128 v61,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bdnz 0x8813e288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813E288;
	// b 0x8813e320
	goto loc_8813E320;
loc_8813E2FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813f430
	ctx.lr = 0x8813E30C;
	sub_8813F430(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r29,r28,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8813E320:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x8813e354
	if (ctx.cr6.lt) goto loc_8813E354;
	// rlwinm r10,r29,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8813E334:
	// lvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// lvx128 v62,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vperm128 v53,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v53,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x8813e334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813E334;
loc_8813E354:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8813e378
	if (ctx.cr6.eq) goto loc_8813E378;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lvx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lvsl v0,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v50,v52,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvrx128 v50,r31,r29
	ea = ctx.r31.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
loc_8813E378:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88141F10) {
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
	// bl 0x88142000
	ctx.lr = 0x88141F28;
	sub_88142000(ctx, base);
	// bl 0x881437a8
	ctx.lr = 0x88141F2C;
	sub_881437A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88141fc8
	if (ctx.cr0.eq) goto loc_88141FC8;
	// bl 0x8814a210
	ctx.lr = 0x88141F38;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,-9680(r11)
	REX_STORE_U32(ctx.r11.u32 + -9680, ctx.r3.u32);
	// beq cr6,0x88141fc8
	if (ctx.cr6.eq) goto loc_88141FC8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88143618
	ctx.lr = 0x88141F58;
	sub_88143618(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x88141fc8
	if (ctx.cr0.eq) goto loc_88141FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8814a1f0
	ctx.lr = 0x88141F6C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88141fc8
	if (ctx.cr0.eq) goto loc_88141FC8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21128
	ctx.r11.s64 = ctx.r11.s64 + 21128;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x88149ee8
	ctx.lr = 0x88141F94;
	sub_88149EE8(ctx, base);
	// lis r10,-30595
	ctx.r10.s64 = -2005073920;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,21560
	ctx.r10.s64 = ctx.r10.s64 + 21560;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x88149ef8
	ctx.lr = 0x88141FC0;
	sub_88149EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x88141fd0
	goto loc_88141FD0;
loc_88141FC8:
	// bl 0x88141c80
	ctx.lr = 0x88141FCC;
	sub_88141C80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_88141FD0:
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

DEFINE_REX_FUNC(sub_881431A0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x881431e8
	if (ctx.cr6.eq) goto loc_881431E8;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x881431e8
	if (ctx.cr6.eq) goto loc_881431E8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x881431d0
	if (!ctx.cr6.eq) goto loc_881431D0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x88142fa0
	sub_88142FA0(ctx, base);
	return;
loc_881431D0:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x881431e4
	if (ctx.cr6.eq) goto loc_881431E4;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x881431e4
	if (ctx.cr6.eq) goto loc_881431E4;
	// b 0x88143070
	sub_88143070(ctx, base);
	return;
loc_881431E4:
	// b 0x881429d8
	sub_881429D8(ctx, base);
	return;
loc_881431E8:
	// b 0x881428e8
	sub_881428E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143290) {
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
	// bl 0x88143248
	ctx.lr = 0x881432A0;
	sub_88143248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881432ac
	if (ctx.cr0.eq) goto loc_881432AC;
	// bl 0x88149f68
	ctx.lr = 0x881432AC;
	sub_88149F68(ctx, base);
loc_881432AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143318) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30595
	ctx.r11.s64 = -2005073920;
	// stw r3,21592(r11)
	REX_STORE_U32(ctx.r11.u32 + 21592, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88143368;
	__savegprlr_29(ctx, base);
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x88143384
	if (ctx.cr6.eq) goto loc_88143384;
	// bl 0x88143ff8
	ctx.lr = 0x88143384;
	sub_88143FF8(ctx, base);
loc_88143384:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x88141b20
	ctx.lr = 0x8814339C;
	sub_88141B20(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x88141b20
	ctx.lr = 0x881433BC;
	sub_88141B20(ctx, base);
	// lwz r11,2824(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x88149fd8
	ctx.lr = 0x881433D4;
	sub_88149FD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88149ff0
	ctx.lr = 0x881433DC;
	sub_88149FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881433f4
	if (!ctx.cr0.eq) goto loc_881433F4;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x881433f4
	if (ctx.cr6.eq) goto loc_881433F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88143ff8
	ctx.lr = 0x881433F4;
	sub_88143FF8(ctx, base);
loc_881433F4:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143940) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x8814a230
	ctx.lr = 0x88143958;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143AA8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x88141ea0
	sub_88141EA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143B0C) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143B88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-8592
	ctx.r11.s64 = ctx.r11.s64 + -8592;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143E70) {
	REX_FUNC_PROLOGUE();
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r8,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x88143eac
	if (ctx.cr0.eq) goto loc_88143EAC;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x88143ea4
	if (ctx.cr6.eq) goto loc_88143EA4;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x88143ed8
	goto loc_88143ED8;
loc_88143EA4:
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x88143edc
	goto loc_88143EDC;
loc_88143EAC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88143ed0
	if (!ctx.cr6.eq) goto loc_88143ED0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88143ed0
	if (!ctx.cr6.eq) goto loc_88143ED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_88143ED0:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88143ED8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_88143EDC:
	// rlwinm r8,r9,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// bne 0x88143f3c
	if (!ctx.cr0.eq) goto loc_88143F3C;
loc_88143F00:
	// lwz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r10,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x88143f00
	if (ctx.cr0.eq) goto loc_88143F00;
loc_88143F3C:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88146C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88146C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88146cb4
	if (ctx.cr6.eq) goto loc_88146CB4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88146C3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x88146cfc
	if (ctx.cr6.gt) goto loc_88146CFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x88146ca4
	if (!ctx.cr6.eq) goto loc_88146CA4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// ble cr6,0x88146ca8
	if (!ctx.cr6.gt) goto loc_88146CA8;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x88146ca8
	goto loc_88146CA8;
loc_88146CA4:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_88146CA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88146c3c
	if (!ctx.cr6.eq) goto loc_88146C3C;
loc_88146CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88146a38
	ctx.lr = 0x88146CBC;
	sub_88146A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x88146cf4
	if (ctx.cr0.eq) goto loc_88146CF4;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// blt cr6,0x88146cf4
	if (ctx.cr6.lt) goto loc_88146CF4;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_88146CF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88146CFC:
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88146cb4
	if (!ctx.cr6.eq) goto loc_88146CB4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88146cf4
	if (!ctx.cr6.gt) goto loc_88146CF4;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x88146cf4
	goto loc_88146CF4;
}

DEFINE_REX_FUNC(sub_88147E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88147E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	ctx.r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_88147E34:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x88147eb8
	if (ctx.cr6.eq) goto loc_88147EB8;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88147ec8
	if (ctx.cr6.gt) goto loc_88147EC8;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88147ec8
	if (ctx.cr6.gt) goto loc_88147EC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88146d30
	ctx.lr = 0x88147E78;
	sub_88146D30(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x88147ec8
	if (ctx.cr0.eq) goto loc_88147EC8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x88147018
	ctx.lr = 0x88147E9C;
	sub_88147018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88147420
	ctx.lr = 0x88147EB0;
	sub_88147420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x88148034
	goto loc_88148034;
loc_88147EB8:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x88147ec8
	if (!ctx.cr6.eq) goto loc_88147EC8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_88147EC8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x88147e34
	if (ctx.cr6.lt) goto loc_88147E34;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x88148030
	if (ctx.cr6.eq) goto loc_88148030;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88148030
	if (ctx.cr0.eq) goto loc_88148030;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x88147f14
	if (ctx.cr6.gt) goto loc_88147F14;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88147F14:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8814a290
	ctx.lr = 0x88147F30;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x88147f84
	if (!ctx.cr0.lt) goto loc_88147F84;
loc_88147F38:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88147f7c
	if (ctx.cr6.eq) goto loc_88147F7C;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x88147f58
	if (!ctx.cr6.lt) goto loc_88147F58;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_88147F58:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8814a290
	ctx.lr = 0x88147F74;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x88147f38
	if (ctx.cr0.lt) goto loc_88147F38;
loc_88147F7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88148030
	if (ctx.cr6.lt) goto loc_88148030;
loc_88147F84:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x88147fa8
	if (ctx.cr6.gt) goto loc_88147FA8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_88147FA8:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8814a290
	ctx.lr = 0x88147FC4;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88148018
	if (ctx.cr0.lt) goto loc_88148018;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x88147c98
	ctx.lr = 0x88147FF4;
	sub_88147C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x88148004
	if (!ctx.cr0.eq) goto loc_88148004;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_88148004:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88148018
	if (ctx.cr6.lt) goto loc_88148018;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x88148034
	goto loc_88148034;
loc_88148018:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8814a2c0
	ctx.lr = 0x88148030;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_88148030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88148034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A198) {
	REX_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8814a1b0
	sub_8814A1B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A1B8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r3,r10,18744
	ctx.r3.s64 = ctx.r10.s64 + 18744;
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// stw r11,18744(r10)
	REX_STORE_U32(ctx.r10.u32 + 18744, ctx.r11.u32);
	// b 0x8813f608
	sub_8813F608(ctx, base);
	return;
}

