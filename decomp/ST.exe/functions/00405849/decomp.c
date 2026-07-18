
int __thiscall thunk_FUN_0054d2f0(void *this,undefined4 param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_74;
  undefined4 auStack_70 [16];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = *(undefined4 *)((int)this + 0xe4);
  uStack_8 = *(undefined4 *)((int)this + 0x20);
  uStack_74 = DAT_00858df8;
  DAT_00858df8 = &uStack_74;
  pvStack_10 = this;
  iVar3 = __setjmp3(auStack_70,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006f13f0(0xc,PTR_DAT_0079ae30,(byte *)&uStack_c,4,(undefined4 *)0x0,'\0',(uint *)0x0);
    FUN_006f13f0(0xc,PTR_s_LAST_NAME_0079ae2c,(byte *)&uStack_8,4,(undefined4 *)0x0,'\0',(uint *)0x0
                );
    pvVar2 = pvStack_10;
    *(undefined4 *)((int)pvStack_10 + 0x24) = param_1;
    uStack_24 = 0xf;
    uStack_20 = 0x10f;
    FUN_006e3db0((int)auStack_30);
    *(undefined4 *)((int)pvVar2 + 0x24) = 0;
    DAT_00858df8 = (undefined4 *)uStack_74;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_74;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1fb,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7c8430,0x1fb);
  return iVar3;
}

