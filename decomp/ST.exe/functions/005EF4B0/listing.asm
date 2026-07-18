FUN_005ef4b0:
005EF4B0  55                        PUSH EBP
005EF4B1  8B EC                     MOV EBP,ESP
005EF4B3  51                        PUSH ECX
005EF4B4  56                        PUSH ESI
005EF4B5  8B F1                     MOV ESI,ECX
005EF4B7  57                        PUSH EDI
005EF4B8  33 FF                     XOR EDI,EDI
005EF4BA  80 BE 52 02 00 00 01      CMP byte ptr [ESI + 0x252],0x1
005EF4C1  76 35                     JBE 0x005ef4f8
005EF4C3  0F BF 86 58 02 00 00      MOVSX EAX,word ptr [ESI + 0x258]
005EF4CA  0F BF 8E 56 02 00 00      MOVSX ECX,word ptr [ESI + 0x256]
005EF4D1  0F BF 96 54 02 00 00      MOVSX EDX,word ptr [ESI + 0x254]
005EF4D8  53                        PUSH EBX
005EF4D9  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
005EF4DC  53                        PUSH EBX
005EF4DD  56                        PUSH ESI
005EF4DE  57                        PUSH EDI
005EF4DF  50                        PUSH EAX
005EF4E0  51                        PUSH ECX
005EF4E1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EF4E7  52                        PUSH EDX
005EF4E8  E8 D4 59 E1 FF            CALL 0x00404ec1
005EF4ED  85 C0                     TEST EAX,EAX
005EF4EF  5B                        POP EBX
005EF4F0  75 06                     JNZ 0x005ef4f8
005EF4F2  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005ef4f8:
005EF4F8  66 8B 86 42 02 00 00      MOV AX,word ptr [ESI + 0x242]
005EF4FF  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005EF505  66 69 C0 C9 00            IMUL AX,AX,0xc9
005EF50A  83 C0 64                  ADD EAX,0x64
005EF50D  0F BF C0                  MOVSX EAX,AX
005EF510  3B C1                     CMP EAX,ECX
005EF512  75 1E                     JNZ 0x005ef532
005EF514  66 8B 8E 44 02 00 00      MOV CX,word ptr [ESI + 0x244]
005EF51B  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005EF51F  66 69 C9 C9 00            IMUL CX,CX,0xc9
005EF524  83 C1 64                  ADD ECX,0x64
005EF527  0F BF D1                  MOVSX EDX,CX
005EF52A  3B 96 7B 02 00 00         CMP EDX,dword ptr [ESI + 0x27b]
005EF530  74 04                     JZ 0x005ef536
LAB_005ef532:
005EF532  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
LAB_005ef536:
005EF536  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005EF539  6A 1E                     PUSH 0x1e
005EF53B  51                        PUSH ECX
005EF53C  66 8B 8E 46 02 00 00      MOV CX,word ptr [ESI + 0x246]
005EF543  66 69 C9 C8 00            IMUL CX,CX,0xc8
005EF548  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EF54B  83 C1 64                  ADD ECX,0x64
005EF54E  52                        PUSH EDX
005EF54F  0F BF D1                  MOVSX EDX,CX
005EF552  66 8B 8E 44 02 00 00      MOV CX,word ptr [ESI + 0x244]
005EF559  52                        PUSH EDX
005EF55A  66 69 C9 C9 00            IMUL CX,CX,0xc9
005EF55F  83 C1 64                  ADD ECX,0x64
005EF562  0F BF D1                  MOVSX EDX,CX
005EF565  52                        PUSH EDX
005EF566  50                        PUSH EAX
005EF567  8B CE                     MOV ECX,ESI
005EF569  E8 58 4A E1 FF            CALL 0x00403fc6
005EF56E  85 C0                     TEST EAX,EAX
005EF570  B8 01 00 00 00            MOV EAX,0x1
005EF575  75 02                     JNZ 0x005ef579
005EF577  8B C7                     MOV EAX,EDI
LAB_005ef579:
005EF579  5F                        POP EDI
005EF57A  5E                        POP ESI
005EF57B  8B E5                     MOV ESP,EBP
005EF57D  5D                        POP EBP
005EF57E  C2 04 00                  RET 0x4
