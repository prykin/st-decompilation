FUN_004ea620:
004EA620  56                        PUSH ESI
004EA621  8B F1                     MOV ESI,ECX
004EA623  57                        PUSH EDI
004EA624  BF 01 00 00 00            MOV EDI,0x1
004EA629  83 BE 45 02 00 00 04      CMP dword ptr [ESI + 0x245],0x4
004EA630  75 5B                     JNZ 0x004ea68d
004EA632  8B 86 6C 04 00 00         MOV EAX,dword ptr [ESI + 0x46c]
004EA638  85 C0                     TEST EAX,EAX
004EA63A  74 09                     JZ 0x004ea645
004EA63C  3B C7                     CMP EAX,EDI
004EA63E  74 05                     JZ 0x004ea645
004EA640  83 F8 02                  CMP EAX,0x2
004EA643  75 4D                     JNZ 0x004ea692
LAB_004ea645:
004EA645  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
004EA64B  C7 86 6C 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x46c],0x0
004EA655  85 C0                     TEST EAX,EAX
004EA657  C7 86 70 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x470],0x0
004EA661  74 2A                     JZ 0x004ea68d
004EA663  8B 86 88 04 00 00         MOV EAX,dword ptr [ESI + 0x488]
004EA669  8B 8E 84 04 00 00         MOV ECX,dword ptr [ESI + 0x484]
004EA66F  8B 96 80 04 00 00         MOV EDX,dword ptr [ESI + 0x480]
004EA675  50                        PUSH EAX
004EA676  51                        PUSH ECX
004EA677  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004EA67D  52                        PUSH EDX
004EA67E  E8 51 77 F1 FF            CALL 0x00401dd4
004EA683  C7 86 94 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x494],0x0
LAB_004ea68d:
004EA68D  8B C7                     MOV EAX,EDI
004EA68F  5F                        POP EDI
004EA690  5E                        POP ESI
004EA691  C3                        RET
LAB_004ea692:
004EA692  5F                        POP EDI
004EA693  33 C0                     XOR EAX,EAX
004EA695  5E                        POP ESI
004EA696  C3                        RET
