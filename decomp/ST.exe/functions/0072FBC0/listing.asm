___lc_lctostr:
0072FBC0  55                        PUSH EBP
0072FBC1  8B EC                     MOV EBP,ESP
0072FBC3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072FBC6  50                        PUSH EAX
0072FBC7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FBCA  51                        PUSH ECX
0072FBCB  E8 70 A6 00 00            CALL 0x0073a240
0072FBD0  83 C4 08                  ADD ESP,0x8
0072FBD3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072FBD6  0F BE 42 40               MOVSX EAX,byte ptr [EDX + 0x40]
0072FBDA  85 C0                     TEST EAX,EAX
0072FBDC  74 1A                     JZ 0x0072fbf8
0072FBDE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072FBE1  83 C1 40                  ADD ECX,0x40
0072FBE4  51                        PUSH ECX
0072FBE5  68 08 FF 79 00            PUSH 0x79ff08
0072FBEA  6A 02                     PUSH 0x2
0072FBEC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FBEF  52                        PUSH EDX
0072FBF0  E8 1B FE FF FF            CALL 0x0072fa10
0072FBF5  83 C4 10                  ADD ESP,0x10
LAB_0072fbf8:
0072FBF8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072FBFB  0F BE 88 80 00 00 00      MOVSX ECX,byte ptr [EAX + 0x80]
0072FC02  85 C9                     TEST ECX,ECX
0072FC04  74 1D                     JZ 0x0072fc23
0072FC06  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072FC09  81 C2 80 00 00 00         ADD EDX,0x80
0072FC0F  52                        PUSH EDX
0072FC10  68 B8 C8 7C 00            PUSH 0x7cc8b8
0072FC15  6A 02                     PUSH 0x2
0072FC17  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FC1A  50                        PUSH EAX
0072FC1B  E8 F0 FD FF FF            CALL 0x0072fa10
0072FC20  83 C4 10                  ADD ESP,0x10
LAB_0072fc23:
0072FC23  5D                        POP EBP
0072FC24  C3                        RET
