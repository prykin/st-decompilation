
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bc630(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_00854fc8 = 0;
  DAT_00854eec = 0;
  if (0 < DAT_00854fa0) {
    do {
      DAT_00854fd0 = *(uint **)(DAT_00854fc0 + DAT_00854eec * 4);
      if ((*DAT_00854fd0 & 0x4000) != 0) {
        if ((int)DAT_00854fd0[0xc] < 0) {
          DAT_00854fd0[10] = DAT_00854fd0[10] + DAT_00854fd0[0xc] + 1;
          DAT_00854fd0[0xc] = -DAT_00854fd0[0xc];
          *DAT_00854fd0 = *DAT_00854fd0 | 0x400;
        }
        if ((int)DAT_00854fd0[0xd] < 0) {
          DAT_00854fd0[0xb] = DAT_00854fd0[0xb] + DAT_00854fd0[0xd] + 1;
          DAT_00854fd0[0xd] = -DAT_00854fd0[0xd];
          *DAT_00854fd0 = *DAT_00854fd0 | 0x800;
        }
      }
      if ((*DAT_00854fd0 & 0x24) != 0) {
        DAT_00854f9c = DAT_00854fd0[0x14];
        DAT_00854f90 = (int *)(DAT_00854f9c * 0x10 + 0x14 + DAT_00854fd4);
        DAT_00854f50 = *(int *)(DAT_00854fd4 + 0x174 + DAT_00854f9c * 4);
        DAT_00854fd0[10] = DAT_00854fd0[10] + *(int *)(DAT_00854fd4 + 0x11c + DAT_00854f9c * 8);
        DAT_00854fd0[0xb] = DAT_00854fd0[0xb] + *(int *)(DAT_00854fd4 + 0x120 + DAT_00854f9c * 8);
        DAT_00854fd0[6] = DAT_00854fd0[6] + *(int *)(DAT_00854fd4 + 0x11c + DAT_00854f9c * 8);
        DAT_00854fd0[7] = DAT_00854fd0[7] + *(int *)(DAT_00854fd4 + 0x120 + DAT_00854f9c * 8);
        uVar1 = *DAT_00854fd0;
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x4000) == 0) {
            if ((((int)DAT_00854fd0[6] < DAT_00854f90[2]) &&
                (*DAT_00854f90 < (int)(DAT_00854fd0[0xe] + DAT_00854fd0[6]))) &&
               (uVar1 = DAT_00854fd0[7], (int)uVar1 < DAT_00854f90[3])) {
              uVar2 = DAT_00854fd0[0xf];
              goto LAB_006bc7d0;
            }
LAB_006bc7e0:
            _DAT_00854ed0 = 0;
          }
          else {
            if (((DAT_00854f90[2] <= (int)DAT_00854fd0[10]) ||
                ((int)(DAT_00854fd0[0xc] + DAT_00854fd0[10]) <= *DAT_00854f90)) ||
               (uVar1 = DAT_00854fd0[0xb], DAT_00854f90[3] <= (int)uVar1)) goto LAB_006bc7e0;
            uVar2 = DAT_00854fd0[0xd];
LAB_006bc7d0:
            if ((int)(uVar2 + uVar1) <= DAT_00854f90[1]) goto LAB_006bc7e0;
            _DAT_00854ed0 = 1;
          }
          if (((*DAT_00854fd0 & 0x20) == 0) || (_DAT_00854ed0 == 0)) {
            *DAT_00854fd0 = *DAT_00854fd0 & 0xfffffffd;
          }
          else {
            if (DAT_00854fd0[8] == 0xffffffff) {
              FUN_006cf950(DAT_00854fd0);
            }
            if (((((int)DAT_00854fd0[10] < DAT_00854f90[2]) &&
                 (*DAT_00854f90 < (int)(DAT_00854fd0[10] + DAT_00854fd0[0xc]))) &&
                ((int)DAT_00854fd0[0xb] < DAT_00854f90[3])) &&
               (DAT_00854f90[1] < (int)(DAT_00854fd0[0xb] + DAT_00854fd0[0xd]))) {
              uVar1 = *DAT_00854fd0;
              if ((uVar1 & 0x20) != 0) {
                if (((int)DAT_00854fd0[0xc] < 1) || ((int)DAT_00854fd0[0xd] < 1)) {
                  if ((uVar1 & 1) != 0) {
                    *DAT_00854fd0 = uVar1 | 4;
                  }
                }
                else {
                  *DAT_00854fd0 = uVar1 | 0x40;
                  DAT_00854fc8 = DAT_00854fc8 + 1;
                  if (((*DAT_00854fd0 & 1) == 0) || (DAT_00854f50 != 0)) {
                    *DAT_00854fd0 = *DAT_00854fd0 | 6;
                  }
                }
              }
              goto LAB_006bc8a6;
            }
            *DAT_00854fd0 = *DAT_00854fd0 & 0xfffffffd;
          }
        }
        else {
          *DAT_00854fd0 = uVar1 & 0xfffffffd;
        }
        uVar1 = *DAT_00854fd0;
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar1 & 0xfffffffb;
        }
        else {
          uVar1 = uVar1 | 4;
        }
        *DAT_00854fd0 = uVar1;
      }
LAB_006bc8a6:
      if (((*DAT_00854fd0 & 0x500e) == 0) && (DAT_00854f98 == 0)) {
        DAT_00854fd0[0x1a] = 0;
        DAT_00854fd0[0x1b] = 0;
      }
      else {
        DAT_00854fd0[0x1a] = 5;
      }
      DAT_00854eec = DAT_00854eec + 1;
    } while (DAT_00854eec < DAT_00854fa0);
  }
  return;
}

