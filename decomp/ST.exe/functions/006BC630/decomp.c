
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bc630(void)

{
  uint uVar1;
  uint uVar2;

  DAT_00854fc8 = 0;
  DAT_00854eec = 0;
  if (0 < DAT_00854fa0) {
    do {
      PTR_00854fd0 = *(uint **)(DAT_00854fc0 + DAT_00854eec * 4);
      if ((*PTR_00854fd0 & 0x4000) != 0) {
        if ((int)PTR_00854fd0[0xc] < 0) {
          PTR_00854fd0[10] = PTR_00854fd0[10] + PTR_00854fd0[0xc] + 1;
          PTR_00854fd0[0xc] = -PTR_00854fd0[0xc];
          *PTR_00854fd0 = *PTR_00854fd0 | 0x400;
        }
        if ((int)PTR_00854fd0[0xd] < 0) {
          PTR_00854fd0[0xb] = PTR_00854fd0[0xb] + PTR_00854fd0[0xd] + 1;
          PTR_00854fd0[0xd] = -PTR_00854fd0[0xd];
          *PTR_00854fd0 = *PTR_00854fd0 | 0x800;
        }
      }
      if ((*PTR_00854fd0 & 0x24) != 0) {
        DAT_00854f9c = PTR_00854fd0[0x14];
        PTR_00854f90 = g_int_00854FD4 + DAT_00854f9c * 4 + 5;
        DAT_00854f50 = g_int_00854FD4[DAT_00854f9c + 0x5d];
        PTR_00854fd0[10] = PTR_00854fd0[10] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        PTR_00854fd0[0xb] = PTR_00854fd0[0xb] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        PTR_00854fd0[6] = PTR_00854fd0[6] + g_int_00854FD4[DAT_00854f9c * 2 + 0x47];
        PTR_00854fd0[7] = PTR_00854fd0[7] + g_int_00854FD4[DAT_00854f9c * 2 + 0x48];
        uVar1 = *PTR_00854fd0;
        if ((uVar1 & 0x40000) == 0) {
          if ((uVar1 & 0x4000) == 0) {
            if ((((int)PTR_00854fd0[6] < PTR_00854f90[2]) &&
                (*PTR_00854f90 < (int)(PTR_00854fd0[0xe] + PTR_00854fd0[6]))) &&
               (uVar1 = PTR_00854fd0[7], (int)uVar1 < PTR_00854f90[3])) {
              uVar2 = PTR_00854fd0[0xf];
              goto LAB_006bc7d0;
            }
LAB_006bc7e0:
            _DAT_00854ed0 = 0;
          }
          else {
            if (((PTR_00854f90[2] <= (int)PTR_00854fd0[10]) ||
                ((int)(PTR_00854fd0[0xc] + PTR_00854fd0[10]) <= *PTR_00854f90)) ||
               (uVar1 = PTR_00854fd0[0xb], PTR_00854f90[3] <= (int)uVar1)) goto LAB_006bc7e0;
            uVar2 = PTR_00854fd0[0xd];
LAB_006bc7d0:
            if ((int)(uVar2 + uVar1) <= PTR_00854f90[1]) goto LAB_006bc7e0;
            _DAT_00854ed0 = 1;
          }
          if (((*PTR_00854fd0 & 0x20) == 0) || (_DAT_00854ed0 == 0)) {
            *PTR_00854fd0 = *PTR_00854fd0 & 0xfffffffd;
          }
          else {
            if (PTR_00854fd0[8] == 0xffffffff) {
              FUN_006cf950(PTR_00854fd0);
            }
            if (((((int)PTR_00854fd0[10] < PTR_00854f90[2]) &&
                 (*PTR_00854f90 < (int)(PTR_00854fd0[10] + PTR_00854fd0[0xc]))) &&
                ((int)PTR_00854fd0[0xb] < PTR_00854f90[3])) &&
               (PTR_00854f90[1] < (int)(PTR_00854fd0[0xb] + PTR_00854fd0[0xd]))) {
              uVar1 = *PTR_00854fd0;
              if ((uVar1 & 0x20) != 0) {
                if (((int)PTR_00854fd0[0xc] < 1) || ((int)PTR_00854fd0[0xd] < 1)) {
                  if ((uVar1 & 1) != 0) {
                    *PTR_00854fd0 = uVar1 | 4;
                  }
                }
                else {
                  *PTR_00854fd0 = uVar1 | 0x40;
                  DAT_00854fc8 = DAT_00854fc8 + 1;
                  if (((*PTR_00854fd0 & 1) == 0) || (DAT_00854f50 != 0)) {
                    *PTR_00854fd0 = *PTR_00854fd0 | 6;
                  }
                }
              }
              goto LAB_006bc8a6;
            }
            *PTR_00854fd0 = *PTR_00854fd0 & 0xfffffffd;
          }
        }
        else {
          *PTR_00854fd0 = uVar1 & 0xfffffffd;
        }
        uVar1 = *PTR_00854fd0;
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar1 & 0xfffffffb;
        }
        else {
          uVar1 = uVar1 | 4;
        }
        *PTR_00854fd0 = uVar1;
      }
LAB_006bc8a6:
      if (((*PTR_00854fd0 & 0x500e) == 0) && (DAT_00854f98 == 0)) {
        PTR_00854fd0[0x1a] = 0;
        PTR_00854fd0[0x1b] = 0;
      }
      else {
        PTR_00854fd0[0x1a] = 5;
      }
      DAT_00854eec = DAT_00854eec + 1;
    } while (DAT_00854eec < DAT_00854fa0);
  }
  return;
}

