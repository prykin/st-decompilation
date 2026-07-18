FUN_0070c690:
0070C690  55                        PUSH EBP
0070C691  8B EC                     MOV EBP,ESP
0070C693  83 EC 60                  SUB ESP,0x60
0070C696  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070C699  33 D2                     XOR EDX,EDX
0070C69B  8B C1                     MOV EAX,ECX
0070C69D  53                        PUSH EBX
0070C69E  C1 E8 10                  SHR EAX,0x10
0070C6A1  8A D4                     MOV DL,AH
0070C6A3  25 FF 00 00 00            AND EAX,0xff
0070C6A8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070C6AB  33 C0                     XOR EAX,EAX
0070C6AD  8A C5                     MOV AL,CH
0070C6AF  56                        PUSH ESI
0070C6B0  25 FF 00 00 00            AND EAX,0xff
0070C6B5  57                        PUSH EDI
0070C6B6  81 E2 FF 00 00 00         AND EDX,0xff
0070C6BC  81 E1 FF 00 00 00         AND ECX,0xff
0070C6C2  33 FF                     XOR EDI,EDI
0070C6C4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0070C6C7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0070C6CA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0070C6CD  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0070C6D3  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0070C6D6  8D 55 A0                  LEA EDX,[EBP + -0x60]
0070C6D9  57                        PUSH EDI
0070C6DA  50                        PUSH EAX
0070C6DB  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0070C6DE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070C6E1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070C6E4  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0070C6E7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C6ED  E8 FE 10 02 00            CALL 0x0072d7f0
0070C6F2  83 C4 08                  ADD ESP,0x8
0070C6F5  3B C7                     CMP EAX,EDI
0070C6F7  0F 85 23 01 00 00         JNZ 0x0070c820
0070C6FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070C700  3B CF                     CMP ECX,EDI
0070C702  7E 16                     JLE 0x0070c71a
0070C704  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0070C707  3B C7                     CMP EAX,EDI
0070C709  7E 0F                     JLE 0x0070c71a
0070C70B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070C70E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C711  50                        PUSH EAX
0070C712  51                        PUSH ECX
0070C713  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070C716  51                        PUSH ECX
0070C717  52                        PUSH EDX
0070C718  EB 0D                     JMP 0x0070c727
LAB_0070c71a:
0070C71A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C71D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0070C720  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0070C723  50                        PUSH EAX
0070C724  51                        PUSH ECX
0070C725  57                        PUSH EDI
0070C726  57                        PUSH EDI
LAB_0070c727:
0070C727  56                        PUSH ESI
0070C728  E8 73 88 FA FF            CALL 0x006b4fa0
0070C72D  50                        PUSH EAX
0070C72E  56                        PUSH ESI
0070C72F  57                        PUSH EDI
0070C730  57                        PUSH EDI
0070C731  57                        PUSH EDI
0070C732  57                        PUSH EDI
0070C733  E8 B8 8E FA FF            CALL 0x006b55f0
0070C738  8B C8                     MOV ECX,EAX
0070C73A  3B CF                     CMP ECX,EDI
0070C73C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070C73F  75 1B                     JNZ 0x0070c75c
0070C741  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070C747  68 D8 04 00 00            PUSH 0x4d8
0070C74C  68 E0 FF 7E 00            PUSH 0x7effe0
0070C751  52                        PUSH EDX
0070C752  6A CC                     PUSH -0x34
0070C754  E8 E7 96 F9 FF            CALL 0x006a5e40
0070C759  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0070c75c:
0070C75C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070C75F  3B DF                     CMP EBX,EDI
0070C761  75 08                     JNZ 0x0070c76b
0070C763  BB 01 00 00 00            MOV EBX,0x1
0070C768  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0070c76b:
0070C76B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070C76E  85 FF                     TEST EDI,EDI
0070C770  75 08                     JNZ 0x0070c77a
0070C772  BF 01 00 00 00            MOV EDI,0x1
0070C777  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0070c77a:
0070C77A  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0070C77D  85 D2                     TEST EDX,EDX
0070C77F  75 08                     JNZ 0x0070c789
0070C781  BA 01 00 00 00            MOV EDX,0x1
0070C786  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0070c789:
0070C789  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0070C78C  85 F6                     TEST ESI,ESI
0070C78E  75 08                     JNZ 0x0070c798
0070C790  BE 01 00 00 00            MOV ESI,0x1
0070C795  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_0070c798:
0070C798  83 FB 01                  CMP EBX,0x1
0070C79B  75 11                     JNZ 0x0070c7ae
0070C79D  3B FB                     CMP EDI,EBX
0070C79F  75 0D                     JNZ 0x0070c7ae
0070C7A1  3B D3                     CMP EDX,EBX
0070C7A3  75 09                     JNZ 0x0070c7ae
0070C7A5  3B F3                     CMP ESI,EBX
0070C7A7  75 05                     JNZ 0x0070c7ae
0070C7A9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070C7AC  EB 35                     JMP 0x0070c7e3
LAB_0070c7ae:
0070C7AE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0070C7B1  0F AF C2                  IMUL EAX,EDX
0070C7B4  33 D2                     XOR EDX,EDX
0070C7B6  F7 F6                     DIV ESI
0070C7B8  33 D2                     XOR EDX,EDX
0070C7BA  50                        PUSH EAX
0070C7BB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070C7BE  0F AF C3                  IMUL EAX,EBX
0070C7C1  F7 F7                     DIV EDI
0070C7C3  50                        PUSH EAX
0070C7C4  6A 00                     PUSH 0x0
0070C7C6  51                        PUSH ECX
0070C7C7  6A 00                     PUSH 0x0
0070C7C9  6A 00                     PUSH 0x0
0070C7CB  E8 E0 54 04 00            CALL 0x00751cb0
0070C7D0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070C7D3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070C7D6  85 C0                     TEST EAX,EAX
0070C7D8  74 09                     JZ 0x0070c7e3
0070C7DA  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070C7DD  50                        PUSH EAX
0070C7DE  E8 7D E8 F9 FF            CALL 0x006ab060
LAB_0070c7e3:
0070C7E3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070C7E6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070C7E9  51                        PUSH ECX
0070C7EA  52                        PUSH EDX
0070C7EB  E8 B0 87 FA FF            CALL 0x006b4fa0
0070C7F0  50                        PUSH EAX
0070C7F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C7F4  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0070C7F7  50                        PUSH EAX
0070C7F8  51                        PUSH ECX
0070C7F9  E8 22 83 FA FF            CALL 0x006b4b20
0070C7FE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C801  85 C0                     TEST EAX,EAX
0070C803  74 09                     JZ 0x0070c80e
0070C805  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070C808  52                        PUSH EDX
0070C809  E8 52 E8 F9 FF            CALL 0x006ab060
LAB_0070c80e:
0070C80E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0070C811  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070C816  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070C819  5F                        POP EDI
0070C81A  5E                        POP ESI
0070C81B  5B                        POP EBX
0070C81C  8B E5                     MOV ESP,EBP
0070C81E  5D                        POP EBP
0070C81F  C3                        RET
LAB_0070c820:
0070C820  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070C823  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0070C826  3B C7                     CMP EAX,EDI
0070C828  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C82E  74 0E                     JZ 0x0070c83e
0070C830  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
0070C833  74 09                     JZ 0x0070c83e
0070C835  8D 55 F8                  LEA EDX,[EBP + -0x8]
0070C838  52                        PUSH EDX
0070C839  E8 22 E8 F9 FF            CALL 0x006ab060
LAB_0070c83e:
0070C83E  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0070C841  74 09                     JZ 0x0070c84c
0070C843  8D 45 FC                  LEA EAX,[EBP + -0x4]
0070C846  50                        PUSH EAX
0070C847  E8 14 E8 F9 FF            CALL 0x006ab060
LAB_0070c84c:
0070C84C  5F                        POP EDI
0070C84D  5E                        POP ESI
0070C84E  33 C0                     XOR EAX,EAX
0070C850  5B                        POP EBX
0070C851  8B E5                     MOV ESP,EBP
0070C853  5D                        POP EBP
0070C854  C3                        RET
