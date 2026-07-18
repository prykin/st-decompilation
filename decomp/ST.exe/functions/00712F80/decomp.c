
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::_TxtToSarr */

uint * __thiscall ccFntTy::_TxtToSarr(ccFntTy *this,uint *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint *local_c;
  undefined1 local_5;
  
  local_c = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_c = FUN_006b54f0((uint *)0x0,0x14,0x14);
      cVar1 = (char)*param_1;
      uVar6 = local_5;
      while( true ) {
        if (cVar1 == '\0') {
          DAT_00858df8 = (undefined4 *)local_50;
          return local_c;
        }
        puVar4 = FUN_00730590(param_1,&DAT_007c8ff4);
        if (puVar4 != (uint *)0x0) {
          uVar6 = (undefined1)*puVar4;
          *(undefined1 *)puVar4 = 0;
          local_5 = uVar6;
        }
        FUN_006b5aa0((int)local_c,(char *)param_1);
        if (puVar4 == (uint *)0x0) break;
        param_1 = (uint *)((int)puVar4 + 1);
        *(undefined1 *)puVar4 = uVar6;
        cVar1 = *(char *)param_1;
      }
      DAT_00858df8 = (undefined4 *)local_50;
      return local_c;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x8d0,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar2)();
      return puVar4;
    }
    if (local_c != (uint *)0x0) {
      FUN_006b5570((byte *)local_c);
    }
    FUN_006a5e40(iVar3,0,0x7f0190,0x8d4);
  }
  return (uint *)0x0;
}

