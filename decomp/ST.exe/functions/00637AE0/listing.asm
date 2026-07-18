FUN_00637ae0:
00637AE0  55                        PUSH EBP
00637AE1  8B EC                     MOV EBP,ESP
00637AE3  51                        PUSH ECX
00637AE4  A1 74 67 80 00            MOV EAX,[0x00806774]
00637AE9  56                        PUSH ESI
00637AEA  6A 00                     PUSH 0x0
00637AEC  6A 00                     PUSH 0x0
00637AEE  6A 01                     PUSH 0x1
00637AF0  6A 00                     PUSH 0x0
00637AF2  6A FF                     PUSH -0x1
00637AF4  68 48 1C 7D 00            PUSH 0x7d1c48
00637AF9  6A 1D                     PUSH 0x1d
00637AFB  50                        PUSH EAX
00637AFC  E8 EF 1F 0D 00            CALL 0x00709af0
00637B01  8B F0                     MOV ESI,EAX
00637B03  83 C4 20                  ADD ESP,0x20
00637B06  85 F6                     TEST ESI,ESI
00637B08  0F 84 DF 00 00 00         JZ 0x00637bed
00637B0E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637B14  85 C9                     TEST ECX,ECX
00637B16  0F 84 D1 00 00 00         JZ 0x00637bed
00637B1C  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
00637B1F  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00637B22  6A 00                     PUSH 0x0
00637B24  6A 45                     PUSH 0x45
00637B26  6A 5A                     PUSH 0x5a
00637B28  52                        PUSH EDX
00637B29  50                        PUSH EAX
00637B2A  6A 00                     PUSH 0x0
00637B2C  8D 55 FC                  LEA EDX,[EBP + -0x4]
00637B2F  6A 01                     PUSH 0x1
00637B31  52                        PUSH EDX
00637B32  E8 29 0B 0B 00            CALL 0x006e8660
00637B37  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00637B3A  8B 0E                     MOV ECX,dword ptr [ESI]
00637B3C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637B3F  6A 01                     PUSH 0x1
00637B41  50                        PUSH EAX
00637B42  51                        PUSH ECX
00637B43  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637B49  6A 00                     PUSH 0x0
00637B4B  52                        PUSH EDX
00637B4C  E8 8F 1D 0B 00            CALL 0x006e98e0
00637B51  DB 45 10                  FILD dword ptr [EBP + 0x10]
00637B54  51                        PUSH ECX
00637B55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637B58  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637B5E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637B64  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00637B6A  D9 1C 24                  FSTP float ptr [ESP]
00637B6D  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00637B70  51                        PUSH ECX
00637B71  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637B77  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637B7D  D9 1C 24                  FSTP float ptr [ESP]
00637B80  DB 45 08                  FILD dword ptr [EBP + 0x8]
00637B83  51                        PUSH ECX
00637B84  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637B8A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637B90  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637B96  D9 1C 24                  FSTP float ptr [ESP]
00637B99  50                        PUSH EAX
00637B9A  E8 C1 2D 0B 00            CALL 0x006ea960
00637B9F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637BA2  6A 00                     PUSH 0x0
00637BA4  6A 00                     PUSH 0x0
00637BA6  51                        PUSH ECX
00637BA7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637BAD  E8 BE 26 0B 00            CALL 0x006ea270
00637BB2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637BB5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637BBB  6A 45                     PUSH 0x45
00637BBD  6A 5A                     PUSH 0x5a
00637BBF  6A 01                     PUSH 0x1
00637BC1  52                        PUSH EDX
00637BC2  E8 19 29 0B 00            CALL 0x006ea4e0
00637BC7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637BCA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637BD0  6A 00                     PUSH 0x0
00637BD2  6A FF                     PUSH -0x1
00637BD4  6A 01                     PUSH 0x1
00637BD6  50                        PUSH EAX
00637BD7  E8 74 24 0B 00            CALL 0x006ea050
00637BDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637BDF  6A 00                     PUSH 0x0
00637BE1  51                        PUSH ECX
00637BE2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637BE8  E8 B3 2E 0B 00            CALL 0x006eaaa0
LAB_00637bed:
00637BED  5E                        POP ESI
00637BEE  8B E5                     MOV ESP,EBP
00637BF0  5D                        POP EBP
00637BF1  C3                        RET
