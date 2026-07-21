
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bd4b0(void)

{
  int iVar1;

  if (((*DAT_00854f44 & 0x80004) == 0x80004) &&
     ((undefined8 *)DAT_00854f44[0x30] != (undefined8 *)0x0)) {
    FUN_006cea60((undefined8 *)DAT_00854f44[0x30],DAT_00854f44[3],
                 (undefined8 *)
                 (DAT_00854f44[2] * (int)DAT_00854fe0 + DAT_00854f44[1] + (int)DAT_00854f00),
                 (int)DAT_00854fe0,DAT_00854f44[3],DAT_00854f44[4]);
  }
  DAT_00854edc = DAT_00854f44[0x1a];
  if ((int)DAT_00854edc < 5) {
    DAT_00854fd8 = DAT_00854f44 + 0x1c;
    DAT_00854ed8 = 0;
    if (0 < (int)DAT_00854edc) {
      do {
        _DAT_00854fb0 = *DAT_00854fd8 - DAT_00854ee0;
        _DAT_00854fb4 = (DAT_00854f24 - DAT_00854ee4) + DAT_00854fd8[1];
        DAT_00854fb8 = DAT_00854fd8[2];
        DAT_00854fbc = DAT_00854fd8[3];
        DAT_00854fec = FUN_006cef60(g_int_00854FD4,DAT_00854f00,DAT_00854fe0,(int)DAT_00854f44,
                                    DAT_00854f68,DAT_00854f58,*DAT_00854fd8,DAT_00854fd8[1],
                                    (int *)&DAT_00854fb0,DAT_00854f20,DAT_00854f9c,DAT_00854f1c,
                                    DAT_00854f5c);
        if (DAT_00854fe4 == 0) {
          DAT_00854fe4 = DAT_00854fec;
        }
        if (((DAT_00854ed4 == 0) &&
            (iVar1 = FUN_006cfeb0(&DAT_00854ef0,(int *)DAT_00854fd8,DAT_00854f90), iVar1 != 0)) &&
           (iVar1 = FUN_006d1ad0((int *)g_int_00854FD4[0x70],100,DAT_00854ef0,DAT_00854ef4,
                                 DAT_00854ef8,DAT_00854efc,g_int_00854FD4[3],g_int_00854FD4[4],1),
           iVar1 == -1)) {
          DAT_00854ed4 = 1;
        }
        DAT_00854fd8 = DAT_00854fd8 + 4;
        DAT_00854ed8 = DAT_00854ed8 + 1;
      } while (DAT_00854ed8 < (int)DAT_00854edc);
      return;
    }
  }
  else {
    _DAT_00854fb4 = DAT_00854f24;
    _DAT_00854fb0 = 0;
    DAT_00854fec = FUN_006cef60(g_int_00854FD4,DAT_00854f00,DAT_00854fe0,(int)DAT_00854f44,
                                DAT_00854f68,DAT_00854f58,DAT_00854ee0,DAT_00854ee4,
                                (int *)&DAT_00854fb0,DAT_00854f20,DAT_00854f9c,DAT_00854f1c,
                                DAT_00854f5c);
    if (DAT_00854fe4 == 0) {
      DAT_00854fe4 = DAT_00854fec;
    }
    if ((DAT_00854ed4 == 0) &&
       (iVar1 = FUN_006d1ad0((int *)g_int_00854FD4[0x70],100,DAT_00854ef0,DAT_00854ef4,DAT_00854ef8,
                             DAT_00854efc,g_int_00854FD4[3],g_int_00854FD4[4],1), iVar1 == -1)) {
      DAT_00854ed4 = 1;
    }
  }
  return;
}

