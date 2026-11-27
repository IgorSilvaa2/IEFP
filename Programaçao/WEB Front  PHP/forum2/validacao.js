function valida() {
    if(document.f1.nick.value=="") {
        window.alert("ERRO! Deve escrever um nick!");
        document.f1.nick.focus();
        return false;
    }
    else if(document.f1.nome.value=="") {
        window.alert("ERRO! Deve escrever um nome!");
        document.f1.nome.focus();
        return false;
    }
    else if(document.f1.email.value=="") {
        window.alert("ERRO! Deve escrever um e-mail válido!");
        document.f1.email.focus();
        return false;
    }
    else if(document.f1.data_nasc.value=="") {
        window.alert("ERRO! Deve escrever uma data válido!");
        document.f1.data_nasc.focus();
        return false;
    }
    else if(document.f1.pass.value=="") {
        window.alert("ERRO! Deve escrever uma password!");
        document.f1.pass.focus();
        return false;
    }
    else
        return true;

}