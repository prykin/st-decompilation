FUN_004a9990:
004A9990  55                        PUSH EBP
004A9991  8B EC                     MOV EBP,ESP
004A9993  83 EC 0C                  SUB ESP,0xc
004A9996  D9 05 38 74 80 00         FLD float ptr [0x00807438]
004A999C  D8 0D 20 74 80 00         FMUL float ptr [0x00807420]
004A99A2  83 EC 08                  SUB ESP,0x8
004A99A5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A99AB  83 EC 08                  SUB ESP,0x8
004A99AE  83 EC 08                  SUB ESP,0x8
004A99B1  D9 1D 28 74 80 00         FSTP float ptr [0x00807428]
004A99B7  D9 05 24 74 80 00         FLD float ptr [0x00807424]
004A99BD  D8 0D 38 74 80 00         FMUL float ptr [0x00807438]
004A99C3  83 EC 08                  SUB ESP,0x8
004A99C6  D9 1D 2C 74 80 00         FSTP float ptr [0x0080742c]
004A99CC  D9 05 3D 74 80 00         FLD float ptr [0x0080743d]
004A99D2  D8 0D 38 74 80 00         FMUL float ptr [0x00807438]
004A99D8  D9 1D 4D 74 80 00         FSTP float ptr [0x0080744d]
004A99DE  D9 05 41 74 80 00         FLD float ptr [0x00807441]
004A99E4  D8 0D 38 74 80 00         FMUL float ptr [0x00807438]
004A99EA  D9 1D 51 74 80 00         FSTP float ptr [0x00807451]
004A99F0  D9 05 45 74 80 00         FLD float ptr [0x00807445]
004A99F6  D8 0D 38 74 80 00         FMUL float ptr [0x00807438]
004A99FC  D9 1D 55 74 80 00         FSTP float ptr [0x00807455]
004A9A02  D9 05 49 74 80 00         FLD float ptr [0x00807449]
004A9A08  D8 0D 38 74 80 00         FMUL float ptr [0x00807438]
004A9A0E  D9 1D 59 74 80 00         FSTP float ptr [0x00807459]
004A9A14  D9 05 28 74 80 00         FLD float ptr [0x00807428]
004A9A1A  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9A20  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9A26  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9A2C  D8 05 59 74 80 00         FADD float ptr [0x00807459]
004A9A32  DD 5C 24 18               FSTP double ptr [ESP + 0x18]
004A9A36  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9A3C  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A9A42  D8 25 55 74 80 00         FSUB float ptr [0x00807455]
004A9A48  DD 5C 24 10               FSTP double ptr [ESP + 0x10]
004A9A4C  D9 C0                     FLD ST0
004A9A4E  D8 25 51 74 80 00         FSUB float ptr [0x00807451]
004A9A54  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A9A58  D9 05 4D 74 80 00         FLD float ptr [0x0080744d]
004A9A5E  D8 E1                     FSUB ST0,ST1
004A9A60  DD 1C 24                  FSTP double ptr [ESP]
004A9A63  DD D8                     FSTP ST0
004A9A65  E8 76 3C 23 00            CALL 0x006dd6e0
004A9A6A  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A9A6D  8D 4D F8                  LEA ECX,[EBP + -0x8]
004A9A70  50                        PUSH EAX
004A9A71  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A9A74  51                        PUSH ECX
004A9A75  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9A7B  52                        PUSH EDX
004A9A7C  E8 AF 3A 23 00            CALL 0x006dd530
004A9A81  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9A84  D8 25 7C 07 79 00         FSUB float ptr [0x0079077c]
004A9A8A  51                        PUSH ECX
004A9A8B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9A91  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9A97  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9A9D  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9AA3  DE E9                     FSUBP
004A9AA5  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9AAB  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A9AB1  DE E9                     FSUBP
004A9AB3  D9 1C 24                  FSTP float ptr [ESP]
004A9AB6  E8 D5 3C 23 00            CALL 0x006dd790
004A9ABB  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9ABE  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9AC4  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9ACA  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9AD0  51                        PUSH ECX
004A9AD1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9AD7  DE C1                     FADDP
004A9AD9  DC 05 60 07 79 00         FADD double ptr [0x00790760]
004A9ADF  D9 1C 24                  FSTP float ptr [ESP]
004A9AE2  E8 19 3D 23 00            CALL 0x006dd800
004A9AE7  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004A9AF1  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
004A9AFB  8B E5                     MOV ESP,EBP
004A9AFD  5D                        POP EBP
004A9AFE  C3                        RET
