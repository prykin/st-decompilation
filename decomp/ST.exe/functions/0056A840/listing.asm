FUN_0056a840:
0056A840  55                        PUSH EBP
0056A841  8B EC                     MOV EBP,ESP
0056A843  83 EC 08                  SUB ESP,0x8
0056A846  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056A849  53                        PUSH EBX
0056A84A  33 DB                     XOR EBX,EBX
0056A84C  25 FF 00 00 00            AND EAX,0xff
0056A851  56                        PUSH ESI
0056A852  57                        PUSH EDI
0056A853  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0056A856  8D B4 C1 2F 14 00 00      LEA ESI,[ECX + EAX*0x8 + 0x142f]
0056A85D  8D BC 08 2F 14 00 00      LEA EDI,[EAX + ECX*0x1 + 0x142f]
0056A864  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
LAB_0056a86b:
0056A86B  C6 06 00                  MOV byte ptr [ESI],0x0
0056A86E  C6 07 00                  MOV byte ptr [EDI],0x0
0056A871  A1 88 2A 80 00            MOV EAX,[0x00802a88]
0056A876  85 C0                     TEST EAX,EAX
0056A878  74 18                     JZ 0x0056a892
0056A87A  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
0056A87D  3A 91 2D 11 00 00         CMP DL,byte ptr [ECX + 0x112d]
0056A883  75 0D                     JNZ 0x0056a892
0056A885  53                        PUSH EBX
0056A886  6A 00                     PUSH 0x0
0056A888  8B C8                     MOV ECX,EAX
0056A88A  E8 86 B6 E9 FF            CALL 0x00405f15
0056A88F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0056a892:
0056A892  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056A895  43                        INC EBX
0056A896  46                        INC ESI
0056A897  83 C7 08                  ADD EDI,0x8
0056A89A  48                        DEC EAX
0056A89B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056A89E  75 CB                     JNZ 0x0056a86b
0056A8A0  5F                        POP EDI
0056A8A1  5E                        POP ESI
0056A8A2  5B                        POP EBX
0056A8A3  8B E5                     MOV ESP,EBP
0056A8A5  5D                        POP EBP
0056A8A6  C2 04 00                  RET 0x4
