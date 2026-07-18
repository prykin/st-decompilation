FUN_0074c6ea:
0074C6EA  55                        PUSH EBP
0074C6EB  8B EC                     MOV EBP,ESP
0074C6ED  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074C6F0  56                        PUSH ESI
0074C6F1  85 C0                     TEST EAX,EAX
0074C6F3  57                        PUSH EDI
0074C6F4  75 07                     JNZ 0x0074c6fd
0074C6F6  B8 03 40 00 80            MOV EAX,0x80004003
0074C6FB  EB 79                     JMP 0x0074c776
LAB_0074c6fd:
0074C6FD  83 20 00                  AND dword ptr [EAX],0x0
0074C700  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074C703  6A 10                     PUSH 0x10
0074C705  BF 10 12 7A 00            MOV EDI,0x7a1210
0074C70A  59                        POP ECX
0074C70B  33 D2                     XOR EDX,EDX
0074C70D  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074C70F  74 1F                     JZ 0x0074c730
0074C711  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074C714  6A 10                     PUSH 0x10
0074C716  59                        POP ECX
0074C717  BF 00 12 7A 00            MOV EDI,0x7a1200
0074C71C  33 D2                     XOR EDX,EDX
0074C71E  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074C720  74 0E                     JZ 0x0074c730
0074C722  50                        PUSH EAX
0074C723  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074C726  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074C729  E8 B1 B4 FF FF            CALL 0x00747bdf
0074C72E  EB 46                     JMP 0x0074c776
LAB_0074c730:
0074C730  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074C733  83 B8 A4 00 00 00 00      CMP dword ptr [EAX + 0xa4],0x0
0074C73A  8D B0 A4 00 00 00         LEA ESI,[EAX + 0xa4]
0074C740  75 27                     JNZ 0x0074c769
0074C742  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
0074C748  8B 89 8C 00 00 00         MOV ECX,dword ptr [ECX + 0x8c]
0074C74E  85 C9                     TEST ECX,ECX
0074C750  74 05                     JZ 0x0074c757
0074C752  83 C1 0C                  ADD ECX,0xc
0074C755  EB 02                     JMP 0x0074c759
LAB_0074c757:
0074C757  33 C9                     XOR ECX,ECX
LAB_0074c759:
0074C759  56                        PUSH ESI
0074C75A  51                        PUSH ECX
0074C75B  6A 00                     PUSH 0x0
0074C75D  FF 70 04                  PUSH dword ptr [EAX + 0x4]
0074C760  E8 46 A4 FF FF            CALL 0x00746bab
0074C765  85 C0                     TEST EAX,EAX
0074C767  7C 0D                     JL 0x0074c776
LAB_0074c769:
0074C769  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074C76C  8B 06                     MOV EAX,dword ptr [ESI]
0074C76E  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074C771  8B 08                     MOV ECX,dword ptr [EAX]
0074C773  50                        PUSH EAX
0074C774  FF 11                     CALL dword ptr [ECX]
LAB_0074c776:
0074C776  5F                        POP EDI
0074C777  5E                        POP ESI
0074C778  5D                        POP EBP
0074C779  C2 0C 00                  RET 0xc
