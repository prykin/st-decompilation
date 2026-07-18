FUN_005d1380:
005D1380  C6 05 4D 87 80 00 FF      MOV byte ptr [0x0080874d],0xff
005D1387  8B 91 84 1F 00 00         MOV EDX,dword ptr [ECX + 0x1f84]
005D138D  56                        PUSH ESI
005D138E  57                        PUSH EDI
005D138F  85 D2                     TEST EDX,EDX
005D1391  74 45                     JZ 0x005d13d8
005D1393  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005D1396  33 C9                     XOR ECX,ECX
005D1398  85 F6                     TEST ESI,ESI
005D139A  7E 3C                     JLE 0x005d13d8
005D139C  8B 3D 7F 87 80 00         MOV EDI,dword ptr [0x0080877f]
005D13A2  3B CE                     CMP ECX,ESI
LAB_005d13a4:
005D13A4  73 18                     JNC 0x005d13be
005D13A6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D13A9  0F AF C1                  IMUL EAX,ECX
005D13AC  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D13AF  85 C0                     TEST EAX,EAX
005D13B1  74 0B                     JZ 0x005d13be
005D13B3  80 78 04 02               CMP byte ptr [EAX + 0x4],0x2
005D13B7  75 05                     JNZ 0x005d13be
005D13B9  39 78 06                  CMP dword ptr [EAX + 0x6],EDI
005D13BC  74 08                     JZ 0x005d13c6
LAB_005d13be:
005D13BE  41                        INC ECX
005D13BF  3B CE                     CMP ECX,ESI
005D13C1  7C E1                     JL 0x005d13a4
005D13C3  5F                        POP EDI
005D13C4  5E                        POP ESI
005D13C5  C3                        RET
LAB_005d13c6:
005D13C6  8A 48 02                  MOV CL,byte ptr [EAX + 0x2]
005D13C9  88 0D 4D 87 80 00         MOV byte ptr [0x0080874d],CL
005D13CF  8A 50 03                  MOV DL,byte ptr [EAX + 0x3]
005D13D2  88 15 4E 87 80 00         MOV byte ptr [0x0080874e],DL
LAB_005d13d8:
005D13D8  5F                        POP EDI
005D13D9  5E                        POP ESI
005D13DA  C3                        RET
