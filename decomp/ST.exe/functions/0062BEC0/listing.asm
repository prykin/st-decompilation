FUN_0062bec0:
0062BEC0  55                        PUSH EBP
0062BEC1  8B EC                     MOV EBP,ESP
0062BEC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062BEC6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062BEC9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062BECC  D9 00                     FLD float ptr [EAX]
0062BECE  D8 09                     FMUL float ptr [ECX]
0062BED0  D9 40 04                  FLD float ptr [EAX + 0x4]
0062BED3  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BED6  DE C1                     FADDP
0062BED8  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BEDB  D8 48 08                  FMUL float ptr [EAX + 0x8]
0062BEDE  DE C1                     FADDP
0062BEE0  D9 1A                     FSTP float ptr [EDX]
0062BEE2  D9 40 04                  FLD float ptr [EAX + 0x4]
0062BEE5  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BEE8  D9 41 1C                  FLD float ptr [ECX + 0x1c]
0062BEEB  D8 48 08                  FMUL float ptr [EAX + 0x8]
0062BEEE  DE C1                     FADDP
0062BEF0  D9 41 04                  FLD float ptr [ECX + 0x4]
0062BEF3  D8 08                     FMUL float ptr [EAX]
0062BEF5  DE C1                     FADDP
0062BEF7  D9 5A 04                  FSTP float ptr [EDX + 0x4]
0062BEFA  D9 40 04                  FLD float ptr [EAX + 0x4]
0062BEFD  D8 49 14                  FMUL float ptr [ECX + 0x14]
0062BF00  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BF03  D8 48 08                  FMUL float ptr [EAX + 0x8]
0062BF06  DE C1                     FADDP
0062BF08  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BF0B  D8 08                     FMUL float ptr [EAX]
0062BF0D  DE C1                     FADDP
0062BF0F  D9 5A 08                  FSTP float ptr [EDX + 0x8]
0062BF12  D9 40 10                  FLD float ptr [EAX + 0x10]
0062BF15  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BF18  D9 40 0C                  FLD float ptr [EAX + 0xc]
0062BF1B  D8 09                     FMUL float ptr [ECX]
0062BF1D  DE C1                     FADDP
0062BF1F  D9 40 14                  FLD float ptr [EAX + 0x14]
0062BF22  D8 49 18                  FMUL float ptr [ECX + 0x18]
0062BF25  DE C1                     FADDP
0062BF27  D9 5A 0C                  FSTP float ptr [EDX + 0xc]
0062BF2A  D9 40 14                  FLD float ptr [EAX + 0x14]
0062BF2D  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BF30  D9 40 10                  FLD float ptr [EAX + 0x10]
0062BF33  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BF36  DE C1                     FADDP
0062BF38  D9 40 0C                  FLD float ptr [EAX + 0xc]
0062BF3B  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BF3E  DE C1                     FADDP
0062BF40  D9 5A 10                  FSTP float ptr [EDX + 0x10]
0062BF43  D9 40 14                  FLD float ptr [EAX + 0x14]
0062BF46  D8 49 20                  FMUL float ptr [ECX + 0x20]
0062BF49  D9 40 10                  FLD float ptr [EAX + 0x10]
0062BF4C  D8 49 14                  FMUL float ptr [ECX + 0x14]
0062BF4F  DE C1                     FADDP
0062BF51  D9 40 0C                  FLD float ptr [EAX + 0xc]
0062BF54  D8 49 08                  FMUL float ptr [ECX + 0x8]
0062BF57  DE C1                     FADDP
0062BF59  D9 5A 14                  FSTP float ptr [EDX + 0x14]
0062BF5C  D9 40 18                  FLD float ptr [EAX + 0x18]
0062BF5F  D8 09                     FMUL float ptr [ECX]
0062BF61  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BF64  D8 48 20                  FMUL float ptr [EAX + 0x20]
0062BF67  DE C1                     FADDP
0062BF69  D9 40 1C                  FLD float ptr [EAX + 0x1c]
0062BF6C  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BF6F  DE C1                     FADDP
0062BF71  D9 5A 18                  FSTP float ptr [EDX + 0x18]
0062BF74  D9 41 1C                  FLD float ptr [ECX + 0x1c]
0062BF77  D8 48 20                  FMUL float ptr [EAX + 0x20]
0062BF7A  D9 41 10                  FLD float ptr [ECX + 0x10]
0062BF7D  D8 48 1C                  FMUL float ptr [EAX + 0x1c]
0062BF80  DE C1                     FADDP
0062BF82  D9 41 04                  FLD float ptr [ECX + 0x4]
0062BF85  D8 48 18                  FMUL float ptr [EAX + 0x18]
0062BF88  DE C1                     FADDP
0062BF8A  D9 5A 1C                  FSTP float ptr [EDX + 0x1c]
0062BF8D  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BF90  D8 48 20                  FMUL float ptr [EAX + 0x20]
0062BF93  D9 41 14                  FLD float ptr [ECX + 0x14]
0062BF96  D8 48 1C                  FMUL float ptr [EAX + 0x1c]
0062BF99  DE C1                     FADDP
0062BF9B  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BF9E  D8 48 18                  FMUL float ptr [EAX + 0x18]
0062BFA1  DE C1                     FADDP
0062BFA3  D9 5A 20                  FSTP float ptr [EDX + 0x20]
0062BFA6  5D                        POP EBP
0062BFA7  C3                        RET
