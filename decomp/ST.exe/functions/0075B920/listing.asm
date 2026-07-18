FUN_0075b920:
0075B920  55                        PUSH EBP
0075B921  8B EC                     MOV EBP,ESP
0075B923  83 EC 0C                  SUB ESP,0xc
0075B926  56                        PUSH ESI
0075B927  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075B92A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0075B931  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075B937  8B 86 AA 01 00 00         MOV EAX,dword ptr [ESI + 0x1aa]
0075B93D  85 C9                     TEST ECX,ECX
0075B93F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075B942  0F 8E C8 00 00 00         JLE 0x0075ba10
0075B948  83 C0 14                  ADD EAX,0x14
0075B94B  53                        PUSH EBX
0075B94C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075B94F  8D 86 3A 01 00 00         LEA EAX,[ESI + 0x13a]
0075B955  57                        PUSH EDI
0075B956  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0075b959:
0075B959  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075B95C  8B 01                     MOV EAX,dword ptr [ECX]
0075B95E  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
0075B961  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0075B964  85 FF                     TEST EDI,EDI
0075B966  7C 10                     JL 0x0075b978
0075B968  83 FF 04                  CMP EDI,0x4
0075B96B  7D 0B                     JGE 0x0075b978
0075B96D  8B 84 BE AC 00 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0xac]
0075B974  85 C0                     TEST EAX,EAX
0075B976  75 15                     JNZ 0x0075b98d
LAB_0075b978:
0075B978  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075B97E  6A 64                     PUSH 0x64
0075B980  68 F8 2D 7F 00            PUSH 0x7f2df8
0075B985  52                        PUSH EDX
0075B986  6A 31                     PUSH 0x31
0075B988  E8 B3 A4 F4 FF            CALL 0x006a5e40
LAB_0075b98d:
0075B98D  85 DB                     TEST EBX,EBX
0075B98F  7C 10                     JL 0x0075b9a1
0075B991  83 FB 04                  CMP EBX,0x4
0075B994  7D 0B                     JGE 0x0075b9a1
0075B996  8B 84 9E BC 00 00 00      MOV EAX,dword ptr [ESI + EBX*0x4 + 0xbc]
0075B99D  85 C0                     TEST EAX,EAX
0075B99F  75 14                     JNZ 0x0075b9b5
LAB_0075b9a1:
0075B9A1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075B9A6  6A 67                     PUSH 0x67
0075B9A8  68 F8 2D 7F 00            PUSH 0x7f2df8
0075B9AD  50                        PUSH EAX
0075B9AE  6A 31                     PUSH 0x31
0075B9B0  E8 8B A4 F4 FF            CALL 0x006a5e40
LAB_0075b9b5:
0075B9B5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075B9B8  8B 84 BE AC 00 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0xac]
0075B9BF  8D 54 B9 28               LEA EDX,[ECX + EDI*0x4 + 0x28]
0075B9C3  52                        PUSH EDX
0075B9C4  50                        PUSH EAX
0075B9C5  56                        PUSH ESI
0075B9C6  E8 75 FB FF FF            CALL 0x0075b540
0075B9CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075B9CE  8B 84 9E BC 00 00 00      MOV EAX,dword ptr [ESI + EBX*0x4 + 0xbc]
0075B9D5  8D 54 99 38               LEA EDX,[ECX + EBX*0x4 + 0x38]
0075B9D9  52                        PUSH EDX
0075B9DA  50                        PUSH EAX
0075B9DB  56                        PUSH ESI
0075B9DC  E8 5F FB FF FF            CALL 0x0075b540
0075B9E1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075B9E4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075B9E7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075B9EA  40                        INC EAX
0075B9EB  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0075B9F1  83 C1 04                  ADD ECX,0x4
0075B9F4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075B9F7  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075B9FD  83 C7 04                  ADD EDI,0x4
0075BA00  3B C1                     CMP EAX,ECX
0075BA02  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075BA05  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0075BA08  0F 8C 4B FF FF FF         JL 0x0075b959
0075BA0E  5F                        POP EDI
0075BA0F  5B                        POP EBX
LAB_0075ba10:
0075BA10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075BA13  33 C9                     XOR ECX,ECX
0075BA15  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0075BA18  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0075BA1B  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0075BA1E  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0075BA24  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
0075BA27  5E                        POP ESI
0075BA28  8B E5                     MOV ESP,EBP
0075BA2A  5D                        POP EBP
0075BA2B  C2 04 00                  RET 0x4
