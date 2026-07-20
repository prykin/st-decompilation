
undefined4 __fastcall FUN_004d2760(AnonShape_004D2760_CB2BA53E *param_1)

{
  dword dVar1;
  undefined4 extraout_ECX;
  DArrayTy *pDVar2;
  AnonShape_004D2760_CB2BA53E *extraout_EDX;
  AnonShape_004D2760_CB2BA53E *pAVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  AnonShape_004D2760_CB2BA53E *local_c;
  AnonShape_004D2760_CB2BA53E *local_8;
  
  local_8 = (AnonShape_004D2760_CB2BA53E *)0x0;
  if (*(int *)&param_1[1].field_0x38 != 0) {
    thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
    thunk_FUN_00417d30((int)param_1);
    if (*(int *)&param_1->field_0x2c == 0) {
      local_8 = (AnonShape_004D2760_CB2BA53E *)0x1;
    }
    else if (*(int *)&param_1->field_0x2c == 1) {
      local_8 = (AnonShape_004D2760_CB2BA53E *)0x2;
    }
    iVar4 = param_1->field_0261;
    pAVar3 = extraout_EDX;
    if (iVar4 < (int)(&local_8->field_0x0 + iVar4)) {
      do {
        iVar7 = param_1->field_025D;
        if (iVar7 < (int)(&local_8->field_0x0 + iVar7)) {
          do {
            thunk_FUN_00496140((short)iVar7,(short)iVar4,param_1->field_0265);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(&local_8->field_0x0 + param_1->field_025D));
        }
        iVar4 = iVar4 + 1;
        pAVar3 = local_8;
      } while (iVar4 < (int)(&local_8->field_0x0 + param_1->field_0261));
    }
    iVar4 = thunk_FUN_004b7520(CONCAT31((int3)((uint)pAVar3 >> 8),param_1->field_0x24),
                               param_1->field_0259);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*(int *)param_1 + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX >> 8),param_1->field_0x24),iVar4);
    }
    thunk_FUN_0041d590((AnonShape_0041D590_1DB01C7A *)param_1);
  }
  if (99 < *(int *)&param_1[1].field_0x40) {
    *(undefined4 *)&param_1[1].field_0xe4 = 0xfe;
  }
  thunk_FUN_00419d30(param_1,*(int *)&param_1[1].field_0xe4);
  if (PTR_007fa170 != (DArrayTy *)0x0) {
    dVar1 = PTR_007fa170->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa170,uVar5,&local_c);
        if (local_c == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)PTR_007fa170,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)PTR_007fa170->count);
      dVar1 = PTR_007fa170->count;
    }
    if (dVar1 == 0) {
      FUN_006ae110((byte *)PTR_007fa170);
      PTR_007fa170 = (DArrayTy *)0x0;
    }
  }
  iVar4 = param_1->field_0259;
  if (iVar4 == 100) {
    pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6;
    if (pDVar2 != (DArrayTy *)0x0) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                         g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6)->count == 0) {
        FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6);
        g_playerRuntime[*(int *)&param_1->field_0x24].field2284_0x9d6 = (DArrayTy *)0x0;
      }
    }
  }
  else if (iVar4 == 0x4d) {
    pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2;
    if (pDVar2 != (DArrayTy *)0x0) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                         g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2)->count == 0) {
        FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2);
        g_playerRuntime[*(int *)&param_1->field_0x24].field2287_0x9e2 = (DArrayTy *)0x0;
      }
    }
  }
  else if (iVar4 == 0x43) {
    pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee;
    if (pDVar2 != (DArrayTy *)0x0) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                         g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee)->count == 0) {
        FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee);
        g_playerRuntime[*(int *)&param_1->field_0x24].field2290_0x9ee = (DArrayTy *)0x0;
      }
    }
  }
  else if (iVar4 == 0x73) {
    pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2;
    if (pDVar2 != (DArrayTy *)0x0) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                         g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2)->count == 0) {
        FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2);
        g_playerRuntime[*(int *)&param_1->field_0x24].field2291_0x9f2 = (DArrayTy *)0x0;
      }
    }
  }
  else if (iVar4 == 0x3a) {
    if (PTR_007fa16c != (DArrayTy *)0x0) {
      dVar1 = PTR_007fa16c->count;
      uVar5 = 0;
      if (0 < (int)dVar1) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa16c,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)PTR_007fa16c,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)PTR_007fa16c->count);
        dVar1 = PTR_007fa16c->count;
      }
      if (dVar1 == 0) {
        FUN_006ae110((byte *)PTR_007fa16c);
        PTR_007fa16c = (DArrayTy *)0x0;
      }
    }
  }
  else if (iVar4 == 0x65) {
    pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6;
    if (pDVar2 != (DArrayTy *)0x0) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                         g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6)->count == 0) {
        FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6);
        g_playerRuntime[*(int *)&param_1->field_0x24].field2288_0x9e6 = (DArrayTy *)0x0;
      }
    }
  }
  else if ((iVar4 == 0x3b) &&
          (pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea,
          pDVar2 != (DArrayTy *)0x0)) {
    uVar5 = 0;
    if (0 < (int)pDVar2->count) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar5,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                       g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
        pDVar2 = g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea;
      } while ((int)uVar5 < (int)pDVar2->count);
    }
    if ((g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea)->count == 0) {
      FUN_006ae110((byte *)g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea);
      g_playerRuntime[*(int *)&param_1->field_0x24].field2289_0x9ea = (DArrayTy *)0x0;
    }
  }
  puVar6 = (undefined4 *)&param_1[1].field_0xe8;
  iVar4 = 3;
  do {
    if ((STT3DSprC *)*puVar6 != (STT3DSprC *)0x0) {
      thunk_FUN_004ad310((STT3DSprC *)*puVar6);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(STT3DSprC **)&param_1[1].field_0xf4 != (STT3DSprC *)0x0) {
    thunk_FUN_004ad310(*(STT3DSprC **)&param_1[1].field_0xf4);
    Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&param_1[1].field_0xf4);
  }
  thunk_FUN_004ad310((STT3DSprC *)&param_1->field_0x1d5);
  return 0;
}

