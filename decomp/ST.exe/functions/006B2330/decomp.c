
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00543600 -> 006B2330 @ 00543741; /CursorClassTy+0x4d2 | 00597E70 -> 006B2330 @
   00598695; zeroed full register at 0059867C

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B2330 @ 004F68BF; data at 008075A8 | 004F5690 -> 006B2330 @ 004F69AA;
   data at 008075A8 | 004F5690 -> 006B2330 @ 004F6A35; data at 008075A8 | 004F5690 -> 006B2330 @
   004F6AE7; data at 008075A8 | 0052DD20 -> 006B2330 @ 0052DE4F; data at 008075A8 | 005381B0 ->
   006B2330 @ 00538283; data at 008075A8 | 00543600 -> 006B2330 @ 00543741; data at 008075A8 |
   00593B50 -> 006B2330 @ 00593DE4; data at 008075A8 | 00595E40 -> 006B2330 @ 005961A7; data at
   008075A8 | 00595E40 -> 006B2330 @ 0059621C; data at 008075A8 | 00597E70 -> 006B2330 @ 0059808F;
   data at 008075A8 | 00597E70 -> 006B2330 @ 005982D5; data at 008075A8 | 00597E70 -> 006B2330 @
   00598400; data at 008075A8 | 00597E70 -> 006B2330 @ 00598695; data at 008075A8 | 00597E70 ->
   006B2330 @ 00598A94; data at 008075A8 | 00597E70 -> 006B2330 @ 00598D14; data at 008075A8 |
   00597E70 -> 006B2330 @ 00598EE7; data at 008075A8 | 00597E70 -> 006B2330 @ 00599124; data at
   008075A8 | 005AACB0 -> 006B2330 @ 005AADB3; data at 008075A8 | 005AB300 -> 006B2330 @ 005AB92F;
   data at 008075A8 | 005AB300 -> 006B2330 @ 005AB999; data at 008075A8 | 005AB300 -> 006B2330 @
   005ABB2C; data at 008075A8 | 005AB300 -> 006B2330 @ 005ABD60; data at 008075A8 | 005AB300 ->
   006B2330 @ 005AC0DD; data at 008075A8 | 005B9B10 -> 006B2330 @ 005B9E4C; data at 008075A8 |
   005B9B10 -> 006B2330 @ 005B9F44; data at 008075A8 | 005B9B10 -> 006B2330 @ 005B9F87; data at
   008075A8 | 005B9B10 -> 006B2330 @ 005BA11C; data at 008075A8 | 005BC5E0 -> 006B2330 @ 005BCBA6;
   data at 008075A8 | 005BD7A0 -> 006B2330 @ 005BDDB9; data at 008075A8 | 005BD7A0 -> 006B2330 @
   005BDEAB; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C2FE7; data at 008075A8 | 005C29B0 ->
   006B2330 @ 005C34AD; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3A73; data at 008075A8 |
   005C29B0 -> 006B2330 @ 005C3AD2; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3C6F; data at
   008075A8 | 005C29B0 -> 006B2330 @ 005C3DC0; data at 008075A8 | 005C29B0 -> 006B2330 @ 005C3FBD;
   data at 008075A8 | 005CBD00 -> 006B2330 @ 005CBE56; data at 008075A8 | 005CBD00 -> 006B2330 @
   005CBEDB; data at 008075A8 | 005D7A50 -> 006B2330 @ 005D7C76; data at 008075A8 | 005DB4F0 ->
   006B2330 @ 005DB762; data at 008075A8 | 005DB4F0 -> 006B2330 @ 005DB986; data at 008075A8 |
   005DB4F0 -> 006B2330 @ 005DBA47; data at 008075A8 | 005DB4F0 -> 006B2330 @ 005DBBCA; data at
   008075A8 | 005DFA30 -> 006B2330 @ 005DFD9B; data at 008075A8 | 005DFA30 -> 006B2330 @ 005DFE01;
   data at 008075A8 | 005DFA30 -> 006B2330 @ 005DFF5B; data at 008075A8 | 005DFA30 -> 006B2330 @
   005E00A3; data at 008075A8 | 005E1330 -> 006B2330 @ 005E2C84; data at 008075A8 | 005E1330 ->
   006B2330 @ 005E2E5B; data at 008075A8 | 005E5FB0 -> 006B2330 @ 005E6246; data at 008075A8 |
   005E6770 -> 006B2330 @ 005E6A1F; data at 008075A8 | 005E6770 -> 006B2330 @ 005E6A86; data at
   008075A8 | 005E6770 -> 006B2330 @ 005E6C5D; data at 008075A8 | 005E6770 -> 006B2330 @ 005E6DEF;
   data at 008075A8

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=2,
   ignored=57, unknown=0 */

int FUN_006b2330(DDXContext_008075A8 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                uint param_6,ushort *param_7)

{
  DDXEntry_008075A8_01B0 *pDVar1;
  int iVar2;

  iVar2 = Library::DKW::DDX::FUN_006b1d50
                    ((uint)param_1,param_2,param_3,0,nullptr,0,0xffffffff,0xffffffff,0,1);
  if (iVar2 == 0) {
    pDVar1 = param_1->entries_01B0[*param_2];
    pDVar1->field_0038 = param_5;
    pDVar1->field_0030 = param_5;
    pDVar1->field_0020 = param_5;
    pDVar1->field_000C = param_5;
    pDVar1->field_003C = param_6;
    pDVar1->field_0034 = param_6;
    pDVar1->field_0024 = param_6;
    pDVar1->field_0010 = param_6;
    pDVar1->field_00CC = param_4;
    pDVar1->flags = pDVar1->flags | 0x4000;
    pDVar1->field_00C0 = (uint)param_7;
  }
  return iVar2;
}

