
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00602E90.
   Evidence: incoming_receiver_captures=1; receiver_accesses=13; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=1 */

undefined4 * __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00602E90::FUN_00602e90
          (AnonReceiver_00602E90 *this)

{
  AnonShape_00602E90_7075769A *pAVar1;
  int iVar2;
  char *text;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  AnonShape_00602E90_7075769A *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (AnonShape_00602E90_7075769A *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar1 = local_c;
  if (iVar2 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806774,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
    if (puVar3 != (ushort *)0x0) {
      if (pAVar1->field_0241 == 0) {
        local_8 = FUN_006e9000(pAVar1->field_0211,**(undefined4 **)((int)puVar3 + 0x21),0x5a,0x45,
                               (float)pAVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                               (float)pAVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                               (float)pAVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
      if (pAVar1->field_0241 == 1) {
        local_8 = FUN_006e9000(pAVar1->field_0211,**(undefined4 **)((int)puVar3 + 0x21),0x78,0x56,
                               (float)pAVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                               (float)pAVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                               (float)pAVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

