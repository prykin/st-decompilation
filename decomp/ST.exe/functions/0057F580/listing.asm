FUN_0057f580:
0057F580  55                        PUSH EBP
0057F581  8B EC                     MOV EBP,ESP
0057F583  83 EC 08                  SUB ESP,0x8
0057F586  53                        PUSH EBX
0057F587  56                        PUSH ESI
0057F588  8B D9                     MOV EBX,ECX
0057F58A  6A 40                     PUSH 0x40
0057F58C  E8 9F EF 1A 00            CALL 0x0072e530
0057F591  83 C4 04                  ADD ESP,0x4
0057F594  85 C0                     TEST EAX,EAX
0057F596  74 10                     JZ 0x0057f5a8
0057F598  8B C8                     MOV ECX,EAX
0057F59A  E8 77 1D E8 FF            CALL 0x00401316
0057F59F  8B F0                     MOV ESI,EAX
0057F5A1  85 F6                     TEST ESI,ESI
0057F5A3  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0057F5A6  75 08                     JNZ 0x0057f5b0
LAB_0057f5a8:
0057F5A8  5E                        POP ESI
0057F5A9  33 C0                     XOR EAX,EAX
0057F5AB  5B                        POP EBX
0057F5AC  8B E5                     MOV ESP,EBP
0057F5AE  5D                        POP EBP
0057F5AF  C3                        RET
LAB_0057f5b0:
0057F5B0  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057F5B6  8D 0C 85 04 00 00 00      LEA ECX,[EAX*0x4 + 0x4]
0057F5BD  51                        PUSH ECX
0057F5BE  E8 6D EF 1A 00            CALL 0x0072e530
0057F5C3  83 C4 04                  ADD ESP,0x4
0057F5C6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057F5C9  85 C0                     TEST EAX,EAX
0057F5CB  0F 84 97 00 00 00         JZ 0x0057f668
0057F5D1  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
0057F5D7  85 C9                     TEST ECX,ECX
0057F5D9  74 21                     JZ 0x0057f5fc
0057F5DB  8B B3 6D 02 00 00         MOV ESI,dword ptr [EBX + 0x26d]
0057F5E1  57                        PUSH EDI
0057F5E2  8B F8                     MOV EDI,EAX
0057F5E4  F3 A5                     MOVSD.REP ES:EDI,ESI
0057F5E6  8B 93 6D 02 00 00         MOV EDX,dword ptr [EBX + 0x26d]
0057F5EC  52                        PUSH EDX
0057F5ED  E8 BE EC 1A 00            CALL 0x0072e2b0
0057F5F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057F5F5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0057F5F8  83 C4 04                  ADD ESP,0x4
0057F5FB  5F                        POP EDI
LAB_0057f5fc:
0057F5FC  89 83 6D 02 00 00         MOV dword ptr [EBX + 0x26d],EAX
0057F602  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
0057F608  6A 11                     PUSH 0x11
0057F60A  68 8C 00 00 00            PUSH 0x8c
0057F60F  89 34 88                  MOV dword ptr [EAX + ECX*0x4],ESI
0057F612  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
0057F618  40                        INC EAX
0057F619  68 B4 00 00 00            PUSH 0xb4
0057F61E  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
0057F624  8B 15 CC 73 80 00         MOV EDX,dword ptr [0x008073cc]
0057F62A  53                        PUSH EBX
0057F62B  6A 45                     PUSH 0x45
0057F62D  6A 5A                     PUSH 0x5a
0057F62F  52                        PUSH EDX
0057F630  8B CE                     MOV ECX,ESI
0057F632  E8 44 5D E8 FF            CALL 0x0040537b
0057F637  85 C0                     TEST EAX,EAX
0057F639  74 3E                     JZ 0x0057f679
0057F63B  68 64 B2 7C 00            PUSH 0x7cb264
0057F640  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057F645  6A 00                     PUSH 0x0
0057F647  6A 00                     PUSH 0x0
0057F649  68 03 02 00 00            PUSH 0x203
0057F64E  68 9C B1 7C 00            PUSH 0x7cb19c
0057F653  E8 78 DE 12 00            CALL 0x006ad4d0
0057F658  83 C4 18                  ADD ESP,0x18
0057F65B  85 C0                     TEST EAX,EAX
0057F65D  74 01                     JZ 0x0057f660
0057F65F  CC                        INT3
LAB_0057f660:
0057F660  5E                        POP ESI
0057F661  33 C0                     XOR EAX,EAX
0057F663  5B                        POP EBX
0057F664  8B E5                     MOV ESP,EBP
0057F666  5D                        POP EBP
0057F667  C3                        RET
LAB_0057f668:
0057F668  56                        PUSH ESI
0057F669  E8 42 EC 1A 00            CALL 0x0072e2b0
0057F66E  83 C4 04                  ADD ESP,0x4
0057F671  33 C0                     XOR EAX,EAX
0057F673  5E                        POP ESI
0057F674  5B                        POP EBX
0057F675  8B E5                     MOV ESP,EBP
0057F677  5D                        POP EBP
0057F678  C3                        RET
LAB_0057f679:
0057F679  8B C6                     MOV EAX,ESI
0057F67B  5E                        POP ESI
0057F67C  5B                        POP EBX
0057F67D  8B E5                     MOV ESP,EBP
0057F67F  5D                        POP EBP
0057F680  C3                        RET
