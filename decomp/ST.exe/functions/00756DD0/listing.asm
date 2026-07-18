FUN_00756dd0:
00756DD0  55                        PUSH EBP
00756DD1  8B EC                     MOV EBP,ESP
00756DD3  56                        PUSH ESI
00756DD4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756DD7  57                        PUSH EDI
00756DD8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756DDB  8B BE 92 01 00 00         MOV EDI,dword ptr [ESI + 0x192]
00756DE1  3D CF 00 00 00            CMP EAX,0xcf
00756DE6  74 17                     JZ 0x00756dff
00756DE8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756DED  68 09 02 00 00            PUSH 0x209
00756DF2  68 68 2D 7F 00            PUSH 0x7f2d68
00756DF7  50                        PUSH EAX
00756DF8  6A 12                     PUSH 0x12
00756DFA  E8 41 F0 F4 FF            CALL 0x006a5e40
LAB_00756dff:
00756DFF  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00756E02  85 C0                     TEST EAX,EAX
00756E04  74 2B                     JZ 0x00756e31
00756E06  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00756E09  85 C0                     TEST EAX,EAX
00756E0B  74 24                     JZ 0x00756e31
00756E0D  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
00756E13  85 C0                     TEST EAX,EAX
00756E15  74 1A                     JZ 0x00756e31
00756E17  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00756E1A  56                        PUSH ESI
00756E1B  89 86 BA 01 00 00         MOV dword ptr [ESI + 0x1ba],EAX
00756E21  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00756E24  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
00756E2B  5F                        POP EDI
00756E2C  5E                        POP ESI
00756E2D  5D                        POP EBP
00756E2E  C2 04 00                  RET 0x4
LAB_00756e31:
00756E31  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00756E37  68 13 02 00 00            PUSH 0x213
00756E3C  68 68 2D 7F 00            PUSH 0x7f2d68
00756E41  51                        PUSH ECX
00756E42  6A 2D                     PUSH 0x2d
00756E44  E8 F7 EF F4 FF            CALL 0x006a5e40
00756E49  5F                        POP EDI
00756E4A  5E                        POP ESI
00756E4B  5D                        POP EBP
00756E4C  C2 04 00                  RET 0x4
