#include "mushi_funcs.6.h"

DEFINE_REX_FUNC(sub_880102D0) {
	REX_FUNC_PROLOGUE();
	// stw r4,5868(r3)
	REX_STORE_U32(ctx.r3.u32 + 5868, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880105E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f50
	ctx.lr = 0x880105F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r26,r11,-6880
	ctx.r26.s64 = ctx.r11.s64 + -6880;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r10,-6848
	ctx.r10.s64 = ctx.r10.s64 + -6848;
	// li r14,2
	ctx.r14.s64 = 2;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r31,r10,40
	ctx.r31.s64 = ctx.r10.s64 + 40;
	// stw r25,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// lis r18,-30683
	ctx.r18.s64 = -2010841088;
	// lis r23,8
	ctx.r23.s64 = 524288;
	// lis r17,32
	ctx.r17.s64 = 2097152;
	// lis r20,5
	ctx.r20.s64 = 327680;
	// lis r19,64
	ctx.r19.s64 = 4194304;
	// li r15,1
	ctx.r15.s64 = 1;
	// lis r24,4
	ctx.r24.s64 = 262144;
	// lis r22,236
	ctx.r22.s64 = 15466496;
	// lis r21,316
	ctx.r21.s64 = 20709376;
	// lis r16,1
	ctx.r16.s64 = 65536;
loc_88010644:
	// lwz r11,-40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88010bc0
	if (ctx.cr6.eq) goto loc_88010BC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r30,r31,-12
	ctx.r30.s64 = ctx.r31.s64 + -12;
	// bl 0x880690e8
	ctx.lr = 0x88010660;
	sub_880690E8(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,-12(r31)
	REX_STORE_U32(ctx.r31.u32 + -12, ctx.r10.u32);
	// bl 0x88012ef8
	ctx.lr = 0x88010674;
	sub_88012EF8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -32);
	// addi r28,r31,-28
	ctx.r28.s64 = ctx.r31.s64 + -28;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// ble cr6,0x880106e8
	if (!ctx.cr6.gt) goto loc_880106E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,150
	ctx.r6.s64 = 150;
	// lwz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// add r10,r4,r23
	ctx.r10.u64 = ctx.r4.u64 + ctx.r23.u64;
	// lwz r11,-36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -36);
	// subf r9,r17,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r17.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r11,4127
	ctx.r3.s64 = ctx.r11.s64 + 4127;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x880106BC;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880106D4;
	sub_8813FF90(ctx, base);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,28832
	ctx.r4.u64 = ctx.r4.u64 | 28832;
	// bl 0x8813ff48
	ctx.lr = 0x880106E4;
	sub_8813FF48(ctx, base);
	// b 0x8801078c
	goto loc_8801078C;
loc_880106E8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8801078c
	if (!ctx.cr6.eq) goto loc_8801078C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,-8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// divw r8,r11,r20
	ctx.r8.u64 = uint32_t((ctx.r20.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r20.s32 == -1)) ? ctx.r11.s32 / ctx.r20.s32 : 0);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subfic r11,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r8.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bge cr6,0x88010728
	if (!ctx.cr6.lt) goto loc_88010728;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x88010734
	goto loc_88010734;
loc_88010728:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x88010734
	if (ctx.cr6.lt) goto loc_88010734;
	// li r11,15
	ctx.r11.s64 = 15;
loc_88010734:
	// addi r29,r11,2663
	ctx.r29.s64 = ctx.r11.s64 + 2663;
	// li r6,149
	ctx.r6.s64 = 149;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88010744;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8801075C;
	sub_8813FF90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88010768;
	sub_8813FF48(ctx, base);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// li r6,161
	ctx.r6.s64 = 161;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8801a9c8
	ctx.lr = 0x88010788;
	sub_8801A9C8(ctx, base);
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8801078C:
	// lwz r11,-32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88010b68
	if (ctx.cr6.gt) goto loc_88010B68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880107f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880107F8;
	// bdzf 4*cr6+eq,0x88010a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88010A28;
	// bdzf 4*cr6+eq,0x88010958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88010958;
	// bdzf 4*cr6+eq,0x88010a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88010A84;
	// bne cr6,0x88010b10
	if (!ctx.cr6.eq) goto loc_88010B10;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8806b5f0
	ctx.lr = 0x880107C4;
	sub_8806B5F0(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r19,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r19.u64;
	// add r7,r10,r23
	ctx.r7.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r8.u32);
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bge 0x88010b68
	if (!ctx.cr0.lt) goto loc_88010B68;
	// stw r15,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r15.u32);
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x88010b68
	goto loc_88010B68;
loc_880107F8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,-24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8801a860
	ctx.lr = 0x8801080C;
	sub_8801A860(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,-8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// bl 0x8806bcd0
	ctx.lr = 0x88010848;
	sub_8806BCD0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88010864
	if (ctx.cr6.eq) goto loc_88010864;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_88010864:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8801087c
	if (ctx.cr6.eq) goto loc_8801087C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8801087C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x880108a4
	if (!ctx.cr6.lt) goto loc_880108A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r9,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// stw r24,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_880108A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x880108cc
	if (!ctx.cr6.gt) goto loc_880108CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r9,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// stw r22,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
loc_880108CC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x880108fc
	if (ctx.cr6.lt) goto loc_880108FC;
	// lwz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// subfic r6,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// stw r7,-24(r31)
	REX_STORE_U32(ctx.r31.u32 + -24, ctx.r7.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_880108FC:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r10,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// bgt 0x88010b68
	if (ctx.cr0.gt) goto loc_88010B68;
	// stw r25,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r25.u32);
	// lwz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x88068e78
	ctx.lr = 0x88010920;
	sub_88068E78(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x88010940
	if (ctx.cr6.lt) goto loc_88010940;
	// lwz r11,-11976(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + -11976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88010940
	if (ctx.cr6.eq) goto loc_88010940;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// b 0x88010b68
	goto loc_88010B68;
loc_88010940:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x880b24b0
	ctx.lr = 0x88010954;
	sub_880B24B0(ctx, base);
	// b 0x88010b68
	goto loc_88010B68;
loc_88010958:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88010974
	if (!ctx.cr6.lt) goto loc_88010974;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88010974:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x88010990
	if (!ctx.cr6.gt) goto loc_88010990;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88010990:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x880109c0
	if (ctx.cr6.lt) goto loc_880109C0;
	// lwz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subfic r7,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// stw r8,-24(r31)
	REX_STORE_U32(ctx.r31.u32 + -24, ctx.r8.u32);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_880109C0:
	// lwz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-24(r31)
	REX_STORE_U32(ctx.r31.u32 + -24, ctx.r11.u32);
	// bgt 0x880109f0
	if (ctx.cr0.gt) goto loc_880109F0;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r25,-24(r31)
	REX_STORE_U32(ctx.r31.u32 + -24, ctx.r25.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// bl 0x88069180
	ctx.lr = 0x880109EC;
	sub_88069180(ctx, base);
	// stw r25,-40(r31)
	REX_STORE_U32(ctx.r31.u32 + -40, ctx.r25.u32);
loc_880109F0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,-24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8801a860
	ctx.lr = 0x88010A04;
	sub_8801A860(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,-8(r31)
	REX_STORE_U32(ctx.r31.u32 + -8, ctx.r8.u32);
	// b 0x88010b68
	goto loc_88010B68;
loc_88010A28:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88010b68
	if (!ctx.cr0.lt) goto loc_88010B68;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,-36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// blt cr6,0x88010b68
	if (ctx.cr6.lt) goto loc_88010B68;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r15,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r15.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88010a78
	if (!ctx.cr6.eq) goto loc_88010A78;
	// stw r25,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r25,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
loc_88010A78:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// b 0x88010b68
	goto loc_88010B68;
loc_88010A84:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88010b68
	if (!ctx.cr0.lt) goto loc_88010B68;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,-36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r10,r16
	ctx.r7.u64 = ctx.r10.u64 + ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r11,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// blt cr6,0x88010b68
	if (ctx.cr6.lt) goto loc_88010B68;
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// li r10,7
	ctx.r10.s64 = 7;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r10.u32);
	// stw r11,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// bgt 0x88010b68
	if (ctx.cr0.gt) goto loc_88010B68;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x88010afc
	if (!ctx.cr6.eq) goto loc_88010AFC;
	// stw r25,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r25,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
loc_88010AFC:
	// li r11,23
	ctx.r11.s64 = 23;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// stw r10,-32(r31)
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r10.u32);
	// b 0x88010b68
	goto loc_88010B68;
loc_88010B10:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x88010b68
	if (!ctx.cr0.lt) goto loc_88010B68;
	// lwz r11,-36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-36(r31)
	REX_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// blt cr6,0x88010b68
	if (ctx.cr6.lt) goto loc_88010B68;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// beq cr6,0x88010b60
	if (ctx.cr6.eq) goto loc_88010B60;
	// li r4,64
	ctx.r4.s64 = 64;
loc_88010B60:
	// bl 0x88069180
	ctx.lr = 0x88010B64;
	sub_88069180(ctx, base);
	// stw r25,-40(r31)
	REX_STORE_U32(ctx.r31.u32 + -40, ctx.r25.u32);
loc_88010B68:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r9,-4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r7,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r7,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stwx r6,r4,r8
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r6.u32);
loc_88010BC0:
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r31,r31,156
	ctx.r31.s64 = ctx.r31.s64 + 156;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// bne 0x88010644
	if (!ctx.cr0.eq) goto loc_88010644;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88140fa0
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88017998) {
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
	ctx.lr = 0x880179B0;
	sub_88014D38(ctx, base);
	// li r11,5082
	ctx.r11.s64 = 5082;
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

DEFINE_REX_FUNC(sub_880180F0) {
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
	// lbz r8,42(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stb r6,42(r3)
	REX_STORE_U8(ctx.r3.u32 + 42, ctx.r6.u8);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// bge cr6,0x88018168
	if (!ctx.cr6.lt) goto loc_88018168;
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
	// ble cr6,0x88018168
	if (!ctx.cr6.gt) goto loc_88018168;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
loc_88018168:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11904);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880181b4
	if (!ctx.cr6.eq) goto loc_880181B4;
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880181b4
	if (ctx.cr6.lt) goto loc_880181B4;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x880244d0
	ctx.lr = 0x88018190;
	sub_880244D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,320
	ctx.r7.s64 = 320;
	// li r6,-35
	ctx.r6.s64 = -35;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88013ce0
	ctx.lr = 0x880181B4;
	sub_88013CE0(ctx, base);
loc_880181B4:
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
	ctx.lr = 0x880181D4;
	sub_8801A9C8(ctx, base);
	// lhz r4,14(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880181e8
	if (ctx.cr6.eq) goto loc_880181E8;
	// bl 0x8813ff08
	ctx.lr = 0x880181E8;
	sub_8813FF08(ctx, base);
loc_880181E8:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6444(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -6444);
	// bl 0x8813ff48
	ctx.lr = 0x880181F8;
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
	ctx.lr = 0x8801820C;
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

DEFINE_REX_FUNC(sub_8801A8A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// rlwinm r4,r9,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8801a8f8
	if (!ctx.cr6.eq) goto loc_8801A8F8;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8801a91c
	if (ctx.cr6.eq) goto loc_8801A91C;
	// subf r11,r8,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x8801a91c
	goto loc_8801A91C;
loc_8801A8F8:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bne cr6,0x8801a90c
	if (!ctx.cr6.eq) goto loc_8801A90C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x8801a91c
	goto loc_8801A91C;
loc_8801A90C:
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_8801A91C:
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lis r11,-30607
	ctx.r11.s64 = -2005860352;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f12,16(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r4,272
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 272, ctx.xer);
	// fadd f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 + ctx.f12.f64;
	// stfd f12,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.f12.u64);
	// lfd f12,1216(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 1216);
	// lfd f11,0(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fadd f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// stfd f13,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.f13.u64);
	// fadd f13,f0,f11
	ctx.f13.f64 = ctx.f0.f64 + ctx.f11.f64;
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// bgt cr6,0x8801a9b4
	if (ctx.cr6.gt) goto loc_8801A9B4;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// blt cr6,0x8801a9b4
	if (ctx.cr6.lt) goto loc_8801A9B4;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,352
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 352, ctx.xer);
	// bgt cr6,0x8801a9b4
	if (ctx.cr6.gt) goto loc_8801A9B4;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8801A9B4:
	// lfd f13,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.f0.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8801E410) {
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
	// lhz r11,10728(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8801e74c
	if (ctx.cr6.gt) goto loc_8801E74C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8801e498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E498;
	// bdzf 4*cr6+eq,0x8801e4f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E4F8;
	// bdzf 4*cr6+eq,0x8801e54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E54C;
	// bdzf 4*cr6+eq,0x8801e5b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E5B4;
	// bdzf 4*cr6+eq,0x8801e690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8801E690;
	// bne cr6,0x8801e6ec
	if (!ctx.cr6.eq) goto loc_8801E6EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,96
	ctx.r9.s64 = 96;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// sth r10,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// sth r11,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r10,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// sth r11,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// sth r11,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// sth r9,22(r31)
	REX_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
	// sth r11,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// sth r11,26(r31)
	REX_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// sth r8,10728(r31)
	REX_STORE_U16(ctx.r31.u32 + 10728, ctx.r8.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E498:
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e4b0
	if (ctx.cr6.eq) goto loc_8801E4B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E4B0:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 28);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sth r8,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r8.u16);
	// sth r7,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// blt cr6,0x8801e74c
	if (ctx.cr6.lt) goto loc_8801E74C;
	// lhz r10,10726(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 10726);
	// li r11,255
	ctx.r11.s64 = 255;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// sth r11,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x8801e74c
	if (ctx.cr6.lt) goto loc_8801E74C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8801e748
	goto loc_8801E748;
loc_8801E4F8:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8801e510
	if (ctx.cr6.eq) goto loc_8801E510;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E510:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x8801e74c
	if (ctx.cr6.lt) goto loc_8801E74C;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r10,10728(r31)
	REX_STORE_U16(ctx.r31.u32 + 10728, ctx.r10.u16);
	// sth r9,10730(r31)
	REX_STORE_U16(ctx.r31.u32 + 10730, ctx.r9.u16);
	// sth r8,10734(r31)
	REX_STORE_U16(ctx.r31.u32 + 10734, ctx.r8.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E54C:
	// lhz r11,10730(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10730);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8801e574
	if (ctx.cr6.eq) goto loc_8801E574;
loc_8801E568:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E574:
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// blt cr6,0x8801e74c
	if (ctx.cr6.lt) goto loc_8801E74C;
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lhz r11,10730(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10730);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,10730(r31)
	REX_STORE_U16(ctx.r31.u32 + 10730, ctx.r7.u16);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x8801e74c
	if (!ctx.cr6.gt) goto loc_8801E74C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8801e748
	goto loc_8801E748;
loc_8801E5B4:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8801e5d4
	if (ctx.cr6.gt) goto loc_8801E5D4;
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_8801E5D4:
	// lhz r10,10734(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 10734);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8801e5f0
	if (ctx.cr6.eq) goto loc_8801E5F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,10734(r31)
	REX_STORE_U16(ctx.r31.u32 + 10734, ctx.r11.u16);
	// b 0x8801e74c
	goto loc_8801E74C;
loc_8801E5F0:
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e614
	if (ctx.cr6.gt) goto loc_8801E614;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_8801E614:
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e638
	if (ctx.cr6.gt) goto loc_8801E638;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r11,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_8801E638:
	// lhz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e65c
	if (ctx.cr6.gt) goto loc_8801E65C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_8801E65C:
	// lhz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e680
	if (ctx.cr6.gt) goto loc_8801E680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r11,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
loc_8801E680:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8801e690
	if (!ctx.cr6.eq) goto loc_8801E690;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,10728(r31)
	REX_STORE_U16(ctx.r31.u32 + 10728, ctx.r11.u16);
loc_8801E690:
	// lhz r11,10730(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10730);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8801e568
	if (!ctx.cr6.eq) goto loc_8801E568;
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// blt cr6,0x8801e74c
	if (ctx.cr6.lt) goto loc_8801E74C;
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lhz r11,10730(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10730);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,10730(r31)
	REX_STORE_U16(ctx.r31.u32 + 10730, ctx.r7.u16);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// ble cr6,0x8801e74c
	if (!ctx.cr6.gt) goto loc_8801E74C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8801e748
	goto loc_8801E748;
loc_8801E6EC:
	// lhz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e714
	if (ctx.cr6.gt) goto loc_8801E714;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_8801E714:
	// lhz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r7.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt cr6,0x8801e738
	if (ctx.cr6.gt) goto loc_8801E738;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r11,24(r31)
	REX_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
loc_8801E738:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8801e74c
	if (!ctx.cr6.eq) goto loc_8801E74C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,10736(r31)
	REX_STORE_U16(ctx.r31.u32 + 10736, ctx.r10.u16);
loc_8801E748:
	// sth r11,10728(r31)
	REX_STORE_U16(ctx.r31.u32 + 10728, ctx.r11.u16);
loc_8801E74C:
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,176
	ctx.r5.s64 = 11534336;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// li r3,1134
	ctx.r3.s64 = 1134;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E760;
	sub_8801A9C8(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E778;
	sub_8813FF90(ctx, base);
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,184
	ctx.r5.s64 = 12058624;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r3,1135
	ctx.r3.s64 = 1135;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E78C;
	sub_8801A9C8(ctx, base);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E7A4;
	sub_8813FF90(ctx, base);
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,82
	ctx.r5.s64 = 5373952;
	// lis r4,72
	ctx.r4.s64 = 4718592;
	// li r3,1137
	ctx.r3.s64 = 1137;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E7B8;
	sub_8801A9C8(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E7D0;
	sub_8813FF90(ctx, base);
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,62
	ctx.r5.s64 = 4063232;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// li r3,1138
	ctx.r3.s64 = 1138;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E7E4;
	sub_8801A9C8(ctx, base);
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E7FC;
	sub_8813FF90(ctx, base);
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,177
	ctx.r5.s64 = 11599872;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// li r3,1139
	ctx.r3.s64 = 1139;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E810;
	sub_8801A9C8(ctx, base);
	// lhz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E828;
	sub_8813FF90(ctx, base);
	// li r6,245
	ctx.r6.s64 = 245;
	// lis r5,157
	ctx.r5.s64 = 10289152;
	// lis r4,88
	ctx.r4.s64 = 5767168;
	// li r3,1140
	ctx.r3.s64 = 1140;
	// bl 0x8801a9c8
	ctx.lr = 0x8801E83C;
	sub_8801A9C8(ctx, base);
	// lhz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8801E854;
	sub_8813FF90(ctx, base);
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

DEFINE_REX_FUNC(sub_88021E88) {
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
	// lhz r11,3760(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 3760);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x88021ebc
	if (ctx.cr6.lt) goto loc_88021EBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88022034
	goto loc_88022034;
loc_88021EBC:
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r11,3764
	ctx.r31.s64 = ctx.r11.s64 + 3764;
	// sth r9,3860(r11)
	REX_STORE_U16(ctx.r11.u32 + 3860, ctx.r9.u16);
	// lhz r11,3758(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,3758(r30)
	REX_STORE_U16(ctx.r30.u32 + 3758, ctx.r7.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88021ef4
	if (!ctx.cr6.eq) goto loc_88021EF4;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,3758(r30)
	REX_STORE_U16(ctx.r30.u32 + 3758, ctx.r11.u16);
loc_88021EF4:
	// lhz r11,3760(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88021f34
	if (!ctx.cr6.eq) goto loc_88021F34;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r10,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r10.u16);
	// lhz r9,3758(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// sth r9,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r9.u16);
	// beq cr6,0x88021f2c
	if (ctx.cr6.eq) goto loc_88021F2C;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8813fa60
	ctx.lr = 0x88021F2C;
	sub_8813FA60(ctx, base);
loc_88021F2C:
	// stw r31,3744(r30)
	REX_STORE_U32(ctx.r30.u32 + 3744, ctx.r31.u32);
	// b 0x88022020
	goto loc_88022020;
loc_88021F34:
	// lwz r11,3748(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
	// lhz r9,94(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 94);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x88021fe4
	if (!ctx.cr6.gt) goto loc_88021FE4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x88021f6c
	if (!ctx.cr6.gt) goto loc_88021F6C;
loc_88021F50:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88021fa8
	if (ctx.cr6.eq) goto loc_88021FA8;
	// lhz r8,94(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 94);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x88021f50
	if (ctx.cr6.gt) goto loc_88021F50;
loc_88021F6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r10,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r10.u16);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lhz r7,3758(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// sth r7,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r7.u16);
	// beq cr6,0x88022024
	if (ctx.cr6.eq) goto loc_88022024;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8813fa60
	ctx.lr = 0x88021FA4;
	sub_8813FA60(ctx, base);
	// b 0x88022024
	goto loc_88022024;
loc_88021FA8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// sth r10,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r10.u16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r8,3758(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// sth r8,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r8.u16);
	// beq cr6,0x88021fdc
	if (ctx.cr6.eq) goto loc_88021FDC;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8813fa60
	ctx.lr = 0x88021FDC;
	sub_8813FA60(ctx, base);
loc_88021FDC:
	// stw r31,3744(r30)
	REX_STORE_U32(ctx.r30.u32 + 3744, ctx.r31.u32);
	// b 0x88022024
	goto loc_88022024;
loc_88021FE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// sth r10,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r10.u16);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lhz r8,3758(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// sth r8,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r8.u16);
	// beq cr6,0x88022018
	if (ctx.cr6.eq) goto loc_88022018;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8813fa60
	ctx.lr = 0x88022018;
	sub_8813FA60(ctx, base);
loc_88022018:
	// lwz r11,3748(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_88022020:
	// stw r31,3748(r30)
	REX_STORE_U32(ctx.r30.u32 + 3748, ctx.r31.u32);
loc_88022024:
	// lhz r11,3760(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 3760);
	// lhz r3,3758(r30)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + 3758);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,3760(r30)
	REX_STORE_U16(ctx.r30.u32 + 3760, ctx.r11.u16);
loc_88022034:
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

DEFINE_REX_FUNC(sub_88023E98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-30690
	ctx.r10.s64 = -2011299840;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r10,-24488
	ctx.r7.s64 = ctx.r10.s64 + -24488;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88023EB8:
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88023f1c
	if (!ctx.cr6.eq) goto loc_88023F1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88023f28
	if (!ctx.cr6.eq) goto loc_88023F28;
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// stw r10,2624(r3)
	REX_STORE_U32(ctx.r3.u32 + 2624, ctx.r10.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r6,2628(r3)
	REX_STORE_U32(ctx.r3.u32 + 2628, ctx.r6.u32);
	// addi r11,r11,-22984
	ctx.r11.s64 = ctx.r11.s64 + -22984;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,2620(r3)
	REX_STORE_U32(ctx.r3.u32 + 2620, ctx.r10.u32);
	// ble cr6,0x88023f14
	if (!ctx.cr6.gt) goto loc_88023F14;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88023f14
	if (ctx.cr6.eq) goto loc_88023F14;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88023F0C:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88023f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88023F0C;
loc_88023F14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_88023F1C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_88023F28:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,1500
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1500, ctx.xer);
	// blt cr6,0x88023eb8
	if (ctx.cr6.lt) goto loc_88023EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88024178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88024180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-30683
	ctx.r30.s64 = -2010841088;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-11896(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -11896);
	// bl 0x88068e78
	ctx.lr = 0x88024198;
	sub_88068E78(ctx, base);
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-11896(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -11896);
	// addi r28,r11,-21444
	ctx.r28.s64 = ctx.r11.s64 + -21444;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r28,-48
	ctx.r10.s64 = ctx.r28.s64 + -48;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88068e60
	ctx.lr = 0x880241B8;
	sub_88068E60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x88024240
	if (ctx.cr6.lt) goto loc_88024240;
	// beq cr6,0x8802421c
	if (ctx.cr6.eq) goto loc_8802421C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x88024278
	if (!ctx.cr6.lt) goto loc_88024278;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addis r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 1048576;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addis r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 1572864;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
loc_880241E8:
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addis r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -524288;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// lis r10,248
	ctx.r10.s64 = 16252928;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88024278
	if (!ctx.cr6.lt) goto loc_88024278;
loc_88024210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8802421C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// b 0x880241e8
	goto loc_880241E8;
loc_88024240:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
	// lis r10,240
	ctx.r10.s64 = 15728640;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x88024210
	if (ctx.cr6.lt) goto loc_88024210;
loc_88024278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88024E78) {
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
	// bl 0x880ab930
	ctx.lr = 0x88024E88;
	sub_880AB930(ctx, base);
	// bl 0x880a8320
	ctx.lr = 0x88024E8C;
	sub_880A8320(ctx, base);
	// bl 0x880aa128
	ctx.lr = 0x88024E90;
	sub_880AA128(ctx, base);
	// bl 0x880a9820
	ctx.lr = 0x88024E94;
	sub_880A9820(ctx, base);
	// bl 0x880a2cc0
	ctx.lr = 0x88024E98;
	sub_880A2CC0(ctx, base);
	// bl 0x88010e00
	ctx.lr = 0x88024E9C;
	sub_88010E00(ctx, base);
	// bl 0x880aace0
	ctx.lr = 0x88024EA0;
	sub_880AACE0(ctx, base);
	// bl 0x880135a0
	ctx.lr = 0x88024EA4;
	sub_880135A0(ctx, base);
	// bl 0x88019110
	ctx.lr = 0x88024EA8;
	sub_88019110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880252B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880252B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8806b1b8
	ctx.lr = 0x880252C8;
	sub_8806B1B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r3,152
	ctx.r27.s64 = ctx.r3.s64 + 152;
	// stw r11,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x88025390
	if (ctx.cr6.gt) goto loc_88025390;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8802530c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8802530C;
	// bdzf 4*cr6+eq,0x8802533c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8802533C;
	// bdzf 4*cr6+eq,0x8802536c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8802536C;
	// bne cr6,0x8802537c
	if (!ctx.cr6.eq) goto loc_8802537C;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x88025390
	goto loc_88025390;
loc_8802530C:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x8806b1d8
	ctx.lr = 0x8802531C;
	sub_8806B1D8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88025320;
	sub_88068E60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x88025330
	if (ctx.cr6.eq) goto loc_88025330;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_88025330:
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x88025390
	goto loc_88025390;
loc_8802533C:
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8806b1d8
	ctx.lr = 0x8802534C;
	sub_8806B1D8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88025350;
	sub_88068E60(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x88025360
	if (ctx.cr6.eq) goto loc_88025360;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_88025360:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x88025390
	goto loc_88025390;
loc_8802536C:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x8802538c
	goto loc_8802538C;
loc_8802537C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
loc_8802538C:
	// li r30,4
	ctx.r30.s64 = 4;
loc_88025390:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8802b280
	ctx.lr = 0x8802539C;
	sub_8802B280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x88026e28
	ctx.lr = 0x880253A8;
	sub_88026E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x88026fc0
	ctx.lr = 0x880253B4;
	sub_88026FC0(ctx, base);
	// stw r30,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880253CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8806b938
	ctx.lr = 0x880253D8;
	sub_8806B938(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8806b8d8
	ctx.lr = 0x880253E4;
	sub_8806B8D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x8806b980
	ctx.lr = 0x880253F0;
	sub_8806B980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x8806b920
	ctx.lr = 0x880253FC;
	sub_8806B920(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880265D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880265D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,580
	ctx.r5.s64 = 580;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880265F0;
	sub_8813FA58(ctx, base);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,25432
	ctx.r4.s64 = ctx.r11.s64 + 25432;
	// bl 0x8806b8b0
	ctx.lr = 0x88026608;
	sub_8806B8B0(ctx, base);
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,20808
	ctx.r4.s64 = ctx.r10.s64 + 20808;
	// bl 0x8806bfb8
	ctx.lr = 0x8802661C;
	sub_8806BFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bl 0x8806b948
	ctx.lr = 0x88026628;
	sub_8806B948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b8e8
	ctx.lr = 0x88026630;
	sub_8806B8E8(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r28,r31,408
	ctx.r28.s64 = ctx.r31.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8806b990
	ctx.lr = 0x88026644;
	sub_8806B990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b930
	ctx.lr = 0x8802664C;
	sub_8806B930(ctx, base);
	// stw r3,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8806b1c0
	ctx.lr = 0x8802665C;
	sub_8806B1C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024110
	ctx.lr = 0x88026664;
	sub_88024110(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// mulli r10,r3,360
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(360));
	// addi r11,r9,-11888
	ctx.r11.s64 = ctx.r9.s64 + -11888;
	// li r5,360
	ctx.r5.s64 = 360;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88026684;
	sub_8813FA58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88026fd0
	ctx.lr = 0x8802668C;
	sub_88026FD0(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r11,420(r31)
	REX_STORE_U16(ctx.r31.u32 + 420, ctx.r11.u16);
	// sth r8,416(r31)
	REX_STORE_U16(ctx.r31.u32 + 416, ctx.r8.u16);
	// stw r11,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r7,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r7.u32);
	// stw r6,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r6.u32);
	// bl 0x880280f0
	ctx.lr = 0x880266B8;
	sub_880280F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880270f8
	ctx.lr = 0x880266C0;
	sub_880270F8(ctx, base);
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// lwz r11,21876(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880266e8
	if (ctx.cr6.eq) goto loc_880266E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b930
	ctx.lr = 0x880266D8;
	sub_8806B930(ctx, base);
	// stw r3,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// lwz r11,21876(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88026700
	if (!ctx.cr6.eq) goto loc_88026700;
loc_880266E8:
	// bl 0x8806cfd0
	ctx.lr = 0x880266EC;
	sub_8806CFD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88026700
	if (!ctx.cr6.eq) goto loc_88026700;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b930
	ctx.lr = 0x880266FC;
	sub_8806B930(ctx, base);
	// stw r3,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
loc_88026700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x88026fc0
	ctx.lr = 0x8802670C;
	sub_88026FC0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,21876(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88026738
	if (ctx.cr6.eq) goto loc_88026738;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b990
	ctx.lr = 0x8802672C;
	sub_8806B990(ctx, base);
	// lwz r11,21876(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88026750
	if (!ctx.cr6.eq) goto loc_88026750;
loc_88026738:
	// bl 0x8806cfd0
	ctx.lr = 0x8802673C;
	sub_8806CFD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88026750
	if (!ctx.cr6.eq) goto loc_88026750;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8806b990
	ctx.lr = 0x88026750;
	sub_8806B990(ctx, base);
loc_88026750:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88069688
	ctx.lr = 0x88026758;
	sub_88069688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88026768
	if (ctx.cr6.eq) goto loc_88026768;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_88026768:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8802677C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8806b980
	ctx.lr = 0x88026788;
	sub_8806B980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// bl 0x8806b920
	ctx.lr = 0x88026794;
	sub_8806B920(ctx, base);
	// bl 0x880694f0
	ctx.lr = 0x88026798;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880267b8
	if (ctx.cr6.eq) goto loc_880267B8;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8806b1d8
	ctx.lr = 0x880267A8;
	sub_8806B1D8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x880267AC;
	sub_88068E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x880252b0
	ctx.lr = 0x880267B8;
	sub_880252B0(ctx, base);
loc_880267B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88028680) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x88024110
	ctx.lr = 0x880286A0;
	sub_88024110(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lwz r3,88(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,11376
	ctx.r9.s64 = ctx.r9.s64 + 11376;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8806b1d8
	ctx.lr = 0x880286C4;
	sub_8806B1D8(ctx, base);
	// li r5,568
	ctx.r5.s64 = 568;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880286D4;
	sub_8813FA60(ctx, base);
	// addi r4,r31,568
	ctx.r4.s64 = ctx.r31.s64 + 568;
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x88028b38
	ctx.lr = 0x880286E4;
	sub_88028B38(ctx, base);
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

DEFINE_REX_FUNC(sub_88029228) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,-29872
	ctx.r9.s64 = ctx.r11.s64 + -29872;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// addi r10,r11,-28896
	ctx.r10.s64 = ctx.r11.s64 + -28896;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88029250) {
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
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r3,r11,18192
	ctx.r3.s64 = ctx.r11.s64 + 18192;
	// ori r5,r5,24352
	ctx.r5.u64 = ctx.r5.u64 | 24352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x8802927C;
	sub_8813FA58(ctx, base);
	// lis r30,-30683
	ctx.r30.s64 = -2010841088;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r31,r30,18160
	ctx.r31.s64 = ctx.r30.s64 + 18160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8813fa58
	ctx.lr = 0x88029294;
	sub_8813FA58(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x880292A4;
	sub_8813FA58(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813fa58
	ctx.lr = 0x880292B4;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18160(r30)
	REX_STORE_U32(ctx.r30.u32 + 18160, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_88029478) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,152
	ctx.r6.s64 = 152;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a9c8
	ctx.lr = 0x880294A0;
	sub_8801A9C8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x880294d0
	if (ctx.cr6.eq) goto loc_880294D0;
	// bl 0x8813ff90
	ctx.lr = 0x880294C4;
	sub_8813FF90(ctx, base);
	// lis r4,160
	ctx.r4.s64 = 10485760;
	// ori r4,r4,41120
	ctx.r4.u64 = ctx.r4.u64 | 41120;
	// b 0x880294dc
	goto loc_880294DC;
loc_880294D0:
	// bl 0x8813ff90
	ctx.lr = 0x880294D4;
	sub_8813FF90(ctx, base);
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,20560
	ctx.r4.u64 = ctx.r4.u64 | 20560;
loc_880294DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880294E4;
	sub_8813FF48(ctx, base);
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

DEFINE_REX_FUNC(sub_8802A018) {
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
	// beq cr6,0x8802a050
	if (ctx.cr6.eq) goto loc_8802A050;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// bne 0x8802a050
	if (!ctx.cr0.eq) goto loc_8802A050;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_8802A050:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8802a064
	if (ctx.cr6.eq) goto loc_8802A064;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_8802A064:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bge 0x8802a094
	if (!ctx.cr0.lt) goto loc_8802A094;
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
	// bge 0x8802a094
	if (!ctx.cr0.lt) goto loc_8802A094;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_8802A094:
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
	ctx.lr = 0x8802A0C4;
	sub_8806B630(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add. r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8802a0f0
	if (!ctx.cr0.eq) goto loc_8802A0F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x880690e8
	ctx.lr = 0x8802A0E0;
	sub_880690E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8802A0F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x88018b68
	ctx.lr = 0x8802A10C;
	sub_88018B68(ctx, base);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x8802a140
	if (!ctx.cr6.lt) goto loc_8802A140;
	// lis r5,112
	ctx.r5.s64 = 7340032;
	// ori r5,r5,28784
	ctx.r5.u64 = ctx.r5.u64 | 28784;
	// b 0x8802a148
	goto loc_8802A148;
loc_8802A140:
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// ori r5,r5,32896
	ctx.r5.u64 = ctx.r5.u64 | 32896;
loc_8802A148:
	// bl 0x88029348
	ctx.lr = 0x8802A14C;
	sub_88029348(ctx, base);
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

DEFINE_REX_FUNC(sub_8802B4B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8802B4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,772
	ctx.r8.s64 = 772;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B4E0;
	sub_8813FDD8(ctx, base);
	// li r8,773
	ctx.r8.s64 = 773;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B4FC;
	sub_8813FDD8(ctx, base);
	// li r8,774
	ctx.r8.s64 = 774;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B518;
	sub_8813FDD8(ctx, base);
	// li r8,775
	ctx.r8.s64 = 775;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B534;
	sub_8813FDD8(ctx, base);
	// li r8,776
	ctx.r8.s64 = 776;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B550;
	sub_8813FDD8(ctx, base);
	// li r8,746
	ctx.r8.s64 = 746;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B56C;
	sub_8813FDD8(ctx, base);
	// li r8,747
	ctx.r8.s64 = 747;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B588;
	sub_8813FDD8(ctx, base);
	// li r8,748
	ctx.r8.s64 = 748;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B5A4;
	sub_8813FDD8(ctx, base);
	// li r8,749
	ctx.r8.s64 = 749;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B5C0;
	sub_8813FDD8(ctx, base);
	// li r8,750
	ctx.r8.s64 = 750;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B5DC;
	sub_8813FDD8(ctx, base);
	// li r8,751
	ctx.r8.s64 = 751;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B5F8;
	sub_8813FDD8(ctx, base);
	// li r8,752
	ctx.r8.s64 = 752;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B614;
	sub_8813FDD8(ctx, base);
	// li r8,753
	ctx.r8.s64 = 753;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B630;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,104
	ctx.r31.s64 = 104;
loc_8802B638:
	// addi r11,r30,754
	ctx.r11.s64 = ctx.r30.s64 + 754;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,240
	ctx.r6.s64 = 240;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B658;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 248, ctx.xer);
	// blt cr6,0x8802b638
	if (ctx.cr6.lt) goto loc_8802B638;
	// li r8,15482
	ctx.r8.s64 = 15482;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B684;
	sub_8813FDD8(ctx, base);
	// li r8,15483
	ctx.r8.s64 = 15483;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,248
	ctx.r4.s64 = 248;
	// li r3,607
	ctx.r3.s64 = 607;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B6A0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B6A8:
	// addi r11,r30,813
	ctx.r11.s64 = ctx.r30.s64 + 813;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B6C8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,144
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 144, ctx.xer);
	// blt cr6,0x8802b6a8
	if (ctx.cr6.lt) goto loc_8802B6A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,144
	ctx.r31.s64 = 144;
loc_8802B6E0:
	// addi r11,r30,822
	ctx.r11.s64 = ctx.r30.s64 + 822;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B700;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802b6e0
	if (ctx.cr6.lt) goto loc_8802B6E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,144
	ctx.r31.s64 = 144;
loc_8802B718:
	// addi r11,r30,829
	ctx.r11.s64 = ctx.r30.s64 + 829;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B738;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,176
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 176, ctx.xer);
	// blt cr6,0x8802b718
	if (ctx.cr6.lt) goto loc_8802B718;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,112
	ctx.r31.s64 = 112;
loc_8802B750:
	// addi r11,r30,854
	ctx.r11.s64 = ctx.r30.s64 + 854;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B770;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802b750
	if (ctx.cr6.lt) goto loc_8802B750;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B788:
	// addi r11,r30,831
	ctx.r11.s64 = ctx.r30.s64 + 831;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B7A8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,112
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 112, ctx.xer);
	// blt cr6,0x8802b788
	if (ctx.cr6.lt) goto loc_8802B788;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B7C0:
	// addi r11,r30,838
	ctx.r11.s64 = ctx.r30.s64 + 838;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B7E0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802b7c0
	if (ctx.cr6.lt) goto loc_8802B7C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,144
	ctx.r31.s64 = 144;
loc_8802B7F8:
	// addi r11,r30,934
	ctx.r11.s64 = ctx.r30.s64 + 934;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B818;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,216
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 216, ctx.xer);
	// blt cr6,0x8802b7f8
	if (ctx.cr6.lt) goto loc_8802B7F8;
	// li r8,943
	ctx.r8.s64 = 943;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B844;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B84C:
	// addi r11,r30,863
	ctx.r11.s64 = ctx.r30.s64 + 863;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B86C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802b84c
	if (ctx.cr6.lt) goto loc_8802B84C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B884:
	// addi r11,r30,879
	ctx.r11.s64 = ctx.r30.s64 + 879;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B8A4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,112
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 112, ctx.xer);
	// blt cr6,0x8802b884
	if (ctx.cr6.lt) goto loc_8802B884;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,112
	ctx.r31.s64 = 112;
loc_8802B8BC:
	// addi r11,r30,886
	ctx.r11.s64 = ctx.r30.s64 + 886;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,72
	ctx.r6.s64 = 72;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B8DC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802b8bc
	if (ctx.cr6.lt) goto loc_8802B8BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802B8F4:
	// addi r11,r30,895
	ctx.r11.s64 = ctx.r30.s64 + 895;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,72
	ctx.r6.s64 = 72;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,849
	ctx.r3.s64 = 849;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B914;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,144
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 144, ctx.xer);
	// blt cr6,0x8802b8f4
	if (ctx.cr6.lt) goto loc_8802B8F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,795
	ctx.r31.s64 = 795;
	// li r30,18
	ctx.r30.s64 = 18;
	// ori r28,r11,65518
	ctx.r28.u64 = ctx.r11.u64 | 65518;
loc_8802B938:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B95C;
	sub_8813FDD8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B978;
	sub_8813FDD8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8802b938
	if (!ctx.cr0.eq) goto loc_8802B938;
	// li r8,14417
	ctx.r8.s64 = 14417;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B9A4;
	sub_8813FDD8(ctx, base);
	// li r8,14418
	ctx.r8.s64 = 14418;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B9C0;
	sub_8813FDD8(ctx, base);
	// li r8,14419
	ctx.r8.s64 = 14419;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B9DC;
	sub_8813FDD8(ctx, base);
	// li r8,14420
	ctx.r8.s64 = 14420;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802B9F8;
	sub_8813FDD8(ctx, base);
	// li r8,14421
	ctx.r8.s64 = 14421;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BA14;
	sub_8813FDD8(ctx, base);
	// li r8,14422
	ctx.r8.s64 = 14422;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BA30;
	sub_8813FDD8(ctx, base);
	// li r8,14423
	ctx.r8.s64 = 14423;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BA4C;
	sub_8813FDD8(ctx, base);
	// li r8,14424
	ctx.r8.s64 = 14424;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BA68;
	sub_8813FDD8(ctx, base);
	// li r8,14425
	ctx.r8.s64 = 14425;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BA84;
	sub_8813FDD8(ctx, base);
	// li r8,14426
	ctx.r8.s64 = 14426;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BAA0;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8802BAA4:
	// addi r11,r31,14427
	ctx.r11.s64 = ctx.r31.s64 + 14427;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,850
	ctx.r3.s64 = 850;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BAC4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8802baa4
	if (ctx.cr6.lt) goto loc_8802BAA4;
	// li r8,1207
	ctx.r8.s64 = 1207;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BAEC;
	sub_8813FDD8(ctx, base);
	// li r8,1208
	ctx.r8.s64 = 1208;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB08;
	sub_8813FDD8(ctx, base);
	// li r8,904
	ctx.r8.s64 = 904;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB24;
	sub_8813FDD8(ctx, base);
	// li r8,905
	ctx.r8.s64 = 905;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB40;
	sub_8813FDD8(ctx, base);
	// li r8,906
	ctx.r8.s64 = 906;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB5C;
	sub_8813FDD8(ctx, base);
	// li r8,907
	ctx.r8.s64 = 907;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB78;
	sub_8813FDD8(ctx, base);
	// li r8,908
	ctx.r8.s64 = 908;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BB94;
	sub_8813FDD8(ctx, base);
	// li r8,909
	ctx.r8.s64 = 909;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BBB0;
	sub_8813FDD8(ctx, base);
	// li r8,910
	ctx.r8.s64 = 910;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BBCC;
	sub_8813FDD8(ctx, base);
	// li r8,911
	ctx.r8.s64 = 911;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BBE8;
	sub_8813FDD8(ctx, base);
	// li r8,912
	ctx.r8.s64 = 912;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC04;
	sub_8813FDD8(ctx, base);
	// li r8,913
	ctx.r8.s64 = 913;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC20;
	sub_8813FDD8(ctx, base);
	// li r8,914
	ctx.r8.s64 = 914;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC3C;
	sub_8813FDD8(ctx, base);
	// li r8,915
	ctx.r8.s64 = 915;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC58;
	sub_8813FDD8(ctx, base);
	// li r8,916
	ctx.r8.s64 = 916;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC74;
	sub_8813FDD8(ctx, base);
	// li r8,917
	ctx.r8.s64 = 917;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BC90;
	sub_8813FDD8(ctx, base);
	// li r8,918
	ctx.r8.s64 = 918;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BCAC;
	sub_8813FDD8(ctx, base);
	// li r8,919
	ctx.r8.s64 = 919;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BCC8;
	sub_8813FDD8(ctx, base);
	// li r8,920
	ctx.r8.s64 = 920;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BCE4;
	sub_8813FDD8(ctx, base);
	// li r8,921
	ctx.r8.s64 = 921;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,861
	ctx.r3.s64 = 861;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD00;
	sub_8813FDD8(ctx, base);
	// li r8,922
	ctx.r8.s64 = 922;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,858
	ctx.r3.s64 = 858;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD1C;
	sub_8813FDD8(ctx, base);
	// li r8,923
	ctx.r8.s64 = 923;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,858
	ctx.r3.s64 = 858;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD38;
	sub_8813FDD8(ctx, base);
	// li r8,924
	ctx.r8.s64 = 924;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,858
	ctx.r3.s64 = 858;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD54;
	sub_8813FDD8(ctx, base);
	// li r8,925
	ctx.r8.s64 = 925;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,858
	ctx.r3.s64 = 858;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD70;
	sub_8813FDD8(ctx, base);
	// li r8,926
	ctx.r8.s64 = 926;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,859
	ctx.r3.s64 = 859;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BD8C;
	sub_8813FDD8(ctx, base);
	// li r8,927
	ctx.r8.s64 = 927;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,859
	ctx.r3.s64 = 859;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BDA8;
	sub_8813FDD8(ctx, base);
	// li r8,928
	ctx.r8.s64 = 928;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,859
	ctx.r3.s64 = 859;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BDC4;
	sub_8813FDD8(ctx, base);
	// li r8,929
	ctx.r8.s64 = 929;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,859
	ctx.r3.s64 = 859;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BDE0;
	sub_8813FDD8(ctx, base);
	// li r8,930
	ctx.r8.s64 = 930;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,860
	ctx.r3.s64 = 860;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BDFC;
	sub_8813FDD8(ctx, base);
	// li r8,931
	ctx.r8.s64 = 931;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,860
	ctx.r3.s64 = 860;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BE18;
	sub_8813FDD8(ctx, base);
	// li r8,932
	ctx.r8.s64 = 932;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,860
	ctx.r3.s64 = 860;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BE34;
	sub_8813FDD8(ctx, base);
	// li r8,933
	ctx.r8.s64 = 933;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,860
	ctx.r3.s64 = 860;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BE50;
	sub_8813FDD8(ctx, base);
	// li r8,1134
	ctx.r8.s64 = 1134;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,840
	ctx.r3.s64 = 840;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BE6C;
	sub_8813FDD8(ctx, base);
	// li r8,1135
	ctx.r8.s64 = 1135;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BE88;
	sub_8813FDD8(ctx, base);
	// li r8,1136
	ctx.r8.s64 = 1136;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BEA4;
	sub_8813FDD8(ctx, base);
	// li r8,1137
	ctx.r8.s64 = 1137;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BEC0;
	sub_8813FDD8(ctx, base);
	// li r8,1138
	ctx.r8.s64 = 1138;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,232
	ctx.r6.s64 = 232;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BEDC;
	sub_8813FDD8(ctx, base);
	// li r8,1139
	ctx.r8.s64 = 1139;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BEF8;
	sub_8813FDD8(ctx, base);
	// li r8,1140
	ctx.r8.s64 = 1140;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BF14;
	sub_8813FDD8(ctx, base);
	// li r8,1141
	ctx.r8.s64 = 1141;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,840
	ctx.r3.s64 = 840;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BF30;
	sub_8813FDD8(ctx, base);
	// li r8,1142
	ctx.r8.s64 = 1142;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,841
	ctx.r3.s64 = 841;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BF4C;
	sub_8813FDD8(ctx, base);
	// li r8,1143
	ctx.r8.s64 = 1143;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BF68;
	sub_8813FDD8(ctx, base);
	// li r8,1144
	ctx.r8.s64 = 1144;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BF84;
	sub_8813FDD8(ctx, base);
	// li r8,1145
	ctx.r8.s64 = 1145;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BFA0;
	sub_8813FDD8(ctx, base);
	// li r8,1146
	ctx.r8.s64 = 1146;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BFBC;
	sub_8813FDD8(ctx, base);
	// li r8,1147
	ctx.r8.s64 = 1147;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BFD8;
	sub_8813FDD8(ctx, base);
	// li r8,1148
	ctx.r8.s64 = 1148;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802BFF4;
	sub_8813FDD8(ctx, base);
	// li r8,1149
	ctx.r8.s64 = 1149;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C010;
	sub_8813FDD8(ctx, base);
	// li r8,1150
	ctx.r8.s64 = 1150;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C02C;
	sub_8813FDD8(ctx, base);
	// li r8,1151
	ctx.r8.s64 = 1151;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,843
	ctx.r3.s64 = 843;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C048;
	sub_8813FDD8(ctx, base);
	// li r8,1152
	ctx.r8.s64 = 1152;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,844
	ctx.r3.s64 = 844;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C064;
	sub_8813FDD8(ctx, base);
	// li r8,1153
	ctx.r8.s64 = 1153;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C080;
	sub_8813FDD8(ctx, base);
	// li r8,1154
	ctx.r8.s64 = 1154;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C09C;
	sub_8813FDD8(ctx, base);
	// li r8,1155
	ctx.r8.s64 = 1155;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C0B8;
	sub_8813FDD8(ctx, base);
	// li r8,1156
	ctx.r8.s64 = 1156;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,232
	ctx.r6.s64 = 232;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C0D4;
	sub_8813FDD8(ctx, base);
	// li r8,1157
	ctx.r8.s64 = 1157;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C0F0;
	sub_8813FDD8(ctx, base);
	// li r8,1158
	ctx.r8.s64 = 1158;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C10C;
	sub_8813FDD8(ctx, base);
	// li r8,1159
	ctx.r8.s64 = 1159;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C128;
	sub_8813FDD8(ctx, base);
	// li r8,1160
	ctx.r8.s64 = 1160;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C144;
	sub_8813FDD8(ctx, base);
	// li r8,1161
	ctx.r8.s64 = 1161;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C160;
	sub_8813FDD8(ctx, base);
	// li r8,1162
	ctx.r8.s64 = 1162;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C17C;
	sub_8813FDD8(ctx, base);
	// li r8,1163
	ctx.r8.s64 = 1163;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C198;
	sub_8813FDD8(ctx, base);
	// li r8,1164
	ctx.r8.s64 = 1164;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,841
	ctx.r3.s64 = 841;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C1B4;
	sub_8813FDD8(ctx, base);
	// li r8,1165
	ctx.r8.s64 = 1165;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C1D0;
	sub_8813FDD8(ctx, base);
	// li r8,1166
	ctx.r8.s64 = 1166;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C1EC;
	sub_8813FDD8(ctx, base);
	// li r8,1167
	ctx.r8.s64 = 1167;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,841
	ctx.r3.s64 = 841;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C208;
	sub_8813FDD8(ctx, base);
	// li r8,1168
	ctx.r8.s64 = 1168;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,842
	ctx.r3.s64 = 842;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C224;
	sub_8813FDD8(ctx, base);
	// li r8,1169
	ctx.r8.s64 = 1169;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C240;
	sub_8813FDD8(ctx, base);
	// li r8,1170
	ctx.r8.s64 = 1170;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,868
	ctx.r3.s64 = 868;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C25C;
	sub_8813FDD8(ctx, base);
	// li r8,1171
	ctx.r8.s64 = 1171;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C278;
	sub_8813FDD8(ctx, base);
	// li r8,1172
	ctx.r8.s64 = 1172;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C294;
	sub_8813FDD8(ctx, base);
	// li r8,1173
	ctx.r8.s64 = 1173;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C2B0;
	sub_8813FDD8(ctx, base);
	// li r8,1174
	ctx.r8.s64 = 1174;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,843
	ctx.r3.s64 = 843;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C2CC;
	sub_8813FDD8(ctx, base);
	// li r8,1175
	ctx.r8.s64 = 1175;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C2E8;
	sub_8813FDD8(ctx, base);
	// li r8,1176
	ctx.r8.s64 = 1176;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C304;
	sub_8813FDD8(ctx, base);
	// li r8,1177
	ctx.r8.s64 = 1177;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,152
	ctx.r4.s64 = 152;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C320;
	sub_8813FDD8(ctx, base);
	// li r8,1178
	ctx.r8.s64 = 1178;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C33C;
	sub_8813FDD8(ctx, base);
	// li r8,1179
	ctx.r8.s64 = 1179;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,845
	ctx.r3.s64 = 845;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C358;
	sub_8813FDD8(ctx, base);
	// li r8,1180
	ctx.r8.s64 = 1180;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C374;
	sub_8813FDD8(ctx, base);
	// li r8,1181
	ctx.r8.s64 = 1181;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C390;
	sub_8813FDD8(ctx, base);
	// li r8,1182
	ctx.r8.s64 = 1182;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C3AC;
	sub_8813FDD8(ctx, base);
	// li r8,1183
	ctx.r8.s64 = 1183;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C3C8;
	sub_8813FDD8(ctx, base);
	// li r8,1184
	ctx.r8.s64 = 1184;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,842
	ctx.r3.s64 = 842;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C3E4;
	sub_8813FDD8(ctx, base);
	// li r8,1185
	ctx.r8.s64 = 1185;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,843
	ctx.r3.s64 = 843;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C400;
	sub_8813FDD8(ctx, base);
	// li r8,1186
	ctx.r8.s64 = 1186;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C41C;
	sub_8813FDD8(ctx, base);
	// li r8,1187
	ctx.r8.s64 = 1187;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C438;
	sub_8813FDD8(ctx, base);
	// li r8,1188
	ctx.r8.s64 = 1188;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C454;
	sub_8813FDD8(ctx, base);
	// li r8,1189
	ctx.r8.s64 = 1189;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C470;
	sub_8813FDD8(ctx, base);
	// li r8,1190
	ctx.r8.s64 = 1190;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,846
	ctx.r3.s64 = 846;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C48C;
	sub_8813FDD8(ctx, base);
	// li r8,14393
	ctx.r8.s64 = 14393;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C4A8;
	sub_8813FDD8(ctx, base);
	// li r8,14394
	ctx.r8.s64 = 14394;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C4C4;
	sub_8813FDD8(ctx, base);
	// li r8,14395
	ctx.r8.s64 = 14395;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C4E0;
	sub_8813FDD8(ctx, base);
	// li r8,14396
	ctx.r8.s64 = 14396;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C4FC;
	sub_8813FDD8(ctx, base);
	// li r8,14397
	ctx.r8.s64 = 14397;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C518;
	sub_8813FDD8(ctx, base);
	// li r8,14398
	ctx.r8.s64 = 14398;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C534;
	sub_8813FDD8(ctx, base);
	// li r8,14399
	ctx.r8.s64 = 14399;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C550;
	sub_8813FDD8(ctx, base);
	// li r8,14400
	ctx.r8.s64 = 14400;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C56C;
	sub_8813FDD8(ctx, base);
	// li r8,14401
	ctx.r8.s64 = 14401;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C588;
	sub_8813FDD8(ctx, base);
	// li r8,14402
	ctx.r8.s64 = 14402;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C5A4;
	sub_8813FDD8(ctx, base);
	// li r8,14403
	ctx.r8.s64 = 14403;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C5C0;
	sub_8813FDD8(ctx, base);
	// li r8,14404
	ctx.r8.s64 = 14404;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C5DC;
	sub_8813FDD8(ctx, base);
	// li r8,14405
	ctx.r8.s64 = 14405;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C5F8;
	sub_8813FDD8(ctx, base);
	// li r8,14406
	ctx.r8.s64 = 14406;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C614;
	sub_8813FDD8(ctx, base);
	// li r8,14407
	ctx.r8.s64 = 14407;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C630;
	sub_8813FDD8(ctx, base);
	// li r8,14408
	ctx.r8.s64 = 14408;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,774
	ctx.r3.s64 = 774;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C64C;
	sub_8813FDD8(ctx, base);
	// li r8,12477
	ctx.r8.s64 = 12477;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C668;
	sub_8813FDD8(ctx, base);
	// li r8,12478
	ctx.r8.s64 = 12478;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C684;
	sub_8813FDD8(ctx, base);
	// li r8,12479
	ctx.r8.s64 = 12479;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C6A0;
	sub_8813FDD8(ctx, base);
	// li r8,12480
	ctx.r8.s64 = 12480;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C6BC;
	sub_8813FDD8(ctx, base);
	// li r8,12481
	ctx.r8.s64 = 12481;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C6D8;
	sub_8813FDD8(ctx, base);
	// li r8,12482
	ctx.r8.s64 = 12482;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C6F4;
	sub_8813FDD8(ctx, base);
	// li r8,12483
	ctx.r8.s64 = 12483;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,216
	ctx.r4.s64 = 216;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C710;
	sub_8813FDD8(ctx, base);
	// li r8,12484
	ctx.r8.s64 = 12484;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,232
	ctx.r4.s64 = 232;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C72C;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,192
	ctx.r31.s64 = 192;
loc_8802C734:
	// addi r11,r30,12485
	ctx.r11.s64 = ctx.r30.s64 + 12485;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r3,202
	ctx.r3.s64 = 202;
	// bl 0x8813fdd8
	ctx.lr = 0x8802C754;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8802c734
	if (ctx.cr6.lt) goto loc_8802C734;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88049D98) {
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
	// li r8,14446
	ctx.r8.s64 = 14446;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,782
	ctx.r3.s64 = 782;
	// bl 0x8813fdd8
	ctx.lr = 0x88049DC0;
	sub_8813FDD8(ctx, base);
	// li r8,14447
	ctx.r8.s64 = 14447;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,782
	ctx.r3.s64 = 782;
	// bl 0x8813fdd8
	ctx.lr = 0x88049DDC;
	sub_8813FDD8(ctx, base);
	// li r8,14448
	ctx.r8.s64 = 14448;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,782
	ctx.r3.s64 = 782;
	// bl 0x8813fdd8
	ctx.lr = 0x88049DF8;
	sub_8813FDD8(ctx, base);
	// li r8,14449
	ctx.r8.s64 = 14449;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,782
	ctx.r3.s64 = 782;
	// bl 0x8813fdd8
	ctx.lr = 0x88049E14;
	sub_8813FDD8(ctx, base);
	// li r8,14450
	ctx.r8.s64 = 14450;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,783
	ctx.r3.s64 = 783;
	// bl 0x8813fdd8
	ctx.lr = 0x88049E30;
	sub_8813FDD8(ctx, base);
	// li r8,14451
	ctx.r8.s64 = 14451;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,783
	ctx.r3.s64 = 783;
	// bl 0x8813fdd8
	ctx.lr = 0x88049E4C;
	sub_8813FDD8(ctx, base);
	// li r8,14452
	ctx.r8.s64 = 14452;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,783
	ctx.r3.s64 = 783;
	// bl 0x8813fdd8
	ctx.lr = 0x88049E68;
	sub_8813FDD8(ctx, base);
	// li r8,14453
	ctx.r8.s64 = 14453;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,783
	ctx.r3.s64 = 783;
	// bl 0x8813fdd8
	ctx.lr = 0x88049E84;
	sub_8813FDD8(ctx, base);
	// li r8,14454
	ctx.r8.s64 = 14454;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x8813fdd8
	ctx.lr = 0x88049EA0;
	sub_8813FDD8(ctx, base);
	// li r8,14455
	ctx.r8.s64 = 14455;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x8813fdd8
	ctx.lr = 0x88049EBC;
	sub_8813FDD8(ctx, base);
	// li r8,14456
	ctx.r8.s64 = 14456;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x8813fdd8
	ctx.lr = 0x88049ED8;
	sub_8813FDD8(ctx, base);
	// li r8,14457
	ctx.r8.s64 = 14457;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,784
	ctx.r3.s64 = 784;
	// bl 0x8813fdd8
	ctx.lr = 0x88049EF4;
	sub_8813FDD8(ctx, base);
	// li r8,14458
	ctx.r8.s64 = 14458;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F10;
	sub_8813FDD8(ctx, base);
	// li r8,14459
	ctx.r8.s64 = 14459;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F2C;
	sub_8813FDD8(ctx, base);
	// li r8,14460
	ctx.r8.s64 = 14460;
	// li r7,152
	ctx.r7.s64 = 152;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F48;
	sub_8813FDD8(ctx, base);
	// li r8,14461
	ctx.r8.s64 = 14461;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F64;
	sub_8813FDD8(ctx, base);
	// li r8,14462
	ctx.r8.s64 = 14462;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F80;
	sub_8813FDD8(ctx, base);
	// li r8,14463
	ctx.r8.s64 = 14463;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x88049F9C;
	sub_8813FDD8(ctx, base);
	// li r8,14464
	ctx.r8.s64 = 14464;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x88049FB8;
	sub_8813FDD8(ctx, base);
	// li r8,14465
	ctx.r8.s64 = 14465;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x88049FD4;
	sub_8813FDD8(ctx, base);
	// li r8,14466
	ctx.r8.s64 = 14466;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x88049FF0;
	sub_8813FDD8(ctx, base);
	// li r8,14467
	ctx.r8.s64 = 14467;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A00C;
	sub_8813FDD8(ctx, base);
	// li r8,14468
	ctx.r8.s64 = 14468;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A028;
	sub_8813FDD8(ctx, base);
	// li r8,14469
	ctx.r8.s64 = 14469;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A044;
	sub_8813FDD8(ctx, base);
	// li r8,14470
	ctx.r8.s64 = 14470;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A060;
	sub_8813FDD8(ctx, base);
	// li r8,14471
	ctx.r8.s64 = 14471;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,785
	ctx.r3.s64 = 785;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A07C;
	sub_8813FDD8(ctx, base);
	// li r8,14472
	ctx.r8.s64 = 14472;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,787
	ctx.r3.s64 = 787;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A098;
	sub_8813FDD8(ctx, base);
	// li r8,14473
	ctx.r8.s64 = 14473;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,787
	ctx.r3.s64 = 787;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A0B4;
	sub_8813FDD8(ctx, base);
	// li r8,14474
	ctx.r8.s64 = 14474;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,787
	ctx.r3.s64 = 787;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A0D0;
	sub_8813FDD8(ctx, base);
	// li r8,14475
	ctx.r8.s64 = 14475;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,787
	ctx.r3.s64 = 787;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A0EC;
	sub_8813FDD8(ctx, base);
	// li r8,14476
	ctx.r8.s64 = 14476;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,788
	ctx.r3.s64 = 788;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A108;
	sub_8813FDD8(ctx, base);
	// li r8,14477
	ctx.r8.s64 = 14477;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,788
	ctx.r3.s64 = 788;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A124;
	sub_8813FDD8(ctx, base);
	// li r8,14478
	ctx.r8.s64 = 14478;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,788
	ctx.r3.s64 = 788;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A140;
	sub_8813FDD8(ctx, base);
	// li r8,14479
	ctx.r8.s64 = 14479;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,788
	ctx.r3.s64 = 788;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A15C;
	sub_8813FDD8(ctx, base);
	// li r8,14480
	ctx.r8.s64 = 14480;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A178;
	sub_8813FDD8(ctx, base);
	// li r8,14481
	ctx.r8.s64 = 14481;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,786
	ctx.r3.s64 = 786;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A194;
	sub_8813FDD8(ctx, base);
	// li r8,14482
	ctx.r8.s64 = 14482;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A1B0;
	sub_8813FDD8(ctx, base);
	// li r8,14483
	ctx.r8.s64 = 14483;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,40
	ctx.r4.s64 = 40;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A1CC;
	sub_8813FDD8(ctx, base);
	// li r8,14484
	ctx.r8.s64 = 14484;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,80
	ctx.r4.s64 = 80;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A1E8;
	sub_8813FDD8(ctx, base);
	// li r8,14485
	ctx.r8.s64 = 14485;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A204;
	sub_8813FDD8(ctx, base);
	// li r8,14486
	ctx.r8.s64 = 14486;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A220;
	sub_8813FDD8(ctx, base);
	// li r8,14487
	ctx.r8.s64 = 14487;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A23C;
	sub_8813FDD8(ctx, base);
	// li r8,14488
	ctx.r8.s64 = 14488;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A258;
	sub_8813FDD8(ctx, base);
	// li r8,14489
	ctx.r8.s64 = 14489;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A274;
	sub_8813FDD8(ctx, base);
	// li r8,14490
	ctx.r8.s64 = 14490;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A290;
	sub_8813FDD8(ctx, base);
	// li r8,14491
	ctx.r8.s64 = 14491;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A2AC;
	sub_8813FDD8(ctx, base);
	// li r8,14492
	ctx.r8.s64 = 14492;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A2C8;
	sub_8813FDD8(ctx, base);
	// li r8,14493
	ctx.r8.s64 = 14493;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A2E4;
	sub_8813FDD8(ctx, base);
	// li r8,14494
	ctx.r8.s64 = 14494;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A300;
	sub_8813FDD8(ctx, base);
	// li r8,14495
	ctx.r8.s64 = 14495;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,789
	ctx.r3.s64 = 789;
	// bl 0x8813fdd8
	ctx.lr = 0x8804A31C;
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

DEFINE_REX_FUNC(sub_88055198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880551A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,10939
	ctx.r8.s64 = 10939;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880551C0;
	sub_8813FDD8(ctx, base);
	// li r8,10940
	ctx.r8.s64 = 10940;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880551DC;
	sub_8813FDD8(ctx, base);
	// li r8,10941
	ctx.r8.s64 = 10941;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880551F8;
	sub_8813FDD8(ctx, base);
	// li r8,10942
	ctx.r8.s64 = 10942;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x88055214;
	sub_8813FDD8(ctx, base);
	// li r8,10943
	ctx.r8.s64 = 10943;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x88055230;
	sub_8813FDD8(ctx, base);
	// li r8,10944
	ctx.r8.s64 = 10944;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x8805524C;
	sub_8813FDD8(ctx, base);
	// li r8,10945
	ctx.r8.s64 = 10945;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x88055268;
	sub_8813FDD8(ctx, base);
	// li r8,10946
	ctx.r8.s64 = 10946;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x88055284;
	sub_8813FDD8(ctx, base);
	// li r8,10947
	ctx.r8.s64 = 10947;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,104
	ctx.r4.s64 = 104;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880552A0;
	sub_8813FDD8(ctx, base);
	// li r8,10948
	ctx.r8.s64 = 10948;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880552BC;
	sub_8813FDD8(ctx, base);
	// li r8,10949
	ctx.r8.s64 = 10949;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x8813fdd8
	ctx.lr = 0x880552D8;
	sub_8813FDD8(ctx, base);
	// li r8,10950
	ctx.r8.s64 = 10950;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x8813fdd8
	ctx.lr = 0x880552F4;
	sub_8813FDD8(ctx, base);
	// li r8,10951
	ctx.r8.s64 = 10951;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x8813fdd8
	ctx.lr = 0x88055310;
	sub_8813FDD8(ctx, base);
	// li r8,10952
	ctx.r8.s64 = 10952;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x8813fdd8
	ctx.lr = 0x8805532C;
	sub_8813FDD8(ctx, base);
	// li r8,10953
	ctx.r8.s64 = 10953;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,145
	ctx.r3.s64 = 145;
	// bl 0x8813fdd8
	ctx.lr = 0x88055348;
	sub_8813FDD8(ctx, base);
	// li r8,10954
	ctx.r8.s64 = 10954;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,146
	ctx.r3.s64 = 146;
	// bl 0x8813fdd8
	ctx.lr = 0x88055364;
	sub_8813FDD8(ctx, base);
	// li r8,10955
	ctx.r8.s64 = 10955;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,146
	ctx.r3.s64 = 146;
	// bl 0x8813fdd8
	ctx.lr = 0x88055380;
	sub_8813FDD8(ctx, base);
	// li r8,10956
	ctx.r8.s64 = 10956;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,146
	ctx.r3.s64 = 146;
	// bl 0x8813fdd8
	ctx.lr = 0x8805539C;
	sub_8813FDD8(ctx, base);
	// li r8,10957
	ctx.r8.s64 = 10957;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,146
	ctx.r3.s64 = 146;
	// bl 0x8813fdd8
	ctx.lr = 0x880553B8;
	sub_8813FDD8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,65532
	ctx.r29.u64 = ctx.r11.u64 | 65532;
loc_880553C4:
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r31,10962
	ctx.r30.s64 = ctx.r31.s64 + 10962;
	// mulli r10,r11,120
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r27,r31,7,24,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r3,147
	ctx.r3.s64 = 147;
	// bl 0x8813fdd8
	ctx.lr = 0x880553F8;
	sub_8813FDD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8813fdd8
	ctx.lr = 0x88055414;
	sub_8813FDD8(ctx, base);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// li r7,120
	ctx.r7.s64 = 120;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x8813fdd8
	ctx.lr = 0x88055434;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x880553c4
	if (ctx.cr6.lt) goto loc_880553C4;
	// li r8,10970
	ctx.r8.s64 = 10970;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,150
	ctx.r3.s64 = 150;
	// bl 0x8813fdd8
	ctx.lr = 0x8805545C;
	sub_8813FDD8(ctx, base);
	// li r8,10971
	ctx.r8.s64 = 10971;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,150
	ctx.r3.s64 = 150;
	// bl 0x8813fdd8
	ctx.lr = 0x88055478;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055480:
	// addi r11,r30,10972
	ctx.r11.s64 = ctx.r30.s64 + 10972;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,224
	ctx.r4.s64 = 224;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880554A0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,120
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 120, ctx.xer);
	// blt cr6,0x88055480
	if (ctx.cr6.lt) goto loc_88055480;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880554B8:
	// addi r11,r30,10977
	ctx.r11.s64 = ctx.r30.s64 + 10977;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,232
	ctx.r5.s64 = 232;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8813fdd8
	ctx.lr = 0x880554D8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// blt cr6,0x880554b8
	if (ctx.cr6.lt) goto loc_880554B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880554EC:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r31,31,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFE;
	// rlwinm r9,r31,5,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x60;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 + 120;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,10980
	ctx.r9.s64 = ctx.r31.s64 + 10980;
	// addi r5,r11,200
	ctx.r5.s64 = ctx.r11.s64 + 200;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r3,145
	ctx.r3.s64 = 145;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88055528;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x880554ec
	if (ctx.cr6.lt) goto loc_880554EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055538:
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r31,31
	ctx.r8.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r9,r31,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r31,10988
	ctx.r3.s64 = ctx.r31.s64 + 10988;
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// addi r4,r10,160
	ctx.r4.s64 = ctx.r10.s64 + 160;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r3,155
	ctx.r3.s64 = 155;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8813fdd8
	ctx.lr = 0x88055580;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x88055538
	if (ctx.cr6.lt) goto loc_88055538;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,5
	ctx.r29.s64 = 5;
	// ori r30,r11,52429
	ctx.r30.u64 = ctx.r11.u64 | 52429;
loc_8805559C:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divwu r10,r31,r29
	ctx.r10.u64 = uint32_t(ctx.r29.u32 ? ctx.r31.u32 / ctx.r29.u32 : 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r11,r9,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r4,r31,10994
	ctx.r4.s64 = ctx.r31.s64 + 10994;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// rlwinm r4,r3,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFF0;
	// li r6,48
	ctx.r6.s64 = 48;
	// rlwinm r5,r5,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFF0;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x8813fdd8
	ctx.lr = 0x880555E4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// blt cr6,0x8805559c
	if (ctx.cr6.lt) goto loc_8805559C;
	// li r8,11019
	ctx.r8.s64 = 11019;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x8805560C;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,128
	ctx.r31.s64 = 128;
loc_88055614:
	// addi r11,r30,11020
	ctx.r11.s64 = ctx.r30.s64 + 11020;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88055634;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88055614
	if (ctx.cr6.lt) goto loc_88055614;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055648:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,11024
	ctx.r10.s64 = ctx.r31.s64 + 11024;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r9,5,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFE0;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88055670;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// blt cr6,0x88055648
	if (ctx.cr6.lt) goto loc_88055648;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055680:
	// addi r11,r31,11064
	ctx.r11.s64 = ctx.r31.s64 + 11064;
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
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x8813fdd8
	ctx.lr = 0x880556A0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x88055680
	if (ctx.cr6.lt) goto loc_88055680;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880556B0:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r31,30
	ctx.r10.u64 = ctx.r31.u32 & 0x3;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mulli r4,r10,56
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(56));
	// addi r8,r31,11084
	ctx.r8.s64 = ctx.r31.s64 + 11084;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// rlwinm r5,r9,5,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFE0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x8813fdd8
	ctx.lr = 0x880556E0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x880556b0
	if (ctx.cr6.lt) goto loc_880556B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880556F0:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// addi r10,r31,11104
	ctx.r10.s64 = ctx.r31.s64 + 11104;
	// mulli r9,r11,56
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// rlwinm r5,r31,3,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,169
	ctx.r3.s64 = 169;
	// bl 0x8813fdd8
	ctx.lr = 0x88055718;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x880556f0
	if (ctx.cr6.lt) goto loc_880556F0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055728:
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// addi r10,r31,11136
	ctx.r10.s64 = ctx.r31.s64 + 11136;
	// mulli r9,r11,56
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// rlwinm r5,r31,3,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFE0;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// li r3,170
	ctx.r3.s64 = 170;
	// bl 0x8813fdd8
	ctx.lr = 0x88055750;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x88055728
	if (ctx.cr6.lt) goto loc_88055728;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88055760:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,11148
	ctx.r10.s64 = ctx.r31.s64 + 11148;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,24
	ctx.r7.s64 = 24;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,170
	ctx.r3.s64 = 170;
	// bl 0x8813fdd8
	ctx.lr = 0x88055790;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x88055760
	if (ctx.cr6.lt) goto loc_88055760;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880557A0:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r31,30,2,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFE;
	// addi r9,r31,11196
	ctx.r9.s64 = ctx.r31.s64 + 11196;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r5,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,171
	ctx.r3.s64 = 171;
	// bl 0x8813fdd8
	ctx.lr = 0x880557CC;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x880557a0
	if (ctx.cr6.lt) goto loc_880557A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880557E0:
	// addi r11,r30,11212
	ctx.r11.s64 = ctx.r30.s64 + 11212;
	// li r7,112
	ctx.r7.s64 = 112;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,120
	ctx.r5.s64 = 120;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,150
	ctx.r3.s64 = 150;
	// bl 0x8813fdd8
	ctx.lr = 0x88055800;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x880557e0
	if (ctx.cr6.lt) goto loc_880557E0;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,43691
	ctx.r29.u64 = ctx.r11.u64 | 43691;
	// li r27,3
	ctx.r27.s64 = 3;
	// ori r28,r10,65530
	ctx.r28.u64 = ctx.r10.u64 | 65530;
loc_88055828:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r27
	ctx.r9.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r31,11221
	ctx.r30.s64 = ctx.r31.s64 + 11221;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r9,112
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// add r6,r30,r28
	ctx.r6.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r26,r7,16
	ctx.r26.u64 = ctx.r7.u32 & 0xFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r25,r4,4,16,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFF0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r3,151
	ctx.r3.s64 = 151;
	// bl 0x8813fdd8
	ctx.lr = 0x88055878;
	sub_8813FDD8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x8813fdd8
	ctx.lr = 0x88055894;
	sub_8813FDD8(ctx, base);
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r3,153
	ctx.r3.s64 = 153;
	// bl 0x8813fdd8
	ctx.lr = 0x880558B4;
	sub_8813FDD8(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r7,112
	ctx.r7.s64 = 112;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,80
	ctx.r6.s64 = 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8813fdd8
	ctx.lr = 0x880558D4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x88055828
	if (ctx.cr6.lt) goto loc_88055828;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880558E4:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r27
	ctx.r9.u64 = uint32_t(ctx.r27.u32 ? ctx.r31.u32 / ctx.r27.u32 : 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r9,112
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r31,11239
	ctx.r8.s64 = ctx.r31.s64 + 11239;
	// subf r11,r7,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r7.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,112
	ctx.r7.s64 = 112;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r4,r4,4,16,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFF0;
	// li r3,155
	ctx.r3.s64 = 155;
	// bl 0x8813fdd8
	ctx.lr = 0x88055928;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x880558e4
	if (ctx.cr6.lt) goto loc_880558E4;
	// li r8,11244
	ctx.r8.s64 = 11244;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055950;
	sub_8813FDD8(ctx, base);
	// li r8,11245
	ctx.r8.s64 = 11245;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x8805596C;
	sub_8813FDD8(ctx, base);
	// li r8,11246
	ctx.r8.s64 = 11246;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055988;
	sub_8813FDD8(ctx, base);
	// li r8,11247
	ctx.r8.s64 = 11247;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880559A4;
	sub_8813FDD8(ctx, base);
	// li r8,11248
	ctx.r8.s64 = 11248;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880559C0;
	sub_8813FDD8(ctx, base);
	// li r8,11249
	ctx.r8.s64 = 11249;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880559DC;
	sub_8813FDD8(ctx, base);
	// li r8,11250
	ctx.r8.s64 = 11250;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880559F8;
	sub_8813FDD8(ctx, base);
	// li r8,11251
	ctx.r8.s64 = 11251;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055A14;
	sub_8813FDD8(ctx, base);
	// li r8,11252
	ctx.r8.s64 = 11252;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055A30;
	sub_8813FDD8(ctx, base);
	// li r8,11253
	ctx.r8.s64 = 11253;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055A4C;
	sub_8813FDD8(ctx, base);
	// li r8,11254
	ctx.r8.s64 = 11254;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055A68;
	sub_8813FDD8(ctx, base);
	// li r8,11255
	ctx.r8.s64 = 11255;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x88055A84;
	sub_8813FDD8(ctx, base);
	// li r8,11256
	ctx.r8.s64 = 11256;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055AA0;
	sub_8813FDD8(ctx, base);
	// li r8,11257
	ctx.r8.s64 = 11257;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055ABC;
	sub_8813FDD8(ctx, base);
	// li r8,11258
	ctx.r8.s64 = 11258;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055AD8;
	sub_8813FDD8(ctx, base);
	// li r8,11259
	ctx.r8.s64 = 11259;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055AF4;
	sub_8813FDD8(ctx, base);
	// li r8,11260
	ctx.r8.s64 = 11260;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B10;
	sub_8813FDD8(ctx, base);
	// li r8,11261
	ctx.r8.s64 = 11261;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B2C;
	sub_8813FDD8(ctx, base);
	// li r8,11262
	ctx.r8.s64 = 11262;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B48;
	sub_8813FDD8(ctx, base);
	// li r8,11263
	ctx.r8.s64 = 11263;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B64;
	sub_8813FDD8(ctx, base);
	// li r8,11264
	ctx.r8.s64 = 11264;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B80;
	sub_8813FDD8(ctx, base);
	// li r8,11265
	ctx.r8.s64 = 11265;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055B9C;
	sub_8813FDD8(ctx, base);
	// li r8,11266
	ctx.r8.s64 = 11266;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055BB8;
	sub_8813FDD8(ctx, base);
	// li r8,11267
	ctx.r8.s64 = 11267;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88055BD4;
	sub_8813FDD8(ctx, base);
	// li r8,11268
	ctx.r8.s64 = 11268;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055BF0;
	sub_8813FDD8(ctx, base);
	// li r8,11269
	ctx.r8.s64 = 11269;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C0C;
	sub_8813FDD8(ctx, base);
	// li r8,11270
	ctx.r8.s64 = 11270;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C28;
	sub_8813FDD8(ctx, base);
	// li r8,11271
	ctx.r8.s64 = 11271;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C44;
	sub_8813FDD8(ctx, base);
	// li r8,11272
	ctx.r8.s64 = 11272;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C60;
	sub_8813FDD8(ctx, base);
	// li r8,11273
	ctx.r8.s64 = 11273;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C7C;
	sub_8813FDD8(ctx, base);
	// li r8,11274
	ctx.r8.s64 = 11274;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055C98;
	sub_8813FDD8(ctx, base);
	// li r8,11275
	ctx.r8.s64 = 11275;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88055CB4;
	sub_8813FDD8(ctx, base);
	// li r8,11276
	ctx.r8.s64 = 11276;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055CD0;
	sub_8813FDD8(ctx, base);
	// li r8,11277
	ctx.r8.s64 = 11277;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055CEC;
	sub_8813FDD8(ctx, base);
	// li r8,11278
	ctx.r8.s64 = 11278;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D08;
	sub_8813FDD8(ctx, base);
	// li r8,11279
	ctx.r8.s64 = 11279;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D24;
	sub_8813FDD8(ctx, base);
	// li r8,11280
	ctx.r8.s64 = 11280;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D40;
	sub_8813FDD8(ctx, base);
	// li r8,11281
	ctx.r8.s64 = 11281;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D5C;
	sub_8813FDD8(ctx, base);
	// li r8,11282
	ctx.r8.s64 = 11282;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D78;
	sub_8813FDD8(ctx, base);
	// li r8,11283
	ctx.r8.s64 = 11283;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055D94;
	sub_8813FDD8(ctx, base);
	// li r8,11284
	ctx.r8.s64 = 11284;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055DB0;
	sub_8813FDD8(ctx, base);
	// li r8,11285
	ctx.r8.s64 = 11285;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055DCC;
	sub_8813FDD8(ctx, base);
	// li r8,11286
	ctx.r8.s64 = 11286;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055DE8;
	sub_8813FDD8(ctx, base);
	// li r8,11287
	ctx.r8.s64 = 11287;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E04;
	sub_8813FDD8(ctx, base);
	// li r8,11288
	ctx.r8.s64 = 11288;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E20;
	sub_8813FDD8(ctx, base);
	// li r8,11289
	ctx.r8.s64 = 11289;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E3C;
	sub_8813FDD8(ctx, base);
	// li r8,11290
	ctx.r8.s64 = 11290;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E58;
	sub_8813FDD8(ctx, base);
	// li r8,11291
	ctx.r8.s64 = 11291;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E74;
	sub_8813FDD8(ctx, base);
	// li r8,11292
	ctx.r8.s64 = 11292;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055E90;
	sub_8813FDD8(ctx, base);
	// li r8,11293
	ctx.r8.s64 = 11293;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055EAC;
	sub_8813FDD8(ctx, base);
	// li r8,11294
	ctx.r8.s64 = 11294;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055EC8;
	sub_8813FDD8(ctx, base);
	// li r8,11295
	ctx.r8.s64 = 11295;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055EE4;
	sub_8813FDD8(ctx, base);
	// li r8,11296
	ctx.r8.s64 = 11296;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F00;
	sub_8813FDD8(ctx, base);
	// li r8,11297
	ctx.r8.s64 = 11297;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F1C;
	sub_8813FDD8(ctx, base);
	// li r8,11298
	ctx.r8.s64 = 11298;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F38;
	sub_8813FDD8(ctx, base);
	// li r8,11299
	ctx.r8.s64 = 11299;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F54;
	sub_8813FDD8(ctx, base);
	// li r8,11300
	ctx.r8.s64 = 11300;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F70;
	sub_8813FDD8(ctx, base);
	// li r8,11301
	ctx.r8.s64 = 11301;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055F8C;
	sub_8813FDD8(ctx, base);
	// li r8,11302
	ctx.r8.s64 = 11302;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055FA8;
	sub_8813FDD8(ctx, base);
	// li r8,11303
	ctx.r8.s64 = 11303;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055FC4;
	sub_8813FDD8(ctx, base);
	// li r8,11304
	ctx.r8.s64 = 11304;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055FE0;
	sub_8813FDD8(ctx, base);
	// li r8,11305
	ctx.r8.s64 = 11305;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88055FFC;
	sub_8813FDD8(ctx, base);
	// li r8,11306
	ctx.r8.s64 = 11306;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88056018;
	sub_8813FDD8(ctx, base);
	// li r8,11307
	ctx.r8.s64 = 11307;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88056034;
	sub_8813FDD8(ctx, base);
	// li r8,11308
	ctx.r8.s64 = 11308;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88056050;
	sub_8813FDD8(ctx, base);
	// li r8,11309
	ctx.r8.s64 = 11309;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x8805606C;
	sub_8813FDD8(ctx, base);
	// li r8,11310
	ctx.r8.s64 = 11310;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x88056088;
	sub_8813FDD8(ctx, base);
	// li r8,11311
	ctx.r8.s64 = 11311;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x880560A4;
	sub_8813FDD8(ctx, base);
	// li r8,11312
	ctx.r8.s64 = 11312;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x880560C0;
	sub_8813FDD8(ctx, base);
	// li r8,11313
	ctx.r8.s64 = 11313;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x880560DC;
	sub_8813FDD8(ctx, base);
	// li r8,11314
	ctx.r8.s64 = 11314;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x880560F8;
	sub_8813FDD8(ctx, base);
	// li r8,11315
	ctx.r8.s64 = 11315;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x88056114;
	sub_8813FDD8(ctx, base);
	// li r8,11316
	ctx.r8.s64 = 11316;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x88056130;
	sub_8813FDD8(ctx, base);
	// li r8,11317
	ctx.r8.s64 = 11317;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x8805614C;
	sub_8813FDD8(ctx, base);
	// li r8,11318
	ctx.r8.s64 = 11318;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x88056168;
	sub_8813FDD8(ctx, base);
	// li r8,11319
	ctx.r8.s64 = 11319;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x88056184;
	sub_8813FDD8(ctx, base);
	// li r8,11320
	ctx.r8.s64 = 11320;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880561A0;
	sub_8813FDD8(ctx, base);
	// li r8,11321
	ctx.r8.s64 = 11321;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880561BC;
	sub_8813FDD8(ctx, base);
	// li r8,11322
	ctx.r8.s64 = 11322;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880561D8;
	sub_8813FDD8(ctx, base);
	// li r8,11323
	ctx.r8.s64 = 11323;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880561F4;
	sub_8813FDD8(ctx, base);
	// li r8,11324
	ctx.r8.s64 = 11324;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x88056210;
	sub_8813FDD8(ctx, base);
	// li r8,11325
	ctx.r8.s64 = 11325;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x8805622C;
	sub_8813FDD8(ctx, base);
	// li r8,11326
	ctx.r8.s64 = 11326;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x88056248;
	sub_8813FDD8(ctx, base);
	// li r8,11327
	ctx.r8.s64 = 11327;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x88056264;
	sub_8813FDD8(ctx, base);
	// li r8,11328
	ctx.r8.s64 = 11328;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056280;
	sub_8813FDD8(ctx, base);
	// li r8,11329
	ctx.r8.s64 = 11329;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x8805629C;
	sub_8813FDD8(ctx, base);
	// li r8,11330
	ctx.r8.s64 = 11330;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x880562B8;
	sub_8813FDD8(ctx, base);
	// li r8,11331
	ctx.r8.s64 = 11331;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x880562D4;
	sub_8813FDD8(ctx, base);
	// li r8,11332
	ctx.r8.s64 = 11332;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x880562F0;
	sub_8813FDD8(ctx, base);
	// li r8,11333
	ctx.r8.s64 = 11333;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x8805630C;
	sub_8813FDD8(ctx, base);
	// li r8,11334
	ctx.r8.s64 = 11334;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056328;
	sub_8813FDD8(ctx, base);
	// li r8,11335
	ctx.r8.s64 = 11335;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056344;
	sub_8813FDD8(ctx, base);
	// li r8,11336
	ctx.r8.s64 = 11336;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056360;
	sub_8813FDD8(ctx, base);
	// li r8,11337
	ctx.r8.s64 = 11337;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x8805637C;
	sub_8813FDD8(ctx, base);
	// li r8,11338
	ctx.r8.s64 = 11338;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056398;
	sub_8813FDD8(ctx, base);
	// li r8,11339
	ctx.r8.s64 = 11339;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,88
	ctx.r4.s64 = 88;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x880563B4;
	sub_8813FDD8(ctx, base);
	// li r8,11340
	ctx.r8.s64 = 11340;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880563D0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,88
	ctx.r31.s64 = 88;
loc_880563D8:
	// addi r11,r30,11341
	ctx.r11.s64 = ctx.r30.s64 + 11341;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8813fdd8
	ctx.lr = 0x880563F8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 248, ctx.xer);
	// blt cr6,0x880563d8
	if (ctx.cr6.lt) goto loc_880563D8;
	// li r8,11346
	ctx.r8.s64 = 11346;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056424;
	sub_8813FDD8(ctx, base);
	// li r8,11347
	ctx.r8.s64 = 11347;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056440;
	sub_8813FDD8(ctx, base);
	// li r8,11348
	ctx.r8.s64 = 11348;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x8805645C;
	sub_8813FDD8(ctx, base);
	// li r8,11349
	ctx.r8.s64 = 11349;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056478;
	sub_8813FDD8(ctx, base);
	// li r8,11350
	ctx.r8.s64 = 11350;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056494;
	sub_8813FDD8(ctx, base);
	// li r8,11351
	ctx.r8.s64 = 11351;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x880564B0;
	sub_8813FDD8(ctx, base);
	// li r8,11352
	ctx.r8.s64 = 11352;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x880564CC;
	sub_8813FDD8(ctx, base);
	// li r8,11353
	ctx.r8.s64 = 11353;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x880564E8;
	sub_8813FDD8(ctx, base);
	// li r8,11354
	ctx.r8.s64 = 11354;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056504;
	sub_8813FDD8(ctx, base);
	// li r8,11355
	ctx.r8.s64 = 11355;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,158
	ctx.r3.s64 = 158;
	// bl 0x8813fdd8
	ctx.lr = 0x88056520;
	sub_8813FDD8(ctx, base);
	// li r8,11356
	ctx.r8.s64 = 11356;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x8805653C;
	sub_8813FDD8(ctx, base);
	// li r8,11357
	ctx.r8.s64 = 11357;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88056558;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056560:
	// addi r11,r30,11358
	ctx.r11.s64 = ctx.r30.s64 + 11358;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,159
	ctx.r3.s64 = 159;
	// bl 0x8813fdd8
	ctx.lr = 0x88056580;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x88056560
	if (ctx.cr6.lt) goto loc_88056560;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056598:
	// addi r11,r30,11364
	ctx.r11.s64 = ctx.r30.s64 + 11364;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x880565B8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x88056598
	if (ctx.cr6.lt) goto loc_88056598;
	// li r8,11368
	ctx.r8.s64 = 11368;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x880565E4;
	sub_8813FDD8(ctx, base);
	// li r8,11369
	ctx.r8.s64 = 11369;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8813fdd8
	ctx.lr = 0x88056600;
	sub_8813FDD8(ctx, base);
	// li r8,11370
	ctx.r8.s64 = 11370;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x8805661C;
	sub_8813FDD8(ctx, base);
	// li r8,11371
	ctx.r8.s64 = 11371;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88056638;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_88056640:
	// addi r11,r30,11372
	ctx.r11.s64 = ctx.r30.s64 + 11372;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x88056660;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x88056640
	if (ctx.cr6.lt) goto loc_88056640;
	// li r8,11375
	ctx.r8.s64 = 11375;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x8805668C;
	sub_8813FDD8(ctx, base);
	// li r8,11376
	ctx.r8.s64 = 11376;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,161
	ctx.r3.s64 = 161;
	// bl 0x8813fdd8
	ctx.lr = 0x880566A8;
	sub_8813FDD8(ctx, base);
	// li r8,11377
	ctx.r8.s64 = 11377;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x880566C4;
	sub_8813FDD8(ctx, base);
	// li r8,11378
	ctx.r8.s64 = 11378;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x880566E0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_880566E8:
	// addi r11,r30,11379
	ctx.r11.s64 = ctx.r30.s64 + 11379;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88056708;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,184
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 184, ctx.xer);
	// blt cr6,0x880566e8
	if (ctx.cr6.lt) goto loc_880566E8;
	// li r8,11382
	ctx.r8.s64 = 11382;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,192
	ctx.r4.s64 = 192;
	// li r3,162
	ctx.r3.s64 = 162;
	// bl 0x8813fdd8
	ctx.lr = 0x88056734;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805673C:
	// addi r11,r30,11383
	ctx.r11.s64 = ctx.r30.s64 + 11383;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,163
	ctx.r3.s64 = 163;
	// bl 0x8813fdd8
	ctx.lr = 0x8805675C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x8805673c
	if (ctx.cr6.lt) goto loc_8805673C;
	// li r8,11388
	ctx.r8.s64 = 11388;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x88056788;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,48
	ctx.r31.s64 = 48;
loc_88056790:
	// addi r11,r30,11389
	ctx.r11.s64 = ctx.r30.s64 + 11389;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880567B0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,208
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 208, ctx.xer);
	// blt cr6,0x88056790
	if (ctx.cr6.lt) goto loc_88056790;
	// li r8,11393
	ctx.r8.s64 = 11393;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8813fdd8
	ctx.lr = 0x880567DC;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_880567E4:
	// addi r11,r30,11394
	ctx.r11.s64 = ctx.r30.s64 + 11394;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,165
	ctx.r3.s64 = 165;
	// bl 0x8813fdd8
	ctx.lr = 0x88056804;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x880567e4
	if (ctx.cr6.lt) goto loc_880567E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8805681C:
	// addi r11,r30,11402
	ctx.r11.s64 = ctx.r30.s64 + 11402;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x8805683C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,112
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 112, ctx.xer);
	// blt cr6,0x8805681c
	if (ctx.cr6.lt) goto loc_8805681C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,112
	ctx.r31.s64 = 112;
loc_88056854:
	// addi r11,r30,11404
	ctx.r11.s64 = ctx.r30.s64 + 11404;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056874;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,240
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 240, ctx.xer);
	// blt cr6,0x88056854
	if (ctx.cr6.lt) goto loc_88056854;
	// li r8,11406
	ctx.r8.s64 = 11406;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880568A0;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_880568A8:
	// addi r11,r30,11407
	ctx.r11.s64 = ctx.r30.s64 + 11407;
	// li r7,48
	ctx.r7.s64 = 48;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,40
	ctx.r5.s64 = 40;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880568C8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x880568a8
	if (ctx.cr6.lt) goto loc_880568A8;
	// li r8,11410
	ctx.r8.s64 = 11410;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880568F4;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,64
	ctx.r31.s64 = 64;
loc_880568FC:
	// addi r11,r30,11411
	ctx.r11.s64 = ctx.r30.s64 + 11411;
	// li r7,40
	ctx.r7.s64 = 40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,88
	ctx.r5.s64 = 88;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x8805691C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x880568fc
	if (ctx.cr6.lt) goto loc_880568FC;
	// li r8,11414
	ctx.r8.s64 = 11414;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056948;
	sub_8813FDD8(ctx, base);
	// li r8,11415
	ctx.r8.s64 = 11415;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056964;
	sub_8813FDD8(ctx, base);
	// li r8,11416
	ctx.r8.s64 = 11416;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056980;
	sub_8813FDD8(ctx, base);
	// li r8,11417
	ctx.r8.s64 = 11417;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x8805699C;
	sub_8813FDD8(ctx, base);
	// li r8,11418
	ctx.r8.s64 = 11418;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880569B8;
	sub_8813FDD8(ctx, base);
	// li r8,11419
	ctx.r8.s64 = 11419;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880569D4;
	sub_8813FDD8(ctx, base);
	// li r8,11420
	ctx.r8.s64 = 11420;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x880569F0;
	sub_8813FDD8(ctx, base);
	// li r8,11421
	ctx.r8.s64 = 11421;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056A0C;
	sub_8813FDD8(ctx, base);
	// li r8,11422
	ctx.r8.s64 = 11422;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056A28;
	sub_8813FDD8(ctx, base);
	// li r8,11423
	ctx.r8.s64 = 11423;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056A44;
	sub_8813FDD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,128
	ctx.r31.s64 = 128;
loc_88056A4C:
	// addi r11,r30,11424
	ctx.r11.s64 = ctx.r30.s64 + 11424;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,216
	ctx.r5.s64 = 216;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x8813fdd8
	ctx.lr = 0x88056A6C;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x88056a4c
	if (ctx.cr6.lt) goto loc_88056A4C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056A84:
	// addi r11,r30,11426
	ctx.r11.s64 = ctx.r30.s64 + 11426;
	// li r7,24
	ctx.r7.s64 = 24;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056AA4;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// blt cr6,0x88056a84
	if (ctx.cr6.lt) goto loc_88056A84;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r31,11430
	ctx.r31.s64 = 11430;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r29,2
	ctx.r29.s64 = 2;
	// ori r27,r11,65534
	ctx.r27.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65408
	ctx.r28.u64 = ctx.r10.u64 | 65408;
loc_88056AD0:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// clrlwi r26,r30,16
	ctx.r26.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056AF4;
	sub_8813FDD8(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,24
	ctx.r5.s64 = 24;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056B14;
	sub_8813FDD8(ctx, base);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// li r7,32
	ctx.r7.s64 = 32;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056B34;
	sub_8813FDD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x88056ad0
	if (!ctx.cr0.eq) goto loc_88056AD0;
	// li r8,11434
	ctx.r8.s64 = 11434;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056B60;
	sub_8813FDD8(ctx, base);
	// li r8,11435
	ctx.r8.s64 = 11435;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,167
	ctx.r3.s64 = 167;
	// bl 0x8813fdd8
	ctx.lr = 0x88056B7C;
	sub_8813FDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056B80:
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r31,11436
	ctx.r10.s64 = ctx.r31.s64 + 11436;
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r5,r9,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// rlwinm r4,r31,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xF0;
	// li r3,151
	ctx.r3.s64 = 151;
	// bl 0x8813fdd8
	ctx.lr = 0x88056BA8;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x88056b80
	if (ctx.cr6.lt) goto loc_88056B80;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056BB8:
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r31,11468
	ctx.r10.s64 = ctx.r31.s64 + 11468;
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// rlwinm r5,r9,4,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFF0;
	// rlwinm r4,r31,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xF0;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x8813fdd8
	ctx.lr = 0x88056BE0;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x88056bb8
	if (ctx.cr6.lt) goto loc_88056BB8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056BF0:
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r31,11500
	ctx.r10.s64 = ctx.r31.s64 + 11500;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,24
	ctx.r7.s64 = 24;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r5,r9,3,16,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFF8;
	// rlwinm r4,r31,5,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xE0;
	// li r3,171
	ctx.r3.s64 = 171;
	// bl 0x8813fdd8
	ctx.lr = 0x88056C20;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x88056bf0
	if (ctx.cr6.lt) goto loc_88056BF0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056C30:
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r31,11564
	ctx.r10.s64 = ctx.r31.s64 + 11564;
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r4,r31,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xF0;
	// li r3,153
	ctx.r3.s64 = 153;
	// bl 0x8813fdd8
	ctx.lr = 0x88056C58;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x88056c30
	if (ctx.cr6.lt) goto loc_88056C30;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88056C68:
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r31,11596
	ctx.r10.s64 = ctx.r31.s64 + 11596;
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r4,r31,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xF0;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8813fdd8
	ctx.lr = 0x88056C90;
	sub_8813FDD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x88056c68
	if (ctx.cr6.lt) goto loc_88056C68;
	// li r8,11628
	ctx.r8.s64 = 11628;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056CB8;
	sub_8813FDD8(ctx, base);
	// li r8,11629
	ctx.r8.s64 = 11629;
	// li r7,104
	ctx.r7.s64 = 104;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056CD4;
	sub_8813FDD8(ctx, base);
	// li r8,11630
	ctx.r8.s64 = 11630;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056CF0;
	sub_8813FDD8(ctx, base);
	// li r8,11631
	ctx.r8.s64 = 11631;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D0C;
	sub_8813FDD8(ctx, base);
	// li r8,11632
	ctx.r8.s64 = 11632;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D28;
	sub_8813FDD8(ctx, base);
	// li r8,11633
	ctx.r8.s64 = 11633;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D44;
	sub_8813FDD8(ctx, base);
	// li r8,11634
	ctx.r8.s64 = 11634;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D60;
	sub_8813FDD8(ctx, base);
	// li r8,11635
	ctx.r8.s64 = 11635;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D7C;
	sub_8813FDD8(ctx, base);
	// li r8,11636
	ctx.r8.s64 = 11636;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056D98;
	sub_8813FDD8(ctx, base);
	// li r8,11637
	ctx.r8.s64 = 11637;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056DB4;
	sub_8813FDD8(ctx, base);
	// li r8,11638
	ctx.r8.s64 = 11638;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056DD0;
	sub_8813FDD8(ctx, base);
	// li r8,11639
	ctx.r8.s64 = 11639;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,200
	ctx.r4.s64 = 200;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056DEC;
	sub_8813FDD8(ctx, base);
	// li r8,11640
	ctx.r8.s64 = 11640;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E08;
	sub_8813FDD8(ctx, base);
	// li r8,11641
	ctx.r8.s64 = 11641;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E24;
	sub_8813FDD8(ctx, base);
	// li r8,11642
	ctx.r8.s64 = 11642;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E40;
	sub_8813FDD8(ctx, base);
	// li r8,11643
	ctx.r8.s64 = 11643;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,136
	ctx.r4.s64 = 136;
	// li r3,173
	ctx.r3.s64 = 173;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E5C;
	sub_8813FDD8(ctx, base);
	// li r8,11644
	ctx.r8.s64 = 11644;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E78;
	sub_8813FDD8(ctx, base);
	// li r8,11645
	ctx.r8.s64 = 11645;
	// li r7,72
	ctx.r7.s64 = 72;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056E94;
	sub_8813FDD8(ctx, base);
	// li r8,11646
	ctx.r8.s64 = 11646;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,184
	ctx.r4.s64 = 184;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056EB0;
	sub_8813FDD8(ctx, base);
	// li r8,11647
	ctx.r8.s64 = 11647;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056ECC;
	sub_8813FDD8(ctx, base);
	// li r8,11648
	ctx.r8.s64 = 11648;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056EE8;
	sub_8813FDD8(ctx, base);
	// li r8,11649
	ctx.r8.s64 = 11649;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056F04;
	sub_8813FDD8(ctx, base);
	// li r8,11650
	ctx.r8.s64 = 11650;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056F20;
	sub_8813FDD8(ctx, base);
	// li r8,11651
	ctx.r8.s64 = 11651;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,168
	ctx.r4.s64 = 168;
	// li r3,174
	ctx.r3.s64 = 174;
	// bl 0x8813fdd8
	ctx.lr = 0x88056F3C;
	sub_8813FDD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806CFB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r5,4264
	ctx.r5.s64 = 4264;
	// addi r3,r11,26144
	ctx.r3.s64 = ctx.r11.s64 + 26144;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8813fa58
	sub_8813FA58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806CFD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// addi r10,r11,26144
	ctx.r10.s64 = ctx.r11.s64 + 26144;
	// lwz r3,4256(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4256);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806D070) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8806D438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8806D440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-30608
	ctx.r29.s64 = -2005925888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r29,30408
	ctx.r28.s64 = ctx.r29.s64 + 30408;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813fa58
	ctx.lr = 0x8806D464;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,30408(r29)
	REX_STORE_U32(ctx.r29.u32 + 30408, ctx.r31.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x88068e78
	ctx.lr = 0x8806D480;
	sub_88068E78(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// addi r9,r11,26144
	ctx.r9.s64 = ctx.r11.s64 + 26144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// lis r8,-30713
	ctx.r8.s64 = -2012807168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-12160
	ctx.r4.s64 = ctx.r8.s64 + -12160;
	// stw r11,4256(r9)
	REX_STORE_U32(ctx.r9.u32 + 4256, ctx.r11.u32);
	// bl 0x8801b478
	ctx.lr = 0x8806D4AC;
	sub_8801B478(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806D6E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8806D6F0;
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
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8806d7d0
	if (ctx.cr6.lt) goto loc_8806D7D0;
	// beq cr6,0x8806d7a4
	if (ctx.cr6.eq) goto loc_8806D7A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8806d840
	if (!ctx.cr6.lt) goto loc_8806D840;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806d76c
	if (!ctx.cr0.lt) goto loc_8806D76C;
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
	// ble cr6,0x8806d778
	if (!ctx.cr6.gt) goto loc_8806D778;
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88067710
	ctx.lr = 0x8806D75C;
	sub_88067710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8801b368
	ctx.lr = 0x8806D764;
	sub_8801B368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8806D76C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d840
	if (ctx.cr6.eq) goto loc_8806D840;
loc_8806D778:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
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
	// bl 0x88067710
	ctx.lr = 0x8806D7A0;
	sub_88067710(ctx, base);
	// b 0x8806d840
	goto loc_8806D840;
loc_8806D7A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8806d840
	if (ctx.cr6.lt) goto loc_8806D840;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8806d83c
	goto loc_8806D83C;
loc_8806D7D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x8806d840
	if (!ctx.cr0.lt) goto loc_8806D840;
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
	// bgt 0x8806d82c
	if (ctx.cr0.gt) goto loc_8806D82C;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,272
	ctx.r10.s64 = 272;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x88027210
	ctx.lr = 0x8806D828;
	sub_88027210(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_8806D82C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8806d840
	if (ctx.cr6.gt) goto loc_8806D840;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8806D83C:
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8806D840:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8806D844:
	// li r6,242
	ctx.r6.s64 = 242;
	// rlwinm r5,r30,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r30,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x8806D858;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8806D874;
	sub_8813FF90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8813ff48
	ctx.lr = 0x8806D880;
	sub_8813FF48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813ff28
	ctx.lr = 0x8806D88C;
	sub_8813FF28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x8806d844
	if (ctx.cr6.lt) goto loc_8806D844;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,242
	ctx.r6.s64 = 242;
	// lis r5,180
	ctx.r5.s64 = 11796480;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// addi r3,r11,922
	ctx.r3.s64 = ctx.r11.s64 + 922;
	// bl 0x8801a9c8
	ctx.lr = 0x8806D8B0;
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
	ctx.lr = 0x8806D8C8;
	sub_8813FF90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806F908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8806F910;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8801a448
	ctx.lr = 0x8806F924;
	sub_8801A448(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a448
	ctx.lr = 0x8806F93C;
	sub_8801A448(ctx, base);
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r11,r9,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a448
	ctx.lr = 0x8806F954;
	sub_8801A448(ctx, base);
	// lwz r8,92(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// addi r28,r3,312
	ctx.r28.s64 = ctx.r3.s64 + 312;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8806f970
	if (ctx.cr6.eq) goto loc_8806F970;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x8801a448
	ctx.lr = 0x8806F96C;
	sub_8801A448(ctx, base);
	// addi r28,r3,184
	ctx.r28.s64 = ctx.r3.s64 + 184;
loc_8806F970:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x8806F980;
	sub_880244D0(ctx, base);
	// lwz r11,332(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 332);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8807000c
	if (ctx.cr6.lt) goto loc_8807000C;
	// beq cr6,0x8806ff04
	if (ctx.cr6.eq) goto loc_8806FF04;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88070054
	if (!ctx.cr6.lt) goto loc_88070054;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806F9C0;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806F9E4;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FA08;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FA2C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FA50;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FA74;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FA98;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FABC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FAE0;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FB04;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FB28;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,21
	ctx.r9.s64 = 21;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,-8
	ctx.r6.s64 = -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FB4C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,21
	ctx.r9.s64 = 21;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,-6
	ctx.r6.s64 = -6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FB70;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,21
	ctx.r9.s64 = 21;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,-4
	ctx.r6.s64 = -4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FB94;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,-2
	ctx.r6.s64 = -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FBB8;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,19
	ctx.r9.s64 = 19;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FBDC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FC00;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FC24;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FC48;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FC6C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FC90;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FCB4;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// li r6,-28
	ctx.r6.s64 = -28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FCD8;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-29
	ctx.r6.s64 = -29;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FCFC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-30
	ctx.r6.s64 = -30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FD20;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-31
	ctx.r6.s64 = -31;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FD44;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-32
	ctx.r6.s64 = -32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FD68;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-33
	ctx.r6.s64 = -33;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FD8C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-34
	ctx.r6.s64 = -34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FDB0;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-35
	ctx.r6.s64 = -35;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FDD4;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-36
	ctx.r6.s64 = -36;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FDF8;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-37
	ctx.r6.s64 = -37;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FE1C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-38
	ctx.r6.s64 = -38;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FE40;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-39
	ctx.r6.s64 = -39;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FE64;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-40
	ctx.r6.s64 = -40;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FE88;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-41
	ctx.r6.s64 = -41;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FEAC;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-42
	ctx.r6.s64 = -42;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FED0;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-43
	ctx.r6.s64 = -43;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FEF4;
	sub_88013CE0(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-44
	ctx.r6.s64 = -44;
	// b 0x8807003c
	goto loc_8807003C;
loc_8806FF04:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,-3
	ctx.r6.s64 = -3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FF24;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FF48;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FF6C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FF90;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FFB4;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FFD8;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x8806FFFC;
	sub_88013CE0(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r28,8
	ctx.r7.s64 = ctx.r28.s64 + 8;
	// li r6,-30
	ctx.r6.s64 = -30;
	// b 0x8807003c
	goto loc_8807003C;
loc_8807000C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x88070030;
	sub_88013CE0(ctx, base);
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// li r8,13
	ctx.r8.s64 = 13;
	// li r6,-50
	ctx.r6.s64 = -50;
loc_8807003C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x88013ce0
	ctx.lr = 0x88070054;
	sub_88013CE0(ctx, base);
loc_88070054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880750B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880750D4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x880750E8;
	sub_8813FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x88024030
	ctx.lr = 0x88075100;
	sub_88024030(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880221d0
	ctx.lr = 0x88075120;
	sub_880221D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_88075710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88075718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88075728;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x88075730;
	sub_88023F40(ctx, base);
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88075740;
	sub_8813FA58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x88075748;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8807574C;
	sub_88068E60(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88075760;
	sub_88024118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// bl 0x88024028
	ctx.lr = 0x8807576C;
	sub_88024028(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x88075780;
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
	ctx.lr = 0x88075794;
	sub_88024DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880247e8
	ctx.lr = 0x8807579C;
	sub_880247E8(ctx, base);
	// bl 0x88068e78
	ctx.lr = 0x880757A0;
	sub_88068E78(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r9,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,21852(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r7,r10,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r6,r7,36
	ctx.xer.ca = ctx.r7.u32 <= 36;
	ctx.r6.u64 = static_cast<uint64_t>(36) - ctx.r7.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r6,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// bl 0x880750b8
	ctx.lr = 0x880757E0;
	sub_880750B8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r5,-30713
	ctx.r5.s64 = -2012807168;
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// stw r31,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r5,19600
	ctx.r9.s64 = ctx.r5.s64 + 19600;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// sth r10,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r10.u16);
	// lis r8,-30713
	ctx.r8.s64 = -2012807168;
	// sth r10,112(r31)
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r10.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r4,r8,21800
	ctx.r4.s64 = ctx.r8.s64 + 21800;
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r9,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r7,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// stw r6,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// bl 0x88023e90
	ctx.lr = 0x88075830;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88075840;
	sub_8813FA58(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88022730
	ctx.lr = 0x88075850;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x88022b68
	ctx.lr = 0x8807585C;
	sub_88022B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88076738) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88076740;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807674C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88074ea0
	ctx.lr = 0x8807675C;
	sub_88074EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880768a8
	if (ctx.cr6.eq) goto loc_880768A8;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807689c
	if (!ctx.cr6.eq) goto loc_8807689C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88076788;
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
	ctx.lr = 0x880767B4;
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
	// bne cr6,0x88076870
	if (!ctx.cr6.eq) goto loc_88076870;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt 0x88076870
	if (ctx.cr0.gt) goto loc_88076870;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x880244d0
	ctx.lr = 0x880767F0;
	sub_880244D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88076870
	if (ctx.cr6.lt) goto loc_88076870;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88076870
	if (!ctx.cr6.eq) goto loc_88076870;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x8807684C;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88076870
	if (ctx.cr6.eq) goto loc_88076870;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88074c28
	ctx.lr = 0x88076870;
	sub_88074C28(ctx, base);
loc_88076870:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880244d0
	ctx.lr = 0x88076880;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8807689c
	if (ctx.cr6.lt) goto loc_8807689C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88076894;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8807689C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88074f88
	ctx.lr = 0x880768A8;
	sub_88074F88(ctx, base);
loc_880768A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88078450) {
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
	ctx.lr = 0x88078474;
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
	// stw r30,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r30.u32);
	// stw r5,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
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

DEFINE_REX_FUNC(sub_88079518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88079520;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88024030
	ctx.lr = 0x88079538;
	sub_88024030(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88079744
	if (!ctx.cr6.gt) goto loc_88079744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880236a8
	ctx.lr = 0x88079558;
	sub_880236A8(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88079744
	if (!ctx.cr6.eq) goto loc_88079744;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bgt 0x88079744
	if (ctx.cr0.gt) goto loc_88079744;
	// bl 0x880b1a10
	ctx.lr = 0x8807957C;
	sub_880B1A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88079588;
	sub_88022A88(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88079598;
	sub_88024DE8(ctx, base);
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x880795B0;
	sub_880A84F0(ctx, base);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x880795BC;
	sub_880A8638(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// lwz r27,36(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8801a448
	ctx.lr = 0x880795C8;
	sub_8801A448(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880795D8;
	sub_880A85C0(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x880795E4;
	sub_880A8668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8801a448
	ctx.lr = 0x880795F0;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880795fc
	if (ctx.cr6.eq) goto loc_880795FC;
	// li r29,2
	ctx.r29.s64 = 2;
loc_880795FC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a99a8
	ctx.lr = 0x88079610;
	sub_880A99A8(ctx, base);
	// addi r6,r28,-2
	ctx.r6.s64 = ctx.r28.s64 + -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880abb48
	ctx.lr = 0x88079624;
	sub_880ABB48(ctx, base);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x880a8620
	ctx.lr = 0x8807962C;
	sub_880A8620(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024178
	ctx.lr = 0x8807963C;
	sub_88024178(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88079654
	if (ctx.cr6.lt) goto loc_88079654;
	// beq cr6,0x880796bc
	if (ctx.cr6.eq) goto loc_880796BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880796a8
	if (!ctx.cr6.lt) goto loc_880796A8;
loc_88079654:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880796a8
	if (!ctx.cr6.eq) goto loc_880796A8;
	// addi r6,r28,-1
	ctx.r6.s64 = ctx.r28.s64 + -1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880111c0
	ctx.lr = 0x88079674;
	sub_880111C0(ctx, base);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x88011ae8
	ctx.lr = 0x8807967C;
	sub_88011AE8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024750
	ctx.lr = 0x88079684;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x88011728
	ctx.lr = 0x880796A8;
	sub_88011728(ctx, base);
loc_880796A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x880796B0;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880796BC:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880796a8
	if (!ctx.cr6.eq) goto loc_880796A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880796D0;
	sub_88024748(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// divwu r29,r3,r11
	ctx.r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x880796e4
	if (!ctx.cr6.gt) goto loc_880796E4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_880796E4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880796a8
	if (!ctx.cr6.gt) goto loc_880796A8;
loc_880796F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880796F8;
	sub_88024748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88079704;
	sub_88024068(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x88011310
	ctx.lr = 0x88079724;
	sub_88011310(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x880796f0
	if (ctx.cr6.lt) goto loc_880796F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x88079738;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88079744:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C1B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x8807C1C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8807C1D4;
	sub_88023F40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024030
	ctx.lr = 0x8807C1E0;
	sub_88024030(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,24(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// sth r11,100(r27)
	REX_STORE_U16(ctx.r27.u32 + 100, ctx.r11.u16);
	// li r3,63
	ctx.r3.s64 = 63;
	// lwz r30,28(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x8801a448
	ctx.lr = 0x8807C1FC;
	sub_8801A448(ctx, base);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8801a448
	ctx.lr = 0x8807C208;
	sub_8801A448(ctx, base);
	// addic. r11,r3,-7
	ctx.xer.ca = ctx.r3.u32 > 6;
	ctx.r11.s64 = ctx.r3.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// blt 0x8807c218
	if (ctx.cr0.lt) goto loc_8807C218;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
loc_8807C218:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x880a84f0
	ctx.lr = 0x8807C22C;
	sub_880A84F0(ctx, base);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8807C240;
	sub_880A85C0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x880a8668
	ctx.lr = 0x8807C24C;
	sub_880A8668(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x880a84f0
	ctx.lr = 0x8807C260;
	sub_880A84F0(ctx, base);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,26
	ctx.r4.s64 = 26;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8807C270;
	sub_880A85C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880a84f0
	ctx.lr = 0x8807C284;
	sub_880A84F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x8807C294;
	sub_880A85C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x8807C2A0;
	sub_880A8620(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a84f0
	ctx.lr = 0x8807C2B4;
	sub_880A84F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x8807C2C0;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x880a85c0
	ctx.lr = 0x8807C2D0;
	sub_880A85C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880a8620
	ctx.lr = 0x8807C2DC;
	sub_880A8620(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x880a8668
	ctx.lr = 0x8807C2E8;
	sub_880A8668(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a84f0
	ctx.lr = 0x8807C2FC;
	sub_880A84F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x8807C308;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880a85c0
	ctx.lr = 0x8807C318;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x880a8620
	ctx.lr = 0x8807C324;
	sub_880A8620(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x8807C330;
	sub_880A8668(ctx, base);
	// lwz r11,11544(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 11544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807c3d8
	if (!ctx.cr6.eq) goto loc_8807C3D8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024750
	ctx.lr = 0x8807C344;
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x8807C368;
	sub_88011728(ctx, base);
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807c408
	if (!ctx.cr6.eq) goto loc_8807C408;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88024590
	ctx.lr = 0x8807C388;
	sub_88024590(ctx, base);
	// bl 0x880696c8
	ctx.lr = 0x8807C38C;
	sub_880696C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8807c408
	if (ctx.cr6.eq) goto loc_8807C408;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8801a448
	ctx.lr = 0x8807C39C;
	sub_8801A448(ctx, base);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,-16
	ctx.r6.s64 = -16;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r7,r9,23
	ctx.r7.u64 = ctx.r9.u32 & 0x1FF;
	// li r3,18
	ctx.r3.s64 = 18;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,-1
	ctx.r10.s64 = -1;
	// bl 0x88014188
	ctx.lr = 0x8807C3D0;
	sub_88014188(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
loc_8807C3D8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// divwu r10,r23,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r23.u32 / ctx.r11.u32 : 0);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880114d8
	ctx.lr = 0x8807C408;
	sub_880114D8(ctx, base);
loc_8807C408:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880818F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88081900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880819a4
	if (!ctx.cr6.gt) goto loc_880819A4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88081928;
	sub_880236A8(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880819a4
	if (!ctx.cr6.eq) goto loc_880819A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt 0x880819a4
	if (ctx.cr0.gt) goto loc_880819A4;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x88012f38
	ctx.lr = 0x88081954;
	sub_88012F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88081960;
	sub_88022A88(ctx, base);
	// li r5,27540
	ctx.r5.s64 = 27540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88081970;
	sub_88024DE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r30,200(r31)
	REX_STORE_U16(ctx.r31.u32 + 200, ctx.r30.u16);
	// sth r30,280(r31)
	REX_STORE_U16(ctx.r31.u32 + 280, ctx.r30.u16);
	// bl 0x880b3e08
	ctx.lr = 0x88081980;
	sub_880B3E08(ctx, base);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// ori r9,r11,32896
	ctx.r9.u64 = ctx.r11.u64 | 32896;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880819A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88083218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88083220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8808345c
	if (!ctx.cr6.gt) goto loc_8808345C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x88083248;
	sub_880236A8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808345c
	if (!ctx.cr6.eq) goto loc_8808345C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt 0x8808345c
	if (ctx.cr0.gt) goto loc_8808345C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024030
	ctx.lr = 0x88083270;
	sub_88024030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880b1a10
	ctx.lr = 0x88083278;
	sub_880B1A10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x88083284;
	sub_88022A88(ctx, base);
	// li r5,620
	ctx.r5.s64 = 620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x88083294;
	sub_88024DE8(ctx, base);
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
	ctx.lr = 0x880832AC;
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
	ctx.lr = 0x880832C0;
	sub_880A99A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,23
	ctx.r3.s64 = 23;
	// addis r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 131072;
	// bl 0x880a84f0
	ctx.lr = 0x880832D8;
	sub_880A84F0(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x880a8638
	ctx.lr = 0x880832E0;
	sub_880A8638(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,10
	ctx.r3.s64 = 10;
	// addis r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 786432;
	// bl 0x880a84f0
	ctx.lr = 0x880832F8;
	sub_880A84F0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a8620
	ctx.lr = 0x88083304;
	sub_880A8620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x880a8668
	ctx.lr = 0x88083310;
	sub_880A8668(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x88083318;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88083328;
	sub_880A85C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88083330;
	sub_88024068(ctx, base);
	// addi r6,r3,-2
	ctx.r6.s64 = ctx.r3.s64 + -2;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880abb48
	ctx.lr = 0x88083344;
	sub_880ABB48(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x880a8620
	ctx.lr = 0x8808334C;
	sub_880A8620(ctx, base);
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88083398
	if (!ctx.cr6.eq) goto loc_88083398;
	// bl 0x88024750
	ctx.lr = 0x88083360;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x88011728
	ctx.lr = 0x88083384;
	sub_88011728(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x8808338C;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88083398:
	// bl 0x88024748
	ctx.lr = 0x8808339C;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880833AC;
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
	ctx.lr = 0x880833D8;
	sub_880114D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x880833E0;
	sub_88024748(ctx, base);
	// li r9,200
	ctx.r9.s64 = 200;
	// divwu r29,r3,r9
	ctx.r29.u64 = uint32_t(ctx.r9.u32 ? ctx.r3.u32 / ctx.r9.u32 : 0);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x880833f4
	if (!ctx.cr6.gt) goto loc_880833F4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_880833F4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88083448
	if (!ctx.cr6.gt) goto loc_88083448;
loc_88083400:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88083408;
	sub_88024748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024068
	ctx.lr = 0x88083414;
	sub_88024068(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,24
	ctx.r8.s64 = 24;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x88011310
	ctx.lr = 0x88083434;
	sub_88011310(ctx, base);
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x88011ae8
	ctx.lr = 0x8808343C;
	sub_88011AE8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88083400
	if (ctx.cr6.lt) goto loc_88083400;
loc_88083448:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88023f48
	ctx.lr = 0x88083450;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8808345C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88084C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88084C88;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,352
	ctx.r4.s64 = 352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88084C98;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88084CA0;
	sub_88023F40(ctx, base);
	// li r5,352
	ctx.r5.s64 = 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88084CB0;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88084CB8;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88084CBC;
	sub_88068E60(ctx, base);
	// stw r3,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88084CD0;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// bl 0x88024028
	ctx.lr = 0x88084CDC;
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
	ctx.lr = 0x88084CF4;
	sub_880240B8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r28.u32);
	// bl 0x880240e0
	ctx.lr = 0x88084D04;
	sub_880240E0(ctx, base);
	// stw r3,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88084D10;
	sub_88024030(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,64
	ctx.r24.s64 = 64;
	// li r8,4
	ctx.r8.s64 = 4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r10,21852(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r5,r6,80
	ctx.xer.ca = ctx.r6.u32 <= 80;
	ctx.r5.u64 = static_cast<uint64_t>(80) - ctx.r6.u64;
	// stw r5,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r10,21852(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r10,r4,128
	ctx.xer.ca = ctx.r4.u32 <= 128;
	ctx.r10.u64 = static_cast<uint64_t>(128) - ctx.r4.u64;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r29,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r24,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bne cr6,0x88084d70
	if (!ctx.cr6.eq) goto loc_88084D70;
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// subfic r10,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_88084D70:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// li r10,79
	ctx.r10.s64 = 79;
	// li r25,16
	ctx.r25.s64 = 16;
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r10,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r25.u32);
	// bl 0x88023c50
	ctx.lr = 0x88084D94;
	sub_88023C50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// bl 0x880244d0
	ctx.lr = 0x88084DB8;
	sub_880244D0(ctx, base);
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// lis r4,-30712
	ctx.r4.s64 = -2012741632;
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lis r5,-30712
	ctx.r5.s64 = -2012741632;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r11,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lis r26,120
	ctx.r26.s64 = 7864320;
	// stw r11,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r23,r4,17576
	ctx.r23.s64 = ctx.r4.s64 + 17576;
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r5,r5,17576
	ctx.r5.s64 = ctx.r5.s64 + 17576;
	// stw r28,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lis r4,-30712
	ctx.r4.s64 = -2012741632;
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r4,r4,17960
	ctx.r4.s64 = ctx.r4.s64 + 17960;
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r28,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r26,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// sth r28,160(r31)
	REX_STORE_U16(ctx.r31.u32 + 160, ctx.r28.u16);
	// sth r29,164(r31)
	REX_STORE_U16(ctx.r31.u32 + 164, ctx.r29.u16);
	// stw r7,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// stw r6,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// stw r10,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r10,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r10,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r29,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// sth r28,240(r31)
	REX_STORE_U16(ctx.r31.u32 + 240, ctx.r28.u16);
	// sth r29,244(r31)
	REX_STORE_U16(ctx.r31.u32 + 244, ctx.r29.u16);
	// stw r7,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r7.u32);
	// stw r6,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// stw r29,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r5,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r30,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r23,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r23.u32);
	// stw r30,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r25,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r24,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// bl 0x88023e90
	ctx.lr = 0x88084E8C;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x88084E9C;
	sub_8813FA58(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88084EAC;
	sub_88022730(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x88022b68
	ctx.lr = 0x88084EB8;
	sub_88022B68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88086F48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88086F50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
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
	// blt cr6,0x88087014
	if (ctx.cr6.lt) goto loc_88087014;
	// beq cr6,0x88086fe8
	if (ctx.cr6.eq) goto loc_88086FE8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88087030
	if (!ctx.cr6.lt) goto loc_88087030;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,-2
	ctx.r6.s64 = ctx.r29.s64 + -2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88014578
	ctx.lr = 0x88086FB4;
	sub_88014578(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r29,-6
	ctx.r6.s64 = ctx.r29.s64 + -6;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x88014578
	ctx.lr = 0x88086FE0;
	sub_88014578(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88086FE8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x88013ce0
	ctx.lr = 0x8808700C;
	sub_88013CE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_88087014:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x88013940
	ctx.lr = 0x88087030;
	sub_88013940(ctx, base);
loc_88087030:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88087E80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88087E88;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880247e8
	ctx.lr = 0x88087E94;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x88069270
	ctx.lr = 0x88087EA4;
	sub_88069270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// blt cr6,0x88087ed8
	if (ctx.cr6.lt) goto loc_88087ED8;
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bgt cr6,0x88087ed8
	if (ctx.cr6.gt) goto loc_88087ED8;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11972(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11972);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88087ed8
	if (!ctx.cr6.eq) goto loc_88087ED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x88087ED0;
	sub_88023F48(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88087ED8:
	// li r4,292
	ctx.r4.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023e98
	ctx.lr = 0x88087EE4;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88087EEC;
	sub_88023F40(ctx, base);
	// li r5,292
	ctx.r5.s64 = 292;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88087EFC;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88087F04;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88087F08;
	sub_88068E60(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024028
	ctx.lr = 0x88087F1C;
	sub_88024028(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x88087F34;
	sub_880240B8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r11,-30712
	ctx.r11.s64 = -2012741632;
	// stw r26,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23232
	ctx.r4.s64 = ctx.r11.s64 + 23232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024dd0
	ctx.lr = 0x88087F50;
	sub_88024DD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240e0
	ctx.lr = 0x88087F58;
	sub_880240E0(ctx, base);
	// stw r3,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88087F64;
	sub_88024030(ctx, base);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// li r8,80
	ctx.r8.s64 = 80;
	// lwz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r7,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// rlwinm r8,r4,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r5,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// subfic r6,r8,80
	ctx.xer.ca = ctx.r8.u32 <= 80;
	ctx.r6.u64 = static_cast<uint64_t>(80) - ctx.r8.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r6,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// blt cr6,0x88088034
	if (ctx.cr6.lt) goto loc_88088034;
	// beq cr6,0x88087ffc
	if (ctx.cr6.eq) goto loc_88087FFC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8808803c
	if (!ctx.cr6.lt) goto loc_8808803C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// li r5,3328
	ctx.r5.s64 = 3328;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// subfic r4,r6,88
	ctx.xer.ca = ctx.r6.u32 <= 88;
	ctx.r4.u64 = static_cast<uint64_t>(88) - ctx.r6.u64;
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// b 0x8808803c
	goto loc_8808803C;
loc_88087FFC:
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// rlwinm r5,r8,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// li r4,3840
	ctx.r4.s64 = 3840;
	// stw r6,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// subfic r3,r5,88
	ctx.xer.ca = ctx.r5.u32 <= 88;
	ctx.r3.u64 = static_cast<uint64_t>(88) - ctx.r5.u64;
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// b 0x8808803c
	goto loc_8808803C;
loc_88088034:
	// li r11,3328
	ctx.r11.s64 = 3328;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8808803C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-30712
	ctx.r9.s64 = -2012741632;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lis r6,-30712
	ctx.r6.s64 = -2012741632;
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// lis r28,24
	ctx.r28.s64 = 1572864;
	// sth r26,104(r31)
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r26.u16);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// sth r29,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r29.u16);
	// addi r9,r9,29120
	ctx.r9.s64 = ctx.r9.s64 + 29120;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// addi r6,r6,29120
	ctx.r6.s64 = ctx.r6.s64 + 29120;
	// stw r5,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// stw r10,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// stw r28,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stw r29,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// sth r26,184(r31)
	REX_STORE_U16(ctx.r31.u32 + 184, ctx.r26.u16);
	// sth r29,188(r31)
	REX_STORE_U16(ctx.r31.u32 + 188, ctx.r29.u16);
	// stw r8,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// stw r10,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r28,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
	// stw r28,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
	// stw r11,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r7,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// stw r29,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stw r9,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// stw r31,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r31.u32);
	// stw r6,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r6.u32);
	// stw r31,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r31.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880880D8;
	sub_8813FA58(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// bl 0x880221d0
	ctx.lr = 0x88088108;
	sub_880221D0(ctx, base);
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// bl 0x880221d0
	ctx.lr = 0x88088138;
	sub_880221D0(ctx, base);
	// lis r5,-30712
	ctx.r5.s64 = -2012741632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,29304
	ctx.r4.s64 = ctx.r5.s64 + 29304;
	// bl 0x88023e90
	ctx.lr = 0x88088148;
	sub_88023E90(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8813fa58
	ctx.lr = 0x88088158;
	sub_8813FA58(ctx, base);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88022730
	ctx.lr = 0x88088168;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808A0F0) {
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
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8808A10C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808a12c
	if (ctx.cr6.eq) goto loc_8808A12C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x8808a10c
	if (ctx.cr6.lt) goto loc_8808A10C;
	// b 0x8808a1a0
	goto loc_8808A1A0;
loc_8808A12C:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,14393
	ctx.r9.s64 = 14393;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x8801a448
	ctx.lr = 0x8808A154;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8808a16c
	if (ctx.cr6.eq) goto loc_8808A16C;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,14409
	ctx.r10.s64 = 14409;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8808A16C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8801a448
	ctx.lr = 0x8808A174;
	sub_8801A448(ctx, base);
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// li r3,40
	ctx.r3.s64 = 40;
	// rlwinm r10,r11,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF80000;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8808A188;
	sub_8801A448(ctx, base);
	// rlwinm r9,r3,19,0,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 19) & 0xFFF80000;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8808A1A0:
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

DEFINE_REX_FUNC(sub_8808A710) {
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
	ctx.lr = 0x8808A72C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88024438
	ctx.lr = 0x8808A73C;
	sub_88024438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88024460
	ctx.lr = 0x8808A754;
	sub_88024460(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-224
	ctx.r8.s64 = -14680064;
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8808a778
	if (!ctx.cr6.lt) goto loc_8808A778;
	// bl 0x88023f48
	ctx.lr = 0x8808A774;
	sub_88023F48(ctx, base);
	// b 0x8808a84c
	goto loc_8808A84C;
loc_8808A778:
	// bl 0x88024110
	ctx.lr = 0x8808A77C;
	sub_88024110(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// li r6,65
	ctx.r6.s64 = 65;
	// bne cr6,0x8808a7d8
	if (!ctx.cr6.eq) goto loc_8808A7D8;
	// li r3,14441
	ctx.r3.s64 = 14441;
	// bl 0x8801a9c8
	ctx.lr = 0x8808A798;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808A7B0;
	sub_8813FF90(ctx, base);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// bl 0x8813ff48
	ctx.lr = 0x8808A7C0;
	sub_8813FF48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,14442
	ctx.r3.s64 = 14442;
	// addis r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 1310720;
	// addis r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 4194304;
	// b 0x8808a81c
	goto loc_8808A81C;
loc_8808A7D8:
	// li r3,14444
	ctx.r3.s64 = 14444;
	// bl 0x8801a9c8
	ctx.lr = 0x8808A7E0;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808A7F8;
	sub_8813FF90(ctx, base);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// bl 0x8813ff48
	ctx.lr = 0x8808A808;
	sub_8813FF48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,14443
	ctx.r3.s64 = 14443;
	// addis r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -262144;
	// addis r4,r10,-56
	ctx.r4.s64 = ctx.r10.s64 + -3670016;
loc_8808A81C:
	// li r6,65
	ctx.r6.s64 = 65;
	// bl 0x8801a9c8
	ctx.lr = 0x8808A824;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x8808A83C;
	sub_8813FF90(ctx, base);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// bl 0x8813ff48
	ctx.lr = 0x8808A84C;
	sub_8813FF48(ctx, base);
loc_8808A84C:
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

DEFINE_REX_FUNC(sub_8808B170) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,428(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 428);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8808b22c
	if (ctx.cr6.lt) goto loc_8808B22C;
	// beq cr6,0x8808b1ec
	if (ctx.cr6.eq) goto loc_8808B1EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8808b268
	if (!ctx.cr6.lt) goto loc_8808B268;
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8808b1d4
	if (!ctx.cr6.gt) goto loc_8808B1D4;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// bl 0x88013ce0
	ctx.lr = 0x8808B1CC;
	sub_88013CE0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B1D4:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r6,r6,-10
	ctx.r6.s64 = ctx.r6.s64 + -10;
	// bl 0x88013ce0
	ctx.lr = 0x8808B1E4;
	sub_88013CE0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B1EC:
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8808b214
	if (!ctx.cr6.gt) goto loc_8808B214;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bl 0x88013ce0
	ctx.lr = 0x8808B20C;
	sub_88013CE0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B214:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r6,r6,10
	ctx.r6.s64 = ctx.r6.s64 + 10;
	// bl 0x88013ce0
	ctx.lr = 0x8808B224;
	sub_88013CE0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B22C:
	// lwz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8808b250
	if (!ctx.cr6.gt) goto loc_8808B250;
	// li r9,42
	ctx.r9.s64 = 42;
	// li r8,12
	ctx.r8.s64 = 12;
	// bl 0x88013ce0
	ctx.lr = 0x8808B248;
	sub_88013CE0(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B250:
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// bl 0x88013ce0
	ctx.lr = 0x8808B260;
	sub_88013CE0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8808b26c
	goto loc_8808B26C;
loc_8808B268:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8808B26C:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8808D6B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8808D6C0;
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
	// ble cr6,0x8808d760
	if (!ctx.cr6.gt) goto loc_8808D760;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880236a8
	ctx.lr = 0x8808D6E8;
	sub_880236A8(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8808d760
	if (!ctx.cr6.eq) goto loc_8808D760;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bgt 0x8808d760
	if (ctx.cr0.gt) goto loc_8808D760;
	// bl 0x880b1e10
	ctx.lr = 0x8808D70C;
	sub_880B1E10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022a88
	ctx.lr = 0x8808D718;
	sub_88022A88(ctx, base);
	// li r5,2940
	ctx.r5.s64 = 2940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024de8
	ctx.lr = 0x8808D728;
	sub_88024DE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,672(r31)
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// li r9,121
	ctx.r9.s64 = 121;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,680(r31)
	REX_STORE_U16(ctx.r31.u32 + 680, ctx.r11.u16);
	// sth r11,760(r31)
	REX_STORE_U16(ctx.r31.u32 + 760, ctx.r11.u16);
	// sth r11,840(r31)
	REX_STORE_U16(ctx.r31.u32 + 840, ctx.r11.u16);
	// sth r11,920(r31)
	REX_STORE_U16(ctx.r31.u32 + 920, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8808D760:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808FAB0) {
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
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88024758
	ctx.lr = 0x8808FAE0;
	sub_88024758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8808fb20
	if (!ctx.cr6.eq) goto loc_8808FB20;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8808fb08
	if (!ctx.cr6.eq) goto loc_8808FB08;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// blt cr6,0x8808fb28
	if (ctx.cr6.lt) goto loc_8808FB28;
loc_8808FB08:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x8808FB10;
	sub_88022BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x8808FB18;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8808fbac
	goto loc_8808FBAC;
loc_8808FB20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_8808FB28:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// lhz r10,138(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 138);
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8808fb5c
	if (ctx.cr6.eq) goto loc_8808FB5C;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
loc_8808FB5C:
	// lhz r10,82(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8808fb7c
	if (ctx.cr6.eq) goto loc_8808FB7C;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,82(r11)
	REX_STORE_U16(ctx.r11.u32 + 82, ctx.r9.u16);
	// b 0x8808fb84
	goto loc_8808FB84;
loc_8808FB7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808fba8
	if (ctx.cr6.eq) goto loc_8808FBA8;
loc_8808FB84:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// beq cr6,0x8808fba8
	if (ctx.cr6.eq) goto loc_8808FBA8;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// stw r10,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
loc_8808FBA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8808FBAC:
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

DEFINE_REX_FUNC(sub_880900F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88090100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,316
	ctx.r4.s64 = 316;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88090110;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88090118;
	sub_88023F40(ctx, base);
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88090128;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88090130;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88090134;
	sub_88068E60(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88024118
	ctx.lr = 0x88090148;
	sub_88024118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x88024028
	ctx.lr = 0x88090154;
	sub_88024028(ctx, base);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880240b8
	ctx.lr = 0x8809016C;
	sub_880240B8(ctx, base);
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,20792
	ctx.r4.s64 = ctx.r11.s64 + 20792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024dd0
	ctx.lr = 0x88090180;
	sub_88024DD0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,52
	ctx.r9.s64 = 52;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r29,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x88069640
	ctx.lr = 0x8809019C;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880901b0
	if (ctx.cr6.eq) goto loc_880901B0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880901AC;
	sub_8801A448(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_880901B0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r29,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// li r8,90
	ctx.r8.s64 = 90;
	// stw r29,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r28,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// bl 0x88023c50
	ctx.lr = 0x880901F4;
	sub_88023C50(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lis r5,-30711
	ctx.r5.s64 = -2012676096;
	// lis r8,-30711
	ctx.r8.s64 = -2012676096;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,18
	ctx.r11.s64 = 1179648;
	// stw r27,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r5,r5,-2200
	ctx.r5.s64 = ctx.r5.s64 + -2200;
	// lwz r27,16(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// addi r8,r8,-2200
	ctx.r8.s64 = ctx.r8.s64 + -2200;
	// stw r27,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lis r4,-30711
	ctx.r4.s64 = -2012676096;
	// lwz r27,20(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// addi r4,r4,-360
	ctx.r4.s64 = ctx.r4.s64 + -360;
	// lwz r27,24(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// lwz r7,28(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// stw r7,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r7.u32);
	// sth r29,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r29.u16);
	// sth r28,140(r31)
	REX_STORE_U16(ctx.r31.u32 + 140, ctx.r28.u16);
	// stw r6,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r10,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r10,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r10,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r28,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// sth r29,216(r31)
	REX_STORE_U16(ctx.r31.u32 + 216, ctx.r29.u16);
	// sth r28,220(r31)
	REX_STORE_U16(ctx.r31.u32 + 220, ctx.r28.u16);
	// stw r6,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// stw r9,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r28,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// stw r5,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// stw r30,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r8,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// stw r30,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// bl 0x88023e90
	ctx.lr = 0x880902A8;
	sub_88023E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88090738) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88090740;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x8809074C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8808fab0
	ctx.lr = 0x8809075C;
	sub_8808FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88090a00
	if (ctx.cr6.eq) goto loc_88090A00;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880909f4
	if (!ctx.cr6.eq) goto loc_880909F4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88090788;
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
	ctx.lr = 0x880907B4;
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
	// bne cr6,0x88090974
	if (!ctx.cr6.eq) goto loc_88090974;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88090848
	if (ctx.cr6.eq) goto loc_88090848;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x88090848
	if (!ctx.cr0.lt) goto loc_88090848;
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
	// bgt 0x88090848
	if (ctx.cr0.gt) goto loc_88090848;
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
	// beq cr6,0x88090848
	if (ctx.cr6.eq) goto loc_88090848;
	// li r9,32
	ctx.r9.s64 = 32;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// bge cr6,0x88090848
	if (!ctx.cr6.lt) goto loc_88090848;
	// li r11,-32
	ctx.r11.s64 = -32;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_88090848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880244d0
	ctx.lr = 0x88090854;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88090870
	if (ctx.cr6.lt) goto loc_88090870;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x88090868;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_88090870:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88090898
	if (!ctx.cr6.eq) goto loc_88090898;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88090890;
	sub_8808FBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88090898:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880909f4
	if (!ctx.cr6.eq) goto loc_880909F4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x880909f4
	if (!ctx.cr0.lt) goto loc_880909F4;
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
	ctx.lr = 0x880908E0;
	sub_880244D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880909f4
	if (ctx.cr6.lt) goto loc_880909F4;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880909f4
	if (!ctx.cr6.eq) goto loc_880909F4;
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
	ctx.lr = 0x8809093C;
	sub_88024120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880909f4
	if (ctx.cr6.eq) goto loc_880909F4;
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
	ctx.lr = 0x88090960;
	sub_88013940(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x8809096C;
	sub_8808FBC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88090974:
	// cmpwi cr6,r10,56
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 56, ctx.xer);
	// bge cr6,0x8809099c
	if (!ctx.cr6.lt) goto loc_8809099C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x8809099c
	if (!ctx.cr0.lt) goto loc_8809099C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8809099C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880909f4
	if (!ctx.cr6.eq) goto loc_880909F4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880909f4
	if (!ctx.cr0.lt) goto loc_880909F4;
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
	// bne cr6,0x880909f4
	if (!ctx.cr6.eq) goto loc_880909F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_880909F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8808fbc8
	ctx.lr = 0x88090A00;
	sub_8808FBC8(ctx, base);
loc_88090A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880925C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880925D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,9
	ctx.r30.s64 = 589824;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// bge 0x8809263c
	if (!ctx.cr0.lt) goto loc_8809263C;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r9,100(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8809263c
	if (!ctx.cr6.eq) goto loc_8809263C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88092618;
	sub_880244D0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8801a808
	ctx.lr = 0x88092624;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
loc_8809263C:
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880926d0
	if (!ctx.cr6.gt) goto loc_880926D0;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bge 0x880926d0
	if (!ctx.cr0.lt) goto loc_880926D0;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lis r8,-30694
	ctx.r8.s64 = -2011561984;
	// lwz r5,116(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// li r7,-4
	ctx.r7.s64 = -4;
	// addi r11,r8,26664
	ctx.r11.s64 = ctx.r8.s64 + 26664;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r5,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r29,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x880921f8
	ctx.lr = 0x880926A4;
	sub_880921F8(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bge 0x880926d0
	if (!ctx.cr0.lt) goto loc_880926D0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-30608
	ctx.r10.s64 = -2005925888;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,21852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21852);
	// rlwinm r9,r11,30,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFFFFFFF;
	// subfic r8,r9,80
	ctx.xer.ca = ctx.r9.u32 <= 80;
	ctx.r8.u64 = static_cast<uint64_t>(80) - ctx.r9.u64;
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_880926D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88094CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88094CA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88094CB4;
	sub_88023F40(ctx, base);
	// lis r30,-30608
	ctx.r30.s64 = -2005925888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,21860(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88094d40
	if (!ctx.cr6.eq) goto loc_88094D40;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8801a860
	ctx.lr = 0x88094CDC;
	sub_8801A860(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x88024438
	ctx.lr = 0x88094D08;
	sub_88024438(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x88024460
	ctx.lr = 0x88094D20;
	sub_88024460(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x88094d40
	if (ctx.cr6.eq) goto loc_88094D40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_88094D40:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-48
	ctx.r10.s64 = -3145728;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88094d68
	if (!ctx.cr6.lt) goto loc_88094D68;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x88094D58;
	sub_88022BE0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f48
	ctx.lr = 0x88094D60;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_88094D68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024030
	ctx.lr = 0x88094D70;
	sub_88024030(ctx, base);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// addi r26,r31,136
	ctx.r26.s64 = ctx.r31.s64 + 136;
	// stw r10,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,138(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 138);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88094dac
	if (ctx.cr6.eq) goto loc_88094DAC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r9.u16);
loc_88094DAC:
	// lhz r11,82(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88094dcc
	if (ctx.cr6.eq) goto loc_88094DCC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,82(r26)
	REX_STORE_U16(ctx.r26.u32 + 82, ctx.r10.u16);
	// b 0x88094dd4
	goto loc_88094DD4;
loc_88094DCC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88094df8
	if (ctx.cr6.eq) goto loc_88094DF8;
loc_88094DD4:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// beq cr6,0x88094e24
	if (ctx.cr6.eq) goto loc_88094E24;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x88094e20
	goto loc_88094E20;
loc_88094DF8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,832
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 832, ctx.xer);
	// bge cr6,0x88094e24
	if (!ctx.cr6.lt) goto loc_88094E24;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88094e24
	if (!ctx.cr6.eq) goto loc_88094E24;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_88094E20:
	// stw r10,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
loc_88094E24:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88094e54
	if (ctx.cr6.eq) goto loc_88094E54;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x88094e54
	if (!ctx.cr0.lt) goto loc_88094E54;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_88094E54:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x880951f4
	if (ctx.cr6.eq) goto loc_880951F4;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bge 0x88095484
	if (!ctx.cr0.lt) goto loc_88095484;
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r11,r11,27272
	ctx.r11.s64 = ctx.r11.s64 + 27272;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_88094E8C:
	// lwz r8,-8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x880a84f0
	ctx.lr = 0x88094EB0;
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
	ctx.lr = 0x88094EC4;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x880a8620
	ctx.lr = 0x88094ED0;
	sub_880A8620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x880a8638
	ctx.lr = 0x88094EDC;
	sub_880A8638(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x880a8650
	ctx.lr = 0x88094EE8;
	sub_880A8650(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880a84f0
	ctx.lr = 0x88094EFC;
	sub_880A84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x880a8638
	ctx.lr = 0x88094F08;
	sub_880A8638(ctx, base);
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x8801a448
	ctx.lr = 0x88094F10;
	sub_8801A448(ctx, base);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x880a85c0
	ctx.lr = 0x88094F20;
	sub_880A85C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x880a8620
	ctx.lr = 0x88094F2C;
	sub_880A8620(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8668
	ctx.lr = 0x88094F38;
	sub_880A8668(ctx, base);
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x88094f50
	if (!ctx.cr6.eq) goto loc_88094F50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a8650
	ctx.lr = 0x88094F50;
	sub_880A8650(ctx, base);
loc_88094F50:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88094f98
	if (!ctx.cr6.gt) goto loc_88094F98;
loc_88094F60:
	// lwz r7,-8(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r9,-4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bl 0x880a99a8
	ctx.lr = 0x88094F88;
	sub_880A99A8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88094f60
	if (ctx.cr6.lt) goto loc_88094F60;
loc_88094F98:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88094fe0
	if (!ctx.cr6.eq) goto loc_88094FE0;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x8801a448
	ctx.lr = 0x88094FAC;
	sub_8801A448(ctx, base);
	// addi r26,r3,-24
	ctx.r26.s64 = ctx.r3.s64 + -24;
	// li r3,47
	ctx.r3.s64 = 47;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a448
	ctx.lr = 0x88094FBC;
	sub_8801A448(ctx, base);
	// addi r10,r3,-24
	ctx.r10.s64 = ctx.r3.s64 + -24;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r26,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// li r6,125
	ctx.r6.s64 = 125;
	// bl 0x880111c0
	ctx.lr = 0x88094FE0;
	sub_880111C0(ctx, base);
loc_88094FE0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x88094e8c
	if (!ctx.cr0.eq) goto loc_88094E8C;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88095124
	if (!ctx.cr6.eq) goto loc_88095124;
	// bl 0x88024068
	ctx.lr = 0x88095000;
	sub_88024068(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r11,-23
	ctx.r5.s64 = ctx.r11.s64 + -1507328;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x88095018;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x88095020;
	sub_88024068(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,19
	ctx.r29.s64 = 1245184;
	// lis r30,24
	ctx.r30.s64 = 1572864;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x88095044;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x8809504C;
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x88095068;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x88095070;
	sub_88024068(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r5,33
	ctx.r5.s64 = ctx.r5.s64 + 2162688;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x88095088;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x88095090;
	sub_88024068(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r29,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r4,r30,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x880950B0;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x880950B8;
	sub_88024068(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// subf r5,r29,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r29.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x880950D4;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x880950DC;
	sub_88024068(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addis r5,r8,5
	ctx.r5.s64 = ctx.r8.s64 + 327680;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x880111c0
	ctx.lr = 0x880950F4;
	sub_880111C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024750
	ctx.lr = 0x880950FC;
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
	ctx.lr = 0x88095120;
	sub_88011728(ctx, base);
	// b 0x880951c8
	goto loc_880951C8;
loc_88095124:
	// bl 0x88024748
	ctx.lr = 0x88095128;
	sub_88024748(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// divwu r30,r3,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024748
	ctx.lr = 0x88095138;
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
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880114d8
	ctx.lr = 0x88095160;
	sub_880114D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88024748
	ctx.lr = 0x88095168;
	sub_88024748(ctx, base);
	// li r10,200
	ctx.r10.s64 = 200;
	// divwu r29,r3,r10
	ctx.r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// ble cr6,0x8809517c
	if (!ctx.cr6.gt) goto loc_8809517C;
	// li r29,20
	ctx.r29.s64 = 20;
loc_8809517C:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880951c8
	if (!ctx.cr6.gt) goto loc_880951C8;
loc_88095188:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024748
	ctx.lr = 0x88095190;
	sub_88024748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x8809519C;
	sub_88024068(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,72
	ctx.r7.s64 = 72;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,72
	ctx.r8.s64 = 72;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x88011310
	ctx.lr = 0x880951BC;
	sub_88011310(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88095188
	if (ctx.cr6.lt) goto loc_88095188;
loc_880951C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024068
	ctx.lr = 0x880951D0;
	sub_88024068(ctx, base);
	// addi r6,r3,-2
	ctx.r6.s64 = ctx.r3.s64 + -2;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x880abb48
	ctx.lr = 0x880951E4;
	sub_880ABB48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f48
	ctx.lr = 0x880951EC;
	sub_88023F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880951F4:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r10,21860(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21860);
	// lwz r11,21856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21856);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x88095448
	if (!ctx.cr0.eq) goto loc_88095448;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x88095448
	if (ctx.cr6.gt) goto loc_88095448;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88095248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88095248;
	// bdzf 4*cr6+eq,0x880952c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880952C8;
	// bdzf 4*cr6+eq,0x880953bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880953BC;
	// bne cr6,0x880953f4
	if (!ctx.cr6.eq) goto loc_880953F4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x88095448
	goto loc_88095448;
loc_88095248:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x88095448
	if (!ctx.cr6.eq) goto loc_88095448;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88095294;
	sub_880244D0(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r28,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r28.u64;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x880952B0;
	sub_880244D0(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r3,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// stw r7,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// b 0x88095448
	goto loc_88095448;
loc_880952C8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880952f8
	if (!ctx.cr0.lt) goto loc_880952F8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ble cr6,0x880952f8
	if (!ctx.cr6.gt) goto loc_880952F8;
	// stw r25,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
loc_880952F8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r9,112
	ctx.r9.s64 = 7340032;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r10,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// ble cr6,0x8809536c
	if (!ctx.cr6.gt) goto loc_8809536C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// subf r6,r28,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r28.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r30.u64;
	// bl 0x88094b28
	ctx.lr = 0x88095348;
	sub_88094B28(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// subf r6,r28,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r28.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// bl 0x88094b28
	ctx.lr = 0x8809536C;
	sub_88094B28(ctx, base);
loc_8809536C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bne cr6,0x88095448
	if (!ctx.cr6.eq) goto loc_88095448;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x88095448
	goto loc_88095448;
loc_880953BC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bne cr6,0x88095448
	if (!ctx.cr6.eq) goto loc_88095448;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x88095448
	goto loc_88095448;
loc_880953F4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x88095448
	if (!ctx.cr0.lt) goto loc_88095448;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// blt cr6,0x88095448
	if (ctx.cr6.lt) goto loc_88095448;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// stw r25,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r25,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// lwz r11,21852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21852);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r25.u32);
	// rlwinm r9,r10,29,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xFFFFFFF;
	// subfic r8,r9,128
	ctx.xer.ca = ctx.r9.u32 <= 128;
	ctx.r8.u64 = static_cast<uint64_t>(128) - ctx.r9.u64;
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_88095448:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
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
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
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
	ctx.lr = 0x88095484;
	sub_88018B98(ctx, base);
loc_88095484:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r3,7148
	ctx.r3.s64 = 7148;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880954A4;
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
	ctx.lr = 0x880954B8;
	sub_8813FF90(ctx, base);
	// lis r8,9362
	ctx.r8.s64 = 613548032;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lis r28,14
	ctx.r28.s64 = 917504;
	// ori r30,r8,18725
	ctx.r30.u64 = ctx.r8.u64 | 18725;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,-30694
	ctx.r7.s64 = -2011561984;
	// mulhwu r11,r3,r30
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// subf r9,r11,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r11.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r27,r7,27812
	ctx.r27.s64 = ctx.r7.s64 + 27812;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r5,r8,-23
	ctx.r5.s64 = ctx.r8.s64 + -1507328;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mulli r10,r11,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r3,r11,7124
	ctx.r3.s64 = ctx.r11.s64 + 7124;
	// bl 0x8801a9c8
	ctx.lr = 0x88095518;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x88095520;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// mulhwu r10,r11,r30
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r10,14
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// addi r3,r11,7124
	ctx.r3.s64 = ctx.r11.s64 + 7124;
	// bl 0x8801a9c8
	ctx.lr = 0x88095568;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88095574;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88095580;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// mulhwu r10,r11,r30
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r5,r10,-6
	ctx.r5.s64 = ctx.r10.s64 + -393216;
	// rlwinm r9,r3,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mulli r8,r9,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14));
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// addi r3,r11,7132
	ctx.r3.s64 = ctx.r11.s64 + 7132;
	// bl 0x8801a9c8
	ctx.lr = 0x880955D4;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x880955DC;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// mulhwu r10,r11,r30
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r3,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(14));
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r3,r11,7132
	ctx.r3.s64 = ctx.r11.s64 + 7132;
	// bl 0x8801a9c8
	ctx.lr = 0x88095624;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88095630;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8809563C;
	sub_8813FF08(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r28,38
	ctx.r28.s64 = 2490368;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 + ctx.r28.u64;
	// mulhwu r10,r11,r30
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addis r5,r10,25
	ctx.r5.s64 = ctx.r10.s64 + 1638400;
	// rlwinm r9,r3,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mulli r8,r9,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14));
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// addi r3,r11,7140
	ctx.r3.s64 = ctx.r11.s64 + 7140;
	// bl 0x8801a9c8
	ctx.lr = 0x88095690;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x88095698;
	sub_8813FF48(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r4,r28,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r28.u64;
	// mulhwu r10,r11,r30
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r10,r3,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(14));
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r3,r11,7140
	ctx.r3.s64 = ctx.r11.s64 + 7140;
	// bl 0x8801a9c8
	ctx.lr = 0x880956E0;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880956EC;
	sub_8813FF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x880956F8;
	sub_8813FF08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a860
	ctx.lr = 0x8809570C;
	sub_8801A860(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7075
	ctx.r3.s64 = 7075;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8801a9c8
	ctx.lr = 0x8809572C;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x88095734;
	sub_8813FF48(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8801a860
	ctx.lr = 0x8809574C;
	sub_8801A860(ctx, base);
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88095794
	if (ctx.cr6.eq) goto loc_88095794;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// stw r4,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// bl 0x8801a860
	ctx.lr = 0x88095778;
	sub_8801A860(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x8809579c
	goto loc_8809579C;
loc_88095794:
	// stw r25,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// stw r25,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
loc_8809579C:
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r28,29
	ctx.r28.s64 = 1900544;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r30,17
	ctx.r30.s64 = 1114112;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,7076
	ctx.r3.s64 = 7076;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880957E0;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880957EC;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x88095804;
	sub_8813FF90(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,7076
	ctx.r3.s64 = 7076;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88095828;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88095834;
	sub_8813FF48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8809584C;
	sub_8813FF90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff08
	ctx.lr = 0x88095858;
	sub_8813FF08(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,7077
	ctx.r3.s64 = 7077;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r7,r28
	ctx.r5.u64 = ctx.r7.u64 + ctx.r28.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x8809587C;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x88095884;
	sub_8813FF48(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,7077
	ctx.r3.s64 = 7077;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880958A8;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880958B4;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880958C0;
	sub_8813FF08(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r28,31
	ctx.r28.s64 = 2031616;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,7079
	ctx.r3.s64 = 7079;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r5,r7,r28
	ctx.r5.u64 = ctx.r7.u64 + ctx.r28.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880958E8;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x880958F0;
	sub_8813FF48(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,7079
	ctx.r3.s64 = 7079;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88095914;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88095920;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff08
	ctx.lr = 0x8809592C;
	sub_8813FF08(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880959a8
	if (ctx.cr6.eq) goto loc_880959A8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// bl 0x8801a9c8
	ctx.lr = 0x88095960;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x88095968;
	sub_8813FF48(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88095990;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x8809599C;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880959A8;
	sub_8813FF08(ctx, base);
loc_880959A8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88095a2c
	if (ctx.cr6.lt) goto loc_88095A2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x88095a2c
	if (ctx.cr6.gt) goto loc_88095A2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subf r4,r30,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r30.u64;
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// bl 0x8801a9c8
	ctx.lr = 0x880959E4;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8813ff48
	ctx.lr = 0x880959EC;
	sub_8813FF48(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88095A14;
	sub_8801A9C8(ctx, base);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff48
	ctx.lr = 0x88095A20;
	sub_8813FF48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff08
	ctx.lr = 0x88095A2C;
	sub_8813FF08(ctx, base);
loc_88095A2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A2640) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f64
	ctx.lr = 0x880A2648;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x8801b520
	ctx.lr = 0x880A2654;
	sub_8801B520(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_880A2660:
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r31,18,0,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xFFE00000;
	// rlwinm r4,r31,21,8,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 21) & 0xE00000;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8801a9c8
	ctx.lr = 0x880A2674;
	sub_8801A9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff28
	ctx.lr = 0x880A2680;
	sub_8813FF28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A268C;
	sub_8813FF48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x880a2660
	if (ctx.cr6.lt) goto loc_880A2660;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r31,r22,20
	ctx.r31.s64 = ctx.r22.s64 + 20;
	// li r25,420
	ctx.r25.s64 = 420;
	// li r23,3
	ctx.r23.s64 = 3;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// li r28,128
	ctx.r28.s64 = 128;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r29,r10,65534
	ctx.r29.u64 = ctx.r10.u64 | 65534;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
loc_880A26C8:
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2978
	if (ctx.cr6.eq) goto loc_880A2978;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2770
	if (ctx.cr6.eq) goto loc_880A2770;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880a2814
	if (!ctx.cr6.eq) goto loc_880A2814;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2764
	if (!ctx.cr6.eq) goto loc_880A2764;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,-4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addic. r11,r8,-8
	ctx.xer.ca = ctx.r8.u32 > 7;
	ctx.r11.s64 = ctx.r8.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bgt 0x880a2720
	if (ctx.cr0.gt) goto loc_880A2720;
	// stw r26,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
loc_880A2720:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x880a272c
	if (ctx.cr6.gt) goto loc_880A272C;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_880A272C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x880a2738
	if (ctx.cr6.gt) goto loc_880A2738;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_880A2738:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2814
	if (!ctx.cr6.eq) goto loc_880A2814;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2814
	if (!ctx.cr6.eq) goto loc_880A2814;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2814
	if (!ctx.cr6.eq) goto loc_880A2814;
	// stw r23,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// b 0x880a2814
	goto loc_880A2814;
loc_880A2764:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x880a2814
	goto loc_880A2814;
loc_880A2770:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bge cr6,0x880a27f8
	if (!ctx.cr6.lt) goto loc_880A27F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2794
	if (ctx.cr6.eq) goto loc_880A2794;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x880a2814
	goto loc_880A2814;
loc_880A2794:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x880a27c4
	if (!ctx.cr6.lt) goto loc_880A27C4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x880a27b8
	if (!ctx.cr6.lt) goto loc_880A27B8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// b 0x880a27cc
	goto loc_880A27CC;
loc_880A27B8:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x880a27cc
	goto loc_880A27CC;
loc_880A27C4:
	// addi r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 6;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_880A27CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a27e0
	if (ctx.cr6.eq) goto loc_880A27E0;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_880A27E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a2814
	if (ctx.cr6.eq) goto loc_880A2814;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x880a2814
	goto loc_880A2814;
loc_880A27F8:
	// stw r28,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r21,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r21.u32);
	// lwz r11,21844(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 21844);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21844(r22)
	REX_STORE_U32(ctx.r22.u32 + 21844, ctx.r11.u32);
loc_880A2814:
	// lbz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r5,-16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,-12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// addi r9,r10,-32
	ctx.r9.s64 = ctx.r10.s64 + -32;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// addi r6,r9,128
	ctx.r6.s64 = ctx.r9.s64 + 128;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r19,r6,16
	ctx.r19.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r5,r29
	ctx.r10.u64 = ctx.r5.u64 + ctx.r29.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8813fe70
	ctx.lr = 0x880A2880;
	sub_8813FE70(ctx, base);
	// lwz r9,-4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r6,r6,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// bl 0x8813ff90
	ctx.lr = 0x880A28A0;
	sub_8813FF90(ctx, base);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8813fe70
	ctx.lr = 0x880A28EC;
	sub_8813FE70(ctx, base);
	// lwz r9,-4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// bl 0x8813ff90
	ctx.lr = 0x880A290C;
	sub_8813FF90(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// lwz r9,-16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// addi r5,r11,200
	ctx.r5.s64 = ctx.r11.s64 + 200;
	// lwz r8,-12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x8813fe70
	ctx.lr = 0x880A2960;
	sub_8813FE70(ctx, base);
	// lwz r6,-4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880A2978;
	sub_8813FF48(ctx, base);
loc_880A2978:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// bne 0x880a26c8
	if (!ctx.cr0.eq) goto loc_880A26C8;
	// lwz r11,21844(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 21844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a2a54
	if (!ctx.cr6.eq) goto loc_880A2A54;
	// li r10,70
	ctx.r10.s64 = 70;
	// addi r11,r22,48
	ctx.r11.s64 = ctx.r22.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880A29A0:
	// lwz r9,-48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a29bc
	if (ctx.cr6.eq) goto loc_880A29BC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a29bc
	if (!ctx.cr6.eq) goto loc_880A29BC;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_880A29BC:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a29d8
	if (ctx.cr6.eq) goto loc_880A29D8;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a29d8
	if (!ctx.cr6.eq) goto loc_880A29D8;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_880A29D8:
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a29f4
	if (ctx.cr6.eq) goto loc_880A29F4;
	// lwz r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a29f4
	if (!ctx.cr6.eq) goto loc_880A29F4;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
loc_880A29F4:
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a2a10
	if (ctx.cr6.eq) goto loc_880A2A10;
	// lwz r9,156(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a2a10
	if (!ctx.cr6.eq) goto loc_880A2A10;
	// stw r10,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
loc_880A2A10:
	// lwz r9,160(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a2a2c
	if (ctx.cr6.eq) goto loc_880A2A2C;
	// lwz r9,208(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a2a2c
	if (!ctx.cr6.eq) goto loc_880A2A2C;
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
loc_880A2A2C:
	// lwz r9,212(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880a2a48
	if (ctx.cr6.eq) goto loc_880A2A48;
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880a2a48
	if (!ctx.cr6.eq) goto loc_880A2A48;
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
loc_880A2A48:
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// bdnz 0x880a29a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A29A0;
	// b 0x880a2a98
	goto loc_880A2A98;
loc_880A2A54:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x881404c8
	ctx.lr = 0x880A2A5C;
	sub_881404C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x881404c8
	ctx.lr = 0x880A2A68;
	sub_881404C8(ctx, base);
	// or r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 | ctx.r3.u64;
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// rlwinm r10,r10,0,25,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF807F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880a2a98
	if (ctx.cr6.eq) goto loc_880A2A98;
	// li r10,420
	ctx.r10.s64 = 420;
	// stw r26,21844(r22)
	REX_STORE_U32(ctx.r22.u32 + 21844, ctx.r26.u32);
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_880A2A90:
	// stwu r10,52(r11)
	ea = 52 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880a2a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A2A90;
loc_880A2A98:
	// li r10,70
	ctx.r10.s64 = 70;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880A2AA8:
	// lwz r10,-52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2ac8
	if (ctx.cr6.eq) goto loc_880A2AC8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2AC8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2ae8
	if (ctx.cr6.eq) goto loc_880A2AE8;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2AE8:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2b08
	if (ctx.cr6.eq) goto loc_880A2B08;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2B08:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2b28
	if (ctx.cr6.eq) goto loc_880A2B28;
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2B28:
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2b48
	if (ctx.cr6.eq) goto loc_880A2B48;
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2B48:
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a2b68
	if (ctx.cr6.eq) goto loc_880A2B68;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_880A2B68:
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// bdnz 0x880a2aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A2AA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x88067710
	ctx.lr = 0x880A2B80;
	sub_88067710(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x880a2b9c
	if (ctx.cr6.eq) goto loc_880A2B9C;
	// lis r11,-30713
	ctx.r11.s64 = -2012807168;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-9280
	ctx.r4.s64 = ctx.r11.s64 + -9280;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8801b3f8
	ctx.lr = 0x880A2B9C;
	sub_8801B3F8(ctx, base);
loc_880A2B9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fb4
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A92B8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-30488(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -30488);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A92D8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-30488(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -30488);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880A93C0) {
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
	ctx.lr = 0x880A93D8;
	sub_880A8720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880a9450
	if (!ctx.cr6.eq) goto loc_880A9450;
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
	// bge 0x880a9430
	if (!ctx.cr0.lt) goto loc_880A9430;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// blt cr6,0x880a9420
	if (ctx.cr6.lt) goto loc_880A9420;
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
loc_880A9420:
	// addi r9,r10,-144
	ctx.r9.s64 = ctx.r10.s64 + -144;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_880A9430:
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
	// bl 0x880a87c0
	ctx.lr = 0x880A9450;
	sub_880A87C0(ctx, base);
loc_880A9450:
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

DEFINE_REX_FUNC(sub_880A9B20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8801a448
	ctx.lr = 0x880A9B3C;
	sub_8801A448(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r3,15
	ctx.r3.s64 = 15;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// addi r8,r11,168
	ctx.r8.s64 = ctx.r11.s64 + 168;
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9B5C;
	sub_8801A448(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r6,-30693
	ctx.r6.s64 = -2011496448;
	// addi r5,r3,26
	ctx.r5.s64 = ctx.r3.s64 + 26;
	// addi r4,r6,-26976
	ctx.r4.s64 = ctx.r6.s64 + -26976;
	// rlwinm r11,r7,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9B88;
	sub_8801A448(ctx, base);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r8,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x880A9B9C;
	sub_8801A448(ctx, base);
	// addi r7,r3,5
	ctx.r7.s64 = ctx.r3.s64 + 5;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// stw r5,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// blt cr6,0x880a9bcc
	if (ctx.cr6.lt) goto loc_880A9BCC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_880A9BCC:
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

DEFINE_REX_FUNC(sub_880AA780) {
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
	// bge 0x880aa7e8
	if (!ctx.cr0.lt) goto loc_880AA7E8;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// bge 0x880aa7d0
	if (!ctx.cr0.lt) goto loc_880AA7D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880aa830
	goto loc_880AA830;
loc_880AA7D0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880aa7e8
	if (!ctx.cr0.lt) goto loc_880AA7E8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_880AA7E8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a9c8
	ctx.lr = 0x880AA804;
	sub_8801A9C8(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880AA810;
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
	ctx.lr = 0x880AA82C;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AA830:
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

DEFINE_REX_FUNC(sub_880AAFD8) {
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
	// bge 0x880ab010
	if (!ctx.cr0.lt) goto loc_880AB010;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x880ab094
	goto loc_880AB094;
loc_880AB010:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bge 0x880ab044
	if (!ctx.cr0.lt) goto loc_880AB044;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// blt cr6,0x880ab044
	if (ctx.cr6.lt) goto loc_880AB044;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880ab094
	goto loc_880AB094;
loc_880AB044:
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
	ctx.lr = 0x880AB060;
	sub_8801A9C8(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880ab074
	if (ctx.cr6.eq) goto loc_880AB074;
	// bl 0x8813ff08
	ctx.lr = 0x880AB074;
	sub_8813FF08(ctx, base);
loc_880AB074:
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880AB090;
	sub_8813FF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_880AB094:
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

DEFINE_REX_FUNC(sub_880AB930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x880AB938;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-30606
	ctx.r28.s64 = -2005794816;
	// lis r29,-30606
	ctx.r29.s64 = -2005794816;
	// lwz r3,1776(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1776);
	// lwz r24,1780(r29)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r29.u32 + 1780);
	// bl 0x88069620
	ctx.lr = 0x880AB950;
	sub_88069620(ctx, base);
	// lwz r11,1776(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1776);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88069630
	ctx.lr = 0x880AB960;
	sub_88069630(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x880abac4
	if (ctx.cr6.eq) goto loc_880ABAC4;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,1792
	ctx.r11.s64 = ctx.r11.s64 + 1792;
	// lis r22,-48
	ctx.r22.s64 = -3145728;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lis r23,-30608
	ctx.r23.s64 = -2005925888;
loc_880AB984:
	// lwz r11,-28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880abab8
	if (ctx.cr6.eq) goto loc_880ABAB8;
	// lwz r11,21860(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880ab9d0
	if (!ctx.cr6.eq) goto loc_880AB9D0;
	// lwz r3,1776(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1776);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x880690e8
	ctx.lr = 0x880AB9A8;
	sub_880690E8(ctx, base);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r11,1776(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1776);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r9.u32);
	// bl 0x88069170
	ctx.lr = 0x880AB9C4;
	sub_88069170(ctx, base);
	// lwz r8,-12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r7,-12(r31)
	REX_STORE_U32(ctx.r31.u32 + -12, ctx.r7.u32);
loc_880AB9D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880ab9f8
	if (!ctx.cr0.lt) goto loc_880AB9F8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r8.u32);
loc_880AB9F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r9,-16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880ABA1C;
	sub_8801A9C8(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880aba30
	if (ctx.cr6.eq) goto loc_880ABA30;
	// bl 0x8813ff08
	ctx.lr = 0x880ABA30;
	sub_8813FF08(ctx, base);
loc_880ABA30:
	// lwz r11,-20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x880aba98
	if (ctx.cr6.lt) goto loc_880ABA98;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880ABA58;
	sub_8813FF90(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bl 0x8813ff48
	ctx.lr = 0x880ABA74;
	sub_8813FF48(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt 0x880aba98
	if (ctx.cr0.gt) goto loc_880ABA98;
	// lwz r11,1780(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1780);
	// stw r27,-28(r31)
	REX_STORE_U32(ctx.r31.u32 + -28, ctx.r27.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1780(r29)
	REX_STORE_U32(ctx.r29.u32 + 1780, ctx.r11.u32);
	// b 0x880aba9c
	goto loc_880ABA9C;
loc_880ABA98:
	// lwz r11,1780(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1780);
loc_880ABA9C:
	// lwz r10,-12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880abab4
	if (!ctx.cr6.lt) goto loc_880ABAB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r27,-28(r31)
	REX_STORE_U32(ctx.r31.u32 + -28, ctx.r27.u32);
	// stw r11,1780(r29)
	REX_STORE_U32(ctx.r29.u32 + 1780, ctx.r11.u32);
loc_880ABAB4:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_880ABAB8:
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x880ab984
	if (!ctx.cr6.eq) goto loc_880AB984;
loc_880ABAC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B1B90) {
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
	// bne cr6,0x880b1bfc
	if (!ctx.cr6.eq) goto loc_880B1BFC;
	// bl 0x880694f0
	ctx.lr = 0x880B1BB8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1bd8
	if (ctx.cr6.eq) goto loc_880B1BD8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B1BCC;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1bfc
	if (ctx.cr6.eq) goto loc_880B1BFC;
loc_880B1BD8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,65
	ctx.r4.s64 = 65;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1BFC:
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

DEFINE_REX_FUNC(sub_880B1E90) {
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
	// bne cr6,0x880b1efc
	if (!ctx.cr6.eq) goto loc_880B1EFC;
	// bl 0x880694f0
	ctx.lr = 0x880B1EB8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b1ed8
	if (ctx.cr6.eq) goto loc_880B1ED8;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,17
	ctx.r31.s64 = 17;
	// bl 0x8801a138
	ctx.lr = 0x880B1ECC;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b1efc
	if (ctx.cr6.eq) goto loc_880B1EFC;
loc_880B1ED8:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B1EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1EFC:
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

DEFINE_REX_FUNC(sub_880B2428) {
	REX_FUNC_PROLOGUE();
	// b 0x880b21f8
	sub_880B21F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B2430) {
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
	// bne cr6,0x880b249c
	if (!ctx.cr6.eq) goto loc_880B249C;
	// bl 0x880694f0
	ctx.lr = 0x880B2458;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b2478
	if (ctx.cr6.eq) goto loc_880B2478;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x8801a138
	ctx.lr = 0x880B246C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b249c
	if (ctx.cr6.eq) goto loc_880B249C;
loc_880B2478:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B249C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B249C:
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

DEFINE_REX_FUNC(sub_880B26D8) {
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
	// bne cr6,0x880b2780
	if (!ctx.cr6.eq) goto loc_880B2780;
	// lis r9,-30608
	ctx.r9.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,30
	ctx.r30.s64 = 30;
	// stw r11,17500(r10)
	REX_STORE_U32(ctx.r10.u32 + 17500, ctx.r11.u32);
	// lwz r11,21888(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2780
	if (!ctx.cr6.eq) goto loc_880B2780;
	// bl 0x880694f0
	ctx.lr = 0x880B271C;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b273c
	if (ctx.cr6.eq) goto loc_880B273C;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,15
	ctx.r30.s64 = 15;
	// bl 0x8801a138
	ctx.lr = 0x880B2730;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2780
	if (ctx.cr6.eq) goto loc_880B2780;
loc_880B273C:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,844(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B275C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2780
	if (ctx.cr6.eq) goto loc_880B2780;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,70
	ctx.r6.s64 = 70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2780:
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

DEFINE_REX_FUNC(sub_880B2E58) {
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
	// li r30,53
	ctx.r30.s64 = 53;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2ee8
	if (!ctx.cr6.eq) goto loc_880B2EE8;
	// bl 0x880694f0
	ctx.lr = 0x880B2E84;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b2ea4
	if (ctx.cr6.eq) goto loc_880B2EA4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,26
	ctx.r30.s64 = 26;
	// bl 0x8801a138
	ctx.lr = 0x880B2E98;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b2ee8
	if (ctx.cr6.eq) goto loc_880B2EE8;
loc_880B2EA4:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,253
	ctx.r5.s64 = 253;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,137
	ctx.r3.s64 = 137;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b2ee8
	if (ctx.cr6.eq) goto loc_880B2EE8;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,253
	ctx.r6.s64 = 253;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,137
	ctx.r4.s64 = 137;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B2EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B2EE8:
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

DEFINE_REX_FUNC(sub_880B3440) {
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
	// li r30,56
	ctx.r30.s64 = 56;
	// lwz r11,21888(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b34d0
	if (!ctx.cr6.eq) goto loc_880B34D0;
	// bl 0x880694f0
	ctx.lr = 0x880B346C;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b348c
	if (ctx.cr6.eq) goto loc_880B348C;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,28
	ctx.r30.s64 = 28;
	// bl 0x8801a138
	ctx.lr = 0x880B3480;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b34d0
	if (ctx.cr6.eq) goto loc_880B34D0;
loc_880B348C:
	// lis r31,-30606
	ctx.r31.s64 = -2005794816;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,130
	ctx.r3.s64 = 130;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// lwz r11,848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B34AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880b34d0
	if (ctx.cr6.eq) goto loc_880B34D0;
	// lwz r11,18740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18740);
	// li r6,254
	ctx.r6.s64 = 254;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// lwz r11,1112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B34D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B34D0:
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

DEFINE_REX_FUNC(sub_880B3AE0) {
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
	// bne cr6,0x880b3b4c
	if (!ctx.cr6.eq) goto loc_880B3B4C;
	// bl 0x880694f0
	ctx.lr = 0x880B3B08;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b3b28
	if (ctx.cr6.eq) goto loc_880B3B28;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r31,25
	ctx.r31.s64 = 25;
	// bl 0x8801a138
	ctx.lr = 0x880B3B1C;
	sub_8801A138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880b3b4c
	if (ctx.cr6.eq) goto loc_880B3B4C;
loc_880B3B28:
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,163
	ctx.r4.s64 = 163;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B3B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B3B4C:
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

DEFINE_REX_FUNC(sub_880B40B8) {
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
	ctx.lr = 0x880B40C8;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b40f0
	if (!ctx.cr6.eq) goto loc_880B40F0;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B40F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B40F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4268) {
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
	ctx.lr = 0x880B4278;
	sub_880694F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880b42a0
	if (!ctx.cr6.eq) goto loc_880B42A0;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,18740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18740);
	// lwz r10,1128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B42A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B42A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880B4C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880B4C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1296
	ctx.r4.s64 = 1296;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880B4C48;
	sub_88023E98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B4C50;
	sub_88023F40(ctx, base);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880B4C60;
	sub_8813FA58(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880247e8
	ctx.lr = 0x880B4C68;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x880B4C6C;
	sub_88068E60(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,18288
	ctx.r4.s64 = ctx.r11.s64 + 18288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880211b0
	ctx.lr = 0x880B4C88;
	sub_880211B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880bb478
	ctx.lr = 0x880B4C94;
	sub_880BB478(ctx, base);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-18584
	ctx.r4.s64 = ctx.r10.s64 + -18584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880B4CA8;
	sub_88021AD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r28,31088
	ctx.r28.s64 = 31088;
	// ori r29,r9,44544
	ctx.r29.u64 = ctx.r9.u64 | 44544;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880b4d68
	if (ctx.cr6.lt) goto loc_880B4D68;
	// beq cr6,0x880b4d1c
	if (ctx.cr6.eq) goto loc_880B4D1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880b4da4
	if (!ctx.cr6.lt) goto loc_880B4DA4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r28,r11,39904
	ctx.r28.u64 = ctx.r11.u64 | 39904;
	// ori r9,r10,52320
	ctx.r9.u64 = ctx.r10.u64 | 52320;
	// stw r28,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// ori r29,r29,12416
	ctx.r29.u64 = ctx.r29.u64 | 12416;
	// bl 0x88069640
	ctx.lr = 0x880B4CF8;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b4da4
	if (ctx.cr6.eq) goto loc_880B4DA4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// ori r28,r11,54752
	ctx.r28.u64 = ctx.r11.u64 | 54752;
	// ori r9,r10,16480
	ctx.r9.u64 = ctx.r10.u64 | 16480;
	// ori r29,r29,27264
	ctx.r29.u64 = ctx.r29.u64 | 27264;
	// b 0x880b4d9c
	goto loc_880B4D9C;
loc_880B4D1C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r28,r11,36192
	ctx.r28.u64 = ctx.r11.u64 | 36192;
	// ori r9,r10,37472
	ctx.r9.u64 = ctx.r10.u64 | 37472;
	// stw r28,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// ori r29,r29,1280
	ctx.r29.u64 = ctx.r29.u64 | 1280;
	// bl 0x88069640
	ctx.lr = 0x880B4D44;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b4da4
	if (ctx.cr6.eq) goto loc_880B4DA4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// ori r28,r11,62176
	ctx.r28.u64 = ctx.r11.u64 | 62176;
	// ori r9,r10,9056
	ctx.r9.u64 = ctx.r10.u64 | 9056;
	// ori r29,r29,12416
	ctx.r29.u64 = ctx.r29.u64 | 12416;
	// b 0x880b4d9c
	goto loc_880B4D9C;
loc_880B4D68:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r28,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// ori r10,r11,10096
	ctx.r10.u64 = ctx.r11.u64 | 10096;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x88069640
	ctx.lr = 0x880B4D7C;
	sub_88069640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b4da4
	if (ctx.cr6.eq) goto loc_880B4DA4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,57072
	ctx.r28.u64 = ctx.r11.u64 | 57072;
	// ori r9,r10,50928
	ctx.r9.u64 = ctx.r10.u64 | 50928;
	// ori r29,r29,59392
	ctx.r29.u64 = ctx.r29.u64 | 59392;
loc_880B4D9C:
	// stw r28,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_880B4DA4:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,1244(r31)
	REX_STORE_U32(ctx.r31.u32 + 1244, ctx.r29.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r28,1248(r31)
	REX_STORE_U32(ctx.r31.u32 + 1248, ctx.r28.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x8809cb88
	ctx.lr = 0x880B4DC0;
	sub_8809CB88(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// bl 0x88024498
	ctx.lr = 0x880B4DCC;
	sub_88024498(ctx, base);
	// lis r10,120
	ctx.r10.s64 = 7864320;
	// lis r9,-180
	ctx.r9.s64 = -11796480;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r7,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88024028
	ctx.lr = 0x880B4DF4;
	sub_88024028(ctx, base);
	// lis r6,-30608
	ctx.r6.s64 = -2005925888;
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r5,-30709
	ctx.r5.s64 = -2012545024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r5,19352
	ctx.r4.s64 = ctx.r5.s64 + 19352;
	// stw r11,21868(r6)
	REX_STORE_U32(ctx.r6.u32 + 21868, ctx.r11.u32);
	// bl 0x88023e90
	ctx.lr = 0x880B4E10;
	sub_88023E90(ctx, base);
	// lis r4,-30683
	ctx.r4.s64 = -2010841088;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// li r8,256
	ctx.r8.s64 = 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-11960(r4)
	REX_STORE_U32(ctx.r4.u32 + -11960, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,-11964(r9)
	REX_STORE_U32(ctx.r9.u32 + -11964, ctx.r30.u32);
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x880694c8
	ctx.lr = 0x880B4E3C;
	sub_880694C8(ctx, base);
	// lis r8,80
	ctx.r8.s64 = 5242880;
	// lis r9,96
	ctx.r9.s64 = 6291456;
	// sth r30,1048(r31)
	REX_STORE_U16(ctx.r31.u32 + 1048, ctx.r30.u16);
	// stw r8,1144(r31)
	REX_STORE_U32(ctx.r31.u32 + 1144, ctx.r8.u32);
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// stw r8,1148(r31)
	REX_STORE_U32(ctx.r31.u32 + 1148, ctx.r8.u32);
	// lis r5,-30709
	ctx.r5.s64 = -2012545024;
	// stw r9,1152(r31)
	REX_STORE_U32(ctx.r31.u32 + 1152, ctx.r9.u32);
	// lis r6,-30709
	ctx.r6.s64 = -2012545024;
	// stw r9,1156(r31)
	REX_STORE_U32(ctx.r31.u32 + 1156, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,1064(r31)
	REX_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// lis r4,56
	ctx.r4.s64 = 3670016;
	// stw r11,1068(r31)
	REX_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// addi r6,r6,18856
	ctx.r6.s64 = ctx.r6.s64 + 18856;
	// stw r11,1072(r31)
	REX_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// addi r11,r5,18856
	ctx.r11.s64 = ctx.r5.s64 + 18856;
	// li r10,10800
	ctx.r10.s64 = 10800;
	// stw r4,1076(r31)
	REX_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// stw r30,1084(r31)
	REX_STORE_U32(ctx.r31.u32 + 1084, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r30,1128(r31)
	REX_STORE_U16(ctx.r31.u32 + 1128, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r7,1044(r31)
	REX_STORE_U16(ctx.r31.u32 + 1044, ctx.r7.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r7,1124(r31)
	REX_STORE_U16(ctx.r31.u32 + 1124, ctx.r7.u16);
	// stw r30,1164(r31)
	REX_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,1056(r31)
	REX_STORE_U32(ctx.r31.u32 + 1056, ctx.r9.u32);
	// stw r8,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r8.u32);
	// stw r9,1136(r31)
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r9.u32);
	// stw r8,1140(r31)
	REX_STORE_U32(ctx.r31.u32 + 1140, ctx.r8.u32);
	// stw r6,1084(r31)
	REX_STORE_U32(ctx.r31.u32 + 1084, ctx.r6.u32);
	// stw r31,1088(r31)
	REX_STORE_U32(ctx.r31.u32 + 1088, ctx.r31.u32);
	// stw r11,1164(r31)
	REX_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// stw r31,1168(r31)
	REX_STORE_U32(ctx.r31.u32 + 1168, ctx.r31.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880B4EDC;
	sub_8813FA58(ctx, base);
	// lis r7,-64
	ctx.r7.s64 = -4194304;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88022730
	ctx.lr = 0x880B4EF4;
	sub_88022730(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x880B4EFC;
	sub_88022980(ctx, base);
	// stw r30,1288(r31)
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// stw r30,1292(r31)
	REX_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B71E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B71F0;
	__savegprlr_26(ctx, base);
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
	ctx.lr = 0x880B7204;
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
	ctx.lr = 0x880B7218;
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
	// bge 0x880b7318
	if (!ctx.cr0.lt) goto loc_880B7318;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,52(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addis r26,r10,-120
	ctx.r26.s64 = ctx.r10.s64 + -7864320;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880B7250;
	sub_880244D0(ctx, base);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r7,-30683
	ctx.r7.s64 = -2010841088;
	// lis r6,-30683
	ctx.r6.s64 = -2010841088;
	// lis r5,-30683
	ctx.r5.s64 = -2010841088;
	// stw r11,-11904(r8)
	REX_STORE_U32(ctx.r8.u32 + -11904, ctx.r11.u32);
	// lis r4,-30683
	ctx.r4.s64 = -2010841088;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,-11908(r7)
	REX_STORE_U32(ctx.r7.u32 + -11908, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,-33
	ctx.r8.s64 = -33;
	// stw r10,-11912(r6)
	REX_STORE_U32(ctx.r6.u32 + -11912, ctx.r10.u32);
	// stw r9,-11916(r5)
	REX_STORE_U32(ctx.r5.u32 + -11916, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,-11920(r4)
	REX_STORE_U32(ctx.r4.u32 + -11920, ctx.r8.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880B72C0;
	sub_88013CE0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880b7318
	if (!ctx.cr0.lt) goto loc_880B7318;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880b72ec
	if (!ctx.cr0.lt) goto loc_880B72EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880B72EC;
	sub_88021598(ctx, base);
loc_880B72EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x880b7308
	if (!ctx.cr6.gt) goto loc_880B7308;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880B7308:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880B7318:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B8CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880B8CC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B8CD4;
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
	ctx.lr = 0x880B8CE8;
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
	// bge 0x880b8dac
	if (!ctx.cr0.lt) goto loc_880B8DAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,56(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lwz r28,52(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// addis r29,r8,56
	ctx.r29.s64 = ctx.r8.s64 + 3670016;
	// bne cr6,0x880b8d28
	if (!ctx.cr6.eq) goto loc_880B8D28;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_880B8D28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x880b8d54
	if (ctx.cr6.eq) goto loc_880B8D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x880b8d54
	if (!ctx.cr6.gt) goto loc_880B8D54;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_880B8D54:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,178
	ctx.r3.s64 = 178;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x88023b90
	ctx.lr = 0x880B8D70;
	sub_88023B90(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,178
	ctx.r3.s64 = 178;
	// bl 0x88023b90
	ctx.lr = 0x880B8D84;
	sub_88023B90(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880b8dac
	if (!ctx.cr0.lt) goto loc_880B8DAC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880B8DA0;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880B8DAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B9B18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880B9B20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880B9B2C;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x880B9B38;
	sub_88024030(ctx, base);
	// lwz r11,924(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 924);
	// lwz r28,1024(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 1024);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r27,1028(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9bc4
	if (ctx.cr6.eq) goto loc_880B9BC4;
	// lwz r11,928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 928);
	// lis r24,24
	ctx.r24.s64 = 1572864;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lis r25,104
	ctx.r25.s64 = 6815744;
	// addi r30,r11,10083
	ctx.r30.s64 = ctx.r11.s64 + 10083;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + ctx.r25.u64;
	// subf r4,r24,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r24.u64;
	// stw r5,972(r31)
	REX_STORE_U32(ctx.r31.u32 + 972, ctx.r5.u32);
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// stw r4,968(r31)
	REX_STORE_U32(ctx.r31.u32 + 968, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9B90;
	sub_8801A9C8(ctx, base);
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9B98;
	sub_8813FF48(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r4,r28,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r28.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + ctx.r25.u64;
	// add r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 + ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,996(r31)
	REX_STORE_U32(ctx.r31.u32 + 996, ctx.r5.u32);
	// stw r4,992(r31)
	REX_STORE_U32(ctx.r31.u32 + 992, ctx.r4.u32);
	// b 0x880b9c84
	goto loc_880B9C84;
loc_880B9BC4:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-28087
	ctx.r10.s64 = -1840709632;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ori r29,r10,9363
	ctx.r29.u64 = ctx.r10.u64 | 9363;
	// addi r30,r9,-23584
	ctx.r30.s64 = ctx.r9.s64 + -23584;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// lis r25,96
	ctx.r25.s64 = 6291456;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r4,r5,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r3,r10,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880B9C2C;
	sub_8801A9C8(ctx, base);
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9C34;
	sub_8813FF48(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + ctx.r27.u64;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// add r5,r7,r25
	ctx.r5.u64 = ctx.r7.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r3,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(28));
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r3,r7,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r4,r28,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r28.u64;
loc_880B9C84:
	// bl 0x8801a9c8
	ctx.lr = 0x880B9C88;
	sub_8801A9C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff08
	ctx.lr = 0x880B9C94;
	sub_8813FF08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1220(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1220);
	// bl 0x8813ff48
	ctx.lr = 0x880B9CA0;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BB668) {
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
	// addi r11,r4,1240
	ctx.r11.s64 = ctx.r4.s64 + 1240;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-30708
	ctx.r7.s64 = -2012479488;
	// stw r8,1240(r4)
	REX_STORE_U32(ctx.r4.u32 + 1240, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,-22056
	ctx.r5.s64 = ctx.r7.s64 + -22056;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x880BB6B0;
	sub_88021E88(ctx, base);
	// lis r6,-30606
	ctx.r6.s64 = -2005794816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r6,17512
	ctx.r30.s64 = ctx.r6.s64 + 17512;
	// lis r5,-30708
	ctx.r5.s64 = -2012479488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,-21688
	ctx.r5.s64 = ctx.r5.s64 + -21688;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x88021e88
	ctx.lr = 0x880BB6D8;
	sub_88021E88(ctx, base);
	// stw r3,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// lis r4,-30708
	ctx.r4.s64 = -2012479488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r4,-20856
	ctx.r5.s64 = ctx.r4.s64 + -20856;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x88021e88
	ctx.lr = 0x880BB6F4;
	sub_88021E88(ctx, base);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22056
	ctx.r5.s64 = ctx.r11.s64 + -22056;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x88021e88
	ctx.lr = 0x880BB710;
	sub_88021E88(ctx, base);
	// stw r3,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-21688
	ctx.r5.s64 = ctx.r10.s64 + -21688;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x88021e88
	ctx.lr = 0x880BB72C;
	sub_88021E88(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-20856
	ctx.r5.s64 = ctx.r9.s64 + -20856;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021e88
	ctx.lr = 0x880BB748;
	sub_88021E88(ctx, base);
	// stw r3,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_880BC4D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BC4D8;
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
	ctx.lr = 0x880BC4EC;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BC500;
	sub_88021BE0(ctx, base);
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,1204(r28)
	REX_STORE_U32(ctx.r28.u32 + 1204, ctx.r11.u32);
	// stw r11,1208(r28)
	REX_STORE_U32(ctx.r28.u32 + 1208, ctx.r11.u32);
	// stw r10,-11964(r9)
	REX_STORE_U32(ctx.r9.u32 + -11964, ctx.r10.u32);
	// lwz r4,1292(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 1292);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880bc530
	if (!ctx.cr6.eq) goto loc_880BC530;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880BC530:
	// bl 0x88012f38
	ctx.lr = 0x880BC534;
	sub_88012F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88022098
	ctx.lr = 0x880BC53C;
	sub_88022098(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-16840
	ctx.r5.s64 = ctx.r11.s64 + -16840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880BC550;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BD2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BD2E0;
	__savegprlr_28(ctx, base);
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
	ctx.lr = 0x880BD2F4;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021be0
	ctx.lr = 0x880BD308;
	sub_88021BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r9,1260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1260);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r8,1252(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1252);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r10,1252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1252);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,1252(r31)
	REX_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x880bd354
	if (ctx.cr6.lt) goto loc_880BD354;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,1252(r31)
	REX_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
loc_880BD354:
	// lwz r10,1256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1256);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r10,1256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1256(r31)
	REX_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x880bd378
	if (ctx.cr6.lt) goto loc_880BD378;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,1256(r31)
	REX_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
loc_880BD378:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// lwz r7,1268(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1268);
	// stw r7,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r11,1268(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880bd3b8
	if (ctx.cr6.lt) goto loc_880BD3B8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
loc_880BD3B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x880BD3C0;
	sub_880244A8(ctx, base);
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-12336
	ctx.r5.s64 = ctx.r11.s64 + -12336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021b90
	ctx.lr = 0x880BD3D4;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BDC70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880BDC78;
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
	ctx.lr = 0x880BDC88;
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
	ctx.lr = 0x880BDC9C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x880bdd04
	if (ctx.cr6.gt) goto loc_880BDD04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880bdd10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BDD10;
	// bdzf 4*cr6+eq,0x880bddcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BDDCC;
	// bdzf 4*cr6+eq,0x880bde0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880BDE0C;
	// bne cr6,0x880bde60
	if (!ctx.cr6.eq) goto loc_880BDE60;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lis r10,416
	ctx.r10.s64 = 27262976;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880bdd04
	if (!ctx.cr6.lt) goto loc_880BDD04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BDCE0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bdd04
	if (!ctx.cr6.eq) goto loc_880BDD04;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4288
	ctx.r4.s64 = ctx.r11.s64 + -4288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BDCFC;
	sub_88021D68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880BDD04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_880BDD10:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880bddb8
	if (!ctx.cr6.eq) goto loc_880BDDB8;
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// addis r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -5242880;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880bdd04
	if (!ctx.cr6.gt) goto loc_880BDD04;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021d68
	ctx.lr = 0x880BDD44;
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
	ctx.lr = 0x880BDD58;
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
	// bge 0x880bdd78
	if (!ctx.cr0.lt) goto loc_880BDD78;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880BDD78:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-30708
	ctx.r10.s64 = -2012479488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-32312
	ctx.r4.s64 = ctx.r10.s64 + -32312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x880213f0
	ctx.lr = 0x880BDD94;
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
loc_880BDDB8:
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
loc_880BDDCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BDDD8;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bdd04
	if (!ctx.cr6.eq) goto loc_880BDD04;
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
loc_880BDE0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x880bdd04
	if (!ctx.cr0.lt) goto loc_880BDD04;
	// lis r11,-30709
	ctx.r11.s64 = -2012545024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23896
	ctx.r4.s64 = ctx.r11.s64 + 23896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x880BDE30;
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
	// bge 0x880bdd04
	if (!ctx.cr0.lt) goto loc_880BDD04;
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
loc_880BDE60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x88021a28
	ctx.lr = 0x880BDE6C;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880bdd04
	if (!ctx.cr6.eq) goto loc_880BDD04;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bge 0x880bdd04
	if (!ctx.cr0.lt) goto loc_880BDD04;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-9344
	ctx.r4.s64 = ctx.r11.s64 + -9344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x880BDE98;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x880BDEA4;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880C0268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880C0278;
	sub_88023E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C0280;
	sub_88023F40(ctx, base);
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880C0290;
	sub_8813FA58(ctx, base);
	// stw r29,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x880C02A8;
	sub_880240B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x88023c50
	ctx.lr = 0x880C02C0;
	sub_88023C50(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// li r28,8
	ctx.r28.s64 = 8;
	// lis r25,100
	ctx.r25.s64 = 6553600;
	// stw r9,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
loc_880C02E0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x8801a860
	ctx.lr = 0x880C02F4;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stwu r25,12(r30)
	ea = 12 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// bne 0x880c02e0
	if (!ctx.cr0.eq) goto loc_880C02E0;
	// lis r11,120
	ctx.r11.s64 = 7864320;
	// lis r10,280
	ctx.r10.s64 = 18350080;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,296
	ctx.r4.s64 = ctx.r9.s64 + 296;
	// bl 0x88023e90
	ctx.lr = 0x880C0334;
	sub_88023E90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880C0648;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x880c07d0
	if (!ctx.cr6.eq) goto loc_880C07D0;
	// lwz r10,2424(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c0700
	if (!ctx.cr6.eq) goto loc_880C0700;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c0700
	if (!ctx.cr6.eq) goto loc_880C0700;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bge 0x880c0700
	if (!ctx.cr0.lt) goto loc_880C0700;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x880C0698;
	sub_88022BE0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x880C06A8;
	sub_8813FA58(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88022730
	ctx.lr = 0x880C06BC;
	sub_88022730(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x880C06C4;
	sub_88022980(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r30.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r10,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x88021618
	ctx.lr = 0x880C06DC;
	sub_88021618(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x88021cf0
	ctx.lr = 0x880C06E4;
	sub_88021CF0(ctx, base);
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r4,r9,-24384
	ctx.r4.s64 = ctx.r9.s64 + -24384;
	// bl 0x88021ad0
	ctx.lr = 0x880C06F8;
	sub_88021AD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C0700:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880c07d0
	if (!ctx.cr6.eq) goto loc_880C07D0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c07d0
	if (!ctx.cr6.eq) goto loc_880C07D0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x880c07d0
	if (!ctx.cr0.lt) goto loc_880C07D0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88024810
	ctx.lr = 0x880C072C;
	sub_88024810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880c0744
	if (ctx.cr6.eq) goto loc_880C0744;
	// li r11,180
	ctx.r11.s64 = 180;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_880C0744:
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x88022be0
	ctx.lr = 0x880C0754;
	sub_88022BE0(ctx, base);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r11,-11968(r10)
	REX_STORE_U32(ctx.r10.u32 + -11968, ctx.r11.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x880c0784
	if (ctx.cr6.lt) goto loc_880C0784;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880247e8
	ctx.lr = 0x880C0780;
	sub_880247E8(ctx, base);
	// bl 0x88069600
	ctx.lr = 0x880C0784;
	sub_88069600(ctx, base);
loc_880C0784:
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x88021618
	ctx.lr = 0x880C078C;
	sub_88021618(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x88021cf0
	ctx.lr = 0x880C0794;
	sub_88021CF0(ctx, base);
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// li r29,6
	ctx.r29.s64 = 6;
loc_880C079C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c07b0
	if (ctx.cr6.eq) goto loc_880C07B0;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x88022be0
	ctx.lr = 0x880C07B0;
	sub_88022BE0(ctx, base);
loc_880C07B0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,220
	ctx.r30.s64 = ctx.r30.s64 + 220;
	// bne 0x880c079c
	if (!ctx.cr0.eq) goto loc_880C079C;
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22440
	ctx.r4.s64 = ctx.r11.s64 + -22440;
	// bl 0x88021ad0
	ctx.lr = 0x880C07D0;
	sub_88021AD0(ctx, base);
loc_880C07D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C24D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880C24D8;
	__savegprlr_23(ctx, base);
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
	ctx.lr = 0x880C24EC;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021898
	ctx.lr = 0x880C2500;
	sub_88021898(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88024030
	ctx.lr = 0x880C250C;
	sub_88024030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mulli r11,r9,220
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(220));
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bge 0x880c26b4
	if (!ctx.cr0.lt) goto loc_880C26B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r28,16(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r26,r8,-13792
	ctx.r26.s64 = ctx.r8.s64 + -13792;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// add r30,r9,r26
	ctx.r30.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lis r3,-30693
	ctx.r3.s64 = -2011496448;
	// lwz r8,228(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,224(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r11,r3,-13632
	ctx.r11.s64 = ctx.r3.s64 + -13632;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r11,r5,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r8,r4,r28
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x880C259C;
	sub_880A84F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8801a448
	ctx.lr = 0x880C25A8;
	sub_8801A448(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r26,208
	ctx.r10.s64 = ctx.r26.s64 + 208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// add r26,r3,r8
	ctx.r26.u64 = ctx.r3.u64 + ctx.r8.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x880C25C8;
	sub_8801A448(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x880a85c0
	ctx.lr = 0x880C25D8;
	sub_880A85C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x880a99a8
	ctx.lr = 0x880C25EC;
	sub_880A99A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880C25F8;
	sub_8801A448(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,-64
	ctx.r6.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880C2610;
	sub_880A9A58(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a99a8
	ctx.lr = 0x880C2624;
	sub_880A99A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880C2630;
	sub_8801A448(ctx, base);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880C2648;
	sub_880A9A58(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x880a99a8
	ctx.lr = 0x880C265C;
	sub_880A99A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x880C2668;
	sub_8801A448(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880a9a58
	ctx.lr = 0x880C2680;
	sub_880A9A58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x880c26b4
	if (ctx.cr6.lt) goto loc_880C26B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880C26A8;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_880C26B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880C4250;
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
	ctx.lr = 0x880C4268;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x88021508
	ctx.lr = 0x880C427C;
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
	ctx.lr = 0x880C42C4;
	sub_880244D0(ctx, base);
	// stw r3,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r3.u32);
	// lis r5,-30708
	ctx.r5.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,16688
	ctx.r5.s64 = ctx.r5.s64 + 16688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C42DC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C4A68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880C4A70;
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
	ctx.lr = 0x880C4A88;
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
	ctx.lr = 0x880C4A9C;
	sub_88021508(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
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
	// bgt cr6,0x880c4ae0
	if (ctx.cr6.gt) goto loc_880C4AE0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_880C4AE0:
	// li r10,-18
	ctx.r10.s64 = -18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880C4AF0;
	sub_880244A8(ctx, base);
	// lis r9,-30708
	ctx.r9.s64 = -2012479488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r9,18544
	ctx.r5.s64 = ctx.r9.s64 + 18544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880C4B04;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880C5890;
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
	ctx.lr = 0x880C58A4;
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
	ctx.lr = 0x880C58B8;
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
	// bge 0x880c5988
	if (!ctx.cr0.lt) goto loc_880C5988;
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
	// bne cr6,0x880c58f0
	if (!ctx.cr6.eq) goto loc_880C58F0;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_880C58F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,60
	ctx.r10.s64 = 3932160;
	// lwz r8,96(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,92(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addis r26,r8,-8
	ctx.r26.s64 = ctx.r8.s64 + -524288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C591C;
	sub_880244D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88013ce0
	ctx.lr = 0x880C5944;
	sub_88013CE0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c5988
	if (!ctx.cr0.lt) goto loc_880C5988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C595C;
	sub_880244A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c5978
	if (!ctx.cr0.lt) goto loc_880C5978;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x880C5978;
	sub_88021598(ctx, base);
loc_880C5978:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_880C5988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C7788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f5c
	ctx.lr = 0x880C7790;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880C77A4;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88021508
	ctx.lr = 0x880C77B8;
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
	// bge 0x880c80b0
	if (!ctx.cr0.lt) goto loc_880C80B0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x880c7a20
	if (ctx.cr6.eq) goto loc_880C7A20;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// addis r28,r8,-65
	ctx.r28.s64 = ctx.r8.s64 + -4259840;
	// lwz r30,92(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880c7818
	if (!ctx.cr6.eq) goto loc_880C7818;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7814;
	sub_880244D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_880C7818:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-16
	ctx.r6.s64 = -16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// beq cr6,0x880c78f4
	if (ctx.cr6.eq) goto loc_880C78F4;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880140f0
	ctx.lr = 0x880C785C;
	sub_880140F0(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-14
	ctx.r6.s64 = -14;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C788C;
	sub_880140F0(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-12
	ctx.r6.s64 = -12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C78BC;
	sub_880140F0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-11
	ctx.r6.s64 = -11;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C78EC;
	sub_880140F0(ctx, base);
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x880c7998
	goto loc_880C7998;
loc_880C78F4:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x880140f0
	ctx.lr = 0x880C7904;
	sub_880140F0(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-14
	ctx.r6.s64 = -14;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C7934;
	sub_880140F0(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-12
	ctx.r6.s64 = -12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C7964;
	sub_880140F0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-11
	ctx.r6.s64 = -11;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x880140f0
	ctx.lr = 0x880C7994;
	sub_880140F0(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
loc_880C7998:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-10
	ctx.r6.s64 = -10;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x880C79B8;
	sub_88013CE0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x880c80b0
	if (!ctx.cr0.lt) goto loc_880C80B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt cr6,0x880c79f4
	if (ctx.cr6.gt) goto loc_880C79F4;
	// stw r27,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_880C79F4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88021738
	ctx.lr = 0x880C7A00;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880c80b0
	if (!ctx.cr6.eq) goto loc_880C80B0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88021598
	ctx.lr = 0x880C7A14;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
loc_880C7A20:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r21,27
	ctx.r21.s64 = 1769472;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r22,32
	ctx.r22.s64 = 2097152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r4,r21,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r21.u64;
	// subf r5,r22,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r22.u64;
	// bne cr6,0x880c7b34
	if (!ctx.cr6.eq) goto loc_880C7B34;
	// bl 0x880244d0
	ctx.lr = 0x880C7A50;
	sub_880244D0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lis r23,24
	ctx.r23.s64 = 1572864;
	// lis r24,52
	ctx.r24.s64 = 3407872;
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r4,r23,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r23.u64;
	// subf r5,r24,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r24.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7A74;
	sub_880244D0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lis r25,20
	ctx.r25.s64 = 1310720;
	// lis r26,66
	ctx.r26.s64 = 4325376;
	// lwz r7,96(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r26,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r26.u64;
	// subf r4,r25,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7A98;
	sub_880244D0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lis r27,4
	ctx.r27.s64 = 262144;
	// lis r28,76
	ctx.r28.s64 = 4980736;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r28.u64;
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7ABC;
	sub_880244D0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r22,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r22.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7AD8;
	sub_880244D0(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r8,92(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r24,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r24.u64;
	// add r4,r8,r23
	ctx.r4.u64 = ctx.r8.u64 + ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7AF4;
	sub_880244D0(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,96(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r26,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r26.u64;
	// add r4,r6,r25
	ctx.r4.u64 = ctx.r6.u64 + ctx.r25.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7B10;
	sub_880244D0(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7B2C;
	sub_880244D0(ctx, base);
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// b 0x880c7c98
	goto loc_880C7C98;
loc_880C7B34:
	// bl 0x880244d0
	ctx.lr = 0x880C7B38;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8801a808
	ctx.lr = 0x880C7B44;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r23,24
	ctx.r23.s64 = 1572864;
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lis r24,52
	ctx.r24.s64 = 3407872;
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r24,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r24.u64;
	// subf r4,r23,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7B6C;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8801a808
	ctx.lr = 0x880C7B78;
	sub_8801A808(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r25,20
	ctx.r25.s64 = 1310720;
	// stw r6,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lis r26,66
	ctx.r26.s64 = 4325376;
	// lwz r5,92(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// subf r4,r25,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r26,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7BA0;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8801a808
	ctx.lr = 0x880C7BAC;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lis r28,76
	ctx.r28.s64 = 4980736;
	// lwz r8,92(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r28,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r4,r27,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r27.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7BD4;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8801a808
	ctx.lr = 0x880C7BE0;
	sub_8801A808(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// add r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 + ctx.r21.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r22,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r22.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7C00;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a808
	ctx.lr = 0x880C7C0C;
	sub_8801A808(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r24,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r24.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7C2C;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8801a808
	ctx.lr = 0x880C7C38;
	sub_8801A808(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r7,96(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r8,92(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// add r4,r8,r25
	ctx.r4.u64 = ctx.r8.u64 + ctx.r25.u64;
	// subf r5,r26,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7C58;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8801a808
	ctx.lr = 0x880C7C64;
	sub_8801A808(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,92(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// add r4,r5,r27
	ctx.r4.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880C7C84;
	sub_880244D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8801a808
	ctx.lr = 0x880C7C90;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_880C7C98:
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r6,-8
	ctx.r6.s64 = -8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r18,r21,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r21.u64;
	// subf r17,r22,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r22.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x88013940
	ctx.lr = 0x880C7CC8;
	sub_88013940(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// bl 0x88013940
	ctx.lr = 0x880C7CE8;
	sub_88013940(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// bl 0x88013940
	ctx.lr = 0x880C7D08;
	sub_88013940(ctx, base);
	// lwz r5,92(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r18,r23,r5
	ctx.r18.u64 = ctx.r5.u64 - ctx.r23.u64;
	// subf r17,r24,r4
	ctx.r17.u64 = ctx.r4.u64 - ctx.r24.u64;
	// li r6,-12
	ctx.r6.s64 = -12;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7D38;
	sub_88013940(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-4
	ctx.r6.s64 = -4;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// bl 0x88013940
	ctx.lr = 0x880C7D58;
	sub_88013940(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// bl 0x88013940
	ctx.lr = 0x880C7D78;
	sub_88013940(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// subf r17,r26,r10
	ctx.r17.u64 = ctx.r10.u64 - ctx.r26.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// subf r18,r25,r11
	ctx.r18.u64 = ctx.r11.u64 - ctx.r25.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7DA8;
	sub_88013940(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// bl 0x88013940
	ctx.lr = 0x880C7DC8;
	sub_88013940(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// bl 0x88013940
	ctx.lr = 0x880C7DE8;
	sub_88013940(ctx, base);
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// subf r17,r28,r5
	ctx.r17.u64 = ctx.r5.u64 - ctx.r28.u64;
	// subf r18,r27,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r27.u64;
	// li r6,-20
	ctx.r6.s64 = -20;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7E18;
	sub_88013940(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-12
	ctx.r6.s64 = -12;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// bl 0x88013940
	ctx.lr = 0x880C7E38;
	sub_88013940(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-4
	ctx.r6.s64 = -4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013940
	ctx.lr = 0x880C7E54;
	sub_88013940(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-5
	ctx.r7.s64 = ctx.r11.s64 + -5;
	// add r21,r4,r21
	ctx.r21.u64 = ctx.r4.u64 + ctx.r21.u64;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// subf r22,r22,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r22.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7E84;
	sub_88013940(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// bl 0x88013940
	ctx.lr = 0x880C7EA4;
	sub_88013940(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// bl 0x88013940
	ctx.lr = 0x880C7EC4;
	sub_88013940(ctx, base);
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// subf r24,r24,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r24.u64;
	// li r6,-12
	ctx.r6.s64 = -12;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7EF4;
	sub_88013940(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-4
	ctx.r6.s64 = -4;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// bl 0x88013940
	ctx.lr = 0x880C7F14;
	sub_88013940(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// bl 0x88013940
	ctx.lr = 0x880C7F34;
	sub_88013940(ctx, base);
	// lwz r5,92(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// add r25,r5,r25
	ctx.r25.u64 = ctx.r5.u64 + ctx.r25.u64;
	// subf r26,r26,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r26.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7F64;
	sub_88013940(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// bl 0x88013940
	ctx.lr = 0x880C7F84;
	sub_88013940(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x88013940
	ctx.lr = 0x880C7FA4;
	sub_88013940(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// subf r28,r28,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r28.u64;
	// li r6,-20
	ctx.r6.s64 = -20;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88013940
	ctx.lr = 0x880C7FD4;
	sub_88013940(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-12
	ctx.r6.s64 = -12;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x88013940
	ctx.lr = 0x880C7FF4;
	sub_88013940(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-4
	ctx.r6.s64 = -4;
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013940
	ctx.lr = 0x880C8010;
	sub_88013940(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x880c80b0
	if (!ctx.cr0.lt) goto loc_880C80B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244a8
	ctx.lr = 0x880C8028;
	sub_880244A8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r5,r8,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// andc r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// subf. r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bne 0x880c8084
	if (!ctx.cr0.eq) goto loc_880C8084;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_880C8084:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88021738
	ctx.lr = 0x880C8090;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880c80b0
	if (!ctx.cr6.eq) goto loc_880C80B0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88021598
	ctx.lr = 0x880C80A4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
loc_880C80B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88140fac
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF360;
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
	ctx.lr = 0x880CF374;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x880CF384;
	sub_88021898(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-30707
	ctx.r9.s64 = -2012413952;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-3400
	ctx.r5.s64 = ctx.r9.s64 + -3400;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// bl 0x88021848
	ctx.lr = 0x880CF3B0;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CF838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880CF840;
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
	ctx.lr = 0x880CF854;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x88021508
	ctx.lr = 0x880CF864;
	sub_88021508(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r7,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// stw r5,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// stw r4,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r4.u32);
	// bl 0x880244a8
	ctx.lr = 0x880CF8B0;
	sub_880244A8(ctx, base);
	// lis r3,-30707
	ctx.r3.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-2320
	ctx.r5.s64 = ctx.r3.s64 + -2320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880CF8C4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D09F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880D09F8;
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
	ctx.lr = 0x880D0A18;
	sub_88021508(ctx, base);
	// li r7,48
	ctx.r7.s64 = 48;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r7,58
	ctx.r7.s64 = 58;
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r5.u32);
	// stw r4,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r4.u32);
	// stw r9,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// stw r7,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x880D0A70;
	sub_880244A8(ctx, base);
	// lis r6,-30707
	ctx.r6.s64 = -2012413952;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,1112
	ctx.r5.s64 = ctx.r6.s64 + 1112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x880D0A84;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1A80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880D1A88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D1A9C;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x880D1AB0;
	sub_88021508(ctx, base);
	// lwz r30,316(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 316);
	// lwz r29,320(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x880244d0
	ctx.lr = 0x880D1ACC;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,144(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// bl 0x8801a808
	ctx.lr = 0x880D1AD8;
	sub_8801A808(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,144(r27)
	REX_STORE_U32(ctx.r27.u32 + 144, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880d1c34
	if (ctx.cr6.lt) goto loc_880D1C34;
	// bne cr6,0x880d1d20
	if (!ctx.cr6.eq) goto loc_880D1D20;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r10,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// stw r7,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880d1b40
	if (ctx.cr6.eq) goto loc_880D1B40;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_880D1B40:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8801a860
	ctx.lr = 0x880D1B54;
	sub_8801A860(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,88(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addis r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -2097152;
	// lwz r7,144(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880D1B88;
	sub_88013CE0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880D1BCC;
	sub_880244A8(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r9,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r6,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r7,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880D1C34:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x880D1C60;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r29,r10,-24
	ctx.r29.s64 = ctx.r10.s64 + -1572864;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8801a448
	ctx.lr = 0x880D1C80;
	sub_8801A448(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// addis r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -1048576;
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880D1C90:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,144(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x88013940
	ctx.lr = 0x880D1CAC;
	sub_88013940(ctx, base);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 17, ctx.xer);
	// blt cr6,0x880d1c90
	if (ctx.cr6.lt) goto loc_880D1C90;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880D1CF8;
	sub_880244A8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bge 0x880d1d20
	if (!ctx.cr0.lt) goto loc_880D1D20;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_880D1D20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D4E18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880D4E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,36(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88024498
	ctx.lr = 0x880D4E38;
	sub_88024498(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r28,44(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r27,r3,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880D4E58;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x8801a808
	ctx.lr = 0x880D4E68;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x880D4E84;
	sub_8801A3E0(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4184
	ctx.r11.s64 = ctx.r11.s64 + -4184;
loc_880D4E90:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d4f44
	if (!ctx.cr6.gt) goto loc_880D4F44;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x880d4e90
	if (ctx.cr6.lt) goto loc_880D4E90;
loc_880D4F44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D6820) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880D6828;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r29,36(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88024498
	ctx.lr = 0x880D6840;
	sub_88024498(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r28,44(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r27,r3,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880D6860;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x8801a808
	ctx.lr = 0x880D6870;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x880D688C;
	sub_8801A3E0(ctx, base);
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3800
	ctx.r11.s64 = ctx.r11.s64 + -3800;
loc_880D6898:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880d694c
	if (!ctx.cr6.gt) goto loc_880D694C;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x880d6898
	if (ctx.cr6.lt) goto loc_880D6898;
loc_880D694C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7F00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D7F08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,584
	ctx.r4.s64 = 584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D7F18;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D7F20;
	sub_88023F40(ctx, base);
	// li r5,584
	ctx.r5.s64 = 584;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D7F30;
	sub_8813FA58(ctx, base);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D7F44;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D7F4C;
	sub_88023C50(ctx, base);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r4,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r6,-24
	ctx.r6.s64 = -24;
	// stw r28,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r28,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// li r27,32
	ctx.r27.s64 = 32;
	// stw r28,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r5,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// li r26,256
	ctx.r26.s64 = 256;
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// stw r9,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// stw r10,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r10,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r11,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r27,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// stw r6,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r26,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r26.u32);
	// bl 0x880244d0
	ctx.lr = 0x880D7FE4;
	sub_880244D0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,16
	ctx.r10.s64 = 16;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D8000:
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r27,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880d8000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D8000;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,31560
	ctx.r4.s64 = ctx.r10.s64 + 31560;
	// stw r11,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// lwz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// stw r8,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
	// bl 0x88023e90
	ctx.lr = 0x880D8038;
	sub_88023E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D90C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x880D90D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,332
	ctx.r4.s64 = 332;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x880D90E0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x880D90E8;
	sub_88023F40(ctx, base);
	// li r5,332
	ctx.r5.s64 = 332;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x880D90F8;
	sub_8813FA58(ctx, base);
	// stw r30,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r24,r31,20
	ctx.r24.s64 = ctx.r31.s64 + 20;
	// addi r23,r31,16
	ctx.r23.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x880240b8
	ctx.lr = 0x880D9114;
	sub_880240B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x880D911C;
	sub_88023C50(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r28,r31,232
	ctx.r28.s64 = ctx.r31.s64 + 232;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r26,8
	ctx.r26.s64 = 8;
	// stw r9,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r27,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r27.u32);
	// stw r27,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// stw r27,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r27.u32);
loc_880D9160:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x8801a860
	ctx.lr = 0x880D9174;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stwu r27,12(r28)
	ea = 12 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r28.u32 = ea;
	// bne 0x880d9160
	if (!ctx.cr0.eq) goto loc_880D9160;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r7,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// lis r5,-30706
	ctx.r5.s64 = -2012348416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r4.u32);
	// addi r4,r5,-29248
	ctx.r4.s64 = ctx.r5.s64 + -29248;
	// lwz r11,60(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// addis r10,r11,70
	ctx.r10.s64 = ctx.r11.s64 + 4587520;
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r6,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// bl 0x88023e90
	ctx.lr = 0x880D91E4;
	sub_88023E90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D9D68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880D9D70;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d9da4
	if (!ctx.cr6.gt) goto loc_880D9DA4;
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
	ctx.lr = 0x880D9DA4;
	sub_880236A8(ctx, base);
loc_880D9DA4:
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d9f20
	if (!ctx.cr6.eq) goto loc_880D9F20;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,668(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 668);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bne cr6,0x880d9f2c
	if (!ctx.cr6.eq) goto loc_880D9F2C;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x880d9f2c
	if (ctx.cr6.gt) goto loc_880D9F2C;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x880229d0
	ctx.lr = 0x880D9DE8;
	sub_880229D0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,4464
	ctx.r5.u64 = ctx.r5.u64 | 4464;
	// bl 0x88024de8
	ctx.lr = 0x880D9E00;
	sub_88024DE8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8813fa58
	ctx.lr = 0x880D9E10;
	sub_8813FA58(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88022730
	ctx.lr = 0x880D9E24;
	sub_88022730(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x88022980
	ctx.lr = 0x880D9E2C;
	sub_88022980(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x88023678
	ctx.lr = 0x880D9E38;
	sub_88023678(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x88021618
	ctx.lr = 0x880D9E50;
	sub_88021618(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88021cf0
	ctx.lr = 0x880D9E58;
	sub_88021CF0(ctx, base);
	// addi r11,r31,1068
	ctx.r11.s64 = ctx.r31.s64 + 1068;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r30,r11,112
	ctx.r30.s64 = ctx.r11.s64 + 112;
	// li r27,0
	ctx.r27.s64 = 0;
loc_880D9E68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d9ea4
	if (!ctx.cr6.eq) goto loc_880D9EA4;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r27.u32);
	// lwz r3,-32(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x88022be0
	ctx.lr = 0x880D9E88;
	sub_88022BE0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21160
	ctx.r4.s64 = ctx.r11.s64 + -21160;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x880D9EA4;
	sub_88021780(ctx, base);
loc_880D9EA4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// bne 0x880d9e68
	if (!ctx.cr0.eq) goto loc_880D9E68;
	// addi r11,r31,1596
	ctx.r11.s64 = ctx.r31.s64 + 1596;
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r30,r11,112
	ctx.r30.s64 = ctx.r11.s64 + 112;
loc_880D9EBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d9ef8
	if (!ctx.cr6.eq) goto loc_880D9EF8;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,-20(r30)
	REX_STORE_U32(ctx.r30.u32 + -20, ctx.r27.u32);
	// lwz r3,-32(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x88022be0
	ctx.lr = 0x880D9EDC;
	sub_88022BE0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-30706
	ctx.r11.s64 = -2012348416;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20680
	ctx.r4.s64 = ctx.r11.s64 + -20680;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x88021780
	ctx.lr = 0x880D9EF8;
	sub_88021780(ctx, base);
loc_880D9EF8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// bne 0x880d9ebc
	if (!ctx.cr0.eq) goto loc_880D9EBC;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r10,-3248
	ctx.r4.s64 = ctx.r10.s64 + -3248;
	// stw r11,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
	// bl 0x88021ad0
	ctx.lr = 0x880D9F20;
	sub_88021AD0(ctx, base);
loc_880D9F20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D9F2C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d9f20
	if (!ctx.cr6.eq) goto loc_880D9F20;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880d9f20
	if (ctx.cr6.gt) goto loc_880D9F20;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88024810
	ctx.lr = 0x880D9F48;
	sub_88024810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d9f64
	if (ctx.cr6.eq) goto loc_880D9F64;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880D9F64:
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x880229d0
	ctx.lr = 0x880D9F74;
	sub_880229D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x88024de8
	ctx.lr = 0x880D9F8C;
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
	// blt cr6,0x880d9fb0
	if (ctx.cr6.lt) goto loc_880D9FB0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x880247e8
	ctx.lr = 0x880D9FAC;
	sub_880247E8(ctx, base);
	// bl 0x88069600
	ctx.lr = 0x880D9FB0;
	sub_88069600(ctx, base);
loc_880D9FB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x88021618
	ctx.lr = 0x880D9FC4;
	sub_88021618(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88021cf0
	ctx.lr = 0x880D9FCC;
	sub_88021CF0(ctx, base);
	// lwz r9,36(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// lis r10,-30706
	ctx.r10.s64 = -2012348416;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-1472
	ctx.r4.s64 = ctx.r10.s64 + -1472;
	// stw r9,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r9.u32);
	// bl 0x88021ad0
	ctx.lr = 0x880D9FE8;
	sub_88021AD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DD250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880DD258;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DD268;
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
	ctx.lr = 0x880DD27C;
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
	// bge 0x880dd354
	if (!ctx.cr0.lt) goto loc_880DD354;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x880dd2b0
	if (ctx.cr6.gt) goto loc_880DD2B0;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_880DD2B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,218
	ctx.r3.s64 = 218;
	// lwz r27,56(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r30,60(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x88023b90
	ctx.lr = 0x880DD2E8;
	sub_88023B90(ctx, base);
	// li r8,288
	ctx.r8.s64 = 288;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r3,218
	ctx.r3.s64 = 218;
	// bl 0x88023b90
	ctx.lr = 0x880DD304;
	sub_88023B90(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,218
	ctx.r3.s64 = 218;
	// bl 0x88023b90
	ctx.lr = 0x880DD320;
	sub_88023B90(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x880dd354
	if (!ctx.cr0.lt) goto loc_880DD354;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021598
	ctx.lr = 0x880DD348;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_880DD354:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DDF58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880DDF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x880DDF6C;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88024030
	ctx.lr = 0x880DDF78;
	sub_88024030(ctx, base);
	// lwz r4,616(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r31,620(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 620);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,11212
	ctx.r3.s64 = ctx.r11.s64 + 11212;
	// bl 0x8801a9c8
	ctx.lr = 0x880DDF9C;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DDFB4;
	sub_8813FF90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,768(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 768);
	// bl 0x8813ff48
	ctx.lr = 0x880DDFC0;
	sub_8813FF48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,652(r30)
	REX_STORE_U32(ctx.r30.u32 + 652, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,64
	ctx.r3.s64 = 64;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,648(r30)
	REX_STORE_U32(ctx.r30.u32 + 648, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,656(r30)
	REX_STORE_U32(ctx.r30.u32 + 656, ctx.r9.u32);
	// stw r31,660(r30)
	REX_STORE_U32(ctx.r30.u32 + 660, ctx.r31.u32);
	// bl 0x8801a860
	ctx.lr = 0x880DDFF0;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,648(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 648);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,112(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,30
	ctx.r7.s64 = ctx.r9.s64 + 30;
	// stw r8,648(r30)
	REX_STORE_U32(ctx.r30.u32 + 648, ctx.r8.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8801a860
	ctx.lr = 0x880DE01C;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,656(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 656);
	// lis r31,24
	ctx.r31.s64 = 1572864;
	// lwz r4,608(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 608);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,656(r30)
	REX_STORE_U32(ctx.r30.u32 + 656, ctx.r5.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r3,612(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 612);
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// addi r3,r11,10988
	ctx.r3.s64 = ctx.r11.s64 + 10988;
	// bl 0x8801a9c8
	ctx.lr = 0x880DE050;
	sub_8801A9C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DE068;
	sub_8813FF90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,768(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 768);
	// bl 0x8813ff48
	ctx.lr = 0x880DE074;
	sub_8813FF48(ctx, base);
	// lwz r4,600(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 600);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r11,10972
	ctx.r3.s64 = ctx.r11.s64 + 10972;
	// lwz r11,604(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 604);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DE094;
	sub_8801A9C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8813ff90
	ctx.lr = 0x880DE0AC;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,768(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 768);
	// bl 0x8813ff48
	ctx.lr = 0x880DE0B8;
	sub_8813FF48(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r9,2440
	ctx.r11.s64 = ctx.r9.s64 + 2440;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,124(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,10939
	ctx.r3.s64 = ctx.r11.s64 + 10939;
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x880DE100;
	sub_8801A9C8(ctx, base);
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x880DE118;
	sub_8813FF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,768(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 768);
	// bl 0x8813ff48
	ctx.lr = 0x880DE124;
	sub_8813FF48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0A30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0A38;
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
	ctx.lr = 0x880E0A4C;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x88021be0
	ctx.lr = 0x880E0A5C;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880E0A78;
	sub_880244A8(ctx, base);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,2384
	ctx.r5.s64 = ctx.r8.s64 + 2384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0A8C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0C98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0CA0;
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
	ctx.lr = 0x880E0CC0;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x880E0CDC;
	sub_880244A8(ctx, base);
	// lis r8,-30706
	ctx.r8.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,3008
	ctx.r5.s64 = ctx.r8.s64 + 3008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0CF0;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E0F18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x880E0F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	ctx.lr = 0x880E0F40;
	sub_88021BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,120
	ctx.r8.s64 = 7864320;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r7,256
	ctx.r7.s64 = 16777216;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r6,-30706
	ctx.r6.s64 = -2012348416;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,6232
	ctx.r4.s64 = ctx.r6.s64 + 6232;
	// bl 0x88021d68
	ctx.lr = 0x880E0F7C;
	sub_88021D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880244a8
	ctx.lr = 0x880E0F84;
	sub_880244A8(ctx, base);
	// lis r5,-30706
	ctx.r5.s64 = -2012348416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,3648
	ctx.r5.s64 = ctx.r5.s64 + 3648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x880E0F98;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E16D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880E16D8;
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
	ctx.lr = 0x880E16E8;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x880E16F8;
	sub_88021DE0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8801a860
	ctx.lr = 0x880E1710;
	sub_8801A860(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x880e1110
	ctx.lr = 0x880E1738;
	sub_880E1110(ctx, base);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e17e8
	if (!ctx.cr6.eq) goto loc_880E17E8;
	// lwz r28,56(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r27,60(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88024498
	ctx.lr = 0x880E1754;
	sub_88024498(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r26,52(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r25,r3,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x880E1774;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8801a808
	ctx.lr = 0x880E1784;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x880E17A0;
	sub_8801A3E0(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880e17e0
	if (!ctx.cr6.gt) goto loc_880E17E0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x880e17d4
	if (!ctx.cr0.lt) goto loc_880E17D4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_880E17D4:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880e17e8
	if (ctx.cr6.gt) goto loc_880E17E8;
loc_880E17E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_880E17E8:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e181c
	if (ctx.cr6.eq) goto loc_880E181C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x880e181c
	if (!ctx.cr0.lt) goto loc_880E181C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
loc_880E181C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880e184c
	if (ctx.cr6.gt) goto loc_880E184C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,5688
	ctx.r4.s64 = ctx.r9.s64 + 5688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x880E184C;
	sub_88021D68(ctx, base);
loc_880E184C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E3CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880E3CD0;
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
	ctx.lr = 0x880E3CE8;
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
	ctx.lr = 0x880E3CFC;
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
	// beq cr6,0x880e3d98
	if (ctx.cr6.eq) goto loc_880E3D98;
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
	// beq cr6,0x880e3d6c
	if (ctx.cr6.eq) goto loc_880E3D6C;
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
	// beq cr6,0x880e3d98
	if (ctx.cr6.eq) goto loc_880E3D98;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x880e3d94
	goto loc_880E3D94;
loc_880E3D6C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bge cr6,0x880e3d98
	if (!ctx.cr6.lt) goto loc_880E3D98;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880e3d98
	if (!ctx.cr6.eq) goto loc_880E3D98;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_880E3D94:
	// stw r10,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
loc_880E3D98:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3dd4
	if (!ctx.cr6.eq) goto loc_880E3DD4;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,-11916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3dd4
	if (ctx.cr6.eq) goto loc_880E3DD4;
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
	ctx.lr = 0x880E3DD4;
	sub_88022BE0(ctx, base);
loc_880E3DD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x880e4238
	if (ctx.cr6.gt) goto loc_880E4238;
	// lis r12,-30706
	ctx.r12.s64 = -2012348416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15864
	ctx.r12.s64 = ctx.r12.s64 + 15864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880E3E20;
	case 1:
		goto loc_880E3F00;
	case 2:
		goto loc_880E3F7C;
	case 3:
		goto loc_880E4000;
	case 4:
		goto loc_880E402C;
	case 5:
		goto loc_880E40E4;
	case 6:
		goto loc_880E4130;
	case 7:
		goto loc_880E4164;
	case 8:
		goto loc_880E41D0;
	case 9:
		goto loc_880E4214;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880E3E20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r29,20(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E3E2C;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88069270
	ctx.lr = 0x880E3E3C;
	sub_88069270(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e4238
	if (ctx.cr6.gt) goto loc_880E4238;
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
	// bne cr6,0x880e3ef0
	if (!ctx.cr6.eq) goto loc_880E3EF0;
	// stw r29,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lis r9,-30706
	ctx.r9.s64 = -2012348416;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r11,28
	ctx.r11.s64 = 1835008;
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
	ctx.lr = 0x880E3EDC;
	sub_8813FA58(ctx, base);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880E3EEC;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_880E3EF0:
	// stw r29,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E3F00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e3880
	ctx.lr = 0x880E3F0C;
	sub_880E3880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e4238
	if (!ctx.cr6.eq) goto loc_880E4238;
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
	// blt cr6,0x880e3f50
	if (ctx.cr6.lt) goto loc_880E3F50;
	// beq cr6,0x880e3f44
	if (ctx.cr6.eq) goto loc_880E3F44;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880e3f68
	if (!ctx.cr6.lt) goto loc_880E3F68;
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-20480
	ctx.r4.s64 = ctx.r11.s64 + -20480;
	// b 0x880e3f58
	goto loc_880E3F58;
loc_880E3F44:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-21280
	ctx.r4.s64 = ctx.r11.s64 + -21280;
	// b 0x880e3f58
	goto loc_880E3F58;
loc_880E3F50:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// addi r4,r11,-22040
	ctx.r4.s64 = ctx.r11.s64 + -22040;
loc_880E3F58:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x880E3F64;
	sub_880213F0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_880E3F68:
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
loc_880E3F7C:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21860(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880e3fa0
	if (!ctx.cr6.eq) goto loc_880E3FA0;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3fa0
	if (ctx.cr6.eq) goto loc_880E3FA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_880E3FA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,20(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x880247e8
	ctx.lr = 0x880E3FAC;
	sub_880247E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88069270
	ctx.lr = 0x880E3FBC;
	sub_88069270(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e4238
	if (ctx.cr6.gt) goto loc_880E4238;
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
	// stw r11,-11920(r10)
	REX_STORE_U32(ctx.r10.u32 + -11920, ctx.r11.u32);
	// stw r9,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E4000:
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
loc_880E402C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bge 0x880e4238
	if (!ctx.cr0.lt) goto loc_880E4238;
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
	// bgt 0x880e4058
	if (ctx.cr0.gt) goto loc_880E4058;
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_880E4058:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,12
	ctx.r9.s64 = 12;
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
	// bgt 0x880e4088
	if (ctx.cr0.gt) goto loc_880E4088;
	// stw r28,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_880E4088:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,14
	ctx.r9.s64 = 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// divw r6,r7,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// bgt cr6,0x880e4238
	if (ctx.cr6.gt) goto loc_880E4238;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x880e4238
	if (ctx.cr6.gt) goto loc_880E4238;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e40d4
	if (!ctx.cr6.eq) goto loc_880E40D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E40C8;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E40D4:
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
loc_880E40E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88021598
	ctx.lr = 0x880E40F0;
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
	ctx.lr = 0x880E4104;
	sub_8801A448(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
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
loc_880E4130:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e39c8
	ctx.lr = 0x880E413C;
	sub_880E39C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e4238
	if (!ctx.cr6.eq) goto loc_880E4238;
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
loc_880E4164:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bgt 0x880e41a0
	if (ctx.cr0.gt) goto loc_880E41A0;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x880e41a0
	if (ctx.cr6.lt) goto loc_880E41A0;
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
loc_880E41A0:
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
loc_880E41D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880e3af8
	ctx.lr = 0x880E41E0;
	sub_880E3AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880e4238
	if (!ctx.cr6.eq) goto loc_880E4238;
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
loc_880E4214:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge 0x880e4238
	if (!ctx.cr0.lt) goto loc_880E4238;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021928
	ctx.lr = 0x880E4238;
	sub_88021928(ctx, base);
loc_880E4238:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E9EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880E9F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x880E9F14;
	sub_88023F40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021898
	ctx.lr = 0x880E9F28;
	sub_88021898(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,312
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(312));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r30,r11,1612
	ctx.r30.s64 = ctx.r11.s64 + 1612;
	// stw r10,1632(r11)
	REX_STORE_U32(ctx.r11.u32 + 1632, ctx.r10.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r9,1652(r11)
	REX_STORE_U32(ctx.r11.u32 + 1652, ctx.r9.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x880E9F68;
	sub_8801A448(ctx, base);
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r6,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880e9f98
	if (ctx.cr6.eq) goto loc_880E9F98;
	// lis r11,-24
	ctx.r11.s64 = -1572864;
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_880E9F98:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-30705
	ctx.r9.s64 = -2012282880;
	// stw r10,308(r30)
	REX_STORE_U32(ctx.r30.u32 + 308, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-26344
	ctx.r5.s64 = ctx.r9.s64 + -26344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x88021848
	ctx.lr = 0x880E9FBC;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EA6D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x880EA6D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x88021508
	ctx.lr = 0x880EA6F8;
	sub_88021508(ctx, base);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,104
	ctx.r6.s64 = 104;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r6,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r28,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r28.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r27,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r5,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// bne cr6,0x880ea7c8
	if (!ctx.cr6.eq) goto loc_880EA7C8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,384
	ctx.r10.s64 = 384;
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// li r5,-8
	ctx.r5.s64 = -8;
	// stw r7,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r5,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
loc_880EA7C8:
	// lis r11,-30705
	ctx.r11.s64 = -2012282880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-23256
	ctx.r5.s64 = ctx.r11.s64 + -23256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x880EA7DC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EB750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x880EB758;
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
	// lwz r11,-11928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880eb794
	if (ctx.cr6.eq) goto loc_880EB794;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021598
	ctx.lr = 0x880EB788;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_880EB794:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88023f40
	ctx.lr = 0x880EB79C;
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
	ctx.lr = 0x880EB7BC;
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
	// bge 0x880eb940
	if (!ctx.cr0.lt) goto loc_880EB940;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r26,25
	ctx.r26.s64 = 1638400;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r27,12
	ctx.r27.s64 = 786432;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r28,3
	ctx.r28.s64 = 196608;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x880eb870
	if (!ctx.cr6.eq) goto loc_880EB870;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880eb808
	if (!ctx.cr6.eq) goto loc_880EB808;
	// li r4,1
	ctx.r4.s64 = 1;
loc_880EB808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244c0
	ctx.lr = 0x880EB810;
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
	ctx.lr = 0x880EB82C;
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
	ctx.lr = 0x880EB84C;
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
	ctx.lr = 0x880EB86C;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_880EB870:
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
	// li r8,13
	ctx.r8.s64 = 13;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x880EB8A4;
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
	// li r8,13
	ctx.r8.s64 = 13;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r6,-14
	ctx.r6.s64 = ctx.r6.s64 + -14;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EB8D8;
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
	// li r8,13
	ctx.r8.s64 = 13;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r6,r6,-20
	ctx.r6.s64 = ctx.r6.s64 + -20;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// subf r5,r28,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r28.u64;
	// bl 0x88013ce0
	ctx.lr = 0x880EB90C;
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
	// bge 0x880eb940
	if (!ctx.cr0.lt) goto loc_880EB940;
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
loc_880EB940:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ED348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880ED350;
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
	ctx.lr = 0x880ED368;
	sub_88023F40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021508
	ctx.lr = 0x880ED384;
	sub_88021508(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ed620
	if (ctx.cr6.eq) goto loc_880ED620;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x880ed640
	if (!ctx.cr0.lt) goto loc_880ED640;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r30,2912(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 2912);
	// lwz r29,2916(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 2916);
	// blt cr6,0x880ed584
	if (ctx.cr6.lt) goto loc_880ED584;
	// beq cr6,0x880ed4a4
	if (ctx.cr6.eq) goto loc_880ED4A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x880ed640
	if (!ctx.cr6.lt) goto loc_880ED640;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880ED3DC;
	sub_880244D0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880ed400
	if (ctx.cr6.eq) goto loc_880ED400;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8801a808
	ctx.lr = 0x880ED3FC;
	sub_8801A808(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
loc_880ED400:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r25,32
	ctx.r25.s64 = 32;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x880140f0
	ctx.lr = 0x880ED434;
	sub_880140F0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x880ed640
	if (ctx.cr0.gt) goto loc_880ED640;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x880ed460
	if (ctx.cr0.gt) goto loc_880ED460;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880ED460;
	sub_88021598(ctx, base);
loc_880ED460:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x880244a8
	ctx.lr = 0x880ED498;
	sub_880244A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880ED4A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880ED4B4;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88013ce0
	ctx.lr = 0x880ED4DC;
	sub_88013CE0(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// bl 0x88013ce0
	ctx.lr = 0x880ED508;
	sub_88013CE0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x880ed640
	if (ctx.cr0.gt) goto loc_880ED640;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x880ed54c
	if (ctx.cr0.gt) goto loc_880ED54C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880ED54C;
	sub_88021598(ctx, base);
loc_880ED54C:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880ED584:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x880ED594;
	sub_880244D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,-4
	ctx.r28.s64 = -4;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x88014578
	ctx.lr = 0x880ED5CC;
	sub_88014578(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x880ed640
	if (ctx.cr0.gt) goto loc_880ED640;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x880ed5f8
	if (ctx.cr0.gt) goto loc_880ED5F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x880ED5F8;
	sub_88021598(ctx, base);
loc_880ED5F8:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_880ED620:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x880ed640
	if (!ctx.cr0.lt) goto loc_880ED640;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_880ED640:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FBBD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x880FBBD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fbcd8
	if (!ctx.cr6.eq) goto loc_880FBCD8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r10,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// li r6,11264
	ctx.r6.s64 = 11264;
	// lwz r28,44(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r7,40(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lis r3,72
	ctx.r3.s64 = 4718592;
	// stw r6,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r6.u32);
	// lis r6,-30704
	ctx.r6.s64 = -2012217344;
	// stw r9,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r9.u32);
	// lis r9,36
	ctx.r9.s64 = 2359296;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lis r27,124
	ctx.r27.s64 = 8126464;
	// sth r10,48(r5)
	REX_STORE_U16(ctx.r5.u32 + 48, ctx.r10.u16);
	// lis r5,-30704
	ctx.r5.s64 = -2012217344;
	// stw r7,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lis r26,-56
	ctx.r26.s64 = -3670016;
	// sth r11,52(r31)
	REX_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// addi r25,r5,-17640
	ctx.r25.s64 = ctx.r5.s64 + -17640;
	// stw r28,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r6,r6,-17640
	ctx.r6.s64 = ctx.r6.s64 + -17640;
	// lwz r30,48(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r5,48(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r10,128(r31)
	REX_STORE_U16(ctx.r31.u32 + 128, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// sth r11,132(r31)
	REX_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// stw r28,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// lwz r7,52(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r10,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r8,52(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r26,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r6,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r31,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r31.u32);
	// stw r25,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// stw r31,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r31.u32);
	// bl 0x8813fa58
	ctx.lr = 0x880FBCC4;
	sub_8813FA58(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x88022730
	ctx.lr = 0x880FBCD4;
	sub_88022730(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_880FBCD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FCC58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x880FCC60;
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
	ctx.lr = 0x880FCC74;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021898
	ctx.lr = 0x880FCC88;
	sub_88021898(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,4856
	ctx.r11.s64 = ctx.r11.s64 + 4856;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r10,8532(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8532);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x880fccf0
	if (ctx.cr6.lt) goto loc_880FCCF0;
	// beq cr6,0x880fcce0
	if (ctx.cr6.eq) goto loc_880FCCE0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x880fcd00
	if (!ctx.cr6.lt) goto loc_880FCD00;
loc_880FCCE0:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,10
	ctx.xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.u64 = static_cast<uint64_t>(10) - ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x880fccfc
	goto loc_880FCCFC;
loc_880FCCF0:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,24
	ctx.xer.ca = ctx.r10.u32 <= 24;
	ctx.r9.u64 = static_cast<uint64_t>(24) - ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_880FCCFC:
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
loc_880FCD00:
	// li r10,512
	ctx.r10.s64 = 512;
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r9,-14184
	ctx.r5.s64 = ctx.r9.s64 + -14184;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021848
	ctx.lr = 0x880FCD24;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FD718) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f78
	ctx.lr = 0x880FD720;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8528);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x88069160
	ctx.lr = 0x880FD744;
	sub_88069160(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x88069170
	ctx.lr = 0x880FD75C;
	sub_88069170(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,-30608
	ctx.r7.s64 = -2005925888;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r11,21860(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 21860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880fd7e8
	if (!ctx.cr6.eq) goto loc_880FD7E8;
	// addi r30,r31,8452
	ctx.r30.s64 = ctx.r31.s64 + 8452;
	// addi r11,r31,8444
	ctx.r11.s64 = ctx.r31.s64 + 8444;
	// li r29,34
	ctx.r29.s64 = 34;
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880FD788:
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813fa60
	ctx.lr = 0x880FD798;
	sub_8813FA60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x880fd788
	if (!ctx.cr0.eq) goto loc_880FD788;
	// lwz r11,8520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8520);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8516(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8516);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,144
	ctx.r3.s64 = 144;
	// stw r11,8520(r31)
	REX_STORE_U32(ctx.r31.u32 + 8520, ctx.r11.u32);
	// bl 0x8801a860
	ctx.lr = 0x880FD7C4;
	sub_8801A860(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8520(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8520);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a860
	ctx.lr = 0x880FD7D8;
	sub_8801A860(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_880FD7E8:
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lis r10,453
	ctx.r10.s64 = 29687808;
	// lis r9,66
	ctx.r9.s64 = 4325376;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,8460(r31)
	REX_STORE_U32(ctx.r31.u32 + 8460, ctx.r11.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r11,8184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8184);
	// lis r8,73
	ctx.r8.s64 = 4784128;
	// stw r11,8464(r31)
	REX_STORE_U32(ctx.r31.u32 + 8464, ctx.r11.u32);
	// lis r11,403
	ctx.r11.s64 = 26411008;
	// lwz r10,8220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8220);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r10,8468(r31)
	REX_STORE_U32(ctx.r31.u32 + 8468, ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r9,8224(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8224);
	// addi r11,r31,548
	ctx.r11.s64 = ctx.r31.s64 + 548;
	// stw r9,8472(r31)
	REX_STORE_U32(ctx.r31.u32 + 8472, ctx.r9.u32);
	// lis r7,62
	ctx.r7.s64 = 4063232;
	// lwz r4,8260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8260);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// stw r4,8476(r31)
	REX_STORE_U32(ctx.r31.u32 + 8476, ctx.r4.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,8264(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// stw r10,8480(r31)
	REX_STORE_U32(ctx.r31.u32 + 8480, ctx.r10.u32);
	// lwz r9,8300(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8300);
	// stw r9,8484(r31)
	REX_STORE_U32(ctx.r31.u32 + 8484, ctx.r9.u32);
	// lwz r10,8304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r10,8488(r31)
	REX_STORE_U32(ctx.r31.u32 + 8488, ctx.r10.u32);
	// lwz r9,8340(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8340);
	// stw r9,8492(r31)
	REX_STORE_U32(ctx.r31.u32 + 8492, ctx.r9.u32);
	// lwz r10,8344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8344);
	// stw r10,8496(r31)
	REX_STORE_U32(ctx.r31.u32 + 8496, ctx.r10.u32);
	// lwz r9,8380(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8380);
	// stw r9,8500(r31)
	REX_STORE_U32(ctx.r31.u32 + 8500, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,8384(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8384);
	// stw r10,8504(r31)
	REX_STORE_U32(ctx.r31.u32 + 8504, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// lwz r9,8504(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8504);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r10,-724
	ctx.r9.s64 = ctx.r10.s64 + -47448064;
	// stw r9,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8468);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r9,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r9.u32);
	// lwz r9,8472(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8472);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r28,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r28.u64;
	// stw r9,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8468(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8468);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r8,57
	ctx.r8.s64 = 3735552;
	// stw r9,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// lwz r9,8472(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8472);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r28,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r28.u64;
	// stw r9,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// lwz r9,8476(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8476);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8480(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8480);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r5,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8476(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8476);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lis r5,553
	ctx.r5.s64 = 36241408;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r6,171
	ctx.r6.s64 = 11206656;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lis r7,296
	ctx.r7.s64 = 19398656;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,8480(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8480);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// stw r9,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// lwz r10,8484(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8484);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r29.u64;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8488(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8488);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r4,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// lwz r10,8484(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8484);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r9,8488(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8488);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// lwz r10,8492(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8492);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r4,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// lwz r9,8496(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8496);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,8492(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8492);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r4.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8496(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8496);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// lis r9,267
	ctx.r9.s64 = 17498112;
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// lis r5,232
	ctx.r5.s64 = 15204352;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r11,7364(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7364);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r3,r6,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lis r6,172
	ctx.r6.s64 = 11272192;
	// stw r3,1664(r31)
	REX_STORE_U32(ctx.r31.u32 + 1664, ctx.r3.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,7368(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7368);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lis r7,87
	ctx.r7.s64 = 5701632;
	// stw r10,1668(r31)
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7420(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7420);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r11,r31,3012
	ctx.r11.s64 = ctx.r31.s64 + 3012;
	// stw r4,1976(r31)
	REX_STORE_U32(ctx.r31.u32 + 1976, ctx.r4.u32);
	// lwz r10,7424(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7424);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r28.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r9,1980(r31)
	REX_STORE_U32(ctx.r31.u32 + 1980, ctx.r9.u32);
	// addi r10,r31,3488
	ctx.r10.s64 = ctx.r31.s64 + 3488;
	// lwz r9,7372(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7372);
	// lis r30,94
	ctx.r30.s64 = 6160384;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lis r3,112
	ctx.r3.s64 = 7340032;
	// stw r6,2288(r31)
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r6.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r9,7376(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7376);
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r7,r27,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r7,2292(r31)
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,7428(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7428);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lis r5,115
	ctx.r5.s64 = 7536640;
	// stw r7,2600(r31)
	REX_STORE_U32(ctx.r31.u32 + 2600, ctx.r7.u32);
	// lwz r9,7432(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7432);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r7,r27,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r7,2604(r31)
	REX_STORE_U32(ctx.r31.u32 + 2604, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,7736(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,2912(r31)
	REX_STORE_U32(ctx.r31.u32 + 2912, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,7740(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r9,r7,-131
	ctx.r9.s64 = ctx.r7.s64 + -8585216;
	// stw r9,2916(r31)
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r9.u32);
	// lwz r9,7728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,3064(r31)
	REX_STORE_U32(ctx.r31.u32 + 3064, ctx.r7.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,7732(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7732);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r7,r9,-161
	ctx.r7.s64 = ctx.r9.s64 + -10551296;
	// stw r7,3068(r31)
	REX_STORE_U32(ctx.r31.u32 + 3068, ctx.r7.u32);
	// lwz r9,7720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,3216(r31)
	REX_STORE_U32(ctx.r31.u32 + 3216, ctx.r9.u32);
	// lwz r9,7724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7724);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r9,r7,-188
	ctx.r9.s64 = ctx.r7.s64 + -12320768;
	// stw r9,3220(r31)
	REX_STORE_U32(ctx.r31.u32 + 3220, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8120);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r25,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r25.u64;
	// stw r11,3388(r31)
	REX_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// lwz r11,8124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8124);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r11,r10,172
	ctx.r11.s64 = ctx.r10.s64 + 172;
	// stw r7,3392(r31)
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r7.u32);
	// lis r9,60
	ctx.r9.s64 = 3932160;
	// lwz r10,8160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8160);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r7,3560(r31)
	REX_STORE_U32(ctx.r31.u32 + 3560, ctx.r7.u32);
	// lwz r10,8164(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8164);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r7,3564(r31)
	REX_STORE_U32(ctx.r31.u32 + 3564, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8112);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r30,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r30.u64;
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8116);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8152);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8156);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// lwz r10,8104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r10,8108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r3,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// lwz r10,8144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8144);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r10,8148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r3,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8096(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8096);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r5,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8100);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r3,r6,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r6.u64;
	// addi r10,r31,5000
	ctx.r10.s64 = ctx.r31.s64 + 5000;
	// stw r3,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// lwz r7,8136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8136);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r6,244(r11)
	REX_STORE_U32(ctx.r11.u32 + 244, ctx.r6.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8140);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r4,r29,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r29.u64;
	// stw r4,248(r11)
	REX_STORE_U32(ctx.r11.u32 + 248, ctx.r4.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7744);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,4756(r31)
	REX_STORE_U32(ctx.r31.u32 + 4756, ctx.r3.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,7748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7748);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 1572864;
	// stw r7,4760(r31)
	REX_STORE_U32(ctx.r31.u32 + 4760, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8492(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8492);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r4,4900(r31)
	REX_STORE_U32(ctx.r31.u32 + 4900, ctx.r4.u32);
	// lis r3,76
	ctx.r3.s64 = 4980736;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// lis r5,326
	ctx.r5.s64 = 21364736;
	// lis r6,162
	ctx.r6.s64 = 10616832;
	// lwz r7,8496(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8496);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r9,r11,-564
	ctx.r9.s64 = ctx.r11.s64 + -36962304;
	// stw r9,4904(r31)
	REX_STORE_U32(ctx.r31.u32 + 4904, ctx.r9.u32);
	// lwz r11,8484(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8484);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r7,5044(r31)
	REX_STORE_U32(ctx.r31.u32 + 5044, ctx.r7.u32);
	// lwz r7,8488(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8488);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r9,r11,-520
	ctx.r9.s64 = ctx.r11.s64 + -34078720;
	// stw r9,5048(r31)
	REX_STORE_U32(ctx.r31.u32 + 5048, ctx.r9.u32);
	// lwz r7,8476(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8476);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8480(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8480);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r9,r7,-472
	ctx.r9.s64 = ctx.r7.s64 + -30932992;
	// addi r11,r10,144
	ctx.r11.s64 = ctx.r10.s64 + 144;
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r7,8468(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8468);
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8472(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8472);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addis r10,r7,-414
	ctx.r10.s64 = ctx.r7.s64 + -27131904;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8460(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8460);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8464(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8464);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r7,-349
	ctx.r10.s64 = ctx.r7.s64 + -22872064;
	// stw r10,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7704);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,5620(r31)
	REX_STORE_U32(ctx.r31.u32 + 5620, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,7708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7708);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r7,-253
	ctx.r10.s64 = ctx.r7.s64 + -16580608;
	// addi r11,r31,5720
	ctx.r11.s64 = ctx.r31.s64 + 5720;
	// stw r10,5624(r31)
	REX_STORE_U32(ctx.r31.u32 + 5624, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,7332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7332);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r7,r3,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r7,5764(r31)
	REX_STORE_U32(ctx.r31.u32 + 5764, ctx.r7.u32);
	// lwz r10,7336(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7336);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r9,5768(r31)
	REX_STORE_U32(ctx.r31.u32 + 5768, ctx.r9.u32);
	// lwz r10,7388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7388);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r31,6008
	ctx.r11.s64 = ctx.r31.s64 + 6008;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r3,5908(r31)
	REX_STORE_U32(ctx.r31.u32 + 5908, ctx.r3.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,7392(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7392);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r9,5912(r31)
	REX_STORE_U32(ctx.r31.u32 + 5912, ctx.r9.u32);
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r4,r29,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r29.u64;
	// stw r4,6052(r31)
	REX_STORE_U32(ctx.r31.u32 + 6052, ctx.r4.u32);
	// lwz r9,7740(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r10,6056(r31)
	REX_STORE_U32(ctx.r31.u32 + 6056, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,7736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7736);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r7,6196(r31)
	REX_STORE_U32(ctx.r31.u32 + 6196, ctx.r7.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,7740(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7740);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r3,6200(r31)
	REX_STORE_U32(ctx.r31.u32 + 6200, ctx.r3.u32);
	// lwz r11,7340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7340);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r6,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// lis r10,211
	ctx.r10.s64 = 13828096;
	// stw r9,6336(r31)
	REX_STORE_U32(ctx.r31.u32 + 6336, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,7344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7344);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r3,6340(r31)
	REX_STORE_U32(ctx.r31.u32 + 6340, ctx.r3.u32);
	// lwz r11,7396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7396);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r10,6556(r31)
	REX_STORE_U32(ctx.r31.u32 + 6556, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,7400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7400);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r5,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r7,6560(r31)
	REX_STORE_U32(ctx.r31.u32 + 6560, ctx.r7.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7760(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7760);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6780(r31)
	REX_STORE_U32(ctx.r31.u32 + 6780, ctx.r6.u32);
	// lwz r11,7764(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r8,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stw r4,6784(r31)
	REX_STORE_U32(ctx.r31.u32 + 6784, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88140fc8
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88103C60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88103C68;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88103C7C;
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
	ctx.lr = 0x88103C90;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88103df8
	if (ctx.cr6.eq) goto loc_88103DF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88103e28
	if (!ctx.cr0.lt) goto loc_88103E28;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88024438
	ctx.lr = 0x88103CC4;
	sub_88024438(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lis r27,110
	ctx.r27.s64 = 7208960;
	// lis r28,72
	ctx.r28.s64 = 4718592;
	// stw r8,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88103d10
	if (!ctx.cr6.eq) goto loc_88103D10;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r23,r10,r28
	ctx.r23.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x880244d0
	ctx.lr = 0x88103D04;
	sub_880244D0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r26,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r23,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
loc_88103D10:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88014578
	ctx.lr = 0x88103D44;
	sub_88014578(ctx, base);
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x88024438
	ctx.lr = 0x88103D50;
	sub_88024438(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bne cr6,0x88103d94
	if (!ctx.cr6.eq) goto loc_88103D94;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r30,r27,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x88103D88;
	sub_880244D0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_88103D94:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x88014578
	ctx.lr = 0x88103DC8;
	sub_88014578(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x88103e28
	if (ctx.cr0.gt) goto loc_88103E28;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021598
	ctx.lr = 0x88103DEC;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_88103DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88103e28
	if (!ctx.cr0.lt) goto loc_88103E28;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-16
	ctx.r10.s64 = -16;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,-12
	ctx.r8.s64 = -12;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_88103E28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88105548) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88105550;
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
	ctx.lr = 0x88105564;
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
	ctx.lr = 0x88105578;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810567c
	if (ctx.cr6.eq) goto loc_8810567C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88105720
	if (!ctx.cr0.lt) goto loc_88105720;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r8,r10,30136
	ctx.r8.s64 = ctx.r10.s64 + 30136;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r10,r6,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 1048576;
	// beq cr6,0x881055d8
	if (ctx.cr6.eq) goto loc_881055D8;
	// addis r4,r9,-16
	ctx.r4.s64 = ctx.r9.s64 + -1048576;
loc_881055D8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88013940
	ctx.lr = 0x881055EC;
	sub_88013940(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// blt 0x88105614
	if (ctx.cr0.lt) goto loc_88105614;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_88105614:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x88105720
	if (ctx.cr0.gt) goto loc_88105720;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r6,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x88105720
	if (!ctx.cr6.gt) goto loc_88105720;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bgt 0x88105720
	if (ctx.cr0.gt) goto loc_88105720;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88105670;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_8810567C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x88105720
	if (!ctx.cr0.lt) goto loc_88105720;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r10,30136
	ctx.r7.s64 = ctx.r10.s64 + 30136;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addis r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 1048576;
	// beq cr6,0x881056d4
	if (ctx.cr6.eq) goto loc_881056D4;
	// addis r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -1048576;
loc_881056D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880244d0
	ctx.lr = 0x881056DC;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881056e8
	if (ctx.cr6.lt) goto loc_881056E8;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_881056E8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r4,r5,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r4,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// bl 0x880244a8
	ctx.lr = 0x88105720;
	sub_880244A8(ctx, base);
loc_88105720:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88107338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88107340;
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
	ctx.lr = 0x88107350;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x88021508
	ctx.lr = 0x88107360;
	sub_88021508(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r3,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// li r28,-20
	ctx.r28.s64 = -20;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lis r8,-30704
	ctx.r8.s64 = -2012217344;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// addi r5,r8,28888
	ctx.r5.s64 = ctx.r8.s64 + 28888;
	// stw r6,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r9,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r29,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r29.u32);
	// stw r28,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r28.u32);
	// bl 0x880214b8
	ctx.lr = 0x881073D4;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108CC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17736
	ctx.r9.s64 = ctx.r11.s64 + 17736;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x88022050
	sub_88022050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108CD8) {
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
	// addi r30,r11,17736
	ctx.r30.s64 = ctx.r11.s64 + 17736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x88022050
	ctx.lr = 0x88108D04;
	sub_88022050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x88022050
	ctx.lr = 0x88108D14;
	sub_88022050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88022050
	ctx.lr = 0x88108D24;
	sub_88022050(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x88022050
	ctx.lr = 0x88108D34;
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

DEFINE_REX_FUNC(sub_88108FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88108FF0;
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
	ctx.lr = 0x88109000;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021be0
	ctx.lr = 0x88109014;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bgt 0x881090a8
	if (ctx.cr0.gt) goto loc_881090A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// stw r11,208(r30)
	REX_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,3864
	ctx.r4.s64 = ctx.r10.s64 + 3864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x88109040;
	sub_88021780(ctx, base);
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lis r8,-30608
	ctx.r8.s64 = -2005925888;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,-11968(r9)
	REX_STORE_U32(ctx.r9.u32 + -11968, ctx.r11.u32);
	// stw r10,21868(r8)
	REX_STORE_U32(ctx.r8.u32 + 21868, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88109088
	if (ctx.cr6.lt) goto loc_88109088;
	// beq cr6,0x8810907c
	if (ctx.cr6.eq) goto loc_8810907C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8810909c
	if (!ctx.cr6.lt) goto loc_8810909C;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,-15400
	ctx.r4.s64 = ctx.r11.s64 + -15400;
	// b 0x88109090
	goto loc_88109090;
loc_8810907C:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,-18472
	ctx.r4.s64 = ctx.r11.s64 + -18472;
	// b 0x88109090
	goto loc_88109090;
loc_88109088:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// addi r4,r11,-21376
	ctx.r4.s64 = ctx.r11.s64 + -21376;
loc_88109090:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810909C;
	sub_88021AD0(ctx, base);
loc_8810909C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x881090A8;
	sub_88021C70(ctx, base);
loc_881090A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88109FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88109FF0;
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
	ctx.lr = 0x8810A000;
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
	ctx.lr = 0x8810A014;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8810a054
	if (ctx.cr6.lt) goto loc_8810A054;
	// bne cr6,0x8810a0e0
	if (!ctx.cr6.eq) goto loc_8810A0E0;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6528
	ctx.r4.s64 = ctx.r11.s64 + -6528;
	// bl 0x88021e70
	ctx.lr = 0x8810A038;
	sub_88021E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8810a0e4
	if (ctx.cr6.eq) goto loc_8810A0E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810A054:
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32168
	ctx.r11.s64 = ctx.r11.s64 + 32168;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-5712
	ctx.r4.s64 = ctx.r10.s64 + -5712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addis r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 4194304;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x88021d68
	ctx.lr = 0x8810A0A0;
	sub_88021D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x88021a28
	ctx.lr = 0x8810A0C0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810a0e0
	if (!ctx.cr6.eq) goto loc_8810A0E0;
	// lis r11,-30704
	ctx.r11.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1840
	ctx.r4.s64 = ctx.r11.s64 + 1840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810A0DC;
	sub_88021780(ctx, base);
	// stw r3,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
loc_8810A0E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810A0E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810AE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810AE88;
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
	ctx.lr = 0x8810AE9C;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88021be0
	ctx.lr = 0x8810AEB0;
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
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810AEDC;
	sub_880244A8(ctx, base);
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-21208
	ctx.r5.s64 = ctx.r6.s64 + -21208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810AEF0;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810B5E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810B5E8;
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
	ctx.lr = 0x8810B5F8;
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
	ctx.lr = 0x8810B60C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8810b63c
	if (ctx.cr6.gt) goto loc_8810B63C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8810b648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B648;
	// bdzf 4*cr6+eq,0x8810b694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B694;
	// bdzf 4*cr6+eq,0x8810b710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8810B710;
	// bne cr6,0x8810b794
	if (!ctx.cr6.eq) goto loc_8810B794;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8810B63C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810B648:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x8810b63c
	if (!ctx.cr0.lt) goto loc_8810B63C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// stw r11,168(r29)
	REX_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r10,1328
	ctx.r4.s64 = ctx.r10.s64 + 1328;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810B67C;
	sub_88021780(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810B694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88021a28
	ctx.lr = 0x8810B6A0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810b63c
	if (!ctx.cr6.eq) goto loc_8810B63C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x8810b63c
	if (!ctx.cr0.lt) goto loc_8810B63C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-30704
	ctx.r10.s64 = -2012217344;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,13904
	ctx.r4.s64 = ctx.r10.s64 + 13904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x880213f0
	ctx.lr = 0x8810B6DC;
	sub_880213F0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8810b6fc
	if (ctx.cr6.lt) goto loc_8810B6FC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8810B6FC:
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
loc_8810B710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88021698
	ctx.lr = 0x8810B71C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810b63c
	if (!ctx.cr6.eq) goto loc_8810B63C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,2
	ctx.r10.s64 = 2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bgt 0x8810b63c
	if (ctx.cr0.gt) goto loc_8810B63C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r29)
	REX_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// bl 0x88021c70
	ctx.lr = 0x8810B750;
	sub_88021C70(ctx, base);
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-24336
	ctx.r4.s64 = ctx.r10.s64 + -24336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810B764;
	sub_88021AD0(ctx, base);
	// stw r3,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r3.u32);
	// lis r9,-30704
	ctx.r9.s64 = -2012217344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,1560
	ctx.r4.s64 = ctx.r9.s64 + 1560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021780
	ctx.lr = 0x8810B77C;
	sub_88021780(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8810B794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88021a28
	ctx.lr = 0x8810B7A0;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810b63c
	if (!ctx.cr6.eq) goto loc_8810B63C;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19104
	ctx.r4.s64 = ctx.r11.s64 + -19104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8810B7BC;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021c70
	ctx.lr = 0x8810B7C8;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C7A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8810C7B0;
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
	// bl 0x88023f40
	ctx.lr = 0x8810C7C4;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021be0
	ctx.lr = 0x8810C7D8;
	sub_88021BE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8801a448
	ctx.lr = 0x8810C7E4;
	sub_8801A448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,156(r28)
	REX_STORE_U32(ctx.r28.u32 + 156, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810C808;
	sub_880244A8(ctx, base);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-14688
	ctx.r5.s64 = ctx.r8.s64 + -14688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810C81C;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810CD78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8810CD80;
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
	ctx.lr = 0x8810CD94;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x88021be0
	ctx.lr = 0x8810CDA8;
	sub_88021BE0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r7.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r6,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// bl 0x880244a8
	ctx.lr = 0x8810CDE8;
	sub_880244A8(ctx, base);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-14424
	ctx.r4.s64 = ctx.r4.s64 + -14424;
	// bl 0x88021ad0
	ctx.lr = 0x8810CDFC;
	sub_88021AD0(ctx, base);
	// stw r3,76(r28)
	REX_STORE_U32(ctx.r28.u32 + 76, ctx.r3.u32);
	// lis r3,-30703
	ctx.r3.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r3,-13424
	ctx.r5.s64 = ctx.r3.s64 + -13424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810CE14;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810D458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810D460;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810D474;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x88021be0
	ctx.lr = 0x8810D484;
	sub_88021BE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r5,120
	ctx.r5.s64 = 7864320;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lis r4,208
	ctx.r4.s64 = 13631488;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5712
	ctx.r4.s64 = ctx.r11.s64 + -5712;
	// bl 0x88021d68
	ctx.lr = 0x8810D4D8;
	sub_88021D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880244a8
	ctx.lr = 0x8810D4E0;
	sub_880244A8(ctx, base);
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-11880
	ctx.r5.s64 = ctx.r10.s64 + -11880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810D4F4;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810DDC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810DDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8810DDE4;
	sub_88023F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x88021be0
	ctx.lr = 0x8810DDF4;
	sub_88021BE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r5,120
	ctx.r5.s64 = 7864320;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lis r4,208
	ctx.r4.s64 = 13631488;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5712
	ctx.r4.s64 = ctx.r11.s64 + -5712;
	// bl 0x88021d68
	ctx.lr = 0x8810DE48;
	sub_88021D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880244a8
	ctx.lr = 0x8810DE50;
	sub_880244A8(ctx, base);
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-9464
	ctx.r5.s64 = ctx.r10.s64 + -9464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x8810DE64;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E478) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8810e4e0
	if (ctx.cr6.eq) goto loc_8810E4E0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8801a860
	ctx.lr = 0x8810E4A8;
	sub_8801A860(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addic. r11,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r11.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bgt 0x8810e4e0
	if (ctx.cr0.gt) goto loc_8810E4E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8810E4E0:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88024438
	ctx.lr = 0x8810E4EC;
	sub_88024438(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8810E828) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8810E830;
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
	ctx.lr = 0x8810E840;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021de0
	ctx.lr = 0x8810E850;
	sub_88021DE0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8801a860
	ctx.lr = 0x8810E868;
	sub_8801A860(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x8810e478
	ctx.lr = 0x8810E890;
	sub_8810E478(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8810e940
	if (!ctx.cr6.eq) goto loc_8810E940;
	// lwz r28,48(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,52(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x88024498
	ctx.lr = 0x8810E8AC;
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
	ctx.lr = 0x8810E8CC;
	sub_8801A4A0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8801a808
	ctx.lr = 0x8810E8DC;
	sub_8801A808(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8801a3e0
	ctx.lr = 0x8810E8F8;
	sub_8801A3E0(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8810e938
	if (!ctx.cr6.gt) goto loc_8810E938;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8810e92c
	if (!ctx.cr0.lt) goto loc_8810E92C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_8810E92C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8810e940
	if (ctx.cr6.gt) goto loc_8810E940;
loc_8810E938:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8810E940:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810e974
	if (ctx.cr6.eq) goto loc_8810E974;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bge 0x8810e974
	if (!ctx.cr0.lt) goto loc_8810E974;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_8810E974:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8810e9a4
	if (ctx.cr6.gt) goto loc_8810E9A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-6256
	ctx.r4.s64 = ctx.r9.s64 + -6256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021d68
	ctx.lr = 0x8810E9A4;
	sub_88021D68(ctx, base);
loc_8810E9A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810FAD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8810FAD8;
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
	ctx.lr = 0x8810FAE8;
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
	ctx.lr = 0x8810FAFC;
	sub_88021898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x8810fb58
	if (!ctx.cr0.lt) goto loc_8810FB58;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8810fb58
	if (ctx.cr6.lt) goto loc_8810FB58;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r10,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021928
	ctx.lr = 0x8810FB4C;
	sub_88021928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_8810FB58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881103A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x881103A8;
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
	ctx.lr = 0x881103BC;
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
	ctx.lr = 0x881103D0;
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
	// bge 0x88110500
	if (!ctx.cr0.lt) goto loc_88110500;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,556(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 556);
	// addis r30,r8,-24
	ctx.r30.s64 = ctx.r8.s64 + -1572864;
	// lwz r29,552(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 552);
	// bne cr6,0x88110448
	if (!ctx.cr6.eq) goto loc_88110448;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880244d0
	ctx.lr = 0x88110418;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88110424
	if (ctx.cr6.lt) goto loc_88110424;
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_88110424:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x88110434;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88110448
	if (ctx.cr6.eq) goto loc_88110448;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_88110448:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88013ce0
	ctx.lr = 0x8811046C;
	sub_88013CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x88013ce0
	ctx.lr = 0x88110490;
	sub_88013CE0(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x88110500
	if (!ctx.cr0.lt) goto loc_88110500;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x881104E4;
	sub_880244A8(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x88110500
	if (!ctx.cr0.lt) goto loc_88110500;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x88110500;
	sub_88021598(ctx, base);
loc_88110500:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111FF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x88111FF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8811200C;
	sub_88023F40(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x88112020;
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
	// bge 0x88112254
	if (!ctx.cr0.lt) goto loc_88112254;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,544(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 544);
	// lwz r7,548(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 548);
	// bne cr6,0x8811205c
	if (!ctx.cr6.eq) goto loc_8811205C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_8811205C:
	// lwz r5,116(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 116);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,-32376
	ctx.r9.s64 = ctx.r9.s64 + -32376;
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
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// ble cr6,0x881120c8
	if (!ctx.cr6.gt) goto loc_881120C8;
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// subf r10,r3,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r3.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
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
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x88112100
	goto loc_88112100;
loc_881120C8:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r28,r6,r9
	ctx.r28.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_88112100:
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r3,9
	ctx.r3.s64 = 9;
	// rlwinm r11,r11,0,23,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0;
	// bne cr6,0x88112150
	if (!ctx.cr6.eq) goto loc_88112150;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88013940
	ctx.lr = 0x88112134;
	sub_88013940(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88112144;
	sub_880244D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x88112178
	goto loc_88112178;
loc_88112150:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88013940
	ctx.lr = 0x88112160;
	sub_88013940(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880244d0
	ctx.lr = 0x88112170;
	sub_880244D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_88112178:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x88013940
	ctx.lr = 0x88112190;
	sub_88013940(ctx, base);
	// lwz r11,116(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 116);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,116(r25)
	REX_STORE_U32(ctx.r25.u32 + 116, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x88112254
	if (!ctx.cr0.lt) goto loc_88112254;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880244a8
	ctx.lr = 0x881121B8;
	sub_880244A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x881121d4
	if (ctx.cr6.lt) goto loc_881121D4;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_881121D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// blt cr6,0x88112208
	if (ctx.cr6.lt) goto loc_88112208;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_88112208:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x88112224
	if (ctx.cr6.gt) goto loc_88112224;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_88112224:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x88112240
	if (ctx.cr6.gt) goto loc_88112240;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_88112240:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r9,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88112254:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88113C08;
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
	ctx.lr = 0x88113C18;
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
	ctx.lr = 0x88113C2C;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r4,r8,-2400
	ctx.r4.s64 = ctx.r8.s64 + -2400;
	// bl 0x88021780
	ctx.lr = 0x88113C54;
	sub_88021780(ctx, base);
	// stw r3,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r3.u32);
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r7,-2168
	ctx.r4.s64 = ctx.r7.s64 + -2168;
	// bl 0x88021780
	ctx.lr = 0x88113C6C;
	sub_88021780(ctx, base);
	// stw r3,268(r29)
	REX_STORE_U32(ctx.r29.u32 + 268, ctx.r3.u32);
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-1936
	ctx.r4.s64 = ctx.r6.s64 + -1936;
	// bl 0x88021780
	ctx.lr = 0x88113C84;
	sub_88021780(ctx, base);
	// stw r3,276(r29)
	REX_STORE_U32(ctx.r29.u32 + 276, ctx.r3.u32);
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-1688
	ctx.r4.s64 = ctx.r4.s64 + -1688;
	// bl 0x88021780
	ctx.lr = 0x88113C9C;
	sub_88021780(ctx, base);
	// stw r3,256(r29)
	REX_STORE_U32(ctx.r29.u32 + 256, ctx.r3.u32);
	// lis r3,-30703
	ctx.r3.s64 = -2012151808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r3,14592
	ctx.r5.s64 = ctx.r3.s64 + 14592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021b90
	ctx.lr = 0x88113CB4;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88114EA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88114EB0;
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
	ctx.lr = 0x88114ED0;
	sub_88021BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x880244a8
	ctx.lr = 0x88114EEC;
	sub_880244A8(ctx, base);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,19896
	ctx.r5.s64 = ctx.r8.s64 + 19896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021b90
	ctx.lr = 0x88114F00;
	sub_88021B90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881158E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881158E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x88023f40
	ctx.lr = 0x88115900;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r28,512
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 512, ctx.xer);
	// blt cr6,0x88115920
	if (ctx.cr6.lt) goto loc_88115920;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x88024018
	ctx.lr = 0x88115920;
	sub_88024018(ctx, base);
loc_88115920:
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881152a0
	ctx.lr = 0x8811592C;
	sub_881152A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88115B38) {
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
	ctx.lr = 0x88115B50;
	sub_88023F40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r4,r8,23248
	ctx.r4.s64 = ctx.r8.s64 + 23248;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x88021e18
	ctx.lr = 0x88115B74;
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

DEFINE_REX_FUNC(sub_881160D8) {
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
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x881160F8;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88116100;
	sub_88023F40(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88116110;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88116118;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x8811611C;
	sub_88068E60(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// bl 0x88024028
	ctx.lr = 0x88116130;
	sub_88024028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x88116140;
	sub_880240B8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r10,23680
	ctx.r4.s64 = ctx.r10.s64 + 23680;
	// bl 0x88023e90
	ctx.lr = 0x8811615C;
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

DEFINE_REX_FUNC(sub_88116BE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88116BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,228(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x88024030
	ctx.lr = 0x88116C04;
	sub_88024030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880b1a10
	ctx.lr = 0x88116C0C;
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
	ctx.lr = 0x88116C20;
	sub_880A84F0(ctx, base);
	// lwz r5,196(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x880a85c0
	ctx.lr = 0x88116C30;
	sub_880A85C0(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a8668
	ctx.lr = 0x88116C3C;
	sub_880A8668(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x88023f48
	ctx.lr = 0x88116C44;
	sub_88023F48(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88116ce8
	if (ctx.cr6.eq) goto loc_88116CE8;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88116ce8
	if (ctx.cr6.eq) goto loc_88116CE8;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x88116cc0
	if (ctx.cr6.lt) goto loc_88116CC0;
	// beq cr6,0x88116c78
	if (ctx.cr6.eq) goto loc_88116C78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88116ce8
	if (!ctx.cr6.lt) goto loc_88116CE8;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x88116cd0
	goto loc_88116CD0;
loc_88116C78:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88116ce8
	if (!ctx.cr6.gt) goto loc_88116CE8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x880244d0
	ctx.lr = 0x88116C94;
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
	ctx.lr = 0x88116CB8;
	sub_88013CE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_88116CC0:
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88116ce8
	if (ctx.cr6.lt) goto loc_88116CE8;
loc_88116CD0:
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
	ctx.lr = 0x88116CE8;
	sub_88013940(ctx, base);
loc_88116CE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881179A0) {
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
	// lwz r11,228(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881179e8
	if (!ctx.cr6.gt) goto loc_881179E8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,228(r5)
	REX_STORE_U32(ctx.r5.u32 + 228, ctx.r9.u32);
	// bgt 0x881179e8
	if (ctx.cr0.gt) goto loc_881179E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x88117898
	ctx.lr = 0x881179D4;
	sub_88117898(ctx, base);
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
loc_881179E8:
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

DEFINE_REX_FUNC(sub_88117C98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88117CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023e98
	ctx.lr = 0x88117CB0;
	sub_88023E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f40
	ctx.lr = 0x88117CB8;
	sub_88023F40(ctx, base);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813fa58
	ctx.lr = 0x88117CC8;
	sub_8813FA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880247e8
	ctx.lr = 0x88117CD0;
	sub_880247E8(ctx, base);
	// bl 0x88068e60
	ctx.lr = 0x88117CD4;
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
	ctx.lr = 0x88117CE8;
	sub_88024028(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880240b8
	ctx.lr = 0x88117CF8;
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
	// addi r5,r7,31136
	ctx.r5.s64 = ctx.r7.s64 + 31136;
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
	// addi r6,r8,31136
	ctx.r6.s64 = ctx.r8.s64 + 31136;
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
	// stw r4,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r4.u32);
	// stw r8,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// stw r29,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stw r9,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x88117D98;
	sub_8801A448(ctx, base);
	// stw r3,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023c50
	ctx.lr = 0x88117DA4;
	sub_88023C50(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r10,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// blt cr6,0x88117dc4
	if (ctx.cr6.lt) goto loc_88117DC4;
	// bne cr6,0x88117ddc
	if (!ctx.cr6.eq) goto loc_88117DDC;
loc_88117DC4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x88117DCC;
	sub_8801A448(ctx, base);
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r10,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_88117DDC:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,31232
	ctx.r4.s64 = ctx.r11.s64 + 31232;
	// bl 0x88023e90
	ctx.lr = 0x88117DEC;
	sub_88023E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118A18;
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
	ctx.lr = 0x88118A2C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x88021898
	ctx.lr = 0x88118A3C;
	sub_88021898(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r5,r8,-30360
	ctx.r5.s64 = ctx.r8.s64 + -30360;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// bl 0x88021848
	ctx.lr = 0x88118A6C;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88118D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88118D58;
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
	ctx.lr = 0x88118D6C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x88021898
	ctx.lr = 0x88118D7C;
	sub_88021898(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r5,r8,-29520
	ctx.r5.s64 = ctx.r8.s64 + -29520;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// bl 0x88021848
	ctx.lr = 0x88118DAC;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88119038) {
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
	ctx.lr = 0x88119058;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x88021898
	ctx.lr = 0x88119068;
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
	// addi r5,r9,-28744
	ctx.r5.s64 = ctx.r9.s64 + -28744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x8811908C;
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

DEFINE_REX_FUNC(sub_881193C0) {
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
	ctx.lr = 0x881193E0;
	sub_88023F40(ctx, base);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-27808
	ctx.r5.s64 = ctx.r11.s64 + -27808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x881193F4;
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

DEFINE_REX_FUNC(sub_88119888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88119890;
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
	ctx.lr = 0x881198A0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x88021898
	ctx.lr = 0x881198B4;
	sub_88021898(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r9,384
	ctx.r9.s64 = 384;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,384(r29)
	REX_STORE_U32(ctx.r29.u32 + 384, ctx.r9.u32);
	// addi r5,r7,-26888
	ctx.r5.s64 = ctx.r7.s64 + -26888;
	// stw r8,388(r29)
	REX_STORE_U32(ctx.r29.u32 + 388, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x881198F0;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811A260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811A268;
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
	ctx.lr = 0x8811A27C;
	sub_88023F40(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021508
	ctx.lr = 0x8811A28C;
	sub_88021508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,-12
	ctx.r7.s64 = -12;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// bne cr6,0x8811a2e4
	if (!ctx.cr6.eq) goto loc_8811A2E4;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
loc_8811A2E4:
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r9,-24400
	ctx.r5.s64 = ctx.r9.s64 + -24400;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880214b8
	ctx.lr = 0x8811A324;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811ADA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x8811ADA8;
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
	ctx.lr = 0x8811ADB8;
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
	ctx.lr = 0x8811ADCC;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811ae74
	if (ctx.cr6.eq) goto loc_8811AE74;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811ae94
	if (!ctx.cr0.lt) goto loc_8811AE94;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r9,-23872
	ctx.r11.s64 = ctx.r9.s64 + -23872;
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// subfic r4,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r4.u64 = static_cast<uint64_t>(3) - ctx.r8.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r6,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x8811ae3c
	if (ctx.cr6.eq) goto loc_8811AE3C;
	// subf r4,r10,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8811AE3C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,242
	ctx.r3.s64 = 242;
	// bl 0x88023b90
	ctx.lr = 0x8811AE4C;
	sub_88023B90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x8811ae94
	if (ctx.cr0.gt) goto loc_8811AE94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021598
	ctx.lr = 0x8811AE68;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8811AE74:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811ae94
	if (!ctx.cr0.lt) goto loc_8811AE94;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8811AE94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811BE50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x8811BE58;
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
	ctx.lr = 0x8811BE6C;
	sub_88023F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x88021508
	ctx.lr = 0x8811BE7C;
	sub_88021508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r6,-30702
	ctx.r6.s64 = -2012086272;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// addi r5,r6,-17072
	ctx.r5.s64 = ctx.r6.s64 + -17072;
	// stw r7,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r10.u32);
	// bl 0x880214b8
	ctx.lr = 0x8811BEDC;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811C680) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x8811C688;
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
	ctx.lr = 0x8811C69C;
	sub_88023F40(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021508
	ctx.lr = 0x8811C6AC;
	sub_88021508(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,2
	ctx.r10.s64 = 2;
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
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// bne cr6,0x8811c738
	if (!ctx.cr6.eq) goto loc_8811C738;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x8811C70C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8811c71c
	if (ctx.cr6.eq) goto loc_8811C71C;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8811C71C:
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
	// b 0x8811c758
	goto loc_8811C758;
loc_8811C738:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811c758
	if (ctx.cr6.eq) goto loc_8811C758;
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8811C758:
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
	// addi r5,r10,-15184
	ctx.r5.s64 = ctx.r10.s64 + -15184;
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
	ctx.lr = 0x8811C794;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E5C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8811E5D0;
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
	ctx.lr = 0x8811E5E4;
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
	ctx.lr = 0x8811E5F8;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811e780
	if (ctx.cr6.eq) goto loc_8811E780;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8811e7d0
	if (!ctx.cr0.lt) goto loc_8811E7D0;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-23560
	ctx.r11.s64 = ctx.r11.s64 + -23560;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,76(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwzx r8,r7,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880246c0
	ctx.lr = 0x8811E65C;
	sub_880246C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8811e67c
	if (ctx.cr6.lt) goto loc_8811E67C;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8811E67C:
	// lwz r11,944(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 944);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,18
	ctx.r3.s64 = 18;
	// bne cr6,0x8811e6a4
	if (!ctx.cr6.eq) goto loc_8811E6A4;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x88013940
	ctx.lr = 0x8811E6A0;
	sub_88013940(ctx, base);
	// b 0x8811e6b4
	goto loc_8811E6B4;
loc_8811E6A4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// bl 0x88013ce0
	ctx.lr = 0x8811E6B4;
	sub_88013CE0(ctx, base);
loc_8811E6B4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r9,r10,26215
	ctx.r9.u64 = ctx.r10.u64 | 26215;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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
	// bne 0x8811e724
	if (!ctx.cr0.eq) goto loc_8811E724;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8811e708
	if (ctx.cr6.lt) goto loc_8811E708;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8811E708:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x8811e724
	if (ctx.cr6.gt) goto loc_8811E724;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8811E724:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
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
	// bne cr6,0x8811e74c
	if (!ctx.cr6.eq) goto loc_8811E74C;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8811E74C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8811e7d0
	if (ctx.cr6.gt) goto loc_8811E7D0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021738
	ctx.lr = 0x8811E760;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8811e7d0
	if (!ctx.cr6.eq) goto loc_8811E7D0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88021598
	ctx.lr = 0x8811E774;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8811E780:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8811e7d0
	if (!ctx.cr0.lt) goto loc_8811E7D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8811e7c8
	if (ctx.cr6.eq) goto loc_8811E7C8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
loc_8811E7C8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8811E7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88120988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x88120990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x881209A4;
	sub_88023F40(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021508
	ctx.lr = 0x881209B4;
	sub_88021508(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x8801a448
	ctx.lr = 0x881209EC;
	sub_8801A448(ctx, base);
	// li r8,-20
	ctx.r8.s64 = -20;
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r8,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// stw r27,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r7,r11,-20
	ctx.r7.s64 = ctx.r11.s64 + -20;
	// stw r7,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r6,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// bge cr6,0x88120a30
	if (!ctx.cr6.lt) goto loc_88120A30;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_88120A30:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,1936
	ctx.r5.s64 = ctx.r11.s64 + 1936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880214b8
	ctx.lr = 0x88120A44;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88121300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88121308;
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
	ctx.lr = 0x88121318;
	sub_88023F40(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x88121328;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// bl 0x8801a448
	ctx.lr = 0x88121370;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88121380
	if (ctx.cr6.eq) goto loc_88121380;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_88121380:
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x88121394;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881219C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881219C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x881219D4;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88024030
	ctx.lr = 0x881219E0;
	sub_88024030(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 156);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// mulli r10,r11,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// addi r11,r9,-22808
	ctx.r11.s64 = ctx.r9.s64 + -22808;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r28,5
	ctx.r28.s64 = 5;
loc_881219FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88121a28
	if (!ctx.cr6.gt) goto loc_88121A28;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,76(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8801a9c8
	ctx.lr = 0x88121A28;
	sub_8801A9C8(ctx, base);
loc_88121A28:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x881219fc
	if (!ctx.cr0.eq) goto loc_881219FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125568) {
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
	// addi r11,r4,508
	ctx.r11.s64 = ctx.r4.s64 + 508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9144
	ctx.r5.s64 = ctx.r9.s64 + 9144;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88021e88
	ctx.lr = 0x881255A4;
	sub_88021E88(ctx, base);
	// lis r8,-30606
	ctx.r8.s64 = -2005794816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r8,17808
	ctx.r30.s64 = ctx.r8.s64 + 17808;
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,6720
	ctx.r5.s64 = ctx.r7.s64 + 6720;
	// stw r11,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x881255CC;
	sub_88021E88(ctx, base);
	// stw r3,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
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
	ctx.lr = 0x881255E8;
	sub_88021E88(ctx, base);
	// stw r3,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
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
	ctx.lr = 0x88125604;
	sub_88021E88(ctx, base);
	// stw r3,100(r30)
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20048
	ctx.r5.s64 = ctx.r11.s64 + 20048;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x88021e88
	ctx.lr = 0x88125620;
	sub_88021E88(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
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
	ctx.lr = 0x8812563C;
	sub_88021E88(ctx, base);
	// stw r3,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_88125FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x88125FC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x88125FD4;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88021be0
	ctx.lr = 0x88125FE8;
	sub_88021BE0(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x88024030
	ctx.lr = 0x88126004;
	sub_88024030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8812619c
	if (ctx.cr6.gt) goto loc_8812619C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x881261a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881261A8;
	// bdzf 4*cr6+eq,0x8812637c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8812637C;
	// bdzf 4*cr6+eq,0x881264f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881264F0;
	// bne cr6,0x881265c0
	if (!ctx.cr6.eq) goto loc_881265C0;
	// bl 0x880b1e10
	ctx.lr = 0x88126030;
	sub_880B1E10(ctx, base);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// addi r25,r11,-16720
	ctx.r25.s64 = ctx.r11.s64 + -16720;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r25,384
	ctx.r3.s64 = ctx.r25.s64 + 384;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x880c9b98
	ctx.lr = 0x8812604C;
	sub_880C9B98(ctx, base);
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// addi r30,r25,16
	ctx.r30.s64 = ctx.r25.s64 + 16;
loc_88126054:
	// lwz r10,-12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r8,76(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r9,-8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x880a99a8
	ctx.lr = 0x88126080;
	sub_880A99A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x8812608C;
	sub_8801A448(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880a9a58
	ctx.lr = 0x881260A4;
	sub_880A9A58(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a99a8
	ctx.lr = 0x881260B8;
	sub_880A99A8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x881260C4;
	sub_8801A448(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-64
	ctx.r8.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880a9a58
	ctx.lr = 0x881260DC;
	sub_880A9A58(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x880a99a8
	ctx.lr = 0x881260F0;
	sub_880A99A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a448
	ctx.lr = 0x881260FC;
	sub_8801A448(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,-64
	ctx.r6.s64 = ctx.r11.s64 + -64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88126114;
	sub_880A9A58(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r5,r25,592
	ctx.r5.s64 = ctx.r25.s64 + 592;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88126054
	if (ctx.cr6.lt) goto loc_88126054;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,508(r29)
	REX_STORE_U32(ctx.r29.u32 + 508, ctx.r10.u32);
	// bl 0x88125568
	ctx.lr = 0x88126140;
	sub_88125568(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
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
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x8801a448
	ctx.lr = 0x88126180;
	sub_8801A448(ctx, base);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r28,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_8812619C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_881261A8:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bge 0x881261dc
	if (!ctx.cr0.lt) goto loc_881261DC;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x881261C8;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881261d8
	if (ctx.cr6.eq) goto loc_881261D8;
	// bl 0x880b1c90
	ctx.lr = 0x881261D4;
	sub_880B1C90(ctx, base);
	// b 0x881261dc
	goto loc_881261DC;
loc_881261D8:
	// bl 0x880b1a90
	ctx.lr = 0x881261DC;
	sub_880B1A90(ctx, base);
loc_881261DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x88126230
	if (!ctx.cr0.lt) goto loc_88126230;
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
	// blt cr6,0x88126230
	if (ctx.cr6.lt) goto loc_88126230;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_88126230:
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88126260
	if (!ctx.cr6.eq) goto loc_88126260;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x88126260
	if (ctx.cr6.lt) goto loc_88126260;
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_88126260:
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
	// stw r11,508(r29)
	REX_STORE_U32(ctx.r29.u32 + 508, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8812619c
	if (!ctx.cr0.lt) goto loc_8812619C;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-16720
	ctx.r11.s64 = ctx.r11.s64 + -16720;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// lwz r8,72(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// addi r7,r11,960
	ctx.r7.s64 = ctx.r11.s64 + 960;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// addis r27,r11,40
	ctx.r27.s64 = ctx.r11.s64 + 2621440;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880a84f0
	ctx.lr = 0x88126300;
	sub_880A84F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x8812630C;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x8812631C;
	sub_880A85C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a99a8
	ctx.lr = 0x88126330;
	sub_880A99A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x8812633C;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88126348;
	sub_880A9A58(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// blt cr6,0x8812619c
	if (ctx.cr6.lt) goto loc_8812619C;
	// stw r28,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8812637C:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bge 0x881263b0
	if (!ctx.cr0.lt) goto loc_881263B0;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x8801a448
	ctx.lr = 0x8812639C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881263ac
	if (ctx.cr6.eq) goto loc_881263AC;
	// bl 0x880b1c90
	ctx.lr = 0x881263A8;
	sub_880B1C90(ctx, base);
	// b 0x881263b0
	goto loc_881263B0;
loc_881263AC:
	// bl 0x880b1a90
	ctx.lr = 0x881263B0;
	sub_880B1A90(ctx, base);
loc_881263B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bge 0x8812619c
	if (!ctx.cr0.lt) goto loc_8812619C;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lis r27,40
	ctx.r27.s64 = 2621440;
	// addi r11,r9,-16720
	ctx.r11.s64 = ctx.r9.s64 + -16720;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r10,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,960
	ctx.r4.s64 = ctx.r11.s64 + 960;
	// lwz r7,76(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwzx r3,r5,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// lwzx r5,r9,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// add r26,r7,r27
	ctx.r26.u64 = ctx.r7.u64 + ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880a84f0
	ctx.lr = 0x88126428;
	sub_880A84F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8801a448
	ctx.lr = 0x88126434;
	sub_8801A448(ctx, base);
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x880a85c0
	ctx.lr = 0x88126444;
	sub_880A85C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x880a99a8
	ctx.lr = 0x88126458;
	sub_880A99A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8801a448
	ctx.lr = 0x88126464;
	sub_8801A448(ctx, base);
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880a9a58
	ctx.lr = 0x88126470;
	sub_880A9A58(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// blt cr6,0x8812649c
	if (ctx.cr6.lt) goto loc_8812649C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8812649C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bgt 0x8812619c
	if (ctx.cr0.gt) goto loc_8812619C;
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
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,76(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// add r7,r8,r27
	ctx.r7.u64 = ctx.r8.u64 + ctx.r27.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x88021ad0
	ctx.lr = 0x881264E0;
	sub_88021AD0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_881264F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_881264F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x881252e8
	ctx.lr = 0x88126504;
	sub_881252E8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 26, ctx.xer);
	// blt cr6,0x881264f4
	if (ctx.cr6.lt) goto loc_881264F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812654c
	if (!ctx.cr6.eq) goto loc_8812654C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88024750
	ctx.lr = 0x88126524;
	sub_88024750(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,166
	ctx.r8.s64 = 166;
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// li r7,166
	ctx.r7.s64 = 166;
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r10,3
	ctx.r10.s64 = 3;
	// bl 0x88011728
	ctx.lr = 0x88126548;
	sub_88011728(ctx, base);
	// b 0x8812657c
	goto loc_8812657C;
loc_8812654C:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,166
	ctx.r8.s64 = 166;
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// li r7,166
	ctx.r7.s64 = 166;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,125
	ctx.r5.s64 = 125;
	// bl 0x880114d8
	ctx.lr = 0x8812657C;
	sub_880114D8(ctx, base);
loc_8812657C:
	// bl 0x880b3fb0
	ctx.lr = 0x88126580;
	sub_880B3FB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,76(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,72(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r3,245
	ctx.r3.s64 = 245;
	// beq cr6,0x881265a0
	if (ctx.cr6.eq) goto loc_881265A0;
	// li r3,246
	ctx.r3.s64 = 246;
loc_881265A0:
	// bl 0x88023b90
	ctx.lr = 0x881265A4;
	sub_88023B90(ctx, base);
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
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_881265C0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge 0x8812619c
	if (!ctx.cr0.lt) goto loc_8812619C;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,-11944(r10)
	REX_STORE_U32(ctx.r10.u32 + -11944, ctx.r11.u32);
	// bl 0x88023f48
	ctx.lr = 0x881265E4;
	sub_88023F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812B748) {
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
	ctx.lr = 0x8812B760;
	sub_88023F40(ctx, base);
	// lwz r11,412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// bgt 0x8812b780
	if (ctx.cr0.gt) goto loc_8812B780;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
loc_8812B780:
	// lwz r11,1572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812b978
	if (!ctx.cr6.eq) goto loc_8812B978;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// addi r11,r31,436
	ctx.r11.s64 = ctx.r31.s64 + 436;
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// stw r8,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r8.u32);
	// lhz r10,438(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 438);
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b7bc
	if (ctx.cr6.eq) goto loc_8812B7BC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
loc_8812B7BC:
	// lhz r11,562(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 562);
	// addi r8,r31,560
	ctx.r8.s64 = ctx.r31.s64 + 560;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812b7e0
	if (ctx.cr6.eq) goto loc_8812B7E0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r10,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r10.u16);
loc_8812B7E0:
	// lhz r10,686(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 686);
	// addi r11,r31,684
	ctx.r11.s64 = ctx.r31.s64 + 684;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b804
	if (ctx.cr6.eq) goto loc_8812B804;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B804:
	// lhz r10,810(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 810);
	// addi r11,r31,808
	ctx.r11.s64 = ctx.r31.s64 + 808;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b828
	if (ctx.cr6.eq) goto loc_8812B828;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B828:
	// lhz r10,934(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 934);
	// addi r11,r31,932
	ctx.r11.s64 = ctx.r31.s64 + 932;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b84c
	if (ctx.cr6.eq) goto loc_8812B84C;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B84C:
	// lhz r10,1058(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 1058);
	// addi r11,r31,1056
	ctx.r11.s64 = ctx.r31.s64 + 1056;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b870
	if (ctx.cr6.eq) goto loc_8812B870;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B870:
	// lhz r10,1182(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 1182);
	// addi r11,r31,1180
	ctx.r11.s64 = ctx.r31.s64 + 1180;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b894
	if (ctx.cr6.eq) goto loc_8812B894;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B894:
	// lhz r10,1306(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 1306);
	// addi r11,r31,1304
	ctx.r11.s64 = ctx.r31.s64 + 1304;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b8b8
	if (ctx.cr6.eq) goto loc_8812B8B8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
loc_8812B8B8:
	// lhz r10,1430(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 1430);
	// addi r11,r31,1428
	ctx.r11.s64 = ctx.r31.s64 + 1428;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8812b8dc
	if (ctx.cr6.eq) goto loc_8812B8DC;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// b 0x8812b8e4
	goto loc_8812B8E4;
loc_8812B8DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812b908
	if (ctx.cr6.eq) goto loc_8812B908;
loc_8812B8E4:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r9.u32);
	// beq cr6,0x8812b938
	if (ctx.cr6.eq) goto loc_8812B938;
	// lis r11,192
	ctx.r11.s64 = 12582912;
	// ori r10,r11,49152
	ctx.r10.u64 = ctx.r11.u64 | 49152;
	// b 0x8812b934
	goto loc_8812B934;
loc_8812B908:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812b938
	if (!ctx.cr6.lt) goto loc_8812B938;
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8812b938
	if (!ctx.cr6.eq) goto loc_8812B938;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 | 4112;
loc_8812B934:
	// stw r10,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
loc_8812B938:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r11,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// lwz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r10,208(r8)
	REX_STORE_U32(ctx.r8.u32 + 208, ctx.r10.u32);
	// lwz r9,520(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r9,332(r8)
	REX_STORE_U32(ctx.r8.u32 + 332, ctx.r9.u32);
	// lwz r7,520(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r7,456(r8)
	REX_STORE_U32(ctx.r8.u32 + 456, ctx.r7.u32);
	// lwz r6,520(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r6,580(r8)
	REX_STORE_U32(ctx.r8.u32 + 580, ctx.r6.u32);
	// lwz r5,520(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r5,704(r8)
	REX_STORE_U32(ctx.r8.u32 + 704, ctx.r5.u32);
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r4,828(r8)
	REX_STORE_U32(ctx.r8.u32 + 828, ctx.r4.u32);
	// lwz r3,520(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// stw r3,952(r8)
	REX_STORE_U32(ctx.r8.u32 + 952, ctx.r3.u32);
loc_8812B978:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,340(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r30,1612(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// subf. r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt 0x8812b994
	if (ctx.cr0.gt) goto loc_8812B994;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8812B994:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,1608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8809cbc0
	ctx.lr = 0x8812B9A0;
	sub_8809CBC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,1612(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// bl 0x8809cbc0
	ctx.lr = 0x8812B9B0;
	sub_8809CBC0(ctx, base);
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

DEFINE_REX_FUNC(sub_8812E6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f7c
	ctx.lr = 0x8812E6B0;
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
	ctx.lr = 0x8812E6C4;
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
	ctx.lr = 0x8812E6D8;
	sub_88021508(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812e800
	if (ctx.cr6.eq) goto loc_8812E800;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bge 0x8812e85c
	if (!ctx.cr0.lt) goto loc_8812E85C;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addis r29,r10,-38
	ctx.r29.s64 = ctx.r10.s64 + -2490368;
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880244d0
	ctx.lr = 0x8812E71C;
	sub_880244D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8801a808
	ctx.lr = 0x8812E728;
	sub_8801A808(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8812e7a8
	if (ctx.cr6.eq) goto loc_8812E7A8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r28,-20
	ctx.r28.s64 = -20;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8812E754:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x88013ce0
	ctx.lr = 0x8812E77C;
	sub_88013CE0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812e794
	if (ctx.cr6.eq) goto loc_8812E794;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// b 0x8812e798
	goto loc_8812E798;
loc_8812E794:
	// subf r30,r27,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r27.u64;
loc_8812E798:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r28,-12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -12, ctx.xer);
	// blt cr6,0x8812e754
	if (ctx.cr6.lt) goto loc_8812E754;
	// b 0x8812e7c8
	goto loc_8812E7C8;
loc_8812E7A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r6,-24
	ctx.r6.s64 = -24;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x88013ce0
	ctx.lr = 0x8812E7C8;
	sub_88013CE0(ctx, base);
loc_8812E7C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bgt 0x8812e85c
	if (ctx.cr0.gt) goto loc_8812E85C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt 0x8812e85c
	if (ctx.cr0.gt) goto loc_8812E85C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88021598
	ctx.lr = 0x8812E7F4;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
loc_8812E800:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x8812e85c
	if (!ctx.cr0.lt) goto loc_8812E85C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bgt cr6,0x8812e838
	if (ctx.cr6.gt) goto loc_8812E838;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8812E838:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addis r5,r10,-38
	ctx.r5.s64 = ctx.r10.s64 + -2490368;
	// bl 0x880244d0
	ctx.lr = 0x8812E858;
	sub_880244D0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_8812E85C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fcc
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88130248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f84
	ctx.lr = 0x88130250;
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
	ctx.lr = 0x88130264;
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
	ctx.lr = 0x88130278;
	sub_88021508(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88130330
	if (ctx.cr6.eq) goto loc_88130330;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881303bc
	if (!ctx.cr0.lt) goto loc_881303BC;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,40(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,-14640
	ctx.r11.s64 = ctx.r11.s64 + -14640;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,36
	ctx.r3.s64 = 36;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r30,r4,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x88013ce0
	ctx.lr = 0x881302E8;
	sub_88013CE0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x881303bc
	if (ctx.cr0.gt) goto loc_881303BC;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bgt 0x881303bc
	if (ctx.cr0.gt) goto loc_881303BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88021598
	ctx.lr = 0x88130324;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
loc_88130330:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x881303bc
	if (!ctx.cr0.lt) goto loc_881303BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x881303bc
	if (!ctx.cr6.eq) goto loc_881303BC;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r9,-14640
	ctx.r11.s64 = ctx.r9.s64 + -14640;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x880244d0
	ctx.lr = 0x88130398;
	sub_880244D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881303bc
	if (ctx.cr6.lt) goto loc_881303BC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// blt cr6,0x881303b8
	if (ctx.cr6.lt) goto loc_881303B8;
	// addi r11,r3,-64
	ctx.r11.s64 = ctx.r3.s64 + -64;
loc_881303B8:
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_881303BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd4
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881323F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881323F8;
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
	ctx.lr = 0x88132408;
	sub_88023F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813241C;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88132478
	if (ctx.cr6.gt) goto loc_88132478;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88132478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132478;
	// bdzf 4*cr6+eq,0x88132484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132484;
	// bdzf 4*cr6+eq,0x88132478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132478;
	// bdzf 4*cr6+eq,0x881324c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881324C8;
	// bne cr6,0x8813251c
	if (!ctx.cr6.eq) goto loc_8813251C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge 0x88132478
	if (!ctx.cr0.lt) goto loc_88132478;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-14768
	ctx.r4.s64 = ctx.r11.s64 + -14768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x8813246C;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_88132478:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88132484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x88021a28
	ctx.lr = 0x88132490;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132478
	if (!ctx.cr6.eq) goto loc_88132478;
	// li r30,4
	ctx.r30.s64 = 4;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10088
	ctx.r4.s64 = ctx.r11.s64 + -10088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880213f0
	ctx.lr = 0x881324B4;
	sub_880213F0(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_881324C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x881324D4;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132478
	if (!ctx.cr6.eq) goto loc_88132478;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14528
	ctx.r4.s64 = ctx.r11.s64 + -14528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x881324F0;
	sub_88021780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// stw r11,1136(r30)
	REX_STORE_U32(ctx.r30.u32 + 1136, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1260(r30)
	REX_STORE_U32(ctx.r30.u32 + 1260, ctx.r11.u32);
	// stw r11,1384(r30)
	REX_STORE_U32(ctx.r30.u32 + 1384, ctx.r11.u32);
	// stw r11,1508(r30)
	REX_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8813251C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x88021a28
	ctx.lr = 0x88132528;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88132478
	if (!ctx.cr6.eq) goto loc_88132478;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,10952
	ctx.r4.s64 = ctx.r11.s64 + 10952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x88132544;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x88132550;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881337E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x881337F0;
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
	ctx.lr = 0x88133800;
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
	ctx.lr = 0x88133814;
	sub_88021BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x88133870
	if (ctx.cr6.gt) goto loc_88133870;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88133870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133870;
	// bdzf 4*cr6+eq,0x8813387c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8813387C;
	// bdzf 4*cr6+eq,0x88133870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133870;
	// bdzf 4*cr6+eq,0x881338c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881338C4;
	// bne cr6,0x88133904
	if (!ctx.cr6.eq) goto loc_88133904;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x88133870
	if (!ctx.cr0.lt) goto loc_88133870;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13808
	ctx.r4.s64 = ctx.r11.s64 + -13808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x88133864;
	sub_88021780(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_88133870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_8813387C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x88021a28
	ctx.lr = 0x88133888;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133870
	if (!ctx.cr6.eq) goto loc_88133870;
	// li r11,50
	ctx.r11.s64 = 50;
	// lis r10,-30701
	ctx.r10.s64 = -2012020736;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-2488
	ctx.r4.s64 = ctx.r10.s64 + -2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880213f0
	ctx.lr = 0x881338AC;
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
loc_881338C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x881338D0;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133870
	if (!ctx.cr6.eq) goto loc_88133870;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13568
	ctx.r4.s64 = ctx.r11.s64 + -13568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021780
	ctx.lr = 0x881338EC;
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
loc_88133904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x88021a28
	ctx.lr = 0x88133910;
	sub_88021A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88133870
	if (!ctx.cr6.eq) goto loc_88133870;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,14208
	ctx.r4.s64 = ctx.r11.s64 + 14208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813392C;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021c70
	ctx.lr = 0x88133938;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88135FC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88135FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88023f40
	ctx.lr = 0x88135FDC;
	sub_88023F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88024030
	ctx.lr = 0x88135FE8;
	sub_88024030(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8801a860
	ctx.lr = 0x88136000;
	sub_8801A860(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
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
	ctx.lr = 0x8813602C;
	sub_88024438(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88136074
	if (!ctx.cr6.eq) goto loc_88136074;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x88136074
	if (ctx.cr6.lt) goto loc_88136074;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_88136074:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881360ec
	if (!ctx.cr6.eq) goto loc_881360EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bge 0x881360ec
	if (!ctx.cr0.lt) goto loc_881360EC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,-85
	ctx.r6.s64 = -85;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88013ce0
	ctx.lr = 0x881360BC;
	sub_88013CE0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bge 0x881360ec
	if (!ctx.cr0.lt) goto loc_881360EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88023f48
	ctx.lr = 0x881360E4;
	sub_88023F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
loc_881360EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,10337
	ctx.r3.s64 = ctx.r11.s64 + 10337;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a9c8
	ctx.lr = 0x88136104;
	sub_8801A9C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8813ff90
	ctx.lr = 0x8813611C;
	sub_8813FF90(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,218
	ctx.r6.s64 = 218;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,10337
	ctx.r3.s64 = ctx.r11.s64 + 10337;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8801a9c8
	ctx.lr = 0x88136134;
	sub_8801A9C8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8813ff90
	ctx.lr = 0x88136150;
	sub_8813FF90(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfic r8,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// oris r4,r8,255
	ctx.r4.u64 = ctx.r8.u64 | 16711680;
	// bl 0x8813ff48
	ctx.lr = 0x88136164;
	sub_8813FF48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881374A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x881374A8;
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
	ctx.lr = 0x881374B8;
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
	ctx.lr = 0x881374CC;
	sub_88021898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r8,-30701
	ctx.r8.s64 = -2012020736;
	// lwz r7,396(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 396);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// stw r9,412(r29)
	REX_STORE_U32(ctx.r29.u32 + 412, ctx.r9.u32);
	// stw r11,396(r29)
	REX_STORE_U32(ctx.r29.u32 + 396, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfic r9,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r9.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// addi r5,r8,29712
	ctx.r5.s64 = ctx.r8.s64 + 29712;
	// stw r9,404(r29)
	REX_STORE_U32(ctx.r29.u32 + 404, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021848
	ctx.lr = 0x88137510;
	sub_88021848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881378A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x881378A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x881378B8;
	sub_88023F40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88021898
	ctx.lr = 0x881378CC;
	sub_88021898(ctx, base);
	// addi r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 + 112;
	// lwz r30,8(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
	// lis r27,30
	ctx.r27.s64 = 1966080;
loc_881378E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8801a860
	ctx.lr = 0x881378F8;
	sub_8801A860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,76(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r8,r27,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r27.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stwu r30,28(r31)
	ea = 28 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// addi r30,r30,85
	ctx.r30.s64 = ctx.r30.s64 + 85;
	// bne 0x881378e4
	if (!ctx.cr0.eq) goto loc_881378E4;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881385F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88138600;
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
	ctx.lr = 0x88138610;
	sub_88023F40(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x88138620;
	sub_88021508(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x8801a448
	ctx.lr = 0x8813865C;
	sub_8801A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88138670
	if (ctx.cr6.eq) goto loc_88138670;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_88138670:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-31584
	ctx.r5.s64 = ctx.r11.s64 + -31584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880214b8
	ctx.lr = 0x88138684;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88138A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f8c
	ctx.lr = 0x88138A60;
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
	ctx.lr = 0x88138A74;
	sub_88023F40(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88021508
	ctx.lr = 0x88138A84;
	sub_88021508(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,-32
	ctx.r7.s64 = -32;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// blt cr6,0x88138ad4
	if (ctx.cr6.lt) goto loc_88138AD4;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
loc_88138AD4:
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// li r8,96
	ctx.r8.s64 = 96;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lis r7,-30700
	ctx.r7.s64 = -2011955200;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// addi r5,r7,-30608
	ctx.r5.s64 = ctx.r7.s64 + -30608;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// bl 0x880214b8
	ctx.lr = 0x88138B28;
	sub_880214B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x88140fdc
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139450) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88139458;
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
	ctx.lr = 0x88139468;
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
	ctx.lr = 0x8813947C;
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
	// beq cr6,0x88139560
	if (ctx.cr6.eq) goto loc_88139560;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bge 0x88139580
	if (!ctx.cr0.lt) goto loc_88139580;
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
	// addi r9,r5,-11756
	ctx.r9.s64 = ctx.r5.s64 + -11756;
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
	// bgt cr6,0x88139580
	if (ctx.cr6.gt) goto loc_88139580;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88021738
	ctx.lr = 0x88139528;
	sub_88021738(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x88139580
	if (!ctx.cr6.eq) goto loc_88139580;
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
	ctx.lr = 0x88139554;
	sub_88021598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
loc_88139560:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge 0x88139580
	if (!ctx.cr0.lt) goto loc_88139580;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_88139580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813B540) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f74
	ctx.lr = 0x8813B548;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813B55C;
	sub_88023F40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021be0
	ctx.lr = 0x8813B570;
	sub_88021BE0(ctx, base);
	// lis r11,-30608
	ctx.r11.s64 = -2005925888;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,21864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8813b594
	if (!ctx.cr6.eq) goto loc_8813B594;
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8813b148
	ctx.lr = 0x8813B594;
	sub_8813B148(ctx, base);
loc_8813B594:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8813b700
	if (ctx.cr6.lt) goto loc_8813B700;
	// beq cr6,0x8813b610
	if (ctx.cr6.eq) goto loc_8813B610;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8813b790
	if (!ctx.cr6.lt) goto loc_8813B790;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r24,292
	ctx.r31.s64 = ctx.r24.s64 + 292;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8813B5B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88021698
	ctx.lr = 0x8813B5C4;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8813b5d0
	if (ctx.cr6.eq) goto loc_8813B5D0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8813B5D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8813b5b8
	if (!ctx.cr0.eq) goto loc_8813B5B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8813b790
	if (!ctx.cr6.eq) goto loc_8813B790;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19240
	ctx.r4.s64 = ctx.r11.s64 + -19240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021ad0
	ctx.lr = 0x8813B5F8;
	sub_88021AD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88021c70
	ctx.lr = 0x8813B604;
	sub_88021C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8813B610:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x8813B61C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813b790
	if (!ctx.cr6.eq) goto loc_8813B790;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813b644
	if (ctx.cr6.eq) goto loc_8813B644;
loc_8813B630:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8813B644:
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r27,r24,288
	ctx.r27.s64 = ctx.r24.s64 + 288;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r23,32
	ctx.r23.s64 = 32;
	// addi r26,r11,-10336
	ctx.r26.s64 = ctx.r11.s64 + -10336;
loc_8813B660:
	// lwz r11,500(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 500);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8813b68c
	if (ctx.cr6.eq) goto loc_8813B68C;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x8813b6a8
	goto loc_8813B6A8;
loc_8813B68C:
	// addi r11,r26,80
	ctx.r11.s64 = ctx.r26.s64 + 80;
	// addi r10,r26,80
	ctx.r10.s64 = ctx.r26.s64 + 80;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_8813B6A8:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r11,-32424
	ctx.r4.s64 = ctx.r11.s64 + -32424;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813B6CC;
	sub_880213F0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x8813b660
	if (ctx.cr6.lt) goto loc_8813B660;
	// lwz r11,500(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 500);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,500(r24)
	REX_STORE_U32(ctx.r24.u32 + 500, ctx.r9.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
loc_8813B700:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x88021698
	ctx.lr = 0x8813B70C;
	sub_88021698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813b790
	if (!ctx.cr6.eq) goto loc_8813B790;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813b630
	if (!ctx.cr6.eq) goto loc_8813B630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 72);
	// lwz r5,76(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 76);
	// bl 0x880244d0
	ctx.lr = 0x8813B730;
	sub_880244D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r31,16
	ctx.r31.s64 = 16;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r10,-32424
	ctx.r4.s64 = ctx.r10.s64 + -32424;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880213f0
	ctx.lr = 0x8813B76C;
	sub_880213F0(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// stw r3,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// stw r11,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bgt 0x8813b790
	if (ctx.cr0.gt) goto loc_8813B790;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_8813B790:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88140fc4
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813D588) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f80
	ctx.lr = 0x8813D590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x88023f40
	ctx.lr = 0x8813D5A0;
	sub_88023F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x88021de0
	ctx.lr = 0x8813D5B0;
	sub_88021DE0(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// stw r10,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// bl 0x8801a448
	ctx.lr = 0x8813D5CC;
	sub_8801A448(ctx, base);
	// addi r9,r3,-16
	ctx.r9.s64 = ctx.r3.s64 + -16;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// li r3,32
	ctx.r3.s64 = 32;
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r8.u32);
	// bl 0x8801a448
	ctx.lr = 0x8813D5E8;
	sub_8801A448(ctx, base);
	// addi r7,r3,-16
	ctx.r7.s64 = ctx.r3.s64 + -16;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r6.u32);
	// lwz r27,72(r29)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r26,76(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r3,88(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x88024498
	ctx.lr = 0x8813D60C;
	sub_88024498(ctx, base);
	// lwz r5,40(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8801a4a0
	ctx.lr = 0x8813D624;
	sub_8801A4A0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// stw r4,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-11144
	ctx.r4.s64 = ctx.r11.s64 + -11144;
	// stw r10,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// bl 0x88021e18
	ctx.lr = 0x8813D644;
	sub_88021E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88140fd0
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813DC30) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DCB0) {
	REX_FUNC_PROLOGUE();
	// stw r4,712(r3)
	REX_STORE_U32(ctx.r3.u32 + 712, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DCF8) {
	REX_FUNC_PROLOGUE();
	// stw r4,748(r3)
	REX_STORE_U32(ctx.r3.u32 + 748, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD40) {
	REX_FUNC_PROLOGUE();
	// stw r4,784(r3)
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DD90) {
	REX_FUNC_PROLOGUE();
	// stw r4,824(r3)
	REX_STORE_U32(ctx.r3.u32 + 824, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DDE8) {
	REX_FUNC_PROLOGUE();
	// stw r4,868(r3)
	REX_STORE_U32(ctx.r3.u32 + 868, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DE40) {
	REX_FUNC_PROLOGUE();
	// stw r4,912(r3)
	REX_STORE_U32(ctx.r3.u32 + 912, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DE98) {
	REX_FUNC_PROLOGUE();
	// stw r4,956(r3)
	REX_STORE_U32(ctx.r3.u32 + 956, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DEF0) {
	REX_FUNC_PROLOGUE();
	// stw r4,1000(r3)
	REX_STORE_U32(ctx.r3.u32 + 1000, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DF50) {
	REX_FUNC_PROLOGUE();
	// stw r4,1048(r3)
	REX_STORE_U32(ctx.r3.u32 + 1048, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813DFB8) {
	REX_FUNC_PROLOGUE();
	// stw r4,1100(r3)
	REX_STORE_U32(ctx.r3.u32 + 1100, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813E020) {
	REX_FUNC_PROLOGUE();
	// stw r4,1152(r3)
	REX_STORE_U32(ctx.r3.u32 + 1152, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813F608) {
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
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,21024
	ctx.r11.s64 = ctx.r11.s64 + 21024;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8813f63c
	if (ctx.cr0.eq) goto loc_8813F63C;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x881417f8
	ctx.lr = 0x8813F63C;
	sub_881417F8(ctx, base);
loc_8813F63C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_8813F870) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-30606
	ctx.r11.s64 = -2005794816;
	// addi r8,r11,18760
	ctx.r8.s64 = ctx.r11.s64 + 18760;
	// lwz r9,2048(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 2048);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8813F8A8:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8813f8c8
	if (ctx.cr6.eq) goto loc_8813F8C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8813f8a8
	if (ctx.cr6.lt) goto loc_8813F8A8;
	// blr 
	return;
loc_8813F8C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8813f8ec
	if (!ctx.cr6.gt) goto loc_8813F8EC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8813F8D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8813f8d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813F8D4;
loc_8813F8EC:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,2048(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2048);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2048(r8)
	REX_STORE_U32(ctx.r8.u32 + 2048, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8813FE70) {
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
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lis r3,-30606
	ctx.r3.s64 = -2005794816;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
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
	// lwz r11,724(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813FEF4;
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

DEFINE_REX_FUNC(sub_881404F8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30596
	ctx.r9.s64 = -2005139456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,21448
	ctx.r8.s64 = ctx.r9.s64 + 21448;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,21448(r9)
	REX_STORE_U32(ctx.r9.u32 + 21448, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881405B0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30606
	ctx.r9.s64 = -2005794816;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// subfic r3,r10,312
	ctx.xer.ca = ctx.r10.u32 <= 312;
	ctx.r3.u64 = static_cast<uint64_t>(312) - ctx.r10.u64;
	// lwz r11,18740(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 18740);
	// lwz r8,820(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 820);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_88140780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88140788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30596
	ctx.r11.s64 = -2005139456;
	// addi r28,r11,21472
	ctx.r28.s64 = ctx.r11.s64 + 21472;
	// lwz r11,-4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88140834
	if (!ctx.cr6.eq) goto loc_88140834;
	// lis r10,-30606
	ctx.r10.s64 = -2005794816;
	// lis r11,-30596
	ctx.r11.s64 = -2005139456;
	// addi r31,r11,21460
	ctx.r31.s64 = ctx.r11.s64 + 21460;
	// lwz r11,18740(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18740);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,784(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x881407C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r10,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881407e0
	if (ctx.cr6.eq) goto loc_881407E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_881407E0:
	// rlwinm r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881407f4
	if (ctx.cr6.eq) goto loc_881407F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_881407F4:
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// ble cr6,0x88140804
	if (!ctx.cr6.gt) goto loc_88140804;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_88140804:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88140818
	if (!ctx.cr6.eq) goto loc_88140818;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88140834
	if (ctx.cr6.eq) goto loc_88140834;
loc_88140818:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88140834
	if (ctx.cr6.eq) goto loc_88140834;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88140834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88140834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_19) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savegprlr_26) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_20) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restgprlr_23) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savefpr_21) {
	REX_FUNC_PROLOGUE();
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
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

DEFINE_REX_FUNC(__savefpr_24) {
	REX_FUNC_PROLOGUE();
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_21) {
	REX_FUNC_PROLOGUE();
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
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

DEFINE_REX_FUNC(__restfpr_25) {
	REX_FUNC_PROLOGUE();
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_88141A40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21092
	ctx.r4.s64 = ctx.r11.s64 + 21092;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x881410a0
	ctx.lr = 0x88141A70;
	sub_881410A0(ctx, base);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88141a98
	if (ctx.cr6.eq) goto loc_88141A98;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88141a98
	if (ctx.cr0.eq) goto loc_88141A98;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_88141A98:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88149e60
	ctx.lr = 0x88141AAC;
	sub_88149E60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_881420A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_88143618) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88144008
	ctx.lr = 0x88143638;
	sub_88144008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88143664
	if (!ctx.cr0.eq) goto loc_88143664;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88143664
	if (ctx.cr6.eq) goto loc_88143664;
	// bl 0x88143498
	ctx.lr = 0x88143650;
	sub_88143498(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x88143664
	if (ctx.cr0.eq) goto loc_88143664;
	// bl 0x88143498
	ctx.lr = 0x8814365C;
	sub_88143498(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_88143664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_88143828) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r0,-24112(r20)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r20.u32 + -24112);
	// lbz r0,28656(0)
	ctx.r0.u64 = REX_LOAD_U8(28656);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88143838;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x88149e48
	ctx.lr = 0x88143850;
	sub_88149E48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8814386c
	if (!ctx.cr0.eq) goto loc_8814386C;
	// bl 0x881432c0
	ctx.lr = 0x8814385C;
	sub_881432C0(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x88143290
	ctx.lr = 0x88143864;
	sub_88143290(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x88141fe8
	ctx.lr = 0x8814386C;
	sub_88141FE8(ctx, base);
loc_8814386C:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-9256
	ctx.r30.s64 = ctx.r11.s64 + -9256;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814388c
	if (ctx.cr6.eq) goto loc_8814388C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8814391c
	goto loc_8814391C;
loc_8814388C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88141730
	ctx.lr = 0x88143894;
	sub_88141730(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x881438b4
	if (!ctx.cr0.eq) goto loc_881438B4;
	// bl 0x88143498
	ctx.lr = 0x881438A0;
	sub_88143498(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8814391c
	goto loc_8814391C;
loc_881438B4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x88143970
	ctx.lr = 0x881438BC;
	sub_88143970(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x88143908
	if (!ctx.cr6.eq) goto loc_88143908;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x88143710
	ctx.lr = 0x881438D8;
	sub_88143710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88143900
	if (!ctx.cr0.eq) goto loc_88143900;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881417f8
	ctx.lr = 0x881438E8;
	sub_881417F8(ctx, base);
	// bl 0x88143498
	ctx.lr = 0x881438EC;
	sub_88143498(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x8814390c
	goto loc_8814390C;
loc_88143900:
	// stwx r28,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8814390c
	goto loc_8814390C;
loc_88143908:
	// bl 0x881417f8
	ctx.lr = 0x8814390C;
	sub_881417F8(ctx, base);
loc_8814390C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x88143940
	ctx.lr = 0x88143918;
	sub_88143940(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_8814391C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143924) {
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
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// addi r30,r11,-9256
	ctx.r30.s64 = ctx.r11.s64 + -9256;
	// b 0x88143950
	goto loc_88143950;
loc_88143950:
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

DEFINE_REX_FUNC(sub_88143AB4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88143AC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88141da0
	ctx.lr = 0x88143AD8;
	sub_88141DA0(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88143b00
	if (ctx.cr6.eq) goto loc_88143B00;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88143AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_88143B00:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x8814a220
	ctx.lr = 0x88143B0C;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_88144008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f88
	ctx.lr = 0x88144010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814404c
	if (ctx.cr6.eq) goto loc_8814404C;
	// divwu r11,r30,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r30.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8814404c
	if (!ctx.cr6.lt) goto loc_8814404C;
	// bl 0x88143498
	ctx.lr = 0x88144038;
	sub_88143498(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881440c4
	goto loc_881440C4;
loc_8814404C:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88144058
	if (!ctx.cr0.eq) goto loc_88144058;
	// li r31,1
	ctx.r31.s64 = 1;
loc_88144058:
	// lis r29,-30595
	ctx.r29.s64 = -2005073920;
loc_8814405C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x88144080
	if (ctx.cr6.gt) goto loc_88144080;
	// bl 0x88149e48
	ctx.lr = 0x8814406C;
	sub_88149E48(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x88148978
	ctx.lr = 0x88144078;
	sub_88148978(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881440c4
	if (!ctx.cr0.eq) goto loc_881440C4;
loc_88144080:
	// lwz r11,21596(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881440b4
	if (ctx.cr6.eq) goto loc_881440B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881419f8
	ctx.lr = 0x88144094;
	sub_881419F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8814405c
	if (!ctx.cr0.eq) goto loc_8814405C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881440ac
	if (ctx.cr6.eq) goto loc_881440AC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881440AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881440c4
	goto loc_881440C4;
loc_881440B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881440c4
	if (ctx.cr6.eq) goto loc_881440C4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881440C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88140fd8
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88146960) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r11,1072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881469b8
	if (ctx.cr6.eq) goto loc_881469B8;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x8814a280
	ctx.lr = 0x8814699C;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881469b8
	if (ctx.cr0.eq) goto loc_881469B8;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881469b8
	if (!ctx.cr6.eq) goto loc_881469B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x88146a1c
	goto loc_88146A1C;
loc_881469B8:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881469C8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x881469c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881469C8;
	// lis r31,-30595
	ctx.r31.s64 = -2005073920;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,22124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88146a08
	if (!ctx.cr6.eq) goto loc_88146A08;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x881483a8
	ctx.lr = 0x88146A04;
	sub_881483A8(ctx, base);
	// stw r3,22124(r31)
	REX_STORE_U32(ctx.r31.u32 + 22124, ctx.r3.u32);
loc_88146A08:
	// bl 0x8814a0c0
	ctx.lr = 0x88146A0C;
	sub_8814A0C0(ctx, base);
	// lwz r11,22124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_88146A1C:
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

DEFINE_REX_FUNC(sub_88147C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88140f70
	ctx.lr = 0x88147CA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r11,r4,87
	ctx.r11.s64 = ctx.r4.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x88147ce4
	if (!ctx.cr6.eq) goto loc_88147CE4;
	// lhz r22,0(r3)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x88147ce8
	goto loc_88147CE8;
loc_88147CE4:
	// li r22,0
	ctx.r22.s64 = 0;
loc_88147CE8:
	// subf r10,r31,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r31.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x88147d50
	if (ctx.cr6.lt) goto loc_88147D50;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x88147d10
	if (ctx.cr6.lt) goto loc_88147D10;
loc_88147D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88147df8
	goto loc_88147DF8;
loc_88147D10:
	// subf r11,r8,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwz r7,1424(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 1424);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8814a290
	ctx.lr = 0x88147D38;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x88147d08
	if (ctx.cr0.lt) goto loc_88147D08;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_88147D50:
	// subf r11,r8,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r8.u64;
	// sth r22,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x88147db8
	if (ctx.cr0.eq) goto loc_88147DB8;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88146c10
	ctx.lr = 0x88147DB4;
	sub_88146C10(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_88147DB8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x88147420
	ctx.lr = 0x88147DF4;
	sub_88147420(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_88147DF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88140fc0
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88149514) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88149540
	if (ctx.cr6.eq) goto loc_88149540;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8814a230
	ctx.lr = 0x88149540;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_88149540:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149DB0) {
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
	// lwz r21,84(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x88149de8
	goto loc_88149DE8;
loc_88149DE8:
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

DEFINE_REX_FUNC(sub_88149EE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149FD8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-30595
	ctx.r10.s64 = -2005073920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,22132(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 22132);
	// stw r11,22132(r10)
	REX_STORE_U32(ctx.r10.u32 + 22132, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88149FF0) {
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
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1076(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1076);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8814a030
	if (ctx.cr6.eq) goto loc_8814A030;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8814A02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8814a034
	goto loc_8814A034;
loc_8814A030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8814A034:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8814a068
	if (!ctx.cr6.eq) goto loc_8814A068;
	// lis r11,-30595
	ctx.r11.s64 = -2005073920;
	// lwz r10,22132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8814a068
	if (ctx.cr6.eq) goto loc_8814A068;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8814A05C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8814a06c
	if (ctx.cr6.eq) goto loc_8814A06C;
loc_8814A068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8814A06C:
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

DEFINE_REX_FUNC(sub_8814A1B0) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,20
	ppc_trap(ctx, base, 20);
	// blr 
	return;
}

