FUN_0071a8d0:
0071A8D0  55                        PUSH EBP
0071A8D1  8B EC                     MOV EBP,ESP
0071A8D3  83 EC 08                  SUB ESP,0x8
0071A8D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071A8D9  56                        PUSH ESI
0071A8DA  57                        PUSH EDI
0071A8DB  33 F6                     XOR ESI,ESI
0071A8DD  8B 38                     MOV EDI,dword ptr [EAX]
0071A8DF  3B FE                     CMP EDI,ESI
0071A8E1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071A8E4  0F 84 96 00 00 00         JZ 0x0071a980
0071A8EA  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0071A8ED  53                        PUSH EBX
0071A8EE  8D 5F 0C                  LEA EBX,[EDI + 0xc]
0071A8F1  3B C6                     CMP EAX,ESI
0071A8F3  74 74                     JZ 0x0071a969
0071A8F5  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0071A8F8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0071A8FB  3B C6                     CMP EAX,ESI
0071A8FD  7E 64                     JLE 0x0071a963
LAB_0071a8ff:
0071A8FF  8B 03                     MOV EAX,dword ptr [EBX]
0071A901  8B 0C 06                  MOV ECX,dword ptr [ESI + EAX*0x1]
0071A904  85 C9                     TEST ECX,ECX
0071A906  74 4A                     JZ 0x0071a952
0071A908  8B 11                     MOV EDX,dword ptr [ECX]
0071A90A  33 DB                     XOR EBX,EBX
0071A90C  85 D2                     TEST EDX,EDX
0071A90E  7E 34                     JLE 0x0071a944
0071A910  BF 05 00 00 00            MOV EDI,0x5
LAB_0071a915:
0071A915  8B 0C 06                  MOV ECX,dword ptr [ESI + EAX*0x1]
0071A918  83 3C 39 00               CMP dword ptr [ECX + EDI*0x1],0x0
0071A91C  74 0F                     JZ 0x0071a92d
0071A91E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A921  8B D1                     MOV EDX,ECX
0071A923  03 D7                     ADD EDX,EDI
0071A925  8B 08                     MOV ECX,dword ptr [EAX]
0071A927  52                        PUSH EDX
0071A928  E8 B3 77 FD FF            CALL 0x006f20e0
LAB_0071a92d:
0071A92D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A930  43                        INC EBX
0071A931  83 C7 05                  ADD EDI,0x5
0071A934  8D 41 0C                  LEA EAX,[ECX + 0xc]
0071A937  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0071A93A  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
0071A93D  3B 1A                     CMP EBX,dword ptr [EDX]
0071A93F  7C D4                     JL 0x0071a915
0071A941  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0071a944:
0071A944  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0071A947  8D 5F 0C                  LEA EBX,[EDI + 0xc]
0071A94A  03 C6                     ADD EAX,ESI
0071A94C  50                        PUSH EAX
0071A94D  E8 0E 07 F9 FF            CALL 0x006ab060
LAB_0071a952:
0071A952  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071A955  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0071A958  40                        INC EAX
0071A959  83 C6 04                  ADD ESI,0x4
0071A95C  3B C1                     CMP EAX,ECX
0071A95E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071A961  7C 9C                     JL 0x0071a8ff
LAB_0071a963:
0071A963  53                        PUSH EBX
0071A964  E8 F7 06 F9 FF            CALL 0x006ab060
LAB_0071a969:
0071A969  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
0071A96C  5B                        POP EBX
0071A96D  85 FF                     TEST EDI,EDI
0071A96F  74 06                     JZ 0x0071a977
0071A971  57                        PUSH EDI
0071A972  E8 F9 AB F9 FF            CALL 0x006b5570
LAB_0071a977:
0071A977  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071A97A  51                        PUSH ECX
0071A97B  E8 E0 06 F9 FF            CALL 0x006ab060
LAB_0071a980:
0071A980  5F                        POP EDI
0071A981  5E                        POP ESI
0071A982  8B E5                     MOV ESP,EBP
0071A984  5D                        POP EBP
0071A985  C3                        RET
