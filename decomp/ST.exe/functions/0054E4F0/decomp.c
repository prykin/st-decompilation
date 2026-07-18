
undefined4 FUN_0054e4f0(int param_1)

{
  char cVar1;
  code *pcVar2;
  cMf32 *this;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_2b8;
  char local_2b7 [515];
  undefined4 **local_b4;
  undefined4 local_b0 [16];
  undefined4 **local_70;
  undefined4 local_6c [16];
  undefined4 local_2c [8];
  int *local_c;
  int local_8;
  
  iVar3 = FUN_006e5f00(param_1);
  if (iVar3 != 0xffff) {
    local_70 = DAT_00858df8;
    DAT_00858df8 = &local_70;
    iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x10) == 8) {
        local_b4 = DAT_00858df8;
        DAT_00858df8 = &local_b4;
        iVar3 = __setjmp3(local_b0,0,unaff_EDI,unaff_ESI);
        this = DAT_00806754;
        if (iVar3 == 0) {
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            uVar10 = 0xffffffff;
            pcVar12 = PTR_DAT_007c83b0;
            do {
              pcVar13 = pcVar12;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            local_2b8 = 0xc;
            pcVar12 = pcVar13 + -uVar10;
            pcVar13 = local_2b7;
            for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            local_8 = 0;
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
            cMf32::ToBeg(DAT_00806754,FUN_006f2d10,&local_2b8);
            puVar4 = cMf32::RecNameGetNext(this);
            iVar3 = local_8;
            while (puVar4 != (undefined4 *)0x0) {
              local_8 = iVar3 + 1;
              puVar4 = cMf32::RecNameGetNext(this);
              iVar3 = local_8;
            }
            local_8 = iVar3;
            puVar5 = (uint *)FUN_006b0140(19000,DAT_00807618);
            cLoadingTy::SetProcess(DAT_00802a58,0,puVar5,iVar3);
          }
          DAT_00802a3c = 0;
          FUN_006f2e40(DAT_00806754,PTR_DAT_007c83b0,&LAB_00403535,local_c,0);
          uVar6 = FUN_006b0140(0x4a39,DAT_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,DAT_00802a3c,uVar6);
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            cLoadingTy::SetState(DAT_00802a58,2,0,(char *)&DAT_0080f33a);
          }
          DAT_00858df8 = local_b4;
          piVar11 = local_c;
        }
        else {
          DAT_00858df8 = local_b4;
          FUN_006a5e40(iVar3,0,0x7c8430,0x42f);
          piVar11 = local_c;
        }
        uVar10 = 0;
        iVar3 = *piVar11;
        puVar4 = local_2c;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_2c[3] = 0xf;
        local_2c[4] = 0x111;
        (**(code **)(iVar3 + 0x18))(local_2c);
        if (DAT_00808783 == '\x03') {
          *(undefined1 *)(piVar11 + 0xe) = 1;
          if (DAT_00811764 != (undefined4 *)0x0) {
            FUN_006b6500((int)DAT_00811764,DAT_0080733c);
          }
          if (DAT_0080877e == '\0') {
            FUN_00715360(DAT_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
          }
          else if (DAT_00808aaf != 0) {
            puVar4 = &DAT_00808af8;
            do {
              uVar6 = FUN_006e51b0(0x807620);
              *puVar4 = uVar6;
              uVar10 = uVar10 + 1;
              puVar4 = puVar4 + 0x27;
            } while (uVar10 < DAT_00808aaf);
          }
        }
        DVar7 = timeGetTime();
        piVar11[0x2f] = DVar7;
        *(DWORD *)((int)piVar11 + 0x7f) = DVar7;
        *(DWORD *)((int)piVar11 + 0x83) = DVar7;
      }
      else if (*(int *)(param_1 + 0x10) == 0x44ff) {
        uVar10 = 0;
        DAT_00808788 = 0;
        if (DAT_00808aaf != 0) {
          pcVar12 = &DAT_00808af6;
          do {
            puVar4 = DAT_00811764;
            if ((*(int *)(pcVar12 + -6) == local_c[0x3d]) && (*pcVar12 != '\0')) {
              *pcVar12 = '\0';
              FUN_006b6500((int)puVar4,1);
              FUN_00715360(DAT_00811764,local_c[0x3d],'7',(char *)0x0,0,0,0xffffffff);
              FUN_006b6500((int)DAT_00811764,DAT_0080733c);
              thunk_FUN_005508f0(local_c,local_c[0x3d]);
              local_c[0x3d] = 0;
            }
            uVar10 = uVar10 + 1;
            pcVar12 = pcVar12 + 0x9c;
          } while (uVar10 < DAT_00808aaf);
          DAT_00858df8 = local_70;
          return 0;
        }
      }
      DAT_00858df8 = local_70;
      return 0;
    }
    DAT_00858df8 = local_70;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x463,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  return 0xffff;
}

