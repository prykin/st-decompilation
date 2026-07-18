FUN_004d7570:
004D7570  55                        PUSH EBP
004D7571  8B EC                     MOV EBP,ESP
004D7573  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7577  53                        PUSH EBX
004D7578  8B D9                     MOV EBX,ECX
004D757A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D757D  56                        PUSH ESI
004D757E  57                        PUSH EDI
004D757F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004D7582  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7585  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7588  C1 E1 04                  SHL ECX,0x4
004D758B  03 C8                     ADD ECX,EAX
004D758D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D7590  8B D0                     MOV EDX,EAX
004D7592  C1 E2 04                  SHL EDX,0x4
004D7595  03 D0                     ADD EDX,EAX
004D7597  C1 E2 02                  SHL EDX,0x2
004D759A  33 F6                     XOR ESI,ESI
004D759C  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
004D759F  89 B0 12 56 7F 00         MOV dword ptr [EAX + 0x7f5612],ESI
LAB_004d75a5:
004D75A5  8B 90 12 56 7F 00         MOV EDX,dword ptr [EAX + 0x7f5612]
004D75AB  8B 88 1A 56 7F 00         MOV ECX,dword ptr [EAX + 0x7f561a]
004D75B1  3B D1                     CMP EDX,ECX
004D75B3  0F 83 B4 00 00 00         JNC 0x004d766d
004D75B9  8B 88 16 56 7F 00         MOV ECX,dword ptr [EAX + 0x7f5616]
004D75BF  0F AF CA                  IMUL ECX,EDX
004D75C2  03 88 2A 56 7F 00         ADD ECX,dword ptr [EAX + 0x7f562a]
004D75C8  8D 52 01                  LEA EDX,[EDX + 0x1]
004D75CB  89 90 12 56 7F 00         MOV dword ptr [EAX + 0x7f5612],EDX
004D75D1  0F 84 96 00 00 00         JZ 0x004d766d
004D75D7  39 39                     CMP dword ptr [ECX],EDI
004D75D9  75 CA                     JNZ 0x004d75a5
004D75DB  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
004D75DE  8B B8 2E 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f562e]
004D75E4  2B FA                     SUB EDI,EDX
004D75E6  89 B8 2E 56 7F 00         MOV dword ptr [EAX + 0x7f562e],EDI
004D75EC  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004D75EF  8B B8 32 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f5632]
004D75F5  2B FA                     SUB EDI,EDX
004D75F7  89 B8 32 56 7F 00         MOV dword ptr [EAX + 0x7f5632],EDI
004D75FD  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004D7600  8B B8 36 56 7F 00         MOV EDI,dword ptr [EAX + 0x7f5636]
004D7606  2B FA                     SUB EDI,EDX
004D7608  89 B8 36 56 7F 00         MOV dword ptr [EAX + 0x7f5636],EDI
004D760E  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
004D7611  8B 90 3A 56 7F 00         MOV EDX,dword ptr [EAX + 0x7f563a]
004D7617  2B D1                     SUB EDX,ECX
004D7619  89 90 3A 56 7F 00         MOV dword ptr [EAX + 0x7f563a],EDX
004D761F  8B 88 2E 56 7F 00         MOV ECX,dword ptr [EAX + 0x7f562e]
004D7625  3B CE                     CMP ECX,ESI
004D7627  7D 06                     JGE 0x004d762f
004D7629  89 B0 2E 56 7F 00         MOV dword ptr [EAX + 0x7f562e],ESI
LAB_004d762f:
004D762F  39 B0 32 56 7F 00         CMP dword ptr [EAX + 0x7f5632],ESI
004D7635  7D 06                     JGE 0x004d763d
004D7637  89 B0 32 56 7F 00         MOV dword ptr [EAX + 0x7f5632],ESI
LAB_004d763d:
004D763D  39 B0 36 56 7F 00         CMP dword ptr [EAX + 0x7f5636],ESI
004D7643  7D 06                     JGE 0x004d764b
004D7645  89 B0 36 56 7F 00         MOV dword ptr [EAX + 0x7f5636],ESI
LAB_004d764b:
004D764B  39 B0 3A 56 7F 00         CMP dword ptr [EAX + 0x7f563a],ESI
004D7651  7D 06                     JGE 0x004d7659
004D7653  89 B0 3A 56 7F 00         MOV dword ptr [EAX + 0x7f563a],ESI
LAB_004d7659:
004D7659  8B 90 12 56 7F 00         MOV EDX,dword ptr [EAX + 0x7f5612]
004D765F  8D 80 0E 56 7F 00         LEA EAX,[EAX + 0x7f560e]
004D7665  4A                        DEC EDX
004D7666  52                        PUSH EDX
004D7667  50                        PUSH EAX
004D7668  E8 03 96 1D 00            CALL 0x006b0c70
LAB_004d766d:
004D766D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D7670  51                        PUSH ECX
004D7671  8B CB                     MOV ECX,EBX
004D7673  E8 7E B2 F2 FF            CALL 0x004028f6
004D7678  5F                        POP EDI
004D7679  5E                        POP ESI
004D767A  33 C0                     XOR EAX,EAX
004D767C  5B                        POP EBX
004D767D  5D                        POP EBP
004D767E  C2 0C 00                  RET 0xc
