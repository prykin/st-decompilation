FUN_004cc840:
004CC840  56                        PUSH ESI
004CC841  8B F1                     MOV ESI,ECX
004CC843  8B 06                     MOV EAX,dword ptr [ESI]
004CC845  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
004CC848  8B C8                     MOV ECX,EAX
004CC84A  B8 67 66 66 66            MOV EAX,0x66666667
004CC84F  F7 E9                     IMUL ECX
004CC851  C1 FA 03                  SAR EDX,0x3
004CC854  8B CA                     MOV ECX,EDX
004CC856  C1 E9 1F                  SHR ECX,0x1f
004CC859  03 D1                     ADD EDX,ECX
004CC85B  78 0E                     JS 0x004cc86b
004CC85D  83 FA 04                  CMP EDX,0x4
004CC860  7D 09                     JGE 0x004cc86b
004CC862  6A 01                     PUSH 0x1
004CC864  8B CE                     MOV ECX,ESI
004CC866  E8 86 60 F3 FF            CALL 0x004028f1
LAB_004cc86b:
004CC86B  33 C0                     XOR EAX,EAX
004CC86D  5E                        POP ESI
004CC86E  C3                        RET
