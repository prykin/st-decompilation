FUN_0073c4e0:
0073C4E0  55                        PUSH EBP
0073C4E1  8B EC                     MOV EBP,ESP
0073C4E3  51                        PUSH ECX
LAB_0073c4e4:
0073C4E4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C4E7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C4EA  83 E9 01                  SUB ECX,0x1
0073C4ED  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0073C4F0  85 C0                     TEST EAX,EAX
0073C4F2  7E 32                     JLE 0x0073c526
0073C4F4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073C4F7  52                        PUSH EDX
0073C4F8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073C4FB  50                        PUSH EAX
0073C4FC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C4FF  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073C502  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073C505  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C508  50                        PUSH EAX
0073C509  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C50C  83 C1 01                  ADD ECX,0x1
0073C50F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0073C512  E8 09 FF FF FF            CALL 0x0073c420
0073C517  83 C4 0C                  ADD ESP,0xc
0073C51A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073C51D  83 3A FF                  CMP dword ptr [EDX],-0x1
0073C520  75 02                     JNZ 0x0073c524
0073C522  EB 02                     JMP 0x0073c526
LAB_0073c524:
0073C524  EB BE                     JMP 0x0073c4e4
LAB_0073c526:
0073C526  8B E5                     MOV ESP,EBP
0073C528  5D                        POP EBP
0073C529  C3                        RET
