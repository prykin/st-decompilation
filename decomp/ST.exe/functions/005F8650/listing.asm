FUN_005f8650:
005F8650  55                        PUSH EBP
005F8651  8B EC                     MOV EBP,ESP
005F8653  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F8656  53                        PUSH EBX
005F8657  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005F865A  56                        PUSH ESI
005F865B  8B F1                     MOV ESI,ECX
005F865D  57                        PUSH EDI
005F865E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F8661  89 86 C9 02 00 00         MOV dword ptr [ESI + 0x2c9],EAX
005F8667  89 8E C1 02 00 00         MOV dword ptr [ESI + 0x2c1],ECX
005F866D  85 C9                     TEST ECX,ECX
005F866F  89 9E C5 02 00 00         MOV dword ptr [ESI + 0x2c5],EBX
005F8675  B8 79 19 8C 02            MOV EAX,0x28c1979
005F867A  7C 10                     JL 0x005f868c
005F867C  F7 E9                     IMUL ECX
005F867E  D1 FA                     SAR EDX,0x1
005F8680  8B CA                     MOV ECX,EDX
005F8682  C1 E9 1F                  SHR ECX,0x1f
005F8685  03 D1                     ADD EDX,ECX
005F8687  0F BF FA                  MOVSX EDI,DX
005F868A  EB 0F                     JMP 0x005f869b
LAB_005f868c:
005F868C  F7 E9                     IMUL ECX
005F868E  D1 FA                     SAR EDX,0x1
005F8690  8B C2                     MOV EAX,EDX
005F8692  C1 E8 1F                  SHR EAX,0x1f
005F8695  03 D0                     ADD EDX,EAX
005F8697  0F BF FA                  MOVSX EDI,DX
005F869A  4F                        DEC EDI
LAB_005f869b:
005F869B  85 DB                     TEST EBX,EBX
005F869D  66 89 7E 47               MOV word ptr [ESI + 0x47],DI
005F86A1  B8 79 19 8C 02            MOV EAX,0x28c1979
005F86A6  7C 10                     JL 0x005f86b8
005F86A8  F7 EB                     IMUL EBX
005F86AA  D1 FA                     SAR EDX,0x1
005F86AC  8B CA                     MOV ECX,EDX
005F86AE  C1 E9 1F                  SHR ECX,0x1f
005F86B1  03 D1                     ADD EDX,ECX
005F86B3  0F BF CA                  MOVSX ECX,DX
005F86B6  EB 0F                     JMP 0x005f86c7
LAB_005f86b8:
005F86B8  F7 EB                     IMUL EBX
005F86BA  D1 FA                     SAR EDX,0x1
005F86BC  8B C2                     MOV EAX,EDX
005F86BE  C1 E8 1F                  SHR EAX,0x1f
005F86C1  03 D0                     ADD EDX,EAX
005F86C3  0F BF CA                  MOVSX ECX,DX
005F86C6  49                        DEC ECX
LAB_005f86c7:
005F86C7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F86CA  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
005F86CE  85 D2                     TEST EDX,EDX
005F86D0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F86D5  7C 11                     JL 0x005f86e8
005F86D7  F7 EA                     IMUL EDX
005F86D9  C1 FA 06                  SAR EDX,0x6
005F86DC  8B C2                     MOV EAX,EDX
005F86DE  C1 E8 1F                  SHR EAX,0x1f
005F86E1  03 D0                     ADD EDX,EAX
005F86E3  0F BF C2                  MOVSX EAX,DX
005F86E6  EB 10                     JMP 0x005f86f8
LAB_005f86e8:
005F86E8  F7 EA                     IMUL EDX
005F86EA  C1 FA 06                  SAR EDX,0x6
005F86ED  8B C2                     MOV EAX,EDX
005F86EF  C1 E8 1F                  SHR EAX,0x1f
005F86F2  03 D0                     ADD EDX,EAX
005F86F4  0F BF C2                  MOVSX EAX,DX
005F86F7  48                        DEC EAX
LAB_005f86f8:
005F86F8  66 8B 96 C1 02 00 00      MOV DX,word ptr [ESI + 0x2c1]
005F86FF  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
005F8703  66 89 56 41               MOV word ptr [ESI + 0x41],DX
005F8707  66 8B 96 C5 02 00 00      MOV DX,word ptr [ESI + 0x2c5]
005F870E  66 89 56 43               MOV word ptr [ESI + 0x43],DX
005F8712  66 8B 96 C9 02 00 00      MOV DX,word ptr [ESI + 0x2c9]
005F8719  66 89 56 45               MOV word ptr [ESI + 0x45],DX
005F871D  66 8B 96 85 02 00 00      MOV DX,word ptr [ESI + 0x285]
005F8724  66 69 D2 C8 00            IMUL DX,DX,0xc8
005F8729  66 89 7E 5B               MOV word ptr [ESI + 0x5b],DI
005F872D  66 89 4E 5D               MOV word ptr [ESI + 0x5d],CX
005F8731  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
005F8735  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F873A  83 C2 64                  ADD EDX,0x64
005F873D  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F8743  C7 86 D9 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d9],0x0
005F874D  0F BF C2                  MOVSX EAX,DX
005F8750  89 8E D5 02 00 00         MOV dword ptr [ESI + 0x2d5],ECX
005F8756  66 8B 8E 81 02 00 00      MOV CX,word ptr [ESI + 0x281]
005F875D  50                        PUSH EAX
005F875E  66 8B 86 7D 02 00 00      MOV AX,word ptr [ESI + 0x27d]
005F8765  66 69 C9 C9 00            IMUL CX,CX,0xc9
005F876A  66 69 C0 C9 00            IMUL AX,AX,0xc9
005F876F  83 C1 64                  ADD ECX,0x64
005F8772  83 C0 64                  ADD EAX,0x64
005F8775  0F BF D1                  MOVSX EDX,CX
005F8778  0F BF C8                  MOVSX ECX,AX
005F877B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F877E  52                        PUSH EDX
005F877F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F8782  51                        PUSH ECX
005F8783  52                        PUSH EDX
005F8784  53                        PUSH EBX
005F8785  50                        PUSH EAX
005F8786  8B CE                     MOV ECX,ESI
005F8788  E8 50 B0 E0 FF            CALL 0x004037dd
005F878D  66 8B C8                  MOV CX,AX
005F8790  89 86 BD 02 00 00         MOV dword ptr [ESI + 0x2bd],EAX
005F8796  66 89 4E 6C               MOV word ptr [ESI + 0x6c],CX
005F879A  5F                        POP EDI
005F879B  5E                        POP ESI
005F879C  B8 01 00 00 00            MOV EAX,0x1
005F87A1  5B                        POP EBX
005F87A2  5D                        POP EBP
005F87A3  C2 0C 00                  RET 0xc
