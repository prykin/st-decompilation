FUN_0055b9f0:
0055B9F0  55                        PUSH EBP
0055B9F1  8B EC                     MOV EBP,ESP
0055B9F3  53                        PUSH EBX
0055B9F4  56                        PUSH ESI
0055B9F5  57                        PUSH EDI
0055B9F6  8B B9 10 01 00 00         MOV EDI,dword ptr [ECX + 0x110]
0055B9FC  33 F6                     XOR ESI,ESI
0055B9FE  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0055BA01  85 C0                     TEST EAX,EAX
0055BA03  7E 57                     JLE 0x0055ba5c
0055BA05  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055BA08  3B F0                     CMP ESI,EAX
LAB_0055ba0a:
0055BA0A  73 0D                     JNC 0x0055ba19
0055BA0C  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0055BA0F  8B 5F 1C                  MOV EBX,dword ptr [EDI + 0x1c]
0055BA12  0F AF CE                  IMUL ECX,ESI
0055BA15  03 CB                     ADD ECX,EBX
0055BA17  EB 02                     JMP 0x0055ba1b
LAB_0055ba19:
0055BA19  33 C9                     XOR ECX,ECX
LAB_0055ba1b:
0055BA1B  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
0055BA1E  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
0055BA21  75 34                     JNZ 0x0055ba57
0055BA23  8A 19                     MOV BL,byte ptr [ECX]
0055BA25  3A 1A                     CMP BL,byte ptr [EDX]
0055BA27  75 2E                     JNZ 0x0055ba57
0055BA29  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0055BA2C  3A 5A 01                  CMP BL,byte ptr [EDX + 0x1]
0055BA2F  75 26                     JNZ 0x0055ba57
0055BA31  66 8B 59 02               MOV BX,word ptr [ECX + 0x2]
0055BA35  66 3B 5A 02               CMP BX,word ptr [EDX + 0x2]
0055BA39  75 1C                     JNZ 0x0055ba57
0055BA3B  66 8B 59 04               MOV BX,word ptr [ECX + 0x4]
0055BA3F  66 3B 5A 04               CMP BX,word ptr [EDX + 0x4]
0055BA43  75 12                     JNZ 0x0055ba57
0055BA45  8A 59 06                  MOV BL,byte ptr [ECX + 0x6]
0055BA48  3A 5A 06                  CMP BL,byte ptr [EDX + 0x6]
0055BA4B  75 0A                     JNZ 0x0055ba57
0055BA4D  8A 49 07                  MOV CL,byte ptr [ECX + 0x7]
0055BA50  8A 5A 07                  MOV BL,byte ptr [EDX + 0x7]
0055BA53  3A CB                     CMP CL,BL
0055BA55  74 0F                     JZ 0x0055ba66
LAB_0055ba57:
0055BA57  46                        INC ESI
0055BA58  3B F0                     CMP ESI,EAX
0055BA5A  7C AE                     JL 0x0055ba0a
LAB_0055ba5c:
0055BA5C  5F                        POP EDI
0055BA5D  5E                        POP ESI
0055BA5E  83 C8 FF                  OR EAX,0xffffffff
0055BA61  5B                        POP EBX
0055BA62  5D                        POP EBP
0055BA63  C2 04 00                  RET 0x4
LAB_0055ba66:
0055BA66  8B C6                     MOV EAX,ESI
0055BA68  5F                        POP EDI
0055BA69  5E                        POP ESI
0055BA6A  5B                        POP EBX
0055BA6B  5D                        POP EBP
0055BA6C  C2 04 00                  RET 0x4
