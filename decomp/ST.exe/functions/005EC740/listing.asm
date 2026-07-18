FUN_005ec740:
005EC740  55                        PUSH EBP
005EC741  8B EC                     MOV EBP,ESP
005EC743  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005EC746  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005EC749  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005EC74C  53                        PUSH EBX
005EC74D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005EC750  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
005EC756  56                        PUSH ESI
005EC757  57                        PUSH EDI
005EC758  C6 03 00                  MOV byte ptr [EBX],0x0
005EC75B  C6 00 1D                  MOV byte ptr [EAX],0x1d
005EC75E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005EC761  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
005EC767  83 F8 0E                  CMP EAX,0xe
005EC76A  74 05                     JZ 0x005ec771
005EC76C  83 F8 0C                  CMP EAX,0xc
005EC76F  75 44                     JNZ 0x005ec7b5
LAB_005ec771:
005EC771  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EC774  48                        DEC EAX
005EC775  74 14                     JZ 0x005ec78b
005EC777  48                        DEC EAX
005EC778  74 0A                     JZ 0x005ec784
005EC77A  48                        DEC EAX
005EC77B  75 38                     JNZ 0x005ec7b5
005EC77D  BF BC E4 7C 00            MOV EDI,0x7ce4bc
005EC782  EB 0C                     JMP 0x005ec790
LAB_005ec784:
005EC784  BF C4 E4 7C 00            MOV EDI,0x7ce4c4
005EC789  EB 05                     JMP 0x005ec790
LAB_005ec78b:
005EC78B  BF CC E4 7C 00            MOV EDI,0x7ce4cc
LAB_005ec790:
005EC790  83 C9 FF                  OR ECX,0xffffffff
005EC793  33 C0                     XOR EAX,EAX
005EC795  F2 AE                     SCASB.REPNE ES:EDI
005EC797  F7 D1                     NOT ECX
005EC799  2B F9                     SUB EDI,ECX
005EC79B  8B C1                     MOV EAX,ECX
005EC79D  8B F7                     MOV ESI,EDI
005EC79F  8B FB                     MOV EDI,EBX
005EC7A1  C1 E9 02                  SHR ECX,0x2
005EC7A4  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC7A6  8B C8                     MOV ECX,EAX
005EC7A8  83 E1 03                  AND ECX,0x3
005EC7AB  F3 A4                     MOVSB.REP ES:EDI,ESI
005EC7AD  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005EC7B3  89 0A                     MOV dword ptr [EDX],ECX
LAB_005ec7b5:
005EC7B5  5F                        POP EDI
005EC7B6  5E                        POP ESI
005EC7B7  5B                        POP EBX
005EC7B8  5D                        POP EBP
005EC7B9  C3                        RET
