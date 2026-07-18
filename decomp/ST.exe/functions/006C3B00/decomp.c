
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_006c3b00(LPVOID param_1,LPCSTR param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  WCHAR local_20c [260];
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x508));
  if ((*(uint *)((int)param_1 + 4) & 0x20000000) != 0) {
    FUN_006c4110((int)param_1);
  }
  if ((*(uint *)((int)param_1 + 4) & 0x40000000) != 0) {
    FUN_006c3f00((int)param_1);
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x94) = 0;
  if ((param_3 & 0xc) != 0) {
    param_3 = param_3 & 0xfffffffd;
  }
  *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) & 0xfe7ffff0 | param_3;
  DVar3 = FUN_006c3630(param_1);
  if (DVar3 != 0) goto LAB_006c3d35;
  if ((*(byte *)((int)param_1 + 4) & 1) != 0) {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x28) + 0x40);
    (**(code **)(*piVar1 + 0x38))(piVar1,(int)param_1 + 0x2c);
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x28) + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x40) = 0;
    }
  }
  DVar3 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))
                    (*(int **)((int)param_1 + 0x54),*(undefined4 *)((int)param_1 + 0x4c),
                     u_DDX_In_Place_007edec0);
  if ((int)DVar3 < 0) {
LAB_006c3d31:
    if (DVar3 == 0) goto LAB_006c3d3b;
  }
  else {
    DVar3 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))
                      (*(int **)((int)param_1 + 0x54),*(undefined4 *)((int)param_1 + 0x48),
                       u_DDX_Video_Renderer_007ede98);
    if ((int)DVar3 < 0) goto LAB_006c3d31;
    iVar4 = (**(code **)**(undefined4 **)((int)param_1 + 0x48))
                      (*(undefined4 **)((int)param_1 + 0x48),&DAT_007a1230,
                       (undefined4 *)((int)param_1 + 0x50));
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x50) = 0;
    }
    MultiByteToWideChar(0,0,param_2,-1,local_20c,0x104);
    DVar3 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0x34))
                      (*(int **)((int)param_1 + 0x54),local_20c,0);
    if ((int)DVar3 < 0) goto LAB_006c3d31;
    iVar4 = 0;
    do {
      if ((*(uint *)((int)param_1 + 4) & 0x800000) != 0) break;
      Sleep(0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x96);
    Sleep(0x14);
    DVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x54))
                      (*(undefined4 **)((int)param_1 + 0x54),&DAT_007a1220,(int)param_1 + 0x5c);
    if (DVar3 == 0) {
      DVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x54))
                        (*(undefined4 **)((int)param_1 + 0x54),&DAT_007a1210,(int)param_1 + 0x60);
      if (DVar3 == 0) {
        piVar1 = (int *)((int)param_1 + 100);
        DVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x54))
                          (*(undefined4 **)((int)param_1 + 0x54),&DAT_007a1200,piVar1);
        if (DVar3 != 0) {
          *piVar1 = 0;
        }
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          _DAT_008568d4 = (**(code **)(*piVar2 + 0x24))(piVar2,&DAT_007a11f0);
          if (_DAT_008568d4 == 0) {
            _DAT_008568d4 =
                 (**(code **)(*(int *)*piVar1 + 0x28))((int *)*piVar1,(int)param_1 + 0xa0);
            if (_DAT_008568d4 != 0) {
              *(undefined4 *)((int)param_1 + 0xa0) = 0;
              *(undefined4 *)((int)param_1 + 0xa4) = 0;
            }
          }
          _DAT_008568d4 = (**(code **)(*(int *)*piVar1 + 0x24))((int *)*piVar1,&DAT_007a11e0);
          if (_DAT_008568d4 == 0) {
            _DAT_008568d4 =
                 (**(code **)(*(int *)*piVar1 + 0x28))
                           ((int *)*piVar1,(undefined4 *)((int)param_1 + 0xa8));
            if (_DAT_008568d4 != 0) {
              *(undefined4 *)((int)param_1 + 0xa8) = 0;
              *(undefined4 *)((int)param_1 + 0xac) = 0;
            }
          }
        }
        *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) & 0xf3ffffff;
        FUN_006c3d80((int)param_1);
        *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | 0x40000000;
        goto LAB_006c3d31;
      }
    }
  }
LAB_006c3d35:
  FUN_006c3500((int)param_1);
LAB_006c3d3b:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x508));
  if (DVar3 != 0) {
    FUN_006a5e40(DVar3,DAT_007ed77c,0x7ede80,0x27c);
    return DVar3;
  }
  return 0;
}

