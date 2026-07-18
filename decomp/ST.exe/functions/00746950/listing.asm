findenv:
00746950  55                        PUSH EBP
00746951  8B EC                     MOV EBP,ESP
00746953  51                        PUSH ECX
00746954  A1 70 71 85 00            MOV EAX,[0x00857170]
00746959  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074695C  EB 09                     JMP 0x00746967
LAB_0074695e:
0074695E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00746961  83 C1 04                  ADD ECX,0x4
00746964  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00746967:
00746967  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074696A  83 3A 00                  CMP dword ptr [EDX],0x0
0074696D  74 4B                     JZ 0x007469ba
0074696F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00746972  50                        PUSH EAX
00746973  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00746976  8B 11                     MOV EDX,dword ptr [ECX]
00746978  52                        PUSH EDX
00746979  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074697C  50                        PUSH EAX
0074697D  E8 9E F7 FF FF            CALL 0x00746120
00746982  83 C4 0C                  ADD ESP,0xc
00746985  85 C0                     TEST EAX,EAX
00746987  75 2F                     JNZ 0x007469b8
00746989  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074698C  8B 11                     MOV EDX,dword ptr [ECX]
0074698E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00746991  0F BE 0C 02               MOVSX ECX,byte ptr [EDX + EAX*0x1]
00746995  83 F9 3D                  CMP ECX,0x3d
00746998  74 10                     JZ 0x007469aa
0074699A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074699D  8B 02                     MOV EAX,dword ptr [EDX]
0074699F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007469A2  0F BE 14 08               MOVSX EDX,byte ptr [EAX + ECX*0x1]
007469A6  85 D2                     TEST EDX,EDX
007469A8  75 0E                     JNZ 0x007469b8
LAB_007469aa:
007469AA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007469AD  2B 05 70 71 85 00         SUB EAX,dword ptr [0x00857170]
007469B3  C1 F8 02                  SAR EAX,0x2
007469B6  EB 10                     JMP 0x007469c8
LAB_007469b8:
007469B8  EB A4                     JMP 0x0074695e
LAB_007469ba:
007469BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007469BD  2B 05 70 71 85 00         SUB EAX,dword ptr [0x00857170]
007469C3  C1 F8 02                  SAR EAX,0x2
007469C6  F7 D8                     NEG EAX
LAB_007469c8:
007469C8  8B E5                     MOV ESP,EBP
007469CA  5D                        POP EBP
007469CB  C3                        RET
