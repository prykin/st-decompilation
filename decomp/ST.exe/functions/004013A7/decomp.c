
void __thiscall
SettMapMTy::AddPlayerList(SettMapMTy *this,int param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  SettMapMTy *this_00;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SettMapMTy *pSStack_8;
  
  if (*(int *)(this + 0x1f84) != 0) {
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    pSStack_8 = this;
    iVar5 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    this_00 = pSStack_8;
    if (iVar5 == 0) {
      iVar5 = *(int *)(pSStack_8 + 0x1f84);
      if (param_2 < *(uint *)(iVar5 + 0xc)) {
        iVar5 = *(int *)(iVar5 + 8) * param_2 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        bVar1 = *(byte *)(iVar5 + 4);
        if (bVar1 == 1) {
          if (param_3 != 2) goto LAB_005d11ad;
          param_3 = 2;
        }
        else {
          if ((bVar1 < 2) || (3 < bVar1)) goto LAB_005d11ad;
          param_2 = param_2 + 1;
          thunk_FUN_005d00b0(pSStack_8,iVar5,param_2);
        }
        ChangePlayerList(this_00,param_1,param_2,param_3,'\0',param_4);
      }
LAB_005d11ad:
      if ((DAT_0080877e != '\0') && (this_00[0x1e26] == (SettMapMTy)0xc)) {
        iVar5 = *(int *)(this_00 + 0x1f84);
        uVar8 = 0;
        bVar4 = true;
        uVar2 = *(uint *)(iVar5 + 0xc);
        if (uVar2 != 0) {
          if (uVar2 == 0) {
            iVar6 = 0;
            goto LAB_005d11ee;
          }
          do {
            iVar6 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
LAB_005d11ee:
            if ((((iVar6 != 0) && (DAT_0080874d == *(char *)(iVar6 + 2))) &&
                (DAT_0080874e == *(char *)(iVar6 + 3))) && (*(int *)(iVar6 + 6) == DAT_0080877f)) {
              bVar4 = false;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar2);
        }
        if ((bVar4) && (uVar8 = 0, uVar2 != 0)) {
          if (uVar2 == 0) {
            iVar6 = 0;
            goto LAB_005d1245;
          }
          while( true ) {
            iVar6 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
LAB_005d1245:
            if (((iVar6 != 0) && (DAT_0080874d == *(char *)(iVar6 + 2))) &&
               (DAT_0080874e == *(char *)(iVar6 + 3))) break;
            uVar8 = uVar8 + 1;
            if (uVar2 <= uVar8) {
              DAT_00858df8 = (undefined4 *)uStack_4c;
              return;
            }
          }
          pcVar7 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar7 = (char *)&DAT_00807ddd;
          }
          AddPlayerList(pSStack_8,DAT_0080877f,uVar8,(DAT_0080874f != '\0') + 2,pcVar7);
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x62f,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cd258,0x62f);
  }
  return;
}

