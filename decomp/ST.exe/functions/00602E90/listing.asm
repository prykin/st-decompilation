SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00602E90::FUN_00602e90:
00602E90  55                        PUSH EBP
00602E91  8B EC                     MOV EBP,ESP
00602E93  83 EC 4C                  SUB ESP,0x4c
00602E96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00602E9B  56                        PUSH ESI
00602E9C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00602E9F  57                        PUSH EDI
00602EA0  8D 55 B8                  LEA EDX,[EBP + -0x48]
00602EA3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00602EA6  6A 00                     PUSH 0x0
00602EA8  52                        PUSH EDX
00602EA9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00602EB0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00602EB3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00602EB9  E8 32 A9 12 00            CALL 0x0072d7f0
00602EBE  83 C4 08                  ADD ESP,0x8
00602EC1  85 C0                     TEST EAX,EAX
00602EC3  0F 85 41 01 00 00         JNZ 0x0060300a
00602EC9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00602ECC  83 BE 41 02 00 00 01      CMP dword ptr [ESI + 0x241],0x1
00602ED3  75 0F                     JNZ 0x00602ee4
00602ED5  8B 86 72 03 00 00         MOV EAX,dword ptr [ESI + 0x372]
00602EDB  8B 04 85 00 EC 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cec00]
00602EE2  EB 0D                     JMP 0x00602ef1
LAB_00602ee4:
00602EE4  8B 8E 72 03 00 00         MOV ECX,dword ptr [ESI + 0x372]
00602EEA  8B 04 8D EC EB 7C 00      MOV EAX,dword ptr [ECX*0x4 + 0x7cebec]
LAB_00602ef1:
00602EF1  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00602EF7  6A 00                     PUSH 0x0
00602EF9  6A 00                     PUSH 0x0
00602EFB  6A 01                     PUSH 0x1
00602EFD  6A 00                     PUSH 0x0
00602EFF  6A FF                     PUSH -0x1
00602F01  50                        PUSH EAX
00602F02  6A 1D                     PUSH 0x1d
00602F04  52                        PUSH EDX
00602F05  E8 E6 6B 10 00            CALL 0x00709af0
00602F0A  8B F8                     MOV EDI,EAX
00602F0C  83 C4 20                  ADD ESP,0x20
00602F0F  85 FF                     TEST EDI,EDI
00602F11  0F 84 E1 00 00 00         JZ 0x00602ff8
00602F17  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
00602F1D  85 C0                     TEST EAX,EAX
00602F1F  75 67                     JNZ 0x00602f88
00602F21  DB 86 83 03 00 00         FILD dword ptr [ESI + 0x383]
00602F27  68 00 00 40 40            PUSH 0x40400000
00602F2C  6A 00                     PUSH 0x0
00602F2E  51                        PUSH ECX
00602F2F  8B 47 21                  MOV EAX,dword ptr [EDI + 0x21]
00602F32  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602F38  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602F3E  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00602F44  D9 1C 24                  FSTP float ptr [ESP]
00602F47  DB 86 7F 03 00 00         FILD dword ptr [ESI + 0x37f]
00602F4D  51                        PUSH ECX
00602F4E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602F54  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602F5A  D9 1C 24                  FSTP float ptr [ESP]
00602F5D  DB 86 7B 03 00 00         FILD dword ptr [ESI + 0x37b]
00602F63  51                        PUSH ECX
00602F64  8B 08                     MOV ECX,dword ptr [EAX]
00602F66  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602F6C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602F72  D9 1C 24                  FSTP float ptr [ESP]
00602F75  6A 45                     PUSH 0x45
00602F77  6A 5A                     PUSH 0x5a
00602F79  51                        PUSH ECX
00602F7A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00602F80  E8 7B 60 0E 00            CALL 0x006e9000
00602F85  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00602f88:
00602F88  83 BE 41 02 00 00 01      CMP dword ptr [ESI + 0x241],0x1
00602F8F  75 67                     JNZ 0x00602ff8
00602F91  DB 86 83 03 00 00         FILD dword ptr [ESI + 0x383]
00602F97  68 00 00 C0 40            PUSH 0x40c00000
00602F9C  6A 00                     PUSH 0x0
00602F9E  51                        PUSH ECX
00602F9F  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
00602FA2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602FA8  8B 02                     MOV EAX,dword ptr [EDX]
00602FAA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602FB0  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00602FB6  D9 1C 24                  FSTP float ptr [ESP]
00602FB9  DB 86 7F 03 00 00         FILD dword ptr [ESI + 0x37f]
00602FBF  51                        PUSH ECX
00602FC0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602FC6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602FCC  D9 1C 24                  FSTP float ptr [ESP]
00602FCF  DB 86 7B 03 00 00         FILD dword ptr [ESI + 0x37b]
00602FD5  51                        PUSH ECX
00602FD6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00602FDC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00602FE2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00602FE8  D9 1C 24                  FSTP float ptr [ESP]
00602FEB  6A 56                     PUSH 0x56
00602FED  6A 78                     PUSH 0x78
00602FEF  50                        PUSH EAX
00602FF0  E8 0B 60 0E 00            CALL 0x006e9000
00602FF5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00602ff8:
00602FF8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00602FFB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00602FFE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00603004  5F                        POP EDI
00603005  5E                        POP ESI
00603006  8B E5                     MOV ESP,EBP
00603008  5D                        POP EBP
00603009  C3                        RET
LAB_0060300a:
0060300A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0060300D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00603010  5F                        POP EDI
00603011  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603017  5E                        POP ESI
00603018  8B E5                     MOV ESP,EBP
0060301A  5D                        POP EBP
0060301B  C3                        RET
