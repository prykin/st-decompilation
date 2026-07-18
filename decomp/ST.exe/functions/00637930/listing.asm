FUN_00637930:
00637930  55                        PUSH EBP
00637931  8B EC                     MOV EBP,ESP
00637933  51                        PUSH ECX
00637934  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00637937  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0063793A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0063793D  56                        PUSH ESI
0063793E  50                        PUSH EAX
0063793F  51                        PUSH ECX
00637940  52                        PUSH EDX
00637941  E8 7A DB DC FF            CALL 0x004054c0
00637946  83 C4 0C                  ADD ESP,0xc
00637949  84 C0                     TEST AL,AL
0063794B  0F 84 1E 01 00 00         JZ 0x00637a6f
00637951  A1 8C 67 80 00            MOV EAX,[0x0080678c]
00637956  6A 00                     PUSH 0x0
00637958  6A 00                     PUSH 0x0
0063795A  6A 01                     PUSH 0x1
0063795C  6A 00                     PUSH 0x0
0063795E  6A FF                     PUSH -0x1
00637960  68 3C 1C 7D 00            PUSH 0x7d1c3c
00637965  6A 1D                     PUSH 0x1d
00637967  50                        PUSH EAX
00637968  E8 83 21 0D 00            CALL 0x00709af0
0063796D  8B F0                     MOV ESI,EAX
0063796F  83 C4 20                  ADD ESP,0x20
00637972  85 F6                     TEST ESI,ESI
00637974  0F 84 F5 00 00 00         JZ 0x00637a6f
0063797A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637980  85 C9                     TEST ECX,ECX
00637982  0F 84 E7 00 00 00         JZ 0x00637a6f
00637988  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
0063798B  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
0063798E  6A 00                     PUSH 0x0
00637990  6A 15                     PUSH 0x15
00637992  6A 10                     PUSH 0x10
00637994  52                        PUSH EDX
00637995  50                        PUSH EAX
00637996  6A 00                     PUSH 0x0
00637998  8D 55 FC                  LEA EDX,[EBP + -0x4]
0063799B  6A 01                     PUSH 0x1
0063799D  52                        PUSH EDX
0063799E  E8 BD 0C 0B 00            CALL 0x006e8660
006379A3  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
006379A6  8B 0E                     MOV ECX,dword ptr [ESI]
006379A8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006379AB  6A 01                     PUSH 0x1
006379AD  50                        PUSH EAX
006379AE  51                        PUSH ECX
006379AF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006379B5  6A 00                     PUSH 0x0
006379B7  52                        PUSH EDX
006379B8  E8 23 1F 0B 00            CALL 0x006e98e0
006379BD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006379C0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006379C3  50                        PUSH EAX
006379C4  6A 00                     PUSH 0x0
006379C6  51                        PUSH ECX
006379C7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006379CD  E8 9E 28 0B 00            CALL 0x006ea270
006379D2  DB 45 18                  FILD dword ptr [EBP + 0x18]
006379D5  51                        PUSH ECX
006379D6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006379D9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006379DF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006379E5  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006379EB  D9 1C 24                  FSTP float ptr [ESP]
006379EE  DB 45 14                  FILD dword ptr [EBP + 0x14]
006379F1  51                        PUSH ECX
006379F2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006379F8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006379FE  D9 1C 24                  FSTP float ptr [ESP]
00637A01  DB 45 10                  FILD dword ptr [EBP + 0x10]
00637A04  51                        PUSH ECX
00637A05  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637A0B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637A11  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637A17  D9 1C 24                  FSTP float ptr [ESP]
00637A1A  52                        PUSH EDX
00637A1B  E8 40 2F 0B 00            CALL 0x006ea960
00637A20  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00637A23  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637A26  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637A2C  56                        PUSH ESI
00637A2D  50                        PUSH EAX
00637A2E  E8 2D 2A 0B 00            CALL 0x006ea460
00637A33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00637A36  85 C0                     TEST EAX,EAX
00637A38  74 0D                     JZ 0x00637a47
00637A3A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00637A3D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637A40  51                        PUSH ECX
00637A41  56                        PUSH ESI
00637A42  6A 01                     PUSH 0x1
00637A44  52                        PUSH EDX
00637A45  EB 0C                     JMP 0x00637a53
LAB_00637a47:
00637A47  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00637A4A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637A4D  50                        PUSH EAX
00637A4E  6A FF                     PUSH -0x1
00637A50  6A 01                     PUSH 0x1
00637A52  51                        PUSH ECX
LAB_00637a53:
00637A53  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637A59  E8 F2 25 0B 00            CALL 0x006ea050
00637A5E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637A61  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637A67  6A 00                     PUSH 0x0
00637A69  52                        PUSH EDX
00637A6A  E8 31 30 0B 00            CALL 0x006eaaa0
LAB_00637a6f:
00637A6F  5E                        POP ESI
00637A70  8B E5                     MOV ESP,EBP
00637A72  5D                        POP EBP
00637A73  C3                        RET
