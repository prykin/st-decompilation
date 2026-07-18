
void __fastcall thunk_FUN_005b3430(void *param_1)

{
  char cVar1;
  code *pcVar2;
  void *this;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  int *piStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pvStack_10 = param_1;
  DVar3 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar3;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  this = pvStack_10;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0xd2,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cc8e8,0xd2);
    return;
  }
  thunk_FUN_005b3b00();
  thunk_FUN_005b48e0();
  cVar1 = *(char *)((int)this + 0x65);
  if (cVar1 == '\x01') {
    iVar4 = 0;
    if (*(char *)((int)this + 0x9a) != '\0') {
      puVar7 = (uint *)((int)this + 0x221);
      do {
        if ((*(char *)((int)puVar7 + -0x13f) != '\0') &&
           (puVar7[9] <= *(uint *)((int)this + 0x61) - puVar7[10])) {
          puVar7[10] = *(uint *)((int)this + 0x61);
          uVar5 = puVar7[-5];
          puVar7[-5] = uVar5 + 1;
          if ((int)puVar7[-4] <= (int)(uVar5 + 1)) {
            puVar7[-5] = 0;
          }
          if (puVar7[-6] != 0xffffffff) {
            FUN_006b3730((uint *)puVar7[0xb],puVar7[-6],puVar7[-5],*puVar7,puVar7[1]);
          }
        }
        iVar4 = iVar4 + 1;
        puVar7 = (uint *)((int)puVar7 + 0x1fb);
      } while (iVar4 < (int)(uint)*(byte *)((int)this + 0x9a));
    }
  }
  else if (cVar1 == '\x03') {
    iVar4 = 0;
    uVar5 = (uint)*(byte *)((int)this + 0x9a);
    if (uVar5 != 0) {
      do {
        if (*(int *)((int)this + iVar4 * 0x1fb + 0xbc) != 0) {
          if ((uint)(*(int *)((int)this + 0x61) - *(int *)((int)this + iVar4 * 0x1fb + 0x127)) <
              *(uint *)((int)this + iVar4 * 0x1fb + 0x123)) {
            iVar4 = 0;
            iStack_8 = 0;
            if (uVar5 != 0) {
              puVar8 = (undefined4 *)((int)this + 0x249);
              do {
                if (*(char *)((int)puVar8 + -0x167) != '\0') {
                  *puVar8 = *(undefined4 *)((int)this + 0x61);
                }
                iVar4 = iVar4 + 1;
                puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
              } while (iVar4 < (int)(uint)*(byte *)((int)this + 0x9a));
            }
          }
          else {
            iVar6 = *(int *)((int)this + iVar4 * 0x1fb + 0xeb);
            if (iVar6 < *(int *)((int)this + iVar4 * 0x1fb + 0xef) + -1) {
              if ((iVar6 == 0) &&
                 (uVar5 = *(uint *)((int)this + iVar4 * 0x1fb + 0xe7), uVar5 != 0xffffffff)) {
                FUN_006b34d0(*(uint **)((int)this + iVar4 * 0x1fb + 299),uVar5,0xfffffffe,
                             *(uint *)((int)this + iVar4 * 0x1fb + 0xff),
                             *(uint *)((int)this + iVar4 * 0x1fb + 0x103));
              }
              *(int *)((int)this + iVar4 * 0x1fb + 0xeb) =
                   *(int *)((int)this + iVar4 * 0x1fb + 0xeb) + 1;
              uVar5 = *(uint *)((int)this + iVar4 * 0x1fb + 0xe7);
              if (uVar5 != 0xffffffff) {
                FUN_006b3730(*(uint **)((int)this + iVar4 * 0x1fb + 299),uVar5,
                             *(uint *)((int)this + iVar4 * 0x1fb + 0xeb),
                             *(uint *)((int)this + iVar4 * 0x1fb + 0xff),
                             *(uint *)((int)this + iVar4 * 0x1fb + 0x103));
              }
              iStack_8 = 0;
            }
            else {
              iVar6 = *(int *)((int)this + iVar4 * 0x1fb + 0x17c);
              if (iVar6 < *(int *)((int)this + iVar4 * 0x1fb + 0x180) + -3) {
                if (iVar6 == 0) {
                  uVar5 = *(uint *)((int)this + iVar4 * 0x1fb + 0x178);
                  if (uVar5 != 0xffffffff) {
                    FUN_006b34d0(*(uint **)((int)this + iVar4 * 0x1fb + 0x1bc),uVar5,0xfffffffe,
                                 *(uint *)((int)this + iVar4 * 0x1fb + 400),
                                 *(uint *)((int)this + iVar4 * 0x1fb + 0x194));
                  }
                  if ((*(char *)((int)this + iVar4 * 0x1fb + 0xe2) != '\0') &&
                     (uVar5 = *(uint *)((int)this + iVar4 * 0x1fb + 0x209), uVar5 != 0xffffffff)) {
                    FUN_006b34d0(*(uint **)((int)this + iVar4 * 0x1fb + 0x24d),uVar5,0xfffffffe,
                                 *(uint *)((int)this + iVar4 * 0x1fb + 0x221),
                                 *(uint *)((int)this + iVar4 * 0x1fb + 0x225));
                  }
                }
                *(int *)((int)this + iVar4 * 0x1fb + 0x17c) =
                     *(int *)((int)this + iVar4 * 0x1fb + 0x17c) + 1;
                uVar5 = *(uint *)((int)this + iVar4 * 0x1fb + 0x178);
                if (uVar5 != 0xffffffff) {
                  FUN_006b3730(*(uint **)((int)this + iVar4 * 0x1fb + 0x1bc),uVar5,
                               *(uint *)((int)this + iVar4 * 0x1fb + 0x17c),
                               *(uint *)((int)this + iVar4 * 0x1fb + 400),
                               *(uint *)((int)this + iVar4 * 0x1fb + 0x194));
                }
                thunk_FUN_005b6730(this,0x1e,'\x01',-1);
                iStack_8 = 0;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        uVar5 = (uint)*(byte *)((int)this + 0x9a);
      } while (iVar4 < (int)uVar5);
    }
    if (((*(char *)((int)this + 0x1ee3) != '\0') && (*(int *)(DAT_0081176c + 0x2e6) != 0)) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(char *)((int)this + 0x9a) != '\0') {
        piStack_c = (int *)((int)this + 0x66);
        puVar8 = (undefined4 *)((int)this + 0xa3);
        iVar4 = 0x68ff;
        do {
          if (*piStack_c == 0) {
            iVar6 = thunk_FUN_005b5510(1,(uint)(*(int *)((int)this + 0x1edf) != 0),
                                       puVar8[0x17] + puVar8[-2],puVar8[0x18] + puVar8[-1],*puVar8,
                                       puVar8[1],iVar4,iVar4 + 0x80);
            *piStack_c = iVar6;
          }
          piStack_c = piStack_c + 1;
          iVar6 = iVar4 + -0x68fe;
          puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
          iVar4 = iVar4 + 1;
        } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x9a));
      }
      *(undefined1 *)((int)this + 0x65) = 1;
      if (*(int *)((int)this + 0x1a6f) != 0) {
        FUN_006e3db0((int)this + 0x1a5f);
        *(undefined4 *)((int)this + 0x1a6f) = 0;
        DAT_00858df8 = (undefined4 *)uStack_54;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    iVar4 = 0;
    if (*(char *)((int)this + 0x9a) != '\0') {
      puVar7 = (uint *)((int)this + 0x178);
      do {
        if ((uint)(*(int *)((int)this + 0x61) - *(int *)((int)puVar7 + -0x51)) <
            *(uint *)((int)puVar7 + -0x55)) {
LAB_005b353c:
          iStack_8 = 0;
        }
        else {
          if (*(char *)((int)puVar7 + -0xbd) != '\0') {
            if (*puVar7 != 0xffffffff) {
              FUN_006b3af0((int *)puVar7[0x11],*puVar7);
            }
            if ((*(char *)((int)puVar7 + -0x96) != '\0') &&
               (*(uint *)((int)puVar7 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)puVar7 + 0xd5),*(uint *)((int)puVar7 + 0x91));
            }
            *(undefined1 *)((int)puVar7 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar7 + -0x8d)) {
            uVar5 = *(int *)((int)puVar7 + -0x8d) - 1;
            *(uint *)((int)puVar7 + -0x8d) = uVar5;
            if (*(uint *)((int)puVar7 + -0x91) != 0xffffffff) {
              FUN_006b3730(*(uint **)((int)puVar7 + -0x4d),*(uint *)((int)puVar7 + -0x91),uVar5,
                           *(uint *)((int)puVar7 + -0x79),*(uint *)((int)puVar7 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar4 = iVar4 + 1;
        puVar7 = (uint *)((int)puVar7 + 0x1fb);
      } while (iVar4 < (int)(uint)*(byte *)((int)this + 0x9a));
    }
    iVar4 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      *(undefined1 *)((int)this + 0x65) = 2;
      if (*(char *)((int)this + 0x9a) != '\0') {
        puVar7 = (uint *)((int)this + 0xe7);
        do {
          if (*puVar7 != 0xffffffff) {
            FUN_006b3af0((int *)puVar7[0x11],*puVar7);
          }
          iVar4 = iVar4 + 1;
          puVar7 = (uint *)((int)puVar7 + 0x1fb);
        } while (iVar4 < (int)(uint)*(byte *)((int)this + 0x9a));
      }
      if (*(int *)((int)this + (uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xd1) != 0) {
        FUN_006e3b50((undefined4 *)((int)this + (uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xc1))
        ;
        DAT_00858df8 = (undefined4 *)uStack_54;
        return;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

