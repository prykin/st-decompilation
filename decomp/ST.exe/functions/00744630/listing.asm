FUN_00744630:
00744630  55                        PUSH EBP
00744631  8B EC                     MOV EBP,ESP
00744633  83 EC 08                  SUB ESP,0x8
00744636  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744639  25 FF 00 00 00            AND EAX,0xff
0074463E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00744641  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744644  33 D2                     XOR EDX,EDX
00744646  8A 91 81 A4 85 00         MOV DL,byte ptr [ECX + 0x85a481]
0074464C  23 55 10                  AND EDX,dword ptr [EBP + 0x10]
0074464F  85 D2                     TEST EDX,EDX
00744651  75 31                     JNZ 0x00744684
00744653  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00744657  74 15                     JZ 0x0074466e
00744659  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074465C  33 C9                     XOR ECX,ECX
0074465E  66 8B 0C 45 8A 12 7F 00   MOV CX,word ptr [EAX*0x2 + 0x7f128a]
00744666  23 4D 0C                  AND ECX,dword ptr [EBP + 0xc]
00744669  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0074466C  EB 07                     JMP 0x00744675
LAB_0074466e:
0074466E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00744675:
00744675  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00744679  75 09                     JNZ 0x00744684
0074467B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00744682  EB 07                     JMP 0x0074468b
LAB_00744684:
00744684  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0074468b:
0074468B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074468E  8B E5                     MOV ESP,EBP
00744690  5D                        POP EBP
00744691  C3                        RET
