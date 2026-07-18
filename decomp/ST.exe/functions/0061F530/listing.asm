FUN_0061f530:
0061F530  53                        PUSH EBX
0061F531  8B D9                     MOV EBX,ECX
0061F533  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0061F539  85 C0                     TEST EAX,EAX
0061F53B  74 5E                     JZ 0x0061f59b
0061F53D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061F540  57                        PUSH EDI
0061F541  33 FF                     XOR EDI,EDI
0061F543  85 C9                     TEST ECX,ECX
0061F545  7E 3D                     JLE 0x0061f584
0061F547  56                        PUSH ESI
0061F548  3B F9                     CMP EDI,ECX
LAB_0061f54a:
0061F54A  73 0D                     JNC 0x0061f559
0061F54C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0061F54F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0061F552  0F AF F7                  IMUL ESI,EDI
0061F555  03 F1                     ADD ESI,ECX
0061F557  EB 02                     JMP 0x0061f55b
LAB_0061f559:
0061F559  33 F6                     XOR ESI,ESI
LAB_0061f55b:
0061F55B  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
0061F55E  85 C0                     TEST EAX,EAX
0061F560  7C 13                     JL 0x0061f575
0061F562  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F568  50                        PUSH EAX
0061F569  E8 32 96 0C 00            CALL 0x006e8ba0
0061F56E  C7 46 26 FF FF FF FF      MOV dword ptr [ESI + 0x26],0xffffffff
LAB_0061f575:
0061F575  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0061F57B  47                        INC EDI
0061F57C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061F57F  3B F9                     CMP EDI,ECX
0061F581  7C C7                     JL 0x0061f54a
0061F583  5E                        POP ESI
LAB_0061f584:
0061F584  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
0061F58A  50                        PUSH EAX
0061F58B  E8 80 EB 08 00            CALL 0x006ae110
0061F590  C7 83 A3 00 00 00 00 00 00 00  MOV dword ptr [EBX + 0xa3],0x0
0061F59A  5F                        POP EDI
LAB_0061f59b:
0061F59B  5B                        POP EBX
0061F59C  C3                        RET
