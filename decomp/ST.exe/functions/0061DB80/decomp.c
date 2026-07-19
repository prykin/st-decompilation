
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::LoadNextLight */

undefined4 __thiscall STLightC::LoadNextLight(STLightC *this)

{
  code *pcVar1;
  STLightC *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  STLightC *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 == 0) {
    puVar3 = mfRLoad(DAT_00806774,CASE_0,(&PTR_s_light01_007d0164)[local_c->field_003C],0xffffffff,0
                     ,1,0,(undefined4 *)0x0);
    thunk_FUN_0061d9c0(this_00,(undefined4 *)puVar3,(int *)&local_8,0);
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(this_00->field_0093 << 4);
    this_00->field_0057 = puVar4;
    for (iVar2 = (this_00->field_0093 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = 0;
    if (0 < (int)this_00->field_0093) {
      do {
        *(undefined4 *)(this_00->field_0057 + iVar2 * 4) = 0xffffffff;
        iVar6 = iVar2 + this_00->field_0093 * 3;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(this_00->field_0057 + iVar6 * 4) = 0xffffffff;
      } while (iVar2 < (int)this_00->field_0093);
    }
    *(undefined4 *)this_00->field_0057 = 0;
    *(undefined4 *)(this_00->field_0057 + this_00->field_0093 * 0xc) = 0;
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_8,0x30,10);
    this_00->field_00A3 = puVar5;
    g_currentExceptionFrame = local_50.previous;
    return 1;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage(s_E____titans_nick_to_light_Cpp_007d01b0,0x13b,0,iVar2,&DAT_007a4ccc,
                             s_STLightC__LoadNextLight_007d01f0);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_light_Cpp_007d01b0,0x13d);
  return 0xffff;
}

