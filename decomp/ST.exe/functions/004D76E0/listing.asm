FUN_004d76e0:
004D76E0  55                        PUSH EBP
004D76E1  8B EC                     MOV EBP,ESP
004D76E3  51                        PUSH ECX
004D76E4  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D76E8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004D76EB  53                        PUSH EBX
004D76EC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D76EF  56                        PUSH ESI
004D76F0  57                        PUSH EDI
004D76F1  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004D76F4  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D76F7  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004D76FA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D76FD  8B D7                     MOV EDX,EDI
004D76FF  C1 E2 04                  SHL EDX,0x4
004D7702  C1 E1 04                  SHL ECX,0x4
004D7705  03 D7                     ADD EDX,EDI
004D7707  03 C8                     ADD ECX,EAX
004D7709  C1 E2 02                  SHL EDX,0x2
004D770C  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
004D770F  33 C9                     XOR ECX,ECX
004D7711  89 88 12 56 7F 00         MOV dword ptr [EAX + 0x7f5612],ECX
LAB_004d7717:
004D7717  8B B0 12 56 7F 00         MOV ESI,dword ptr [EAX + 0x7f5612]
004D771D  8B 90 1A 56 7F 00         MOV EDX,dword ptr [EAX + 0x7f561a]
004D7723  3B F2                     CMP ESI,EDX
004D7725  0F 83 10 01 00 00         JNC 0x004d783b
004D772B  8B 90 16 56 7F 00         MOV EDX,dword ptr [EAX + 0x7f5616]
004D7731  0F AF D6                  IMUL EDX,ESI
004D7734  03 90 2A 56 7F 00         ADD EDX,dword ptr [EAX + 0x7f562a]
004D773A  8D 76 01                  LEA ESI,[ESI + 0x1]
004D773D  89 B0 12 56 7F 00         MOV dword ptr [EAX + 0x7f5612],ESI
004D7743  0F 84 F2 00 00 00         JZ 0x004d783b
004D7749  39 1A                     CMP dword ptr [EDX],EBX
004D774B  75 CA                     JNZ 0x004d7717
004D774D  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004D7750  8B 98 2E 56 7F 00         MOV EBX,dword ptr [EAX + 0x7f562e]
004D7756  2B DE                     SUB EBX,ESI
004D7758  89 98 2E 56 7F 00         MOV dword ptr [EAX + 0x7f562e],EBX
004D775E  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004D7761  8B B8 32 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f5632]
004D7767  2B FE                     SUB EDI,ESI
004D7769  89 B8 32 56 7F 00         MOV dword ptr [EAX + 0x7f5632],EDI
004D776F  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
004D7772  8B 98 36 56 7F 00         MOV EBX,dword ptr [EAX + 0x7f5636]
004D7778  2B DE                     SUB EBX,ESI
004D777A  89 98 36 56 7F 00         MOV dword ptr [EAX + 0x7f5636],EBX
004D7780  8B 72 10                  MOV ESI,dword ptr [EDX + 0x10]
004D7783  8B B8 3A 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f563a]
004D7789  2B FE                     SUB EDI,ESI
004D778B  89 B8 3A 56 7F 00         MOV dword ptr [EAX + 0x7f563a],EDI
004D7791  8B B0 2E 56 7F 00         MOV ESI,dword ptr [EAX + 0x7f562e]
004D7797  3B F1                     CMP ESI,ECX
004D7799  7D 06                     JGE 0x004d77a1
004D779B  89 88 2E 56 7F 00         MOV dword ptr [EAX + 0x7f562e],ECX
LAB_004d77a1:
004D77A1  39 88 32 56 7F 00         CMP dword ptr [EAX + 0x7f5632],ECX
004D77A7  7D 06                     JGE 0x004d77af
004D77A9  89 88 32 56 7F 00         MOV dword ptr [EAX + 0x7f5632],ECX
LAB_004d77af:
004D77AF  39 88 36 56 7F 00         CMP dword ptr [EAX + 0x7f5636],ECX
004D77B5  7D 06                     JGE 0x004d77bd
004D77B7  89 88 36 56 7F 00         MOV dword ptr [EAX + 0x7f5636],ECX
LAB_004d77bd:
004D77BD  39 88 3A 56 7F 00         CMP dword ptr [EAX + 0x7f563a],ECX
004D77C3  7D 06                     JGE 0x004d77cb
004D77C5  89 88 3A 56 7F 00         MOV dword ptr [EAX + 0x7f563a],ECX
LAB_004d77cb:
004D77CB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004D77CE  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004D77D1  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004D77D4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004D77D7  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
004D77DA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004D77DD  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004D77E0  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
004D77E3  8B 88 2E 56 7F 00         MOV ECX,dword ptr [EAX + 0x7f562e]
004D77E9  03 CE                     ADD ECX,ESI
004D77EB  89 88 2E 56 7F 00         MOV dword ptr [EAX + 0x7f562e],ECX
004D77F1  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
004D77F4  8B 98 32 56 7F 00         MOV EBX,dword ptr [EAX + 0x7f5632]
004D77FA  03 D9                     ADD EBX,ECX
004D77FC  89 98 32 56 7F 00         MOV dword ptr [EAX + 0x7f5632],EBX
004D7802  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
004D7805  8B B8 36 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f5636]
004D780B  03 F9                     ADD EDI,ECX
004D780D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D7810  89 B8 36 56 7F 00         MOV dword ptr [EAX + 0x7f5636],EDI
004D7816  8B 52 10                  MOV EDX,dword ptr [EDX + 0x10]
004D7819  8B B0 3A 56 7F 00         MOV ESI,dword ptr [EAX + 0x7f563a]
004D781F  03 F2                     ADD ESI,EDX
004D7821  89 B0 3A 56 7F 00         MOV dword ptr [EAX + 0x7f563a],ESI
004D7827  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D782A  50                        PUSH EAX
004D782B  E8 C6 B0 F2 FF            CALL 0x004028f6
004D7830  5F                        POP EDI
004D7831  5E                        POP ESI
004D7832  33 C0                     XOR EAX,EAX
004D7834  5B                        POP EBX
004D7835  8B E5                     MOV ESP,EBP
004D7837  5D                        POP EBP
004D7838  C2 1C 00                  RET 0x1c
LAB_004d783b:
004D783B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004D783E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004D7841  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004D7844  51                        PUSH ECX
004D7845  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004D7848  52                        PUSH EDX
004D7849  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D784C  50                        PUSH EAX
004D784D  51                        PUSH ECX
004D784E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D7851  53                        PUSH EBX
004D7852  57                        PUSH EDI
004D7853  52                        PUSH EDX
004D7854  E8 FD DC F2 FF            CALL 0x00405556
004D7859  5F                        POP EDI
004D785A  5E                        POP ESI
004D785B  33 C0                     XOR EAX,EAX
004D785D  5B                        POP EBX
004D785E  8B E5                     MOV ESP,EBP
004D7860  5D                        POP EBP
004D7861  C2 1C 00                  RET 0x1c
