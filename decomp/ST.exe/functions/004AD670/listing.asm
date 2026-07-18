FUN_004ad670:
004AD670  55                        PUSH EBP
004AD671  8B EC                     MOV EBP,ESP
004AD673  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004AD677  83 F8 FF                  CMP EAX,-0x1
004AD67A  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004AD67D  75 24                     JNZ 0x004ad6a3
004AD67F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
004AD682  33 D2                     XOR EDX,EDX
004AD684  85 C0                     TEST EAX,EAX
004AD686  7E 1B                     JLE 0x004ad6a3
004AD688  56                        PUSH ESI
004AD689  33 F6                     XOR ESI,ESI
LAB_004ad68b:
004AD68B  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004AD68E  66 81 64 30 0E FF FE      AND word ptr [EAX + ESI*0x1 + 0xe],0xfeff
004AD695  42                        INC EDX
004AD696  8D 44 30 0E               LEA EAX,[EAX + ESI*0x1 + 0xe]
004AD69A  83 C6 24                  ADD ESI,0x24
004AD69D  3B 51 14                  CMP EDX,dword ptr [ECX + 0x14]
004AD6A0  7C E9                     JL 0x004ad68b
004AD6A2  5E                        POP ESI
LAB_004ad6a3:
004AD6A3  5D                        POP EBP
004AD6A4  C2 04 00                  RET 0x4
