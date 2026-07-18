FUN_006e2c30:
006E2C30  55                        PUSH EBP
006E2C31  8B EC                     MOV EBP,ESP
006E2C33  83 EC 10                  SUB ESP,0x10
006E2C36  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2C39  56                        PUSH ESI
006E2C3A  8B F1                     MOV ESI,ECX
006E2C3C  57                        PUSH EDI
006E2C3D  D9 00                     FLD float ptr [EAX]
006E2C3F  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E2C45  D9 40 04                  FLD float ptr [EAX + 0x4]
006E2C48  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E2C4E  D9 E0                     FCHS
006E2C50  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E2C53  D9 40 08                  FLD float ptr [EAX + 0x8]
006E2C56  DC AE 80 00 00 00         FSUBR double ptr [ESI + 0x80]
006E2C5C  83 BE 24 01 00 00 03      CMP dword ptr [ESI + 0x124],0x3
006E2C63  DD 5D F0                  FSTP double ptr [EBP + -0x10]
006E2C66  75 12                     JNZ 0x006e2c7a
006E2C68  DC 8E 2C 01 00 00         FMUL double ptr [ESI + 0x12c]
006E2C6E  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2C71  DC 8E 2C 01 00 00         FMUL double ptr [ESI + 0x12c]
006E2C77  DD 5D F8                  FSTP double ptr [EBP + -0x8]
LAB_006e2c7a:
006E2C7A  DC 66 60                  FSUB double ptr [ESI + 0x60]
006E2C7D  DC 8E D8 00 00 00         FMUL double ptr [ESI + 0xd8]
006E2C83  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E2C89  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E2C8F  E8 F4 B5 04 00            CALL 0x0072e288
006E2C94  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006E2C97  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2C9A  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2C9D  C1 E1 10                  SHL ECX,0x10
006E2CA0  03 C1                     ADD EAX,ECX
006E2CA2  89 07                     MOV dword ptr [EDI],EAX
006E2CA4  DC 66 70                  FSUB double ptr [ESI + 0x70]
006E2CA7  DC 8E E0 00 00 00         FMUL double ptr [ESI + 0xe0]
006E2CAD  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E2CB3  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E2CB9  E8 CA B5 04 00            CALL 0x0072e288
006E2CBE  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006E2CC1  DD 45 F0                  FLD double ptr [EBP + -0x10]
006E2CC4  C1 E2 10                  SHL EDX,0x10
006E2CC7  2B D0                     SUB EDX,EAX
006E2CC9  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
006E2CCC  DC A6 14 01 00 00         FSUB double ptr [ESI + 0x114]
006E2CD2  DC 8E 0C 01 00 00         FMUL double ptr [ESI + 0x10c]
006E2CD8  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E2CDE  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E2CE4  E8 9F B5 04 00            CALL 0x0072e288
006E2CE9  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006E2CEC  5F                        POP EDI
006E2CED  5E                        POP ESI
006E2CEE  8B E5                     MOV ESP,EBP
006E2CF0  5D                        POP EBP
006E2CF1  C2 08 00                  RET 0x8
