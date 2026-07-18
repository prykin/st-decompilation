FUN_00581ac0:
00581AC0  55                        PUSH EBP
00581AC1  8B EC                     MOV EBP,ESP
00581AC3  8B 81 0F 02 00 00         MOV EAX,dword ptr [ECX + 0x20f]
00581AC9  8B 91 FD 01 00 00         MOV EDX,dword ptr [ECX + 0x1fd]
00581ACF  3B C2                     CMP EAX,EDX
00581AD1  7C 2B                     JL 0x00581afe
00581AD3  68 18 B3 7C 00            PUSH 0x7cb318
00581AD8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00581ADD  6A 00                     PUSH 0x0
00581ADF  6A 00                     PUSH 0x0
00581AE1  68 DA 00 00 00            PUSH 0xda
00581AE6  68 F0 B2 7C 00            PUSH 0x7cb2f0
00581AEB  E8 E0 B9 12 00            CALL 0x006ad4d0
00581AF0  83 C4 18                  ADD ESP,0x18
00581AF3  85 C0                     TEST EAX,EAX
00581AF5  74 01                     JZ 0x00581af8
00581AF7  CC                        INT3
LAB_00581af8:
00581AF8  33 C0                     XOR EAX,EAX
00581AFA  5D                        POP EBP
00581AFB  C2 0C 00                  RET 0xc
LAB_00581afe:
00581AFE  8B 81 01 02 00 00         MOV EAX,dword ptr [ECX + 0x201]
00581B04  33 D2                     XOR EDX,EDX
00581B06  66 8B 91 05 02 00 00      MOV DX,word ptr [ECX + 0x205]
00581B0D  68 FF FF 00 00            PUSH 0xffff
00581B12  52                        PUSH EDX
00581B13  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00581B16  50                        PUSH EAX
00581B17  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00581B1A  52                        PUSH EDX
00581B1B  8B 91 F9 01 00 00         MOV EDX,dword ptr [ECX + 0x1f9]
00581B21  50                        PUSH EAX
00581B22  8B 81 F5 01 00 00         MOV EAX,dword ptr [ECX + 0x1f5]
00581B28  52                        PUSH EDX
00581B29  8B 91 F1 01 00 00         MOV EDX,dword ptr [ECX + 0x1f1]
00581B2F  50                        PUSH EAX
00581B30  8B 81 ED 01 00 00         MOV EAX,dword ptr [ECX + 0x1ed]
00581B36  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00581B39  52                        PUSH EDX
00581B3A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00581B3D  50                        PUSH EAX
00581B3E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00581B41  51                        PUSH ECX
00581B42  52                        PUSH EDX
00581B43  50                        PUSH EAX
00581B44  E8 9A 07 E8 FF            CALL 0x004022e3
00581B49  83 C4 30                  ADD ESP,0x30
00581B4C  5D                        POP EBP
00581B4D  C2 0C 00                  RET 0xc
