FUN_00730610:
00730610  55                        PUSH EBP
00730611  8B EC                     MOV EBP,ESP
00730613  83 EC 0C                  SUB ESP,0xc
00730616  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730619  83 C0 01                  ADD EAX,0x1
0073061C  3D 00 01 00 00            CMP EAX,0x100
00730621  77 17                     JA 0x0073063a
00730623  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730626  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073062C  33 C0                     XOR EAX,EAX
0073062E  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00730632  23 45 0C                  AND EAX,dword ptr [EBP + 0xc]
00730635  E9 89 00 00 00            JMP 0x007306c3
LAB_0073063a:
0073063A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073063D  C1 F9 08                  SAR ECX,0x8
00730640  81 E1 FF 00 00 00         AND ECX,0xff
00730646  81 E1 FF 00 00 00         AND ECX,0xff
0073064C  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
00730652  33 C0                     XOR EAX,EAX
00730654  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00730658  25 00 80 00 00            AND EAX,0x8000
0073065D  85 C0                     TEST EAX,EAX
0073065F  74 22                     JZ 0x00730683
00730661  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730664  C1 F9 08                  SAR ECX,0x8
00730667  81 E1 FF 00 00 00         AND ECX,0xff
0073066D  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
00730670  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
00730673  88 55 F5                  MOV byte ptr [EBP + -0xb],DL
00730676  C6 45 F6 00               MOV byte ptr [EBP + -0xa],0x0
0073067A  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
00730681  EB 11                     JMP 0x00730694
LAB_00730683:
00730683  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00730686  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00730689  C6 45 F5 00               MOV byte ptr [EBP + -0xb],0x0
0073068D  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00730694:
00730694  6A 01                     PUSH 0x1
00730696  6A 00                     PUSH 0x0
00730698  6A 00                     PUSH 0x0
0073069A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0073069D  51                        PUSH ECX
0073069E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007306A1  52                        PUSH EDX
007306A2  8D 45 F4                  LEA EAX,[EBP + -0xc]
007306A5  50                        PUSH EAX
007306A6  6A 01                     PUSH 0x1
007306A8  E8 A3 C1 00 00            CALL 0x0073c850
007306AD  83 C4 1C                  ADD ESP,0x1c
007306B0  85 C0                     TEST EAX,EAX
007306B2  75 04                     JNZ 0x007306b8
007306B4  33 C0                     XOR EAX,EAX
007306B6  EB 0B                     JMP 0x007306c3
LAB_007306b8:
007306B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007306BB  25 FF FF 00 00            AND EAX,0xffff
007306C0  23 45 0C                  AND EAX,dword ptr [EBP + 0xc]
LAB_007306c3:
007306C3  8B E5                     MOV ESP,EBP
007306C5  5D                        POP EBP
007306C6  C3                        RET
