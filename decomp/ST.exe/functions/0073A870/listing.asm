FUN_0073a870:
0073A870  55                        PUSH EBP
0073A871  8B EC                     MOV EBP,ESP
0073A873  83 EC 0C                  SUB ESP,0xc
0073A876  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0073A87D  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0073a884:
0073A884  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073A887  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0073A88A  7F 62                     JG 0x0073a8ee
0073A88C  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073A890  74 5C                     JZ 0x0073a8ee
0073A892  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073A895  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
0073A898  99                        CDQ
0073A899  2B C2                     SUB EAX,EDX
0073A89B  D1 F8                     SAR EAX,0x1
0073A89D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073A8A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073A8A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073A8A6  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0073A8A9  50                        PUSH EAX
0073A8AA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073A8AD  8B 11                     MOV EDX,dword ptr [ECX]
0073A8AF  52                        PUSH EDX
0073A8B0  E8 6B 3D FF FF            CALL 0x0072e620
0073A8B5  83 C4 08                  ADD ESP,0x8
0073A8B8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073A8BB  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073A8BF  75 11                     JNZ 0x0073a8d2
0073A8C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073A8C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073A8C7  8D 54 C1 04               LEA EDX,[ECX + EAX*0x8 + 0x4]
0073A8CB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073A8CE  89 10                     MOV dword ptr [EAX],EDX
0073A8D0  EB 1A                     JMP 0x0073a8ec
LAB_0073a8d2:
0073A8D2  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073A8D6  7D 0B                     JGE 0x0073a8e3
0073A8D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073A8DB  83 E9 01                  SUB ECX,0x1
0073A8DE  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0073A8E1  EB 09                     JMP 0x0073a8ec
LAB_0073a8e3:
0073A8E3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073A8E6  83 C2 01                  ADD EDX,0x1
0073A8E9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0073a8ec:
0073A8EC  EB 96                     JMP 0x0073a884
LAB_0073a8ee:
0073A8EE  8B E5                     MOV ESP,EBP
0073A8F0  5D                        POP EBP
0073A8F1  C3                        RET
