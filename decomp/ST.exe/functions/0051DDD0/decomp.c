
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::GetMessage */

undefined4 __thiscall HelpPanelTy::GetMessage(HelpPanelTy *this,int param_1)

{
  PanelTy *pPVar1;
  char cVar2;
  PanelTy PVar3;
  void *pvVar4;
  UINT *pUVar5;
  PanelTy *this_00;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  LPSTR pCVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  undefined4 unaff_ESI;
  byte bVar18;
  void *unaff_EDI;
  char *pcVar19;
  bool bVar20;
  code *pcVar21;
  UINT UVar22;
  InternalExceptionFrame local_84;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  PanelTy *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8;
  
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = (PanelTy *)this;
  iVar6 = __setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac7,0,iVar6,
                                &DAT_007a4ccc,s_HelpPanelTy__GetMessage_007c3db8);
    if (iVar13 != 0) {
      pcVar21 = (code *)swi(3);
      uVar14 = (*pcVar21)();
      return uVar14;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac7);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    pPVar1 = local_20 + 0x4c;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)pPVar1);
    *(undefined4 *)(this_00 + 0x3c) = *(undefined4 *)pPVar1;
    *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x48);
    *(int *)(this_00 + 0x174) = *(int *)(this_00 + 0x48) + *(int *)(this_00 + 0x50);
  }
  PanelTy::GetMessage(this_00,param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (uVar15 < 0xc001) {
    if (uVar15 == 0xc000) {
      UVar22 = 0x274e;
      pCVar12 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,param_1,pCVar12,UVar22);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar15 < 0x8161) {
      if (uVar15 == 0x8160) {
        iVar6 = *(int *)(this_00 + 0x1e4);
        if (*(int *)(iVar6 + 0xa0) != 0) {
          FUN_00710790(iVar6);
        }
        *(int *)(param_1 + 0x18) = *(int *)(iVar6 + 0x8a) + 1;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (0x60 < uVar15) {
        if (uVar15 == 0x61) {
          local_c = (uint)*(ushort *)(param_1 + 0x18);
          local_8 = (UINT *)(uint)*(ushort *)(param_1 + 0x1a);
          if (*(short *)(this_00 + 0x172) != 1) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          switch(this_00[0x1a1]) {
          case (PanelTy)0x1:
          case (PanelTy)0x2:
          case (PanelTy)0x3:
          case (PanelTy)0x4:
          case (PanelTy)0x5:
          case (PanelTy)0xb:
          case (PanelTy)0xc:
            local_1c = (uint *)0x0;
            local_14 = *(undefined4 **)(*(int *)(this_00 + 0x1d7) + 0xc);
            if (local_14 == (undefined4 *)0x0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)*(ushort *)(this_00 + 0x1af) -
                       (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3);
            while( true ) {
              if (local_1c < local_14) {
                piVar7 = (int *)(*(int *)(*(int *)(this_00 + 0x1d7) + 8) * (int)local_1c +
                                *(int *)(*(int *)(this_00 + 0x1d7) + 0x1c));
              }
              else {
                piVar7 = (int *)0x0;
              }
              local_24 = piVar7[3];
              local_30 = *(int *)(this_00 + 0x3c) + 0x21 + *piVar7;
              local_2c = piVar7[1] + local_18 + 0x16 + *(int *)(this_00 + 0x44);
              local_28 = piVar7[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_8 < *(int *)(this_00 + 0x44) + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            LinkAct((HelpPanelTy *)this_00,*(int *)((int)piVar7 + 0x11),*(int *)((int)piVar7 + 0x15)
                   );
            uVar15 = *(uint *)((int)piVar7 + 0x15);
            pvVar4 = *(void **)((int)piVar7 + 0x11);
            switch((char)piVar7[4]) {
            case '\x01':
              RCProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              ObjProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              SubProc((HelpPanelTy *)this_00,(int)pvVar4,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              ArmProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              TechProc((HelpPanelTy *)this_00,(uint)pvVar4,(byte)uVar15,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              TTreeProc((HelpPanelTy *)this_00,(uint)pvVar4,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              MObjProc((HelpPanelTy *)this_00);
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              TipProc((HelpPanelTy *)this_00,pvVar4,uVar15,'\0');
              break;
            case '\n':
              IndexBut((HelpPanelTy *)this_00);
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              SpecProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              NatProc((HelpPanelTy *)this_00,(int)pvVar4,'\0');
              PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case (PanelTy)0x6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case (PanelTy)0x8:
            if (*(int *)(*(int *)(this_00 + 0x1d7) + 0xc) == 0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = *(int **)(*(int *)(this_00 + 0x1d7) + 0x1c);
            }
            local_30 = *(int *)(this_00 + 0x3c) + 0x21 + *piVar7;
            local_2c = ((uint)*(ushort *)(this_00 + 0x1af) -
                       (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3)) + piVar7[1] +
                       0x16 + *(int *)(this_00 + 0x44);
            local_28 = piVar7[2];
            local_24 = piVar7[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
            if (!bVar20) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (*(int *)(this_00 + 0x44) + 300 <= (int)local_8) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            thunk_FUN_00515180(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (uVar15 == 0x6200) {
          *(undefined4 *)(this_00 + 0x1c3) = *(undefined4 *)(param_1 + 0x14);
          iVar6 = *(ushort *)(this_00 + 0x1af) + 0x16;
          FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,iVar6,*(int *)(this_00 + 0x1dc),0,
                       0x21,iVar6,0x19c,0x117 - (uint)*(ushort *)(this_00 + 0x1af));
          FUN_006b5110(*(int *)(this_00 + 0x68),0,0x21,*(ushort *)(this_00 + 0x1af) + 0x16,
                       *(int *)(this_00 + 0x218),0,0,
                       (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3),0x19c,
                       0x117 - (uint)*(ushort *)(this_00 + 0x1af),0xff);
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                       *(uint *)(this_00 + 0x44));
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 != 0x6332) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        local_10 = *(undefined4 **)(param_1 + 0x1c);
        if (local_10 == (undefined4 *)0x0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (*(int *)(this_00 + 0x1d3) == 0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar6 = *(int *)(this_00 + 0x1e4);
        if (*(int *)(iVar6 + 0xa0) != 0) {
          FUN_00710790(iVar6);
        }
        local_18 = *(int *)(iVar6 + 0x8a);
        if (DAT_0080874e == '\x03') {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,5);
        }
        else {
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,(-(DAT_0080874e != '\x01') & 6U) + 1);
        }
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,
                     0x16,0x19c,0x118);
        iVar6 = *(int *)(this_00 + 0x218);
        local_1c = *(uint **)(iVar6 + 0x14);
        if (local_1c == (uint *)0x0) {
          local_1c = (uint *)(((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                              0x1ffffffc) * *(int *)(iVar6 + 8));
        }
        puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar15 = (uint)local_1c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar15 = (uint)local_1c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar16 = (uint)*(ushort *)(param_1 + 0x16);
        uVar15 = uVar16;
        if ((int)uVar16 < (int)(uVar16 + *(int *)((int)local_10 + 0x1e0))) {
          do {
            if ((int)uVar15 < *(int *)(*(int *)(this_00 + 0x1d3) + 8)) {
              local_1c = *(uint **)(*(int *)(*(int *)(this_00 + 0x1d3) + 0x14) + uVar15 * 4);
            }
            else {
              local_1c = (uint *)0x0;
            }
            if (local_1c != (uint *)0x0) {
              ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e4),*(int *)(this_00 + 0x218),0,0,
                               (uVar15 - uVar16) * local_18,*(int *)(*(int *)(this_00 + 0x218) + 4),
                               local_18);
              ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e4),local_1c,0,-1,(uint)local_14 & 0xff);
            }
            uVar16 = (uint)*(ushort *)(param_1 + 0x16);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)(uVar16 + *(int *)((int)local_10 + 0x1e0)));
        }
        FUN_006b5110(*(int *)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x218),0,0,0,0x19c,
                     0x118,0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (uVar15 != 0x60) {
        if (uVar15 == 0) {
          if (*(short *)(this_00 + 0x172) == 3) {
            iVar6 = *(int *)(this_00 + 0x50);
            if (*(int *)(this_00 + 0x44) < iVar6) {
              *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + 0x28;
            }
            if (iVar6 <= *(int *)(this_00 + 0x44)) {
              *(int *)(this_00 + 0x44) = iVar6;
              *(undefined2 *)(this_00 + 0x172) = 1;
              ShiftControls((HelpPanelTy *)this_00,1);
            }
            FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c)
                         ,*(uint *)(this_00 + 0x44));
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (*(short *)(this_00 + 0x172) != 4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar6 = *(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x48);
          if (iVar6 < *(int *)(this_00 + 0x44)) {
            *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + -0x28;
          }
          if (*(int *)(this_00 + 0x44) <= iVar6) {
            *(int *)(this_00 + 0x44) = iVar6;
            *(undefined2 *)(this_00 + 0x172) = 2;
          }
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                       *(uint *)(this_00 + 0x44));
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 == 2) {
          InitHelpPanel((HelpPanelTy *)this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (uVar15 != 3) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        DoneHelpPanel((HelpPanelTy *)this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)*(ushort *)(param_1 + 0x18);
      local_10 = (undefined4 *)0x0;
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      this_00[0x1db] = (PanelTy)0x0;
      if (*(short *)(this_00 + 0x172) == 1) {
        switch(this_00[0x1a1]) {
        case (PanelTy)0x1:
        case (PanelTy)0x2:
        case (PanelTy)0x3:
        case (PanelTy)0x4:
        case (PanelTy)0x5:
        case (PanelTy)0xb:
        case (PanelTy)0xc:
          local_8 = (undefined4 *)0x0;
          local_14 = *(undefined4 **)(*(int *)(this_00 + 0x1d7) + 0xc);
          if (local_14 != (undefined4 *)0x0) {
            do {
              if (local_8 < local_14) {
                piVar7 = (int *)(*(int *)(*(int *)(this_00 + 0x1d7) + 8) * (int)local_8 +
                                *(int *)(*(int *)(this_00 + 0x1d7) + 0x1c));
              }
              else {
                piVar7 = (int *)0x0;
              }
              local_40 = *(int *)(this_00 + 0x3c) + 0x21 + *piVar7;
              local_3c = piVar7[1] +
                         ((uint)*(ushort *)(this_00 + 0x1af) -
                         (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3)) + 0x16 +
                         *(int *)(this_00 + 0x44);
              local_38 = piVar7[2];
              local_34 = piVar7[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_c < *(int *)(this_00 + 0x44) + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case (PanelTy)0x6:
          if (*(int *)(this_00 + 0x1a3) == 1) {
            local_8 = (UINT *)&DAT_007c2b58;
            local_14 = (undefined4 *)0x33;
          }
          else if (*(int *)(this_00 + 0x1a3) == 2) {
            local_8 = (UINT *)&DAT_007c2df0;
            local_14 = (undefined4 *)0x39;
          }
          else {
            local_8 = &DAT_007c30d8;
            local_14 = (undefined4 *)0x46;
          }
          uVar17 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)*(ushort *)(this_00 + 0x1af);
            do {
              local_40 = *(int *)((int)local_8 + (uint)uVar17 * 0xd + 5) + 0x21 +
                         *(int *)(this_00 + 0x3c);
              local_3c = (*(int *)((int)local_8 + (uint)uVar17 * 0xd + 9) -
                         (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3)) +
                         (int)local_1c + 0x16 + *(int *)(this_00 + 0x44);
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if ((bVar20) && ((int)local_c < *(int *)(this_00 + 0x44) + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(undefined *)((int)local_8 + (uint)uVar17 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar17 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = (undefined4 *)0x0;
                break;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (0xbfff < uVar15) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (uVar15 == 0xbfff) {
      (**(code **)(*(int *)this_00 + 0x18))(0);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(uVar15) {
    case 0x8161:
      PVar3 = this_00[0x1a1];
      if (PVar3 == (PanelTy)0x0) {
        iVar6 = *(int *)(this_00 + 0x1b3);
      }
      else {
        if (PVar3 != (PanelTy)0xa) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar6 = *(int *)(this_00 + 0x1bb);
      }
      uVar15 = (uint)*(ushort *)(param_1 + 0x14);
      if (uVar15 < *(uint *)(iVar6 + 0xc)) {
        if (PVar3 == (PanelTy)0x0) {
          local_8 = (UINT *)(*(int *)(*(int *)(this_00 + 0x1b3) + 8) * uVar15 +
                            *(int *)(*(int *)(this_00 + 0x1b3) + 0x1c));
        }
        else {
          local_8 = (UINT *)(*(int *)(*(int *)(this_00 + 0x1bb) + 8) * uVar15 +
                            *(int *)(*(int *)(this_00 + 0x1bb) + 0x1c));
        }
      }
      else {
        local_8 = (UINT *)0x0;
      }
      if (local_8 != (UINT *)0x0) {
        bVar20 = *(short *)(param_1 + 0x16) == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,!bVar20);
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,1);
        }
        else {
          local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar20 + '\a');
        }
        iVar6 = *(ushort *)(param_1 + 0x1a) + 0x16;
        FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,iVar6,*(int *)(this_00 + 0x1dc),0,0x21,
                     iVar6,0x19c,*(int *)(*(int *)(this_00 + 0x1ec) + 8));
        iVar6 = *(int *)(this_00 + 0x1ec);
        uVar15 = *(uint *)(iVar6 + 0x14);
        if (uVar15 == 0) {
          uVar15 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar6 + 8);
        }
        puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e4),*(int *)(this_00 + 0x1ec),0,0,0,0,0);
        pcVar10 = (char *)FUN_006b0140(local_18,DAT_00807618);
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar19;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar19 + -uVar15;
        pcVar19 = (char *)&DAT_0080f33a;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar19 = pcVar19 + 1;
        }
        puVar11 = FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar5 = local_8;
        while (local_8 = pUVar5, puVar11 != (uint *)0x0) {
          *(undefined1 *)puVar11 = 0x20;
          puVar11 = FUN_0072e560(puVar11,'\n');
          pUVar5 = local_8;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e4),&DAT_0080f33a,
                       (uint)*(byte *)((int)pUVar5 + 0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00[0x1a1] == (PanelTy)0x0) && (*(byte *)((int)pUVar5 + 0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,0x29);
          }
          else {
            local_1c = (uint *)CONCAT31(local_1c._1_3_,(-(DAT_0080874e != '\x01') & 0x43U) + 0x10);
          }
          iVar13 = (uint)*(byte *)((int)pUVar5 + 0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar6 = *(int *)(*(int *)(this_00 + 0x1ec) + 8) / 2;
          FUN_006b5b10(*(int *)(this_00 + 0x1ec),0,iVar13,iVar6,iVar13 + 8,iVar6,(byte)local_1c,0xd)
          ;
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            iVar6 = *(int *)(*(int *)(this_00 + 0x1ec) + 8);
          }
          iVar13 = (uint)*(byte *)((int)local_8 + 0x11) * 0x14;
          FUN_006b5b10(*(int *)(this_00 + 0x1ec),0,iVar13,0,iVar13,iVar6,(byte)local_10,0xd);
          local_14 = (undefined4 *)0x0;
          local_c = (uint)*(ushort *)(param_1 + 0x14);
          local_18 = *(uint *)(*(int *)(this_00 + 0x1b3) + 0xc);
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar6 = *(int *)(*(int *)(this_00 + 0x1b3) + 8) * (int)local_1c +
                      *(int *)(*(int *)(this_00 + 0x1b3) + 0x1c);
            }
            else {
              iVar6 = 0;
            }
            if ((iVar6 == 0) || (bVar18 = *(byte *)(iVar6 + 0x11), bVar18 == 0)) goto LAB_0051ef61;
            uVar15 = local_c;
            if (bVar18 < *(byte *)((int)local_8 + 0x11)) {
              do {
                uVar15 = uVar15 - 1;
                if ((int)uVar15 < 1) goto joined_r0x0051eec7;
                if (uVar15 < local_18) {
                  iVar6 = *(int *)(*(int *)(this_00 + 0x1b3) + 8) * uVar15 +
                          *(int *)(*(int *)(this_00 + 0x1b3) + 0x1c);
                }
                else {
                  iVar6 = 0;
                }
                if ((iVar6 == 0) || (*(byte *)(iVar6 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar6 + 0x11) != bVar18);
              if (*(char *)(iVar6 + 0x13) == '\0') {
                local_14 = (undefined4 *)((uint)local_14 | 1 << (bVar18 & 0x1f));
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar18 = 0;
          iVar6 = 0;
          do {
            if (((uint)local_14 & 1 << (bVar18 & 0x1f)) != 0) {
              FUN_006b5b10(*(int *)(this_00 + 0x1ec),0,iVar6,0,iVar6,
                           *(int *)(*(int *)(this_00 + 0x1ec) + 8),(byte)local_10,0xd);
            }
            iVar6 = iVar6 + 0x14;
            bVar18 = bVar18 + 1;
          } while (iVar6 < 0x280);
        }
        FUN_006b5440(*(int *)(this_00 + 0x68),0,0x21,*(ushort *)(param_1 + 0x1a) + 0x16,
                     *(int *)(this_00 + 0x1ec),0,0xff);
      }
      FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8162:
      PVar3 = this_00[0x1a1];
      if (PVar3 == (PanelTy)0x0) {
        iVar6 = *(int *)(this_00 + 0x1b3);
      }
      else {
        if (PVar3 != (PanelTy)0xa) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        iVar6 = *(int *)(this_00 + 0x1bb);
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      if (uVar15 < *(uint *)(iVar6 + 0xc)) {
        if (PVar3 == (PanelTy)0x0) {
          local_1c = (uint *)(*(int *)(*(int *)(this_00 + 0x1b3) + 8) * uVar15 +
                             *(int *)(*(int *)(this_00 + 0x1b3) + 0x1c));
        }
        else {
          local_1c = (uint *)(*(int *)(*(int *)(this_00 + 0x1bb) + 8) * uVar15 +
                             *(int *)(*(int *)(this_00 + 0x1bb) + 0x1c));
        }
      }
      else {
        local_1c = (uint *)0x0;
      }
      if (local_1c == (uint *)0x0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar20 = false;
      uVar15 = *(uint *)((int)local_1c + 0xd);
      pvVar4 = *(void **)((int)local_1c + 9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        RCProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x02':
        ObjProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x03':
        SubProc((HelpPanelTy *)this_00,(int)pvVar4,'\0');
        break;
      case '\x04':
        ArmProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\x05':
        TechProc((HelpPanelTy *)this_00,(uint)pvVar4,(byte)uVar15,'\0');
        break;
      case '\x06':
        TTreeProc((HelpPanelTy *)this_00,(uint)pvVar4,'\0');
        break;
      case '\a':
        MObjProc((HelpPanelTy *)this_00);
        break;
      case '\b':
        TipProc((HelpPanelTy *)this_00,pvVar4,uVar15,'\0');
        break;
      case '\n':
        IndexBut((HelpPanelTy *)this_00);
        break;
      case '\v':
        SpecProc((HelpPanelTy *)this_00,(int)pvVar4,uVar15,'\0');
        break;
      case '\f':
        NatProc((HelpPanelTy *)this_00,(int)pvVar4,'\0');
      }
      bVar20 = true;
switchD_0051ea9b_caseD_0:
      if (bVar20) {
        PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      ChangeTree((HelpPanelTy *)this_00,(int *)local_1c,*(int *)(param_1 + 0x14));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8163:
      if (this_00[0x1a1] != (PanelTy)0xa) {
        *(undefined4 *)(this_00 + 0x1b7) = *(undefined4 *)(param_1 + 0x14);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(undefined4 *)(this_00 + 0x1bf) = *(undefined4 *)(param_1 + 0x14);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0x8164:
      pcVar21 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(s_BUT_SLUP_007c3e40,0);
      bVar18 = 6;
      break;
    case 0x8165:
      pcVar21 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(s_BUT_SLDN_007c3e34,0);
      bVar18 = 6;
      break;
    case 0x8166:
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x220),0);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x1c3,0x2d,'\x06',pbVar9);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x220),
                                    (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) != 1) + 1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x1c3,*(ushort *)(param_1 + 0x16) + 0x2d,
                         '\x06',pbVar9);
      FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto switchD_0051e4d9_caseD_7;
    }
  }
  else {
    switch(uVar15) {
    case 0xc09f:
      HomeBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a0:
      BackBut((HelpPanelTy *)this_00,unaff_EDI);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a1:
      IndexBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a2:
      PrevBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a3:
      NextBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a4:
      BwdBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 0xc0a5:
      FwdBut((HelpPanelTy *)this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto switchD_0051e4d9_caseD_7;
    case 0xc0af:
      pcVar10 = s_BUT_HLPHOME_007c3884;
      break;
    case 0xc0b0:
      pcVar10 = s_BUT_HLPBACK_007c3e24;
      break;
    case 0xc0b1:
      pcVar10 = s_BUT_HLPINDEX_007c3e14;
      break;
    case 0xc0b2:
      pcVar10 = s_BUT_HLPPREV_007c3e04;
      break;
    case 0xc0b3:
      pcVar10 = s_BUT_HLPNEXT_007c3df4;
      break;
    case 0xc0b4:
      pcVar10 = s_BUT_HLPBWD_007c3de4;
      break;
    case 0xc0b5:
      pcVar10 = s_BUT_HLPFWD_007c3dd4;
    }
    pcVar21 = thunk_FUN_00529f90;
    pCVar12 = thunk_FUN_00571240(pcVar10,0);
    bVar18 = 1;
  }
  UPanelTy::PaintBut((UPanelTy *)this_00,param_1,bVar18,pCVar12,pcVar21);
switchD_0051e4d9_caseD_7:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (*(int *)(this_00 + 0x1a3) == 1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (*(int *)(this_00 + 0x1a3) == 2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar17 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)*(ushort *)(this_00 + 0x1af);
  while( true ) {
    local_30 = *(int *)((int)local_10 + (uint)uVar17 * 0xd + 5) + 0x21 + *(int *)(this_00 + 0x3c);
    local_2c = (*(int *)((int)local_10 + (uint)uVar17 * 0xd + 9) -
               (uint)*(ushort *)(this_00 + 0x1b1) * *(int *)(this_00 + 0x1c3)) + (int)local_1c +
               0x16 + *(int *)(this_00 + 0x44);
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((bVar20) && ((int)local_8 < *(int *)(this_00 + 0x44) + 300)) break;
    uVar17 = uVar17 + 1;
    if ((ushort)local_18 <= uVar17) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  TechProc((HelpPanelTy *)this_00,*(uint *)((int)local_10 + (uint)uVar17 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar17 * 0xd + 4),'\0');
  PutToSHlp((HelpPanelTy *)this_00,(int)unaff_EDI);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00[0x1db] = (PanelTy)0x46;
switchD_0051dfcc_caseD_7:
  iVar6 = *(int *)(this_00 + 0x178);
  if ((undefined4 *)iVar6 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (iVar6 != 0) {
    *(undefined4 *)(this_00 + 0x28) = 0x4202;
    *(undefined2 *)(this_00 + 0x2c) = 0;
    *(undefined2 *)(this_00 + 0x2e) = 2;
    *(int *)(this_00 + 0x30) = iVar6;
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(this_00 + 0x18);
    }
  }
  *(undefined4 **)(this_00 + 0x178) = local_10;
  if (local_10 == (undefined4 *)0x0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  *(undefined4 *)(this_00 + 0x28) = 0x4201;
  *(undefined2 *)(this_00 + 0x2c) = 0;
  *(undefined2 *)(this_00 + 0x2e) = 2;
  *(undefined4 **)(this_00 + 0x30) = local_10;
  (**(code **)*DAT_00802a30)(this_00 + 0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

