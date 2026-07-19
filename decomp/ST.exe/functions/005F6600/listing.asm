STColl3C::STColl3C:
005F6600  56                        PUSH ESI
005F6601  57                        PUSH EDI
005F6602  8B F1                     MOV ESI,ECX
005F6604  E8 2A B3 E0 FF            CALL 0x00401933
005F6609  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005F660F  8B CF                     MOV ECX,EDI
005F6611  E8 00 AD E0 FF            CALL 0x00401316
005F6616  85 F6                     TEST ESI,ESI
005F6618  C7 06 AC C5 79 00         MOV dword ptr [ESI],0x79c5ac
005F661E  C7 07 A8 C5 79 00         MOV dword ptr [EDI],0x79c5a8
005F6624  74 08                     JZ 0x005f662e
005F6626  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
005F662C  EB 02                     JMP 0x005f6630
LAB_005f662e:
005F662E  33 FF                     XOR EDI,EDI
LAB_005f6630:
005F6630  B9 30 00 00 00            MOV ECX,0x30
005F6635  33 C0                     XOR EAX,EAX
005F6637  F3 AB                     STOSD.REP ES:EDI
005F6639  66 AB                     STOSW ES:EDI
005F663B  C7 86 B7 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2b7],0xffffffff
005F6645  8B C6                     MOV EAX,ESI
005F6647  5F                        POP EDI
005F6648  5E                        POP ESI
005F6649  C3                        RET
