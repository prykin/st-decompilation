FUN_004d8760:
004D8760  55                        PUSH EBP
004D8761  8B EC                     MOV EBP,ESP
004D8763  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D8766  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004D876D  8B 14 95 94 F5 7B 00      MOV EDX,dword ptr [EDX*0x4 + 0x7bf594]
004D8774  0F AF D0                  IMUL EDX,EAX
004D8777  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004D877E  0F AF D0                  IMUL EDX,EAX
004D8781  B8 67 66 66 66            MOV EAX,0x66666667
004D8786  F7 EA                     IMUL EDX
004D8788  C1 FA 02                  SAR EDX,0x2
004D878B  8B C2                     MOV EAX,EDX
004D878D  C1 E8 1F                  SHR EAX,0x1f
004D8790  03 D0                     ADD EDX,EAX
004D8792  52                        PUSH EDX
004D8793  E8 CC AB F2 FF            CALL 0x00403364
004D8798  33 C0                     XOR EAX,EAX
004D879A  5D                        POP EBP
004D879B  C2 04 00                  RET 0x4
