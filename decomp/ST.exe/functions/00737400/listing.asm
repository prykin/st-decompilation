FUN_00737400:
00737400  55                        PUSH EBP
00737401  8B EC                     MOV EBP,ESP
00737403  51                        PUSH ECX
00737404  53                        PUSH EBX
00737405  56                        PUSH ESI
00737406  57                        PUSH EDI
LAB_00737407:
00737407  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073740B  74 27                     JZ 0x00737434
0073740D  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
00737411  74 21                     JZ 0x00737434
00737413  68 A4 02 7A 00            PUSH 0x7a02a4
00737418  6A 00                     PUSH 0x0
0073741A  68 A1 00 00 00            PUSH 0xa1
0073741F  68 98 02 7A 00            PUSH 0x7a0298
00737424  6A 02                     PUSH 0x2
00737426  E8 75 9B FF FF            CALL 0x00730fa0
0073742B  83 C4 14                  ADD ESP,0x14
0073742E  83 F8 01                  CMP EAX,0x1
00737431  75 01                     JNZ 0x00737434
00737433  CC                        INT3
LAB_00737434:
00737434  33 C0                     XOR EAX,EAX
00737436  85 C0                     TEST EAX,EAX
00737438  75 CD                     JNZ 0x00737407
0073743A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073743D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00737440  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00737444  74 49                     JZ 0x0073748f
00737446  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737449  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073744C  25 00 10 00 00            AND EAX,0x1000
00737451  85 C0                     TEST EAX,EAX
00737453  74 38                     JZ 0x0073748d
00737455  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00737458  51                        PUSH ECX
00737459  E8 62 C9 FF FF            CALL 0x00733dc0
0073745E  83 C4 04                  ADD ESP,0x4
00737461  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737464  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00737467  80 E4 EE                  AND AH,0xee
0073746A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073746D  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00737470  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737473  C7 42 18 00 00 00 00      MOV dword ptr [EDX + 0x18],0x0
0073747A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073747D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00737483  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00737486  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
LAB_0073748d:
0073748D  EB 1B                     JMP 0x007374aa
LAB_0073748f:
0073748F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737492  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00737495  25 00 10 00 00            AND EAX,0x1000
0073749A  85 C0                     TEST EAX,EAX
0073749C  74 0C                     JZ 0x007374aa
0073749E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007374A1  51                        PUSH ECX
007374A2  E8 19 C9 FF FF            CALL 0x00733dc0
007374A7  83 C4 04                  ADD ESP,0x4
LAB_007374aa:
007374AA  5F                        POP EDI
007374AB  5E                        POP ESI
007374AC  5B                        POP EBX
007374AD  8B E5                     MOV ESP,EBP
007374AF  5D                        POP EBP
007374B0  C3                        RET
